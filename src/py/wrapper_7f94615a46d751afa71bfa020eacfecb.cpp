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
    bool  (::clang::ObjCContainerDecl::*method_pointer_f1ddef0c2fc6526bb78298a5d13e647a)(class ::clang::ObjCPropertyDecl  const *) const = &::clang::ObjCContainerDecl::HasUserDeclaredSetterMethod;
    class ::clang::ObjCContainerDecl  * (*method_pointer_c9a846cf0da55edc9affee6f52a08eae)(class ::clang::DeclContext  const *) = ::clang::ObjCContainerDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_97035048b225519396a5fbaf2215b9af)(class ::clang::ObjCContainerDecl  const *) = ::clang::ObjCContainerDecl::castToDeclContext;
    bool  (*method_pointer_cbc46d67c5a7544281dea0552e5e6453)(class ::clang::Decl  const *) = ::clang::ObjCContainerDecl::classof;
    bool  (*method_pointer_28e3fdbfe9825cd5a69ad6bb176ebd54)(enum ::clang::Decl::Kind ) = ::clang::ObjCContainerDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCContainerDecl::*method_pointer_1fefcb06b3175a978abc693decd6dab6)() const = &::clang::ObjCContainerDecl::getAtStartLoc;
    void  (::clang::ObjCContainerDecl::*method_pointer_1469b1b29ad25468a34e6e932497327a)(class ::clang::SourceLocation ) = &::clang::ObjCContainerDecl::setAtStartLoc;
    boost::python::class_< class ::clang::ObjCContainerDecl, autowig::HeldType< class ::clang::ObjCContainerDecl >, boost::python::bases< class ::clang::NamedDecl, class ::clang::DeclContext >, boost::noncopyable > class_7f94615a46d751afa71bfa020eacfecb("ObjCContainerDecl", "", boost::python::no_init);
    class_7f94615a46d751afa71bfa020eacfecb.def("has_user_declared_setter_method", method_pointer_f1ddef0c2fc6526bb78298a5d13e647a, "");
    class_7f94615a46d751afa71bfa020eacfecb.def("cast_from_decl_context", method_pointer_c9a846cf0da55edc9affee6f52a08eae, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7f94615a46d751afa71bfa020eacfecb.def("cast_to_decl_context", method_pointer_97035048b225519396a5fbaf2215b9af, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7f94615a46d751afa71bfa020eacfecb.def("classof", method_pointer_cbc46d67c5a7544281dea0552e5e6453, "");
    class_7f94615a46d751afa71bfa020eacfecb.def("classof_kind", method_pointer_28e3fdbfe9825cd5a69ad6bb176ebd54, "");
    class_7f94615a46d751afa71bfa020eacfecb.def("get_at_start_loc", method_pointer_1fefcb06b3175a978abc693decd6dab6, "");
    class_7f94615a46d751afa71bfa020eacfecb.def("set_at_start_loc", method_pointer_1469b1b29ad25468a34e6e932497327a, "");
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