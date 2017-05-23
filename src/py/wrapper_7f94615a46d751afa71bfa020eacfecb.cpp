#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::ObjCContainerDecl const volatile * get_pointer<class ::clang::ObjCContainerDecl const volatile >(class ::clang::ObjCContainerDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7f94615a46d751afa71bfa020eacfecb()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::ObjCContainerDecl::*method_pointer_c6774f70a0225632985a797510a1ce49)(class ::clang::ObjCPropertyDecl const *) const = &::clang::ObjCContainerDecl::HasUserDeclaredSetterMethod;
    class ::clang::SourceLocation  (::clang::ObjCContainerDecl::*method_pointer_5401646073bb5821ba5607c7079e256c)() const = &::clang::ObjCContainerDecl::getAtStartLoc;
    void  (::clang::ObjCContainerDecl::*method_pointer_37c23eea0de25866a599f42c9e42350e)(class ::clang::SourceLocation ) = &::clang::ObjCContainerDecl::setAtStartLoc;
    bool  (*method_pointer_5540f186565f538fb84fdd725a963480)(class ::clang::Decl const *) = ::clang::ObjCContainerDecl::classof;
    bool  (*method_pointer_b763881bc8705a7b80e85cdf41ccb7ae)(enum ::clang::Decl::Kind ) = ::clang::ObjCContainerDecl::classofKind;
    class ::clang::DeclContext * (*method_pointer_d4cf67fd2b7354c185f7790407628d66)(class ::clang::ObjCContainerDecl const *) = ::clang::ObjCContainerDecl::castToDeclContext;
    class ::clang::ObjCContainerDecl * (*method_pointer_9999f3d1a1625c8e8458ecd7c9ae7de6)(class ::clang::DeclContext const *) = ::clang::ObjCContainerDecl::castFromDeclContext;
    boost::python::class_< class ::clang::ObjCContainerDecl, autowig::Held< class ::clang::ObjCContainerDecl >::Type, boost::python::bases< class ::clang::NamedDecl, class ::clang::DeclContext >, boost::noncopyable > class_7f94615a46d751afa71bfa020eacfecb("ObjCContainerDecl", "", boost::python::no_init);
    class_7f94615a46d751afa71bfa020eacfecb.def("has_user_declared_setter_method", method_pointer_c6774f70a0225632985a797510a1ce49, "");
    class_7f94615a46d751afa71bfa020eacfecb.def("get_at_start_loc", method_pointer_5401646073bb5821ba5607c7079e256c, "");
    class_7f94615a46d751afa71bfa020eacfecb.def("set_at_start_loc", method_pointer_37c23eea0de25866a599f42c9e42350e, "");
    class_7f94615a46d751afa71bfa020eacfecb.def("classof", method_pointer_5540f186565f538fb84fdd725a963480, "");
    class_7f94615a46d751afa71bfa020eacfecb.def("classof_kind", method_pointer_b763881bc8705a7b80e85cdf41ccb7ae, "");
    class_7f94615a46d751afa71bfa020eacfecb.def("cast_to_decl_context", method_pointer_d4cf67fd2b7354c185f7790407628d66, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7f94615a46d751afa71bfa020eacfecb.def("cast_from_decl_context", method_pointer_9999f3d1a1625c8e8458ecd7c9ae7de6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7f94615a46d751afa71bfa020eacfecb.staticmethod("classof_kind");
    class_7f94615a46d751afa71bfa020eacfecb.staticmethod("classof");
    class_7f94615a46d751afa71bfa020eacfecb.staticmethod("cast_from_decl_context");
    class_7f94615a46d751afa71bfa020eacfecb.staticmethod("cast_to_decl_context");

    if(autowig::Held< class ::clang::ObjCContainerDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::ObjCContainerDecl >::Type, autowig::Held< class ::clang::NamedDecl >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::clang::ObjCContainerDecl >::Type, autowig::Held< class ::clang::DeclContext >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::ObjCContainerDecl >::Type, boost::python::objects::make_ptr_instance< class ::clang::ObjCContainerDecl, boost::python::objects::pointer_holder< autowig::Held< class ::clang::ObjCContainerDecl >::Type, class ::clang::ObjCContainerDecl > > >();
    }

}