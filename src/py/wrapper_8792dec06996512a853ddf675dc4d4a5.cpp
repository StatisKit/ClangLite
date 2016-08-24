#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_8792dec06996512a853ddf675dc4d4a5()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TypedefDecl  * (*method_pointer_b716938b2e5e54fe9870c0724e1fa281)(class ::clang::ASTContext  &, unsigned int ) = ::clang::TypedefDecl::CreateDeserialized;
    bool  (*method_pointer_bc2a4a3870d15a20bfaf24c13c57f37f)(class ::clang::Decl  const *) = ::clang::TypedefDecl::classof;
    bool  (*method_pointer_90d593dd0bb45ff4be5c65f019db012e)(enum ::clang::Decl::Kind ) = ::clang::TypedefDecl::classofKind;
    boost::python::class_< class ::clang::TypedefDecl, autowig::HeldType< class ::clang::TypedefDecl >, boost::python::bases< class ::clang::TypedefNameDecl >, boost::noncopyable > class_8792dec06996512a853ddf675dc4d4a5("TypedefDecl", "", boost::python::no_init);
    class_8792dec06996512a853ddf675dc4d4a5.def("create_deserialized", method_pointer_b716938b2e5e54fe9870c0724e1fa281, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8792dec06996512a853ddf675dc4d4a5.def("classof", method_pointer_bc2a4a3870d15a20bfaf24c13c57f37f, "");
    class_8792dec06996512a853ddf675dc4d4a5.def("classof_kind", method_pointer_90d593dd0bb45ff4be5c65f019db012e, "");
    class_8792dec06996512a853ddf675dc4d4a5.staticmethod("classof_kind");
    class_8792dec06996512a853ddf675dc4d4a5.staticmethod("create_deserialized");
    class_8792dec06996512a853ddf675dc4d4a5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypedefDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypedefDecl >, autowig::HeldType< class ::clang::TypedefNameDecl > >();
    }

}