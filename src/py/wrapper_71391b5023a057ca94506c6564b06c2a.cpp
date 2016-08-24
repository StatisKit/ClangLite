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
    bool  (*method_pointer_7af9d41c797855b5bfb3b446609f0441)(class ::clang::Decl  const *) = ::clang::TypedefNameDecl::classof;
    bool  (*method_pointer_d65c3dd7897e5e65ab69ac14b0bfb029)(enum ::clang::Decl::Kind ) = ::clang::TypedefNameDecl::classofKind;
    class ::clang::TagDecl  * (::clang::TypedefNameDecl::*method_pointer_f901a7d7465b55eda7608923467751df)(bool ) const = &::clang::TypedefNameDecl::getAnonDeclWithTypedefName;
    class ::clang::TypedefNameDecl  * (::clang::TypedefNameDecl::*method_pointer_80211d361617577587ec29323923d888)() = &::clang::TypedefNameDecl::getCanonicalDecl;
    class ::clang::TypedefNameDecl  const * (::clang::TypedefNameDecl::*method_pointer_e1b4e5b1dcf85adfb9f685f13df6036f)() const = &::clang::TypedefNameDecl::getCanonicalDecl;
    class ::clang::QualType  (::clang::TypedefNameDecl::*method_pointer_16f1887d551b5c9fbda5163968eedc6e)() const = &::clang::TypedefNameDecl::getUnderlyingType;
    bool  (::clang::TypedefNameDecl::*method_pointer_826d9242ec6c5b9892cbab8c702aff8e)() const = &::clang::TypedefNameDecl::isModed;
    boost::python::class_< class ::clang::TypedefNameDecl, autowig::HeldType< class ::clang::TypedefNameDecl >, boost::python::bases< class ::clang::TypeDecl >, boost::noncopyable > class_71391b5023a057ca94506c6564b06c2a("TypedefNameDecl", "", boost::python::no_init);
    class_71391b5023a057ca94506c6564b06c2a.def("classof", method_pointer_7af9d41c797855b5bfb3b446609f0441, "");
    class_71391b5023a057ca94506c6564b06c2a.def("classof_kind", method_pointer_d65c3dd7897e5e65ab69ac14b0bfb029, "");
    class_71391b5023a057ca94506c6564b06c2a.def("get_anon_decl_with_typedef_name", method_pointer_f901a7d7465b55eda7608923467751df, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_71391b5023a057ca94506c6564b06c2a.def("get_canonical_decl", method_pointer_80211d361617577587ec29323923d888, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_71391b5023a057ca94506c6564b06c2a.def("get_canonical_decl", method_pointer_e1b4e5b1dcf85adfb9f685f13df6036f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_71391b5023a057ca94506c6564b06c2a.def("get_underlying_type", method_pointer_16f1887d551b5c9fbda5163968eedc6e, "");
    class_71391b5023a057ca94506c6564b06c2a.def("is_moded", method_pointer_826d9242ec6c5b9892cbab8c702aff8e, "");
    class_71391b5023a057ca94506c6564b06c2a.staticmethod("classof_kind");
    class_71391b5023a057ca94506c6564b06c2a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypedefNameDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypedefNameDecl >, autowig::HeldType< class ::clang::TypeDecl > >();
    }

}