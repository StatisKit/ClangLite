#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_71391b5023a057ca94506c6564b06c2a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TypedefNameDecl  const * (::clang::TypedefNameDecl::*method_pointer_96290752129c5486b8b7cb41d422d250)() const = &::clang::TypedefNameDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TypedefNameDecl::*method_pointer_43462e2724e35674b8d7357ef703f387)(bool ) const = &::clang::TypedefNameDecl::getAnonDeclWithTypedefName;
    bool  (*method_pointer_4dd0a5b1b5c753558fd1d09f049a6b40)(class ::clang::Decl  const *) = ::clang::TypedefNameDecl::classof;
    bool  (::clang::TypedefNameDecl::*method_pointer_4b92e411640d53ef911532af077f88e9)() const = &::clang::TypedefNameDecl::isModed;
    bool  (*method_pointer_e887418f76ec556d8252b73a45f295e7)(enum ::clang::Decl::Kind ) = ::clang::TypedefNameDecl::classofKind;
    class ::clang::TypedefNameDecl  * (::clang::TypedefNameDecl::*method_pointer_b2e5f8ee43fb5866a4bec93718876175)() = &::clang::TypedefNameDecl::getCanonicalDecl;
    boost::python::class_< class ::clang::TypedefNameDecl, autowig::HeldType< class ::clang::TypedefNameDecl >, boost::python::bases< class ::clang::TypeDecl >, boost::noncopyable > class_71391b5023a057ca94506c6564b06c2a("TypedefNameDecl", "", boost::python::no_init);
    class_71391b5023a057ca94506c6564b06c2a.def("get_canonical_decl", method_pointer_96290752129c5486b8b7cb41d422d250, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_71391b5023a057ca94506c6564b06c2a.def("get_anon_decl_with_typedef_name", method_pointer_43462e2724e35674b8d7357ef703f387, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_71391b5023a057ca94506c6564b06c2a.def("classof", method_pointer_4dd0a5b1b5c753558fd1d09f049a6b40, "");
    class_71391b5023a057ca94506c6564b06c2a.def("is_moded", method_pointer_4b92e411640d53ef911532af077f88e9, "");
    class_71391b5023a057ca94506c6564b06c2a.def("classof_kind", method_pointer_e887418f76ec556d8252b73a45f295e7, "");
    class_71391b5023a057ca94506c6564b06c2a.def("get_canonical_decl", method_pointer_b2e5f8ee43fb5866a4bec93718876175, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_71391b5023a057ca94506c6564b06c2a.staticmethod("classof_kind");
    class_71391b5023a057ca94506c6564b06c2a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypedefNameDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypedefNameDecl >, autowig::HeldType< class ::clang::TypeDecl > >();
    }

}