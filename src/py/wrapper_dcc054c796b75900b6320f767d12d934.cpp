#include "_clanglite.h"


namespace autowig
{
}


void wrapper_dcc054c796b75900b6320f767d12d934()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::VarTemplatePartialSpecializationDecl  * (*method_pointer_66262e5e416c576cbc22d8785844b028)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarTemplatePartialSpecializationDecl::CreateDeserialized;
    bool  (*method_pointer_dd343203d1f75cbcbfbd09234c0289d1)(class ::clang::Decl  const *) = ::clang::VarTemplatePartialSpecializationDecl::classof;
    bool  (*method_pointer_e239503c8a47517a84bc555443b3165f)(enum ::clang::Decl::Kind ) = ::clang::VarTemplatePartialSpecializationDecl::classofKind;
    class ::clang::VarTemplatePartialSpecializationDecl  * (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_79bb89d1075257eaa7eec0cebb1b61e8)() const = &::clang::VarTemplatePartialSpecializationDecl::getInstantiatedFromMember;
    class ::clang::VarTemplatePartialSpecializationDecl  * (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_7ee79bbfa5e65da0a795609feabe7542)() = &::clang::VarTemplatePartialSpecializationDecl::getMostRecentDecl;
    bool  (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_2737dd3fda56558eb0c0faf63469c171)() = &::clang::VarTemplatePartialSpecializationDecl::isMemberSpecialization;
    void  (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_05f78eb0ceaa5e8c85d78eae8cba71c5)(class ::clang::VarTemplatePartialSpecializationDecl  *) = &::clang::VarTemplatePartialSpecializationDecl::setInstantiatedFromMember;
    void  (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_712d787944d65c58897d414d66086661)() = &::clang::VarTemplatePartialSpecializationDecl::setMemberSpecialization;
    boost::python::class_< class ::clang::VarTemplatePartialSpecializationDecl, autowig::HeldType< class ::clang::VarTemplatePartialSpecializationDecl >, boost::python::bases< class ::clang::VarTemplateSpecializationDecl >, boost::noncopyable > class_dcc054c796b75900b6320f767d12d934("VarTemplatePartialSpecializationDecl", "", boost::python::no_init);
    class_dcc054c796b75900b6320f767d12d934.def("create_deserialized", method_pointer_66262e5e416c576cbc22d8785844b028, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_dcc054c796b75900b6320f767d12d934.def("classof", method_pointer_dd343203d1f75cbcbfbd09234c0289d1, "");
    class_dcc054c796b75900b6320f767d12d934.def("classof_kind", method_pointer_e239503c8a47517a84bc555443b3165f, "");
    class_dcc054c796b75900b6320f767d12d934.def("get_instantiated_from_member", method_pointer_79bb89d1075257eaa7eec0cebb1b61e8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_dcc054c796b75900b6320f767d12d934.def("get_most_recent_decl", method_pointer_7ee79bbfa5e65da0a795609feabe7542, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_dcc054c796b75900b6320f767d12d934.def("is_member_specialization", method_pointer_2737dd3fda56558eb0c0faf63469c171, "");
    class_dcc054c796b75900b6320f767d12d934.def("set_instantiated_from_member", method_pointer_05f78eb0ceaa5e8c85d78eae8cba71c5, "");
    class_dcc054c796b75900b6320f767d12d934.def("set_member_specialization", method_pointer_712d787944d65c58897d414d66086661, "");
    class_dcc054c796b75900b6320f767d12d934.staticmethod("classof_kind");
    class_dcc054c796b75900b6320f767d12d934.staticmethod("create_deserialized");
    class_dcc054c796b75900b6320f767d12d934.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarTemplatePartialSpecializationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarTemplatePartialSpecializationDecl >, autowig::HeldType< class ::clang::VarTemplateSpecializationDecl > >();
    }

}