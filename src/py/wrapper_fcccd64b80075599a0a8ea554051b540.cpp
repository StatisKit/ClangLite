#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_fcccd64b80075599a0a8ea554051b540()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::DeclContext  const * (::clang::UsingDirectiveDecl::*method_pointer_d4d7992a6d485abe8a9a66a0bc49dde7)() const = &::clang::UsingDirectiveDecl::getCommonAncestor;
    class ::clang::NamedDecl  * (::clang::UsingDirectiveDecl::*method_pointer_d48a92865e2e5d57b5ade064f9ec4f58)() = &::clang::UsingDirectiveDecl::getNominatedNamespaceAsWritten;
    class ::clang::NamespaceDecl  const * (::clang::UsingDirectiveDecl::*method_pointer_6266258a7c9b56469fcb7ed7aee4085f)() const = &::clang::UsingDirectiveDecl::getNominatedNamespace;
    class ::clang::NamespaceDecl  * (::clang::UsingDirectiveDecl::*method_pointer_5b3b328af0a15f77b9ca9e52913d8f52)() = &::clang::UsingDirectiveDecl::getNominatedNamespace;
    class ::clang::DeclContext  * (::clang::UsingDirectiveDecl::*method_pointer_4db49a49413553f69283406d40ebf4ba)() = &::clang::UsingDirectiveDecl::getCommonAncestor;
    class ::clang::UsingDirectiveDecl  * (*method_pointer_5878ceda509250238862d8bc797f8351)(class ::clang::ASTContext  &, unsigned int ) = ::clang::UsingDirectiveDecl::CreateDeserialized;
    bool  (*method_pointer_2dcb5bcbc4eb57178dff40755aa111d9)(enum ::clang::Decl::Kind ) = ::clang::UsingDirectiveDecl::classofKind;
    class ::clang::NamedDecl  const * (::clang::UsingDirectiveDecl::*method_pointer_a11edff275f556a89aeb0c3803fd4875)() const = &::clang::UsingDirectiveDecl::getNominatedNamespaceAsWritten;
    bool  (*method_pointer_15f0ec1efcda58858f4b3ac6f2143160)(class ::clang::Decl  const *) = ::clang::UsingDirectiveDecl::classof;
    boost::python::class_< class ::clang::UsingDirectiveDecl, autowig::HeldType< class ::clang::UsingDirectiveDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_fcccd64b80075599a0a8ea554051b540("UsingDirectiveDecl", "", boost::python::no_init);
    class_fcccd64b80075599a0a8ea554051b540.def("get_common_ancestor", method_pointer_d4d7992a6d485abe8a9a66a0bc49dde7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace_as_written", method_pointer_d48a92865e2e5d57b5ade064f9ec4f58, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace", method_pointer_6266258a7c9b56469fcb7ed7aee4085f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace", method_pointer_5b3b328af0a15f77b9ca9e52913d8f52, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_common_ancestor", method_pointer_4db49a49413553f69283406d40ebf4ba, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("create_deserialized", method_pointer_5878ceda509250238862d8bc797f8351, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("classof_kind", method_pointer_2dcb5bcbc4eb57178dff40755aa111d9, "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace_as_written", method_pointer_a11edff275f556a89aeb0c3803fd4875, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("classof", method_pointer_15f0ec1efcda58858f4b3ac6f2143160, "");
    class_fcccd64b80075599a0a8ea554051b540.staticmethod("classof_kind");
    class_fcccd64b80075599a0a8ea554051b540.staticmethod("create_deserialized");
    class_fcccd64b80075599a0a8ea554051b540.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UsingDirectiveDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UsingDirectiveDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}