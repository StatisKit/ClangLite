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
    bool  (*method_pointer_880af074380658a692968d5c1ca36a04)(enum ::clang::Decl::Kind ) = ::clang::ClassScopeFunctionSpecializationDecl::classofKind;
    bool  (::clang::ClassScopeFunctionSpecializationDecl::*method_pointer_c689d1a733ec58b88894267e31e8f5c6)() const = &::clang::ClassScopeFunctionSpecializationDecl::hasExplicitTemplateArgs;
    class ::clang::ClassScopeFunctionSpecializationDecl  * (*method_pointer_d2ee7315d3295cfdb41b96a4c5d9d76b)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ClassScopeFunctionSpecializationDecl::CreateDeserialized;
    bool  (*method_pointer_759a94bfa87052d99b5810dafd47fbe0)(class ::clang::Decl  const *) = ::clang::ClassScopeFunctionSpecializationDecl::classof;
    class ::clang::CXXMethodDecl  * (::clang::ClassScopeFunctionSpecializationDecl::*method_pointer_1a8d7abd9bb15ca4854911998064e145)() const = &::clang::ClassScopeFunctionSpecializationDecl::getSpecialization;
    boost::python::class_< class ::clang::ClassScopeFunctionSpecializationDecl, autowig::HeldType< class ::clang::ClassScopeFunctionSpecializationDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_ee2f6fcd9daa55ddac1faab4f85880a8("ClassScopeFunctionSpecializationDecl", "", boost::python::no_init);
    class_ee2f6fcd9daa55ddac1faab4f85880a8.def("classof_kind", method_pointer_880af074380658a692968d5c1ca36a04, "");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.def("has_explicit_template_args", method_pointer_c689d1a733ec58b88894267e31e8f5c6, "");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.def("create_deserialized", method_pointer_d2ee7315d3295cfdb41b96a4c5d9d76b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.def("classof", method_pointer_759a94bfa87052d99b5810dafd47fbe0, "");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.def("get_specialization", method_pointer_1a8d7abd9bb15ca4854911998064e145, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.staticmethod("classof_kind");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.staticmethod("create_deserialized");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ClassScopeFunctionSpecializationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ClassScopeFunctionSpecializationDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}