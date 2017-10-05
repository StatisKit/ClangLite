##################################################################################
#                                                                                #
# PyClangLite: Python bindings for Clang                                         #
#                                                                                #
# Homepage: http://pyclanglite.readthedocs.io/                                   #
#                                                                                #
# Copyright (c) 2016 Pierre Fernique                                             #
#                                                                                #
# This software is distributed under the CeCILL-C license. You should have       #
# received a copy of the legalcode along with this work. If not, see             #
# <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 #
#                                                                                #
# File authors: Pierre Fernique <pfernique@gmail.com> (4)                        #
#                                                                                #
##################################################################################

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
            return True
            
clang.ClassTemplateDecl.is_this_declaration_a_definition = wrapper(clang.ClassTemplateDecl.is_this_declaration_a_definition)
del wrapper

del wraps