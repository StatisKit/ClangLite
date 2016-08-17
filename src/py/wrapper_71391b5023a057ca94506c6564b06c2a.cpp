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
    class ::clang::TypedefNameDecl  const * (::clang::TypedefNameDecl::*method_pointer_46cd565d49af5663ac8c86e1ed957969)() const = &::clang::TypedefNameDecl::getCanonicalDecl;
    bool  (*method_pointer_677a8f6bdb895b9f9a925e5daf977df7)(class ::clang::Decl  const *) = ::clang::TypedefNameDecl::classof;
    bool  (::clang::TypedefNameDecl::*method_pointer_19d448f6a01b5c6db9e70719138c4eca)() const = &::clang::TypedefNameDecl::isModed;
    class ::clang::TypedefNameDecl  * (::clang::TypedefNameDecl::*method_pointer_88a92a646d065e6a93aa4e12a28d492c)() = &::clang::TypedefNameDecl::getCanonicalDecl;
    bool  (*method_pointer_eb169f1540a85fb09e84fa9f40f9add2)(enum ::clang::Decl::Kind ) = ::clang::TypedefNameDecl::classofKind;
    class ::clang::TagDecl  * (::clang::TypedefNameDecl::*method_pointer_c05fda8d0d105e2180be92d35d54f73b)(bool ) const = &::clang::TypedefNameDecl::getAnonDeclWithTypedefName;
    boost::python::class_< class ::clang::TypedefNameDecl, autowig::HeldType< class ::clang::TypedefNameDecl >, boost::python::bases< class ::clang::TypeDecl >, boost::noncopyable > class_71391b5023a057ca94506c6564b06c2a("TypedefNameDecl", "", boost::python::no_init);
    class_71391b5023a057ca94506c6564b06c2a.def("get_canonical_decl", method_pointer_46cd565d49af5663ac8c86e1ed957969, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_71391b5023a057ca94506c6564b06c2a.def("classof", method_pointer_677a8f6bdb895b9f9a925e5daf977df7, "");
    class_71391b5023a057ca94506c6564b06c2a.def("is_moded", method_pointer_19d448f6a01b5c6db9e70719138c4eca, "");
    class_71391b5023a057ca94506c6564b06c2a.def("get_canonical_decl", method_pointer_88a92a646d065e6a93aa4e12a28d492c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_71391b5023a057ca94506c6564b06c2a.def("classof_kind", method_pointer_eb169f1540a85fb09e84fa9f40f9add2, "");
    class_71391b5023a057ca94506c6564b06c2a.def("get_anon_decl_with_typedef_name", method_pointer_c05fda8d0d105e2180be92d35d54f73b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_71391b5023a057ca94506c6564b06c2a.staticmethod("classof_kind");
    class_71391b5023a057ca94506c6564b06c2a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypedefNameDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypedefNameDecl >, autowig::HeldType< class ::clang::TypeDecl > >();
    }

}