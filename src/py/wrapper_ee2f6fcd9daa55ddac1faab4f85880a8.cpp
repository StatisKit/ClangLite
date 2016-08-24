#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_ee2f6fcd9daa55ddac1faab4f85880a8()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ClassScopeFunctionSpecializationDecl  * (*method_pointer_ad45b7a649c45a64a3e96dab241fb427)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ClassScopeFunctionSpecializationDecl::CreateDeserialized;
    bool  (*method_pointer_17566016e76e5c5389009e2d24cf3692)(class ::clang::Decl  const *) = ::clang::ClassScopeFunctionSpecializationDecl::classof;
    bool  (*method_pointer_d6012660933a598daeb4f6902b1a47e7)(enum ::clang::Decl::Kind ) = ::clang::ClassScopeFunctionSpecializationDecl::classofKind;
    class ::clang::CXXMethodDecl  * (::clang::ClassScopeFunctionSpecializationDecl::*method_pointer_be6390ec67c6565fa86678c6d76feb67)() const = &::clang::ClassScopeFunctionSpecializationDecl::getSpecialization;
    bool  (::clang::ClassScopeFunctionSpecializationDecl::*method_pointer_f9664033e2f855728b1f3c9163fa8214)() const = &::clang::ClassScopeFunctionSpecializationDecl::hasExplicitTemplateArgs;
    boost::python::class_< class ::clang::ClassScopeFunctionSpecializationDecl, autowig::HeldType< class ::clang::ClassScopeFunctionSpecializationDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_ee2f6fcd9daa55ddac1faab4f85880a8("ClassScopeFunctionSpecializationDecl", "", boost::python::no_init);
    class_ee2f6fcd9daa55ddac1faab4f85880a8.def("create_deserialized", method_pointer_ad45b7a649c45a64a3e96dab241fb427, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.def("classof", method_pointer_17566016e76e5c5389009e2d24cf3692, "");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.def("classof_kind", method_pointer_d6012660933a598daeb4f6902b1a47e7, "");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.def("get_specialization", method_pointer_be6390ec67c6565fa86678c6d76feb67, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.def("has_explicit_template_args", method_pointer_f9664033e2f855728b1f3c9163fa8214, "");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.staticmethod("classof_kind");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.staticmethod("create_deserialized");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ClassScopeFunctionSpecializationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ClassScopeFunctionSpecializationDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}