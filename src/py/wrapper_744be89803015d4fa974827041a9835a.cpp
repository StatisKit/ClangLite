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
    class ::clang::ObjCImplementationDecl  * (*method_pointer_4521a5019d1d5f0bbf6fc54fa082b227)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCImplementationDecl::CreateDeserialized;
    bool  (*method_pointer_f0bd1db2ddc1555e999ac6e0ca6874f1)(class ::clang::Decl  const *) = ::clang::ObjCImplementationDecl::classof;
    bool  (*method_pointer_e085b225b2325e9d945c439e3597c098)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplementationDecl::classofKind;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_0da4e64dc99e5bb38f9b3696dec878fc)() const = &::clang::ObjCImplementationDecl::getNumIvarInitializers;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplementationDecl::*method_pointer_fc3bfda649ab5d13b46553025677b502)() const = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplementationDecl::*method_pointer_b4050dc7e0715e7c8b10bc74457c15b1)() = &::clang::ObjCImplementationDecl::getSuperClass;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_5260bf5ff98657d98ef45f286fc5fe7b)() const = &::clang::ObjCImplementationDecl::hasDestructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_cc3a7efef3a65e8e9a8b65a3550b5781)() const = &::clang::ObjCImplementationDecl::hasNonZeroConstructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_692976a188f459bcbbbbb05f5412cc77)() const = &::clang::ObjCImplementationDecl::ivar_empty;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_f134d11cd9845eb0b22c02c1b7dd510d)() const = &::clang::ObjCImplementationDecl::ivar_size;
    void  (::clang::ObjCImplementationDecl::*method_pointer_e345785ec5cb5d158a3e51b1d651ff08)(bool ) = &::clang::ObjCImplementationDecl::setHasDestructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_266431747cc75abc8d0e0cdfc19d22ac)(bool ) = &::clang::ObjCImplementationDecl::setHasNonZeroConstructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_65b6e9dc34a15711ba1ae9b34431194b)(unsigned int ) = &::clang::ObjCImplementationDecl::setNumIvarInitializers;
    void  (::clang::ObjCImplementationDecl::*method_pointer_14a5f86181d6528a91aa43f00b6ceb56)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplementationDecl::setSuperClass;
    boost::python::class_< class ::clang::ObjCImplementationDecl, autowig::HeldType< class ::clang::ObjCImplementationDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_744be89803015d4fa974827041a9835a("ObjCImplementationDecl", "", boost::python::no_init);
    class_744be89803015d4fa974827041a9835a.def("create_deserialized", method_pointer_4521a5019d1d5f0bbf6fc54fa082b227, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("classof", method_pointer_f0bd1db2ddc1555e999ac6e0ca6874f1, "");
    class_744be89803015d4fa974827041a9835a.def("classof_kind", method_pointer_e085b225b2325e9d945c439e3597c098, "");
    class_744be89803015d4fa974827041a9835a.def("get_num_ivar_initializers", method_pointer_0da4e64dc99e5bb38f9b3696dec878fc, "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_fc3bfda649ab5d13b46553025677b502, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_b4050dc7e0715e7c8b10bc74457c15b1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("has_destructors", method_pointer_5260bf5ff98657d98ef45f286fc5fe7b, "");
    class_744be89803015d4fa974827041a9835a.def("has_non_zero_constructors", method_pointer_cc3a7efef3a65e8e9a8b65a3550b5781, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_empty", method_pointer_692976a188f459bcbbbbb05f5412cc77, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_size", method_pointer_f134d11cd9845eb0b22c02c1b7dd510d, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_destructors", method_pointer_e345785ec5cb5d158a3e51b1d651ff08, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_non_zero_constructors", method_pointer_266431747cc75abc8d0e0cdfc19d22ac, "");
    class_744be89803015d4fa974827041a9835a.def("set_num_ivar_initializers", method_pointer_65b6e9dc34a15711ba1ae9b34431194b, "");
    class_744be89803015d4fa974827041a9835a.def("set_super_class", method_pointer_14a5f86181d6528a91aa43f00b6ceb56, "");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof_kind");
    class_744be89803015d4fa974827041a9835a.staticmethod("create_deserialized");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplementationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplementationDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}