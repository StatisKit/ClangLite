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
    class ::clang::ObjCImplementationDecl  * (*method_pointer_de08738ae9f857619b5f883806666876)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCImplementationDecl::CreateDeserialized;
    bool  (*method_pointer_20336ffaec18533582c9ef402810d347)(class ::clang::Decl  const *) = ::clang::ObjCImplementationDecl::classof;
    bool  (*method_pointer_8d3fdda6bce552029401d5aaadbf0ee1)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplementationDecl::classofKind;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_a1664d9dee20500a996e823c006d844f)() const = &::clang::ObjCImplementationDecl::getNumIvarInitializers;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplementationDecl::*method_pointer_6e9abbd361a456479b475514ed284dc7)() = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplementationDecl::*method_pointer_d8f1a57c09c351c6a0d7193fc1d43879)() const = &::clang::ObjCImplementationDecl::getSuperClass;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_308b92108d505ee8bb1ec823dcda97a6)() const = &::clang::ObjCImplementationDecl::hasDestructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_1962438bf24d5e719226cd9f0daec191)() const = &::clang::ObjCImplementationDecl::hasNonZeroConstructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_c13e9c61d81c5714af305733ea525a33)() const = &::clang::ObjCImplementationDecl::ivar_empty;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_e9416acb96c65d4ba9729c90b2c86eef)() const = &::clang::ObjCImplementationDecl::ivar_size;
    void  (::clang::ObjCImplementationDecl::*method_pointer_dee89fbbbfb0549196ab3ec2aa4b4189)(bool ) = &::clang::ObjCImplementationDecl::setHasDestructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_9c03fa72c98e5669b95e1cb272ba8757)(bool ) = &::clang::ObjCImplementationDecl::setHasNonZeroConstructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_25395516eae85e9eac4a0707d4831070)(unsigned int ) = &::clang::ObjCImplementationDecl::setNumIvarInitializers;
    void  (::clang::ObjCImplementationDecl::*method_pointer_118572029c235959a91c6113eec4d104)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplementationDecl::setSuperClass;
    boost::python::class_< class ::clang::ObjCImplementationDecl, autowig::HeldType< class ::clang::ObjCImplementationDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_744be89803015d4fa974827041a9835a("ObjCImplementationDecl", "", boost::python::no_init);
    class_744be89803015d4fa974827041a9835a.def("create_deserialized", method_pointer_de08738ae9f857619b5f883806666876, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("classof", method_pointer_20336ffaec18533582c9ef402810d347, "");
    class_744be89803015d4fa974827041a9835a.def("classof_kind", method_pointer_8d3fdda6bce552029401d5aaadbf0ee1, "");
    class_744be89803015d4fa974827041a9835a.def("get_num_ivar_initializers", method_pointer_a1664d9dee20500a996e823c006d844f, "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_6e9abbd361a456479b475514ed284dc7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_d8f1a57c09c351c6a0d7193fc1d43879, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("has_destructors", method_pointer_308b92108d505ee8bb1ec823dcda97a6, "");
    class_744be89803015d4fa974827041a9835a.def("has_non_zero_constructors", method_pointer_1962438bf24d5e719226cd9f0daec191, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_empty", method_pointer_c13e9c61d81c5714af305733ea525a33, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_size", method_pointer_e9416acb96c65d4ba9729c90b2c86eef, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_destructors", method_pointer_dee89fbbbfb0549196ab3ec2aa4b4189, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_non_zero_constructors", method_pointer_9c03fa72c98e5669b95e1cb272ba8757, "");
    class_744be89803015d4fa974827041a9835a.def("set_num_ivar_initializers", method_pointer_25395516eae85e9eac4a0707d4831070, "");
    class_744be89803015d4fa974827041a9835a.def("set_super_class", method_pointer_118572029c235959a91c6113eec4d104, "");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof_kind");
    class_744be89803015d4fa974827041a9835a.staticmethod("create_deserialized");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplementationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplementationDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}