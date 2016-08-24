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
    bool  (*method_pointer_376af08cb3085af49002746f0e2b7858)(class ::clang::Decl  const *) = ::clang::TypedefNameDecl::classof;
    bool  (*method_pointer_354ecf3593ea5fe68dd2f26f9687b820)(enum ::clang::Decl::Kind ) = ::clang::TypedefNameDecl::classofKind;
    class ::clang::TagDecl  * (::clang::TypedefNameDecl::*method_pointer_567ccefadbe7570fa06551e5cf2cdfe7)(bool ) const = &::clang::TypedefNameDecl::getAnonDeclWithTypedefName;
    class ::clang::TypedefNameDecl  * (::clang::TypedefNameDecl::*method_pointer_ed56b08ed4b45c0c9222ea929bb9c292)() = &::clang::TypedefNameDecl::getCanonicalDecl;
    class ::clang::TypedefNameDecl  const * (::clang::TypedefNameDecl::*method_pointer_0fe3fed87c255a46a34c04e06b325347)() const = &::clang::TypedefNameDecl::getCanonicalDecl;
    class ::clang::QualType  (::clang::TypedefNameDecl::*method_pointer_765b7e417f7a526c8b92acd5f5254e7e)() const = &::clang::TypedefNameDecl::getUnderlyingType;
    bool  (::clang::TypedefNameDecl::*method_pointer_00dadc595e955a75a3132abf3860cf33)() const = &::clang::TypedefNameDecl::isModed;
    boost::python::class_< class ::clang::TypedefNameDecl, autowig::HeldType< class ::clang::TypedefNameDecl >, boost::python::bases< class ::clang::TypeDecl >, boost::noncopyable > class_71391b5023a057ca94506c6564b06c2a("TypedefNameDecl", "", boost::python::no_init);
    class_71391b5023a057ca94506c6564b06c2a.def("classof", method_pointer_376af08cb3085af49002746f0e2b7858, "");
    class_71391b5023a057ca94506c6564b06c2a.def("classof_kind", method_pointer_354ecf3593ea5fe68dd2f26f9687b820, "");
    class_71391b5023a057ca94506c6564b06c2a.def("get_anon_decl_with_typedef_name", method_pointer_567ccefadbe7570fa06551e5cf2cdfe7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_71391b5023a057ca94506c6564b06c2a.def("get_canonical_decl", method_pointer_ed56b08ed4b45c0c9222ea929bb9c292, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_71391b5023a057ca94506c6564b06c2a.def("get_canonical_decl", method_pointer_0fe3fed87c255a46a34c04e06b325347, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_71391b5023a057ca94506c6564b06c2a.def("get_underlying_type", method_pointer_765b7e417f7a526c8b92acd5f5254e7e, "");
    class_71391b5023a057ca94506c6564b06c2a.def("is_moded", method_pointer_00dadc595e955a75a3132abf3860cf33, "");
    class_71391b5023a057ca94506c6564b06c2a.staticmethod("classof_kind");
    class_71391b5023a057ca94506c6564b06c2a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypedefNameDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypedefNameDecl >, autowig::HeldType< class ::clang::TypeDecl > >();
    }

}