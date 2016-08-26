#include "_clanglite.h"


namespace autowig
{
}


void wrapper_d780ee1f9c3953908579ad420a07a673()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_35099e3a3101516992fbe73a8a078af3)(class ::clang::Decl  const *) = ::clang::BuiltinTemplateDecl::classof;
    bool  (*method_pointer_9b8630ac3d79579bbae959d8875f5c15)(enum ::clang::Decl::Kind ) = ::clang::BuiltinTemplateDecl::classofKind;
    boost::python::class_< class ::clang::BuiltinTemplateDecl, autowig::HeldType< class ::clang::BuiltinTemplateDecl >, boost::python::bases< class ::clang::TemplateDecl >, boost::noncopyable > class_d780ee1f9c3953908579ad420a07a673("BuiltinTemplateDecl", "", boost::python::no_init);
    class_d780ee1f9c3953908579ad420a07a673.def("classof", method_pointer_35099e3a3101516992fbe73a8a078af3, "");
    class_d780ee1f9c3953908579ad420a07a673.def("classof_kind", method_pointer_9b8630ac3d79579bbae959d8875f5c15, "");
    class_d780ee1f9c3953908579ad420a07a673.staticmethod("classof_kind");
    class_d780ee1f9c3953908579ad420a07a673.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::BuiltinTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BuiltinTemplateDecl >, autowig::HeldType< class ::clang::TemplateDecl > >();
    }

}