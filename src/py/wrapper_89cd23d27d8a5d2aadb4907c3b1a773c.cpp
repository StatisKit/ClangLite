#include "_clanglite.h"

int  (*method_pointer_09ef35a5dec05bc3be550976e06b8bd5)(char )= ::clang::ExtVectorType::getPointAccessorIdx;
int  (*method_pointer_9a96bc5419c358ae9d903175fc3573df)(char )= ::clang::ExtVectorType::getNumericAccessorIdx;
int  (*method_pointer_0721c9c6c5865364a3bcaf1454143eb6)(char , bool )= ::clang::ExtVectorType::getAccessorIdx;
bool  (::clang::ExtVectorType::*method_pointer_d2ae08f82bd3501fbf797f6a3b56d688)(char , bool )const= &::clang::ExtVectorType::isAccessorWithinNumElements;
bool  (::clang::ExtVectorType::*method_pointer_e2433fd5a6bc5788996d9af1333149af)()const= &::clang::ExtVectorType::isSugared;
class ::clang::QualType  (::clang::ExtVectorType::*method_pointer_ca377ce4fa3256418372d8b664c49690)()const= &::clang::ExtVectorType::desugar;
bool  (*method_pointer_239d2da50bd45b9485708079610dd1b8)(class ::clang::Type const *)= ::clang::ExtVectorType::classof;

namespace autowig {
}

void wrapper_89cd23d27d8a5d2aadb4907c3b1a773c(pybind11::module& module)
{

    pybind11::class_<class ::clang::ExtVectorType, autowig::HolderType< class ::clang::ExtVectorType >::Type, class ::clang::VectorType > class_89cd23d27d8a5d2aadb4907c3b1a773c(module, "ExtVectorType", "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def_static("get_point_accessor_idx", method_pointer_09ef35a5dec05bc3be550976e06b8bd5, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def_static("get_numeric_accessor_idx", method_pointer_9a96bc5419c358ae9d903175fc3573df, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def_static("get_accessor_idx", method_pointer_0721c9c6c5865364a3bcaf1454143eb6, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("is_accessor_within_num_elements", method_pointer_d2ae08f82bd3501fbf797f6a3b56d688, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("is_sugared", method_pointer_e2433fd5a6bc5788996d9af1333149af, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("desugar", method_pointer_ca377ce4fa3256418372d8b664c49690, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def_static("classof", method_pointer_239d2da50bd45b9485708079610dd1b8, "");

}