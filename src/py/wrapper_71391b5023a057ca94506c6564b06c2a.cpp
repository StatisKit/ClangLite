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
    bool  (::clang::TypedefNameDecl::*method_pointer_548c12a1e5ff528fb25c60a29692d3af)() const = &::clang::TypedefNameDecl::isModed;
    bool  (*method_pointer_3c7c7006a4fc5adc90840c8b4daec032)(class ::clang::Decl  const *) = ::clang::TypedefNameDecl::classof;
    class ::clang::TagDecl  * (::clang::TypedefNameDecl::*method_pointer_77dc41b54d015112b0764ba9f70f0c01)(bool ) const = &::clang::TypedefNameDecl::getAnonDeclWithTypedefName;
    class ::clang::TypedefNameDecl  const * (::clang::TypedefNameDecl::*method_pointer_a2720eef69b751b4946285aa18bd5256)() const = &::clang::TypedefNameDecl::getCanonicalDecl;
    class ::clang::TypedefNameDecl  * (::clang::TypedefNameDecl::*method_pointer_77b637bcee09508fbdc3d24f2c7c6b1e)() = &::clang::TypedefNameDecl::getCanonicalDecl;
    bool  (*method_pointer_f849ff16b01759d29405d3cf68807853)(enum ::clang::Decl::Kind ) = ::clang::TypedefNameDecl::classofKind;
    boost::python::class_< class ::clang::TypedefNameDecl, autowig::HeldType< class ::clang::TypedefNameDecl >, boost::python::bases< class ::clang::TypeDecl >, boost::noncopyable > class_71391b5023a057ca94506c6564b06c2a("TypedefNameDecl", "", boost::python::no_init);
    class_71391b5023a057ca94506c6564b06c2a.def("is_moded", method_pointer_548c12a1e5ff528fb25c60a29692d3af, "");
    class_71391b5023a057ca94506c6564b06c2a.def("classof", method_pointer_3c7c7006a4fc5adc90840c8b4daec032, "");
    class_71391b5023a057ca94506c6564b06c2a.def("get_anon_decl_with_typedef_name", method_pointer_77dc41b54d015112b0764ba9f70f0c01, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_71391b5023a057ca94506c6564b06c2a.def("get_canonical_decl", method_pointer_a2720eef69b751b4946285aa18bd5256, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_71391b5023a057ca94506c6564b06c2a.def("get_canonical_decl", method_pointer_77b637bcee09508fbdc3d24f2c7c6b1e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_71391b5023a057ca94506c6564b06c2a.def("classof_kind", method_pointer_f849ff16b01759d29405d3cf68807853, "");
    class_71391b5023a057ca94506c6564b06c2a.staticmethod("classof_kind");
    class_71391b5023a057ca94506c6564b06c2a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypedefNameDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypedefNameDecl >, autowig::HeldType< class ::clang::TypeDecl > >();
    }

}