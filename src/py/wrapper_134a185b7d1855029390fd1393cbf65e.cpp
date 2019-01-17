#include "_clanglite.h"

class ::clang::QualType  (::clang::PackExpansionType::*method_pointer_335f27f516245d3097eeef59a1e23c7b)()const= &::clang::PackExpansionType::getPattern;
bool  (::clang::PackExpansionType::*method_pointer_28f749ff5d9f530cb0c6d2693caed6f6)()const= &::clang::PackExpansionType::isSugared;
class ::clang::QualType  (::clang::PackExpansionType::*method_pointer_5629ef6e9abe572ba60f32a22b9f4ba0)()const= &::clang::PackExpansionType::desugar;
bool  (*method_pointer_713aa00810ab5a67843d281bbfaa4da5)(class ::clang::Type const *)= ::clang::PackExpansionType::classof;


void wrapper_134a185b7d1855029390fd1393cbf65e(pybind11::module& module)
{

    pybind11::class_<class ::clang::PackExpansionType, autowig::HolderType< class ::clang::PackExpansionType >::Type, class ::clang::Type > class_134a185b7d1855029390fd1393cbf65e(module, "PackExpansionType", "Represents a pack expansion of types.\n\nPack expansions are part of C++11 variadic templates. A pack expansion\ncontains a pattern, which itself contains one or more “unexpanded”\nparameter packs. When instantiated, a pack expansion produces a series\nof types, each instantiated from the pattern of the expansion, where the\nIth instantiation of the pattern uses the Ith arguments bound to each of\nthe unexpanded parameter packs. The pack expansion is considered to\n“expand” these unexpanded parameter packs.\n\n");
    class_134a185b7d1855029390fd1393cbf65e.def("get_pattern", method_pointer_335f27f516245d3097eeef59a1e23c7b, "Retrieve the pattern of this pack expansion, which is the type that will\nbe repeatedly instantiated when instantiating the pack expansion itself.\n\n:Return Type:\n    :cpp:class:`::clang::QualType`\n\n");
    class_134a185b7d1855029390fd1393cbf65e.def("is_sugared", method_pointer_28f749ff5d9f530cb0c6d2693caed6f6, "");
    class_134a185b7d1855029390fd1393cbf65e.def("desugar", method_pointer_5629ef6e9abe572ba60f32a22b9f4ba0, "");
    class_134a185b7d1855029390fd1393cbf65e.def_static("classof", method_pointer_713aa00810ab5a67843d281bbfaa4da5, "");

}