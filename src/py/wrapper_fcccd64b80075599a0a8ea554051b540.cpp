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
    class ::clang::NamespaceDecl  * (::clang::UsingDirectiveDecl::*method_pointer_f111a68a8e495f89a2b60904d0d7752f)() = &::clang::UsingDirectiveDecl::getNominatedNamespace;
    class ::clang::NamespaceDecl  const * (::clang::UsingDirectiveDecl::*method_pointer_477d7c63b71958afbb772e4085409906)() const = &::clang::UsingDirectiveDecl::getNominatedNamespace;
    bool  (*method_pointer_eaeda8664ba85dc2b9b699405c3de6f8)(enum ::clang::Decl::Kind ) = ::clang::UsingDirectiveDecl::classofKind;
    class ::clang::NamedDecl  const * (::clang::UsingDirectiveDecl::*method_pointer_05001fb1c94b5e31af7b224081d00f1f)() const = &::clang::UsingDirectiveDecl::getNominatedNamespaceAsWritten;
    bool  (*method_pointer_243af73f81d653f2a56729e77abeb648)(class ::clang::Decl  const *) = ::clang::UsingDirectiveDecl::classof;
    class ::clang::NamedDecl  * (::clang::UsingDirectiveDecl::*method_pointer_92c16c876b7e5d80a1ec0808490228eb)() = &::clang::UsingDirectiveDecl::getNominatedNamespaceAsWritten;
    class ::clang::DeclContext  * (::clang::UsingDirectiveDecl::*method_pointer_2930296188c754a68e4f382f8244aad4)() = &::clang::UsingDirectiveDecl::getCommonAncestor;
    class ::clang::UsingDirectiveDecl  * (*method_pointer_4a3d6731acd05865aff024523e08869e)(class ::clang::ASTContext  &, unsigned int ) = ::clang::UsingDirectiveDecl::CreateDeserialized;
    class ::clang::DeclContext  const * (::clang::UsingDirectiveDecl::*method_pointer_09c565ac5bf253439c78175dbfda0d68)() const = &::clang::UsingDirectiveDecl::getCommonAncestor;
    boost::python::class_< class ::clang::UsingDirectiveDecl, autowig::HeldType< class ::clang::UsingDirectiveDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_fcccd64b80075599a0a8ea554051b540("UsingDirectiveDecl", "", boost::python::no_init);
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace", method_pointer_f111a68a8e495f89a2b60904d0d7752f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace", method_pointer_477d7c63b71958afbb772e4085409906, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("classof_kind", method_pointer_eaeda8664ba85dc2b9b699405c3de6f8, "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace_as_written", method_pointer_05001fb1c94b5e31af7b224081d00f1f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("classof", method_pointer_243af73f81d653f2a56729e77abeb648, "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace_as_written", method_pointer_92c16c876b7e5d80a1ec0808490228eb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_common_ancestor", method_pointer_2930296188c754a68e4f382f8244aad4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("create_deserialized", method_pointer_4a3d6731acd05865aff024523e08869e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_common_ancestor", method_pointer_09c565ac5bf253439c78175dbfda0d68, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.staticmethod("classof_kind");
    class_fcccd64b80075599a0a8ea554051b540.staticmethod("create_deserialized");
    class_fcccd64b80075599a0a8ea554051b540.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UsingDirectiveDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UsingDirectiveDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}