#include "_clanglite.h"

class ::clang::QualType  (::clang::ValueDecl::*method_pointer_a773e62dc9625132888de78d331a6fe3)()const= &::clang::ValueDecl::getType;
void  (::clang::ValueDecl::*method_pointer_08a928e5caf659ec85a014c1ed7b7628)(class ::clang::QualType )= &::clang::ValueDecl::setType;
bool  (::clang::ValueDecl::*method_pointer_e81322cddd4f5b8da24350123ebceeb9)()const= &::clang::ValueDecl::isWeak;
bool  (*method_pointer_7a510c3bc8da52fca159716eb9803e33)(class ::clang::Decl const *)= ::clang::ValueDecl::classof;
bool  (*method_pointer_90a08fa61e3357a3afda17d23421937f)(enum ::clang::Decl::Kind )= ::clang::ValueDecl::classofKind;


void wrapper_0a741a99c7fd512dbe7c31ae23782c5f(pybind11::module& module)
{

    pybind11::class_<class ::clang::ValueDecl, autowig::HolderType< class ::clang::ValueDecl >::Type, class ::clang::NamedDecl > class_0a741a99c7fd512dbe7c31ae23782c5f(module, "ValueDecl", "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("get_type", method_pointer_a773e62dc9625132888de78d331a6fe3, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("set_type", method_pointer_08a928e5caf659ec85a014c1ed7b7628, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.def("is_weak", method_pointer_e81322cddd4f5b8da24350123ebceeb9, "Determine whether this symbol is weakly-imported, or declared with the\nweak or weak-ref attr.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_0a741a99c7fd512dbe7c31ae23782c5f.def_static("classof", method_pointer_7a510c3bc8da52fca159716eb9803e33, "");
    class_0a741a99c7fd512dbe7c31ae23782c5f.def_static("classof_kind", method_pointer_90a08fa61e3357a3afda17d23421937f, "");

}