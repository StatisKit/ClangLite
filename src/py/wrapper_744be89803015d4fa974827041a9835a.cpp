#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_744be89803015d4fa974827041a9835a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCImplementationDecl  * (*method_pointer_289796dcd27e59ce82ae6ba9a2f8070c)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCImplementationDecl::CreateDeserialized;
    bool  (*method_pointer_23142bd43b595083899eb0c385568231)(class ::clang::Decl  const *) = ::clang::ObjCImplementationDecl::classof;
    bool  (*method_pointer_8c84e6194b6052fba0a15f2f1cf1c9df)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplementationDecl::classofKind;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_1e855494e3e7540b84721b41e3637873)() const = &::clang::ObjCImplementationDecl::getNumIvarInitializers;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplementationDecl::*method_pointer_d5b7eeb7f9d95df098b4e6cbf4c5715d)() const = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplementationDecl::*method_pointer_9a51c065e38051ba8ddb079bdea1804d)() = &::clang::ObjCImplementationDecl::getSuperClass;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_a3ac51d1c89352719eca3b49aa7f10df)() const = &::clang::ObjCImplementationDecl::hasDestructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_9e30189d37745f3daf10ad449d497351)() const = &::clang::ObjCImplementationDecl::hasNonZeroConstructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_3d85ac839f6258e7aabb03a4ad3cb790)() const = &::clang::ObjCImplementationDecl::ivar_empty;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_f95596da34fc5c5d831c0fc8422d3899)() const = &::clang::ObjCImplementationDecl::ivar_size;
    void  (::clang::ObjCImplementationDecl::*method_pointer_98e6c0a55de258b088b19c94203623c8)(bool ) = &::clang::ObjCImplementationDecl::setHasDestructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_ba5891c672dd5a939db857c7e5144f3a)(bool ) = &::clang::ObjCImplementationDecl::setHasNonZeroConstructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_c31b7e8c011450bfaecfc4cc8e4d63ad)(unsigned int ) = &::clang::ObjCImplementationDecl::setNumIvarInitializers;
    void  (::clang::ObjCImplementationDecl::*method_pointer_7602d551f84b5db3a4f35ecb47781ad0)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplementationDecl::setSuperClass;
    boost::python::class_< class ::clang::ObjCImplementationDecl, autowig::HeldType< class ::clang::ObjCImplementationDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_744be89803015d4fa974827041a9835a("ObjCImplementationDecl", "", boost::python::no_init);
    class_744be89803015d4fa974827041a9835a.def("create_deserialized", method_pointer_289796dcd27e59ce82ae6ba9a2f8070c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("classof", method_pointer_23142bd43b595083899eb0c385568231, "");
    class_744be89803015d4fa974827041a9835a.def("classof_kind", method_pointer_8c84e6194b6052fba0a15f2f1cf1c9df, "");
    class_744be89803015d4fa974827041a9835a.def("get_num_ivar_initializers", method_pointer_1e855494e3e7540b84721b41e3637873, "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_d5b7eeb7f9d95df098b4e6cbf4c5715d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_9a51c065e38051ba8ddb079bdea1804d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("has_destructors", method_pointer_a3ac51d1c89352719eca3b49aa7f10df, "");
    class_744be89803015d4fa974827041a9835a.def("has_non_zero_constructors", method_pointer_9e30189d37745f3daf10ad449d497351, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_empty", method_pointer_3d85ac839f6258e7aabb03a4ad3cb790, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_size", method_pointer_f95596da34fc5c5d831c0fc8422d3899, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_destructors", method_pointer_98e6c0a55de258b088b19c94203623c8, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_non_zero_constructors", method_pointer_ba5891c672dd5a939db857c7e5144f3a, "");
    class_744be89803015d4fa974827041a9835a.def("set_num_ivar_initializers", method_pointer_c31b7e8c011450bfaecfc4cc8e4d63ad, "");
    class_744be89803015d4fa974827041a9835a.def("set_super_class", method_pointer_7602d551f84b5db3a4f35ecb47781ad0, "");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof_kind");
    class_744be89803015d4fa974827041a9835a.staticmethod("create_deserialized");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplementationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplementationDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}