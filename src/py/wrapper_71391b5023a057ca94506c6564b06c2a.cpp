#include "_clanglite.h"


namespace autowig
{
}


void wrapper_71391b5023a057ca94506c6564b06c2a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_a6af2aa777555d25b1442e5dd478e524)(class ::clang::Decl  const *) = ::clang::TypedefNameDecl::classof;
    bool  (*method_pointer_30e140ea264f57079202164b2db1f6f9)(enum ::clang::Decl::Kind ) = ::clang::TypedefNameDecl::classofKind;
    class ::clang::TagDecl  * (::clang::TypedefNameDecl::*method_pointer_e155ffa4007b5bc9b0b1726507cd9a22)(bool ) const = &::clang::TypedefNameDecl::getAnonDeclWithTypedefName;
    class ::clang::TypedefNameDecl  const * (::clang::TypedefNameDecl::*method_pointer_261bc836d0525c94be707f5636975e4b)() const = &::clang::TypedefNameDecl::getCanonicalDecl;
    class ::clang::TypedefNameDecl  * (::clang::TypedefNameDecl::*method_pointer_d0a23f6915525d31a5760344c752f679)() = &::clang::TypedefNameDecl::getCanonicalDecl;
    bool  (::clang::TypedefNameDecl::*method_pointer_f8f0a2bed7315ce68f5a7f3b605cb37b)() const = &::clang::TypedefNameDecl::isModed;
    boost::python::class_< class ::clang::TypedefNameDecl, autowig::HeldType< class ::clang::TypedefNameDecl >, boost::python::bases< class ::clang::TypeDecl >, boost::noncopyable > class_71391b5023a057ca94506c6564b06c2a("TypedefNameDecl", "", boost::python::no_init);
    class_71391b5023a057ca94506c6564b06c2a.def("classof", method_pointer_a6af2aa777555d25b1442e5dd478e524, "");
    class_71391b5023a057ca94506c6564b06c2a.def("classof_kind", method_pointer_30e140ea264f57079202164b2db1f6f9, "");
    class_71391b5023a057ca94506c6564b06c2a.def("get_anon_decl_with_typedef_name", method_pointer_e155ffa4007b5bc9b0b1726507cd9a22, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_71391b5023a057ca94506c6564b06c2a.def("get_canonical_decl", method_pointer_261bc836d0525c94be707f5636975e4b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_71391b5023a057ca94506c6564b06c2a.def("get_canonical_decl", method_pointer_d0a23f6915525d31a5760344c752f679, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_71391b5023a057ca94506c6564b06c2a.def("is_moded", method_pointer_f8f0a2bed7315ce68f5a7f3b605cb37b, "");
    class_71391b5023a057ca94506c6564b06c2a.staticmethod("classof_kind");
    class_71391b5023a057ca94506c6564b06c2a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypedefNameDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypedefNameDecl >, autowig::HeldType< class ::clang::TypeDecl > >();
    }

}