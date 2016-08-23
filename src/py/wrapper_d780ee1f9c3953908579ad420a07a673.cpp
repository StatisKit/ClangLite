#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_d780ee1f9c3953908579ad420a07a673()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_b7b257872378597c9b76a0d3a84c8c52)(class ::clang::Decl  const *) = ::clang::BuiltinTemplateDecl::classof;
    bool  (*method_pointer_542678116c765314be7250e8fb395002)(enum ::clang::Decl::Kind ) = ::clang::BuiltinTemplateDecl::classofKind;
    boost::python::class_< class ::clang::BuiltinTemplateDecl, autowig::HeldType< class ::clang::BuiltinTemplateDecl >, boost::python::bases< class ::clang::TemplateDecl >, boost::noncopyable > class_d780ee1f9c3953908579ad420a07a673("BuiltinTemplateDecl", "", boost::python::no_init);
    class_d780ee1f9c3953908579ad420a07a673.def("classof", method_pointer_b7b257872378597c9b76a0d3a84c8c52, "");
    class_d780ee1f9c3953908579ad420a07a673.def("classof_kind", method_pointer_542678116c765314be7250e8fb395002, "");
    class_d780ee1f9c3953908579ad420a07a673.staticmethod("classof_kind");
    class_d780ee1f9c3953908579ad420a07a673.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::BuiltinTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BuiltinTemplateDecl >, autowig::HeldType< class ::clang::TemplateDecl > >();
    }

}