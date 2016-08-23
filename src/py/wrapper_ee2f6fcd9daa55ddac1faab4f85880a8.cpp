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
    class ::clang::ClassScopeFunctionSpecializationDecl  * (*method_pointer_2c5de20be1a850889d09a47a2d75080a)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ClassScopeFunctionSpecializationDecl::CreateDeserialized;
    bool  (*method_pointer_749d826a426d51ebabc4e7cc0e1b460a)(class ::clang::Decl  const *) = ::clang::ClassScopeFunctionSpecializationDecl::classof;
    bool  (*method_pointer_42bb76b3b6a6576a898ac7b40ce1282b)(enum ::clang::Decl::Kind ) = ::clang::ClassScopeFunctionSpecializationDecl::classofKind;
    class ::clang::CXXMethodDecl  * (::clang::ClassScopeFunctionSpecializationDecl::*method_pointer_209f6c572ff0590eb48cc545900b9e5d)() const = &::clang::ClassScopeFunctionSpecializationDecl::getSpecialization;
    bool  (::clang::ClassScopeFunctionSpecializationDecl::*method_pointer_30828b094b4654f1943ba8b3d2339cbc)() const = &::clang::ClassScopeFunctionSpecializationDecl::hasExplicitTemplateArgs;
    boost::python::class_< class ::clang::ClassScopeFunctionSpecializationDecl, autowig::HeldType< class ::clang::ClassScopeFunctionSpecializationDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_ee2f6fcd9daa55ddac1faab4f85880a8("ClassScopeFunctionSpecializationDecl", "", boost::python::no_init);
    class_ee2f6fcd9daa55ddac1faab4f85880a8.def("create_deserialized", method_pointer_2c5de20be1a850889d09a47a2d75080a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.def("classof", method_pointer_749d826a426d51ebabc4e7cc0e1b460a, "");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.def("classof_kind", method_pointer_42bb76b3b6a6576a898ac7b40ce1282b, "");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.def("get_specialization", method_pointer_209f6c572ff0590eb48cc545900b9e5d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.def("has_explicit_template_args", method_pointer_30828b094b4654f1943ba8b3d2339cbc, "");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.staticmethod("classof_kind");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.staticmethod("create_deserialized");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ClassScopeFunctionSpecializationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ClassScopeFunctionSpecializationDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}