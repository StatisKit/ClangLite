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
    bool  (::clang::ObjCContainerDecl::*method_pointer_d64d3bf0387d56dcb16df69af9ed3eb3)(class ::clang::ObjCPropertyDecl  const *) const = &::clang::ObjCContainerDecl::HasUserDeclaredSetterMethod;
    class ::clang::ObjCContainerDecl  * (*method_pointer_71e1eee639595251a35b8429b999ff30)(class ::clang::DeclContext  const *) = ::clang::ObjCContainerDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_c1e86250818a5568b1a099ad84aa768c)(class ::clang::ObjCContainerDecl  const *) = ::clang::ObjCContainerDecl::castToDeclContext;
    bool  (*method_pointer_c9c67d15e6bb5c47bf9037ffbedf0bdf)(class ::clang::Decl  const *) = ::clang::ObjCContainerDecl::classof;
    bool  (*method_pointer_708104b3579a5cb3a3ad722e62d73977)(enum ::clang::Decl::Kind ) = ::clang::ObjCContainerDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCContainerDecl::*method_pointer_db280d37053458b79ed0d82719330ec1)() const = &::clang::ObjCContainerDecl::getAtStartLoc;
    void  (::clang::ObjCContainerDecl::*method_pointer_d8abb97357e85147a55f32cb5c83f432)(class ::clang::SourceLocation ) = &::clang::ObjCContainerDecl::setAtStartLoc;
    boost::python::class_< class ::clang::ObjCContainerDecl, autowig::HeldType< class ::clang::ObjCContainerDecl >, boost::python::bases< class ::clang::NamedDecl, class ::clang::DeclContext >, boost::noncopyable > class_7f94615a46d751afa71bfa020eacfecb("ObjCContainerDecl", "", boost::python::no_init);
    class_7f94615a46d751afa71bfa020eacfecb.def("has_user_declared_setter_method", method_pointer_d64d3bf0387d56dcb16df69af9ed3eb3, "");
    class_7f94615a46d751afa71bfa020eacfecb.def("cast_from_decl_context", method_pointer_71e1eee639595251a35b8429b999ff30, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7f94615a46d751afa71bfa020eacfecb.def("cast_to_decl_context", method_pointer_c1e86250818a5568b1a099ad84aa768c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7f94615a46d751afa71bfa020eacfecb.def("classof", method_pointer_c9c67d15e6bb5c47bf9037ffbedf0bdf, "");
    class_7f94615a46d751afa71bfa020eacfecb.def("classof_kind", method_pointer_708104b3579a5cb3a3ad722e62d73977, "");
    class_7f94615a46d751afa71bfa020eacfecb.def("get_at_start_loc", method_pointer_db280d37053458b79ed0d82719330ec1, "");
    class_7f94615a46d751afa71bfa020eacfecb.def("set_at_start_loc", method_pointer_d8abb97357e85147a55f32cb5c83f432, "");
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