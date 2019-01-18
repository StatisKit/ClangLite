#include "_clanglite.h"

class ::clang::QualType  (::clang::InjectedClassNameType::*method_pointer_1d0b02b1a8555241ab131dd0393ed651)()const= &::clang::InjectedClassNameType::getInjectedSpecializationType;
class ::clang::TemplateSpecializationType const * (::clang::InjectedClassNameType::*method_pointer_91a7bf06e7a55f5bbdf8b3374824aaad)()const= &::clang::InjectedClassNameType::getInjectedTST;
class ::clang::CXXRecordDecl * (::clang::InjectedClassNameType::*method_pointer_ef6bc9d5c8dd5f3eb5cec8dfcff9e5da)()const= &::clang::InjectedClassNameType::getDecl;
bool  (::clang::InjectedClassNameType::*method_pointer_4e3f45fd72b9520daa71ac16c02b3c45)()const= &::clang::InjectedClassNameType::isSugared;
class ::clang::QualType  (::clang::InjectedClassNameType::*method_pointer_ec389c7d04cc5ba8a8fbba4c41246ef0)()const= &::clang::InjectedClassNameType::desugar;
bool  (*method_pointer_477ad323abaf56d69c214be3e932b903)(class ::clang::Type const *)= ::clang::InjectedClassNameType::classof;

namespace autowig {
}

void wrapper_0418dea67efc501bbbeb15890bd22f08(pybind11::module& module)
{

    pybind11::class_<class ::clang::InjectedClassNameType, autowig::HolderType< class ::clang::InjectedClassNameType >::Type, class ::clang::Type > class_0418dea67efc501bbbeb15890bd22f08(module, "InjectedClassNameType", "");
    class_0418dea67efc501bbbeb15890bd22f08.def("get_injected_specialization_type", method_pointer_1d0b02b1a8555241ab131dd0393ed651, "");
    class_0418dea67efc501bbbeb15890bd22f08.def("get_injected_tst", method_pointer_91a7bf06e7a55f5bbdf8b3374824aaad, pybind11::return_value_policy::reference_internal, "");
    class_0418dea67efc501bbbeb15890bd22f08.def("get_decl", method_pointer_ef6bc9d5c8dd5f3eb5cec8dfcff9e5da, pybind11::return_value_policy::reference_internal, "");
    class_0418dea67efc501bbbeb15890bd22f08.def("is_sugared", method_pointer_4e3f45fd72b9520daa71ac16c02b3c45, "");
    class_0418dea67efc501bbbeb15890bd22f08.def("desugar", method_pointer_ec389c7d04cc5ba8a8fbba4c41246ef0, "");
    class_0418dea67efc501bbbeb15890bd22f08.def_static("classof", method_pointer_477ad323abaf56d69c214be3e932b903, "");

}