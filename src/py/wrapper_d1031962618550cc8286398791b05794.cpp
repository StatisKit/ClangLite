#include "_clanglite.h"

class ::clang::QualType  (::clang::DecayedType::*method_pointer_cec1c366d3a459bea2bbcb2b6528d5cd)()const= &::clang::DecayedType::getDecayedType;
class ::clang::QualType  (::clang::DecayedType::*method_pointer_298e7b2b057e5755bb7df878dccb05c3)()const= &::clang::DecayedType::getPointeeType;
bool  (*method_pointer_e841445e72b15e719a53fd5a9c37aaf3)(class ::clang::Type const *)= ::clang::DecayedType::classof;

namespace autowig {
}

void wrapper_d1031962618550cc8286398791b05794(pybind11::module& module)
{

    pybind11::class_<class ::clang::DecayedType, autowig::HolderType< class ::clang::DecayedType >::Type, class ::clang::AdjustedType > class_d1031962618550cc8286398791b05794(module, "DecayedType", "");
    class_d1031962618550cc8286398791b05794.def("get_decayed_type", method_pointer_cec1c366d3a459bea2bbcb2b6528d5cd, "");
    class_d1031962618550cc8286398791b05794.def("get_pointee_type", method_pointer_298e7b2b057e5755bb7df878dccb05c3, "");
    class_d1031962618550cc8286398791b05794.def_static("classof", method_pointer_e841445e72b15e719a53fd5a9c37aaf3, "");

}