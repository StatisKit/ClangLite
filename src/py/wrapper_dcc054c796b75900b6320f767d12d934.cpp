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
    class ::clang::VarTemplatePartialSpecializationDecl  * (*method_pointer_d6b8e9fb560f5f21b206dbfe376e897f)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarTemplatePartialSpecializationDecl::CreateDeserialized;
    bool  (*method_pointer_7f954ec559a55b129e0bd76f5fe4cd1c)(class ::clang::Decl  const *) = ::clang::VarTemplatePartialSpecializationDecl::classof;
    bool  (*method_pointer_b742400da87b58eebcc51c6683b6c9af)(enum ::clang::Decl::Kind ) = ::clang::VarTemplatePartialSpecializationDecl::classofKind;
    class ::clang::VarTemplatePartialSpecializationDecl  * (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_7ccbef34e7d757aca9d55d975f27d2da)() const = &::clang::VarTemplatePartialSpecializationDecl::getInstantiatedFromMember;
    class ::clang::VarTemplatePartialSpecializationDecl  * (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_85fb8e23474653f88064cba91c6a71f0)() = &::clang::VarTemplatePartialSpecializationDecl::getMostRecentDecl;
    bool  (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_1bf31f12bfe4588185c4082519490094)() = &::clang::VarTemplatePartialSpecializationDecl::isMemberSpecialization;
    void  (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_8273264fa0525aa0913ddfd211f40c36)(class ::clang::VarTemplatePartialSpecializationDecl  *) = &::clang::VarTemplatePartialSpecializationDecl::setInstantiatedFromMember;
    void  (::clang::VarTemplatePartialSpecializationDecl::*method_pointer_7c36604774f85a68945b89017cd311af)() = &::clang::VarTemplatePartialSpecializationDecl::setMemberSpecialization;
    boost::python::class_< class ::clang::VarTemplatePartialSpecializationDecl, autowig::HeldType< class ::clang::VarTemplatePartialSpecializationDecl >, boost::python::bases< class ::clang::VarTemplateSpecializationDecl >, boost::noncopyable > class_dcc054c796b75900b6320f767d12d934("VarTemplatePartialSpecializationDecl", "", boost::python::no_init);
    class_dcc054c796b75900b6320f767d12d934.def("create_deserialized", method_pointer_d6b8e9fb560f5f21b206dbfe376e897f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_dcc054c796b75900b6320f767d12d934.def("classof", method_pointer_7f954ec559a55b129e0bd76f5fe4cd1c, "");
    class_dcc054c796b75900b6320f767d12d934.def("classof_kind", method_pointer_b742400da87b58eebcc51c6683b6c9af, "");
    class_dcc054c796b75900b6320f767d12d934.def("get_instantiated_from_member", method_pointer_7ccbef34e7d757aca9d55d975f27d2da, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_dcc054c796b75900b6320f767d12d934.def("get_most_recent_decl", method_pointer_85fb8e23474653f88064cba91c6a71f0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_dcc054c796b75900b6320f767d12d934.def("is_member_specialization", method_pointer_1bf31f12bfe4588185c4082519490094, "");
    class_dcc054c796b75900b6320f767d12d934.def("set_instantiated_from_member", method_pointer_8273264fa0525aa0913ddfd211f40c36, "");
    class_dcc054c796b75900b6320f767d12d934.def("set_member_specialization", method_pointer_7c36604774f85a68945b89017cd311af, "");
    class_dcc054c796b75900b6320f767d12d934.staticmethod("classof_kind");
    class_dcc054c796b75900b6320f767d12d934.staticmethod("create_deserialized");
    class_dcc054c796b75900b6320f767d12d934.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarTemplatePartialSpecializationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarTemplatePartialSpecializationDecl >, autowig::HeldType< class ::clang::VarTemplateSpecializationDecl > >();
    }

}