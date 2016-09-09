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
# File authors: Pierre Fernique <pfernique@gmail.com> (3)                        #
#                                                                                #
##################################################################################

try:
	import asciitree
except:
	pass

import subprocess
from path import path

from .clanglite import *

__all__ = ['AbstractSyntaxTree']

class AbstractSyntaxTree(object):

    def __init__(self, filepaths, flags):
        self._nodes = dict()
        self._children = dict()
        content = ""
        for filepath in filepaths:
            content += '#include "' + str(path(filepath).abspath()) + '"\n'

        if 'c' in flags:
            language = 'c'
            s = subprocess.Popen(['clang', '-x', 'c', '-v', '-E', '/dev/null'],
                    stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        elif 'c++' in flags:
            language = 'c++'
            s = subprocess.Popen(['clang++', '-x', 'c++', '-v', '-E', '/dev/null'],
                    stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        else:
            language = None
        if not language is None:
            if s.returncode:
                warnings.warn('System includes not computed: clang command failed', Warning)
            else:
                out, err = s.communicate()
                sysincludes = err.splitlines()
                if '#include <...> search starts here:' not in sysincludes or 'End of search list.' not in sysincludes:
                    warnings.warn('System includes not computed: parsing clang command output failed', Warning)
                else:
                    sysincludes = sysincludes[sysincludes.index('#include <...> search starts here:')+1:sysincludes.index('End of search list.')]
                    flags.extend(['-I'+str(path(sysinclude.strip()).abspath()) for sysinclude in sysincludes])
        tu = clang.tooling.build_ast_from_code_with_args(content, flags)
        self._nodes[0] = tu
        self._children[0] = []
        self._node = 1
        for child in tu.get_children():
            self._children[0].append(self._read_decl(child))
        del self._node

    def _read_decl(self, decl):
        self._node += 1
        node = self._node
        self._nodes[node] = decl
        self._children[node] = []
        if hasattr(decl, 'get_children'):
            for child in decl.get_children():
                self._children[node].append(self._read_decl(child))
        return node

    def __getitem__(self, key):
        return self._nodes[key]

    def __str__(self):
        def node_children(node):
            return self._children[node]

        def print_node(node):
            return '[' + str(node) + '] ' + self._nodes[node].__str__()

        return asciitree.draw_tree(0, node_children, print_node)


