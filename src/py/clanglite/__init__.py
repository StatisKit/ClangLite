## Copyright [2017-2018] UMR MISTEA INRA, UMR LEPSE INRA,                ##
##                       UMR AGAP CIRAD, EPI Virtual Plants Inria        ##
## Copyright [2015-2016] UMR AGAP CIRAD, EPI Virtual Plants Inria        ##
##                                                                       ##
## This file is part of the AutoWIG project. More information can be     ##
## found at                                                              ##
##                                                                       ##
##     http://autowig.rtfd.io                                            ##
##                                                                       ##
## The Apache Software Foundation (ASF) licenses this file to you under  ##
## the Apache License, Version 2.0 (the "License"); you may not use this ##
## file except in compliance with the License. You should have received  ##
## a copy of the Apache License, Version 2.0 along with this file; see   ##
## the file LICENSE. If not, you may obtain a copy of the License at     ##
##                                                                       ##
##     http://www.apache.org/licenses/LICENSE-2.0                        ##
##                                                                       ##
## Unless required by applicable law or agreed to in writing, software   ##
## distributed under the License is distributed on an "AS IS" BASIS,     ##
## WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or       ##
## mplied. See the License for the specific language governing           ##
## permissions and limitations under the License.                        ##

from functools import wraps

from . import _clanglite
from .__clanglite import *

if not hasattr(clang, 'tooling'):
    clang.tooling = clanglite
    del clanglite

if not hasattr(clang.LinkageSpecDecl, 'language_ids'):
    clang.LinkageSpecDecl.language_ids = clang._linkage_spec_decl.language_i_ds
    if hasattr(clang.LinkageSpecDecl, 'language_i_ds'):
        del clang.LinkageSpecDecl.language_i_ds

if not hasattr(clang.TagDecl, 'is_copyable'):

    def tag_is_copyable(self):
        return True

    clang.TagDecl.is_copyable = tag_is_copyable
    del tag_is_copyable

if not hasattr(clang.CXXRecordDecl, 'is_copyable'):
    
    def record_is_copyable(self):
        res = True
        dtr = None
        ctr = None
        mtr = None
        for child in self.get_children():
            if isinstance(child, clang.CXXConstructorDecl):
                if child.is_copy_constructor():
                    ctr = child
                    break
                elif child.is_move_constructor():
                    mtr = child
            elif isinstance(child, clang.CXXDestructorDecl):
                dtr = child
        if ctr is None:
            if not dtr is None:
                if not dtr.get_access_unsafe() == clang.access_specifier.AS__PUBLIC or dtr.is_deleted():
                    return False
            if not mtr is None:
                return False
            bases = self.get_bases() + self.get_virtual_bases()
            res = len(bases) == 0 or any([cls.get_type().get_type_ptr_or_null().get_as_tag_decl().is_copyable() for cls in bases])
        elif not ctr.get_access_unsafe() == clang.access_specifier.AS__PUBLIC or ctr.is_deleted():
            res = False
        return res

    clang.CXXRecordDecl.is_copyable = record_is_copyable
    del record_is_copyable

def wrapper(f):
    @wraps(f)
    def is_this_declaration_a_definition(self):
        try:
            return f(self)
        except:
            return len(self.get_children()) > 0
    return is_this_declaration_a_definition 
            
clang.ClassTemplateDecl.is_this_declaration_a_definition = wrapper(clang.ClassTemplateDecl.is_this_declaration_a_definition)
del wrapper

def wrapper(f):
    @wraps(f)
    def get_children(self, sema):
        try:
            return f(self, sema)
        except:
            return []
    return get_children
        
clang.ClassTemplateDecl.get_children = wrapper(clang.ClassTemplateDecl.get_children)
del wrapper

del wraps
