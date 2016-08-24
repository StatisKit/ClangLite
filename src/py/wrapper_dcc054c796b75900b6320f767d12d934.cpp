#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_dcc054c796b75900b6320f767d12d934()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::VarTemplatePartialSpecializationDecl  * (*method_pointer_918e26c26beb55eca3b45fc43e662a94)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarTemplatePartialSpecializationDecl::CreateDeserialized;
    bool  (*method_pointer_e688f9c5efde570384ccaee93f4aafa2)(class ::clang::Decl  const *) = ::clang::VarTemplatePartialSpecializationDecl::classof;
    bool  (*method_pointer_5c4a995cdabe5b1db0b7d56edf370528)(enum ::clang::Decl::Kind ) = ::clang::VarTemplatePartialSpecializationDecl::classofKind;
    class ::clang::VarTemplatePartialSpecializationDecl  * (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_d1de5fbb40065aef8907b40078c47cd4)() const = &::clang::VarTemplatePartialSpecializationDecl::getInstantiatedFromMember;
    class ::clang::VarTemplatePartialSpecializationDecl  * (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_e21e0188bae65784be0f7380795e2187)() = &::clang::VarTemplatePartialSpecializationDecl::getMostRecentDecl;
    bool  (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_fcb325efd3b859e481957c3c3a31a4f9)() = &::clang::VarTemplatePartialSpecializationDecl::isMemberSpecialization;
    void  (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_dfb688f16b85581b81bf5b9f94f7796f)(class ::clang::VarTemplatePartialSpecializationDecl  *) = &::clang::VarTemplatePartialSpecializationDecl::setInstantiatedFromMember;
    void  (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_516f03caa4a15514aa45a09b592046e2)() = &::clang::VarTemplatePartialSpecializationDecl::setMemberSpecialization;
    boost::python::class_< class ::clang::VarTemplatePartialSpecializationDecl, autowig::HeldType< class ::clang::VarTemplatePartialSpecializationDecl >, boost::python::bases< class ::clang::VarTemplateSpecializationDecl >, boost::noncopyable > class_dcc054c796b75900b6320f767d12d934("VarTemplatePartialSpecializationDecl", "", boost::python::no_init);
    class_dcc054c796b75900b6320f767d12d934.def("create_deserialized", method_pointer_918e26c26beb55eca3b45fc43e662a94, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_dcc054c796b75900b6320f767d12d934.def("classof", method_pointer_e688f9c5efde570384ccaee93f4aafa2, "");
    class_dcc054c796b75900b6320f767d12d934.def("classof_kind", method_pointer_5c4a995cdabe5b1db0b7d56edf370528, "");
    class_dcc054c796b75900b6320f767d12d934.def("get_instantiated_from_member", method_pointer_d1de5fbb40065aef8907b40078c47cd4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_dcc054c796b75900b6320f767d12d934.def("get_most_recent_decl", method_pointer_e21e0188bae65784be0f7380795e2187, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_dcc054c796b75900b6320f767d12d934.def("is_member_specialization", method_pointer_fcb325efd3b859e481957c3c3a31a4f9, "");
    class_dcc054c796b75900b6320f767d12d934.def("set_instantiated_from_member", method_pointer_dfb688f16b85581b81bf5b9f94f7796f, "");
    class_dcc054c796b75900b6320f767d12d934.def("set_member_specialization", method_pointer_516f03caa4a15514aa45a09b592046e2, "");
    class_dcc054c796b75900b6320f767d12d934.staticmethod("classof_kind");
    class_dcc054c796b75900b6320f767d12d934.staticmethod("create_deserialized");
    class_dcc054c796b75900b6320f767d12d934.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarTemplatePartialSpecializationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarTemplatePartialSpecializationDecl >, autowig::HeldType< class ::clang::VarTemplateSpecializationDecl > >();
    }

}