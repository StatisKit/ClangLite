#include "_clanglite.h"

class ::clang::QualType  (::clang::ComplexType::*method_pointer_975e9cdae4c05a9fbbe5bcaa0631f45b)()const= &::clang::ComplexType::getElementType;
bool  (::clang::ComplexType::*method_pointer_25682ac6a00a5edb86906f87cb73ba57)()const= &::clang::ComplexType::isSugared;
class ::clang::QualType  (::clang::ComplexType::*method_pointer_373d6ea687ad5e44b1c157a082437e18)()const= &::clang::ComplexType::desugar;
bool  (*method_pointer_eaacdd40770a5ebc8a5fd6f84f46df13)(class ::clang::Type const *)= ::clang::ComplexType::classof;

namespace autowig {
}

void wrapper_1ab4808ba4c9580baf99795b73ebb3b3(pybind11::module& module)
{

    pybind11::class_<class ::clang::ComplexType, autowig::HolderType< class ::clang::ComplexType >::Type, class ::clang::Type > class_1ab4808ba4c9580baf99795b73ebb3b3(module, "ComplexType", "");
    class_1ab4808ba4c9580baf99795b73ebb3b3.def("get_element_type", method_pointer_975e9cdae4c05a9fbbe5bcaa0631f45b, "");
    class_1ab4808ba4c9580baf99795b73ebb3b3.def("is_sugared", method_pointer_25682ac6a00a5edb86906f87cb73ba57, "");
    class_1ab4808ba4c9580baf99795b73ebb3b3.def("desugar", method_pointer_373d6ea687ad5e44b1c157a082437e18, "");
    class_1ab4808ba4c9580baf99795b73ebb3b3.def_static("classof", method_pointer_eaacdd40770a5ebc8a5fd6f84f46df13, "");

}