#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_ee2f6fcd9daa55ddac1faab4f85880a8()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::ClassScopeFunctionSpecializationDecl::*method_pointer_7fb7cd86a278595db1bdc1f33775be3f)() const = &::clang::ClassScopeFunctionSpecializationDecl::hasExplicitTemplateArgs;
    bool  (*method_pointer_2a2ec4a0aa2558c480841255b3a0f487)(class ::clang::Decl  const *) = ::clang::ClassScopeFunctionSpecializationDecl::classof;
    class ::clang::CXXMethodDecl  * (::clang::ClassScopeFunctionSpecializationDecl::*method_pointer_6770c270868b5d3594e202644466c87c)() const = &::clang::ClassScopeFunctionSpecializationDecl::getSpecialization;
    bool  (*method_pointer_f88e3d50e6075cbaa2b5deb02760cd72)(enum ::clang::Decl::Kind ) = ::clang::ClassScopeFunctionSpecializationDecl::classofKind;
    class ::clang::ClassScopeFunctionSpecializationDecl  * (*method_pointer_820863da6e79502896b0011610457955)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ClassScopeFunctionSpecializationDecl::CreateDeserialized;
    boost::python::class_< class ::clang::ClassScopeFunctionSpecializationDecl, autowig::HeldType< class ::clang::ClassScopeFunctionSpecializationDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_ee2f6fcd9daa55ddac1faab4f85880a8("ClassScopeFunctionSpecializationDecl", "", boost::python::no_init);
    class_ee2f6fcd9daa55ddac1faab4f85880a8.def("has_explicit_template_args", method_pointer_7fb7cd86a278595db1bdc1f33775be3f, "");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.def("classof", method_pointer_2a2ec4a0aa2558c480841255b3a0f487, "");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.def("get_specialization", method_pointer_6770c270868b5d3594e202644466c87c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.def("classof_kind", method_pointer_f88e3d50e6075cbaa2b5deb02760cd72, "");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.def("create_deserialized", method_pointer_820863da6e79502896b0011610457955, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.staticmethod("classof_kind");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.staticmethod("create_deserialized");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ClassScopeFunctionSpecializationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ClassScopeFunctionSpecializationDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}