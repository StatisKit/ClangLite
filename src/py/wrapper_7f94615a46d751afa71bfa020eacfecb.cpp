#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_7f94615a46d751afa71bfa020eacfecb()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::ObjCContainerDecl::*method_pointer_ac10adb0a98f5cec9ad1efe06a4ed349)(class ::clang::ObjCPropertyDecl  const *) const = &::clang::ObjCContainerDecl::HasUserDeclaredSetterMethod;
    class ::clang::ObjCContainerDecl  * (*method_pointer_c2d275774bbf5e77a9999ebe31e243a6)(class ::clang::DeclContext  const *) = ::clang::ObjCContainerDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_98c852330e325c86af3b899405fce42f)(class ::clang::ObjCContainerDecl  const *) = ::clang::ObjCContainerDecl::castToDeclContext;
    bool  (*method_pointer_f9ce16b32a8150d49a5be886a54e5f48)(class ::clang::Decl  const *) = ::clang::ObjCContainerDecl::classof;
    bool  (*method_pointer_f955de01a2bb5cfa88d26eb503c6e2b0)(enum ::clang::Decl::Kind ) = ::clang::ObjCContainerDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCContainerDecl::*method_pointer_60bba09858265baa872e986b399a0432)() const = &::clang::ObjCContainerDecl::getAtStartLoc;
    void  (::clang::ObjCContainerDecl::*method_pointer_cd276736687f54138059b796a2847742)(class ::clang::SourceLocation ) = &::clang::ObjCContainerDecl::setAtStartLoc;
    boost::python::class_< class ::clang::ObjCContainerDecl, autowig::HeldType< class ::clang::ObjCContainerDecl >, boost::python::bases< class ::clang::NamedDecl, class ::clang::DeclContext >, boost::noncopyable > class_7f94615a46d751afa71bfa020eacfecb("ObjCContainerDecl", "", boost::python::no_init);
    class_7f94615a46d751afa71bfa020eacfecb.def("has_user_declared_setter_method", method_pointer_ac10adb0a98f5cec9ad1efe06a4ed349, "");
    class_7f94615a46d751afa71bfa020eacfecb.def("cast_from_decl_context", method_pointer_c2d275774bbf5e77a9999ebe31e243a6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7f94615a46d751afa71bfa020eacfecb.def("cast_to_decl_context", method_pointer_98c852330e325c86af3b899405fce42f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7f94615a46d751afa71bfa020eacfecb.def("classof", method_pointer_f9ce16b32a8150d49a5be886a54e5f48, "");
    class_7f94615a46d751afa71bfa020eacfecb.def("classof_kind", method_pointer_f955de01a2bb5cfa88d26eb503c6e2b0, "");
    class_7f94615a46d751afa71bfa020eacfecb.def("get_at_start_loc", method_pointer_60bba09858265baa872e986b399a0432, "");
    class_7f94615a46d751afa71bfa020eacfecb.def("set_at_start_loc", method_pointer_cd276736687f54138059b796a2847742, "");
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