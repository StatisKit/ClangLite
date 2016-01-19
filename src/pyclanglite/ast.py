import asciitree
from path import path

from .pyclanglite import *

__all__ = ['AbstractSyntaxTree']

class AbstractSyntaxTree(object):

    def __init__(self, tu):#filepaths, flags):
        self._nodes = dict()
        self._children = dict()
        #content = ""
        #for filepath in filepaths:
        #    content += '#include "' + str(path(filepath).abspath()) + '"\n'
        #tu = clang.tooling.build_ast_from_code_with_args(content, flags)
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


