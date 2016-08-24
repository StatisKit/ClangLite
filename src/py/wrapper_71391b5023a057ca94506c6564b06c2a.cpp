#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_71391b5023a057ca94506c6564b06c2a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_db289e37b99d5e28a68da2e45df36b4f)(class ::clang::Decl  const *) = ::clang::TypedefNameDecl::classof;
    bool  (*method_pointer_2bbef80dbfbc52ac9db454e5b3b6c208)(enum ::clang::Decl::Kind ) = ::clang::TypedefNameDecl::classofKind;
    class ::clang::TagDecl  * (::clang::TypedefNameDecl::*method_pointer_83f1e824fd3c5e409c8787ea456ff0ee)(bool ) const = &::clang::TypedefNameDecl::getAnonDeclWithTypedefName;
    class ::clang::TypedefNameDecl  * (::clang::TypedefNameDecl::*method_pointer_45e923d047a853aa986b65dc45bfbf59)() = &::clang::TypedefNameDecl::getCanonicalDecl;
    class ::clang::TypedefNameDecl  const * (::clang::TypedefNameDecl::*method_pointer_41b703c3d9605cde9ba13ec8721e0632)() const = &::clang::TypedefNameDecl::getCanonicalDecl;
    class ::clang::QualType  (::clang::TypedefNameDecl::*method_pointer_6b4dfbc50cc55e7abb639b4b37529ddc)() const = &::clang::TypedefNameDecl::getUnderlyingType;
    bool  (::clang::TypedefNameDecl::*method_pointer_7dff375966be53328fa5b974280e00d2)() const = &::clang::TypedefNameDecl::isModed;
    boost::python::class_< class ::clang::TypedefNameDecl, autowig::HeldType< class ::clang::TypedefNameDecl >, boost::python::bases< class ::clang::TypeDecl >, boost::noncopyable > class_71391b5023a057ca94506c6564b06c2a("TypedefNameDecl", "", boost::python::no_init);
    class_71391b5023a057ca94506c6564b06c2a.def("classof", method_pointer_db289e37b99d5e28a68da2e45df36b4f, "");
    class_71391b5023a057ca94506c6564b06c2a.def("classof_kind", method_pointer_2bbef80dbfbc52ac9db454e5b3b6c208, "");
    class_71391b5023a057ca94506c6564b06c2a.def("get_anon_decl_with_typedef_name", method_pointer_83f1e824fd3c5e409c8787ea456ff0ee, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_71391b5023a057ca94506c6564b06c2a.def("get_canonical_decl", method_pointer_45e923d047a853aa986b65dc45bfbf59, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_71391b5023a057ca94506c6564b06c2a.def("get_canonical_decl", method_pointer_41b703c3d9605cde9ba13ec8721e0632, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_71391b5023a057ca94506c6564b06c2a.def("get_underlying_type", method_pointer_6b4dfbc50cc55e7abb639b4b37529ddc, "");
    class_71391b5023a057ca94506c6564b06c2a.def("is_moded", method_pointer_7dff375966be53328fa5b974280e00d2, "");
    class_71391b5023a057ca94506c6564b06c2a.staticmethod("classof_kind");
    class_71391b5023a057ca94506c6564b06c2a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypedefNameDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypedefNameDecl >, autowig::HeldType< class ::clang::TypeDecl > >();
    }

}