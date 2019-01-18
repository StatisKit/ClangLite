#include "_clanglite.h"

class ::clang::QualType  (::clang::AdjustedType::*method_pointer_122b6faa12a4510f9f2bbdeda07173cd)()const= &::clang::AdjustedType::getOriginalType;
class ::clang::QualType  (::clang::AdjustedType::*method_pointer_2c032d869ab65e32b515716b6480d2b5)()const= &::clang::AdjustedType::getAdjustedType;
bool  (::clang::AdjustedType::*method_pointer_e25604e23c515e089a85ab73f19d32bd)()const= &::clang::AdjustedType::isSugared;
class ::clang::QualType  (::clang::AdjustedType::*method_pointer_63eaafeffd5b5e3db68b7e54399e934b)()const= &::clang::AdjustedType::desugar;
bool  (*method_pointer_ddb57ae95b035b9db301626e16d7f3a1)(class ::clang::Type const *)= ::clang::AdjustedType::classof;

namespace autowig {
}

void wrapper_cbd3f716be3f50e88e8e811688f1e3aa(pybind11::module& module)
{

    pybind11::class_<class ::clang::AdjustedType, autowig::HolderType< class ::clang::AdjustedType >::Type, class ::clang::Type > class_cbd3f716be3f50e88e8e811688f1e3aa(module, "AdjustedType", "");
    class_cbd3f716be3f50e88e8e811688f1e3aa.def("get_original_type", method_pointer_122b6faa12a4510f9f2bbdeda07173cd, "");
    class_cbd3f716be3f50e88e8e811688f1e3aa.def("get_adjusted_type", method_pointer_2c032d869ab65e32b515716b6480d2b5, "");
    class_cbd3f716be3f50e88e8e811688f1e3aa.def("is_sugared", method_pointer_e25604e23c515e089a85ab73f19d32bd, "");
    class_cbd3f716be3f50e88e8e811688f1e3aa.def("desugar", method_pointer_63eaafeffd5b5e3db68b7e54399e934b, "");
    class_cbd3f716be3f50e88e8e811688f1e3aa.def_static("classof", method_pointer_ddb57ae95b035b9db301626e16d7f3a1, "");

}