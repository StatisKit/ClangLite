#include "_clanglite.h"


namespace autowig
{
}


void wrapper_7f94615a46d751afa71bfa020eacfecb()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::ObjCContainerDecl::*method_pointer_155dddcc114d5bbfac32c1cd078b36a6)(class ::clang::ObjCPropertyDecl  const *) const = &::clang::ObjCContainerDecl::HasUserDeclaredSetterMethod;
    class ::clang::ObjCContainerDecl  * (*method_pointer_16e2f493808d5fb7ab864109010fb62c)(class ::clang::DeclContext  const *) = ::clang::ObjCContainerDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_8d60e756d4325738bf8a744ec183650c)(class ::clang::ObjCContainerDecl  const *) = ::clang::ObjCContainerDecl::castToDeclContext;
    bool  (*method_pointer_01acf43acaa65e138c9077700abf82b7)(class ::clang::Decl  const *) = ::clang::ObjCContainerDecl::classof;
    bool  (*method_pointer_4bfcb46d061750c5b13cba2e87e31780)(enum ::clang::Decl::Kind ) = ::clang::ObjCContainerDecl::classofKind;
    boost::python::class_< class ::clang::ObjCContainerDecl, autowig::HeldType< class ::clang::ObjCContainerDecl >, boost::python::bases< class ::clang::NamedDecl, class ::clang::DeclContext >, boost::noncopyable > class_7f94615a46d751afa71bfa020eacfecb("ObjCContainerDecl", "", boost::python::no_init);
    class_7f94615a46d751afa71bfa020eacfecb.def("has_user_declared_setter_method", method_pointer_155dddcc114d5bbfac32c1cd078b36a6, "");
    class_7f94615a46d751afa71bfa020eacfecb.def("cast_from_decl_context", method_pointer_16e2f493808d5fb7ab864109010fb62c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7f94615a46d751afa71bfa020eacfecb.def("cast_to_decl_context", method_pointer_8d60e756d4325738bf8a744ec183650c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7f94615a46d751afa71bfa020eacfecb.def("classof", method_pointer_01acf43acaa65e138c9077700abf82b7, "");
    class_7f94615a46d751afa71bfa020eacfecb.def("classof_kind", method_pointer_4bfcb46d061750c5b13cba2e87e31780, "");
    class_7f94615a46d751afa71bfa020eacfecb.staticmethod("classof_kind");
    class_7f94615a46d751afa71bfa020eacfecb.staticmethod("classof");
    class_7f94615a46d751afa71bfa020eacfecb.staticmethod("cast_from_decl_context");
    class_7f94615a46d751afa71bfa020eacfecb.staticmethod("cast_to_decl_context");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCContainerDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCContainerDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCContainerDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}