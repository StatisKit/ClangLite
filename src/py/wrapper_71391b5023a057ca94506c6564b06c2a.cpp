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
    bool  (*method_pointer_9da1fb6a6bf65882ae710259f04066d5)(class ::clang::Decl  const *) = ::clang::TypedefNameDecl::classof;
    bool  (*method_pointer_f8e1f6071d4659898a9f1a6ee948ef5a)(enum ::clang::Decl::Kind ) = ::clang::TypedefNameDecl::classofKind;
    class ::clang::TagDecl  * (::clang::TypedefNameDecl::*method_pointer_fa27cd9f8b7c5f6c92dc593f65fa5f02)(bool ) const = &::clang::TypedefNameDecl::getAnonDeclWithTypedefName;
    class ::clang::TypedefNameDecl  * (::clang::TypedefNameDecl::*method_pointer_e4a23749fecf5a749ce0496a7ed2dae3)() = &::clang::TypedefNameDecl::getCanonicalDecl;
    class ::clang::TypedefNameDecl  const * (::clang::TypedefNameDecl::*method_pointer_764eca6ac1275357a0c936fdde99b2ff)() const = &::clang::TypedefNameDecl::getCanonicalDecl;
    class ::clang::QualType  (::clang::TypedefNameDecl::*method_pointer_7d546f5abd215e60a70fb607fac0f97f)() const = &::clang::TypedefNameDecl::getUnderlyingType;
    bool  (::clang::TypedefNameDecl::*method_pointer_61fd97353e50502ea23b723657d36638)() const = &::clang::TypedefNameDecl::isModed;
    boost::python::class_< class ::clang::TypedefNameDecl, autowig::HeldType< class ::clang::TypedefNameDecl >, boost::python::bases< class ::clang::TypeDecl >, boost::noncopyable > class_71391b5023a057ca94506c6564b06c2a("TypedefNameDecl", "", boost::python::no_init);
    class_71391b5023a057ca94506c6564b06c2a.def("classof", method_pointer_9da1fb6a6bf65882ae710259f04066d5, "");
    class_71391b5023a057ca94506c6564b06c2a.def("classof_kind", method_pointer_f8e1f6071d4659898a9f1a6ee948ef5a, "");
    class_71391b5023a057ca94506c6564b06c2a.def("get_anon_decl_with_typedef_name", method_pointer_fa27cd9f8b7c5f6c92dc593f65fa5f02, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_71391b5023a057ca94506c6564b06c2a.def("get_canonical_decl", method_pointer_e4a23749fecf5a749ce0496a7ed2dae3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_71391b5023a057ca94506c6564b06c2a.def("get_canonical_decl", method_pointer_764eca6ac1275357a0c936fdde99b2ff, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_71391b5023a057ca94506c6564b06c2a.def("get_underlying_type", method_pointer_7d546f5abd215e60a70fb607fac0f97f, "");
    class_71391b5023a057ca94506c6564b06c2a.def("is_moded", method_pointer_61fd97353e50502ea23b723657d36638, "");
    class_71391b5023a057ca94506c6564b06c2a.staticmethod("classof_kind");
    class_71391b5023a057ca94506c6564b06c2a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypedefNameDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypedefNameDecl >, autowig::HeldType< class ::clang::TypeDecl > >();
    }

}