#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_744be89803015d4fa974827041a9835a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCImplementationDecl  * (*method_pointer_806a8c861f325726933fe4a05df9aebb)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCImplementationDecl::CreateDeserialized;
    bool  (*method_pointer_b74627442577504d8597da37d0491177)(class ::clang::Decl  const *) = ::clang::ObjCImplementationDecl::classof;
    bool  (*method_pointer_c9206022b30f57d2a30df04f48f326da)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplementationDecl::classofKind;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_dcb7bd102e5e547f801d8fef2dc987d6)() const = &::clang::ObjCImplementationDecl::getNumIvarInitializers;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplementationDecl::*method_pointer_df11448ff3855726960dad96251bfdb3)() const = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplementationDecl::*method_pointer_0048a1b0aacc583c8f0184ca790bf06f)() = &::clang::ObjCImplementationDecl::getSuperClass;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_69f5e779baed5c10bd27fa64405b14ba)() const = &::clang::ObjCImplementationDecl::hasDestructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_45165d463eba5e6495cea48a63aa85a9)() const = &::clang::ObjCImplementationDecl::hasNonZeroConstructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_9fb8797908b15fe0bf008201f11e624e)() const = &::clang::ObjCImplementationDecl::ivar_empty;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_1793659aa3bd5df599bc432b0a49b333)() const = &::clang::ObjCImplementationDecl::ivar_size;
    void  (::clang::ObjCImplementationDecl::*method_pointer_284de14ea7d95132bedbc0e78ee2c73b)(bool ) = &::clang::ObjCImplementationDecl::setHasDestructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_1306c02814d556d49083ad788f86f9f6)(bool ) = &::clang::ObjCImplementationDecl::setHasNonZeroConstructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_e85edeea445b577589d40f5d7028e6df)(unsigned int ) = &::clang::ObjCImplementationDecl::setNumIvarInitializers;
    void  (::clang::ObjCImplementationDecl::*method_pointer_8a679a782fa55403883ca3b405a69ad6)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplementationDecl::setSuperClass;
    boost::python::class_< class ::clang::ObjCImplementationDecl, autowig::HeldType< class ::clang::ObjCImplementationDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_744be89803015d4fa974827041a9835a("ObjCImplementationDecl", "", boost::python::no_init);
    class_744be89803015d4fa974827041a9835a.def("create_deserialized", method_pointer_806a8c861f325726933fe4a05df9aebb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("classof", method_pointer_b74627442577504d8597da37d0491177, "");
    class_744be89803015d4fa974827041a9835a.def("classof_kind", method_pointer_c9206022b30f57d2a30df04f48f326da, "");
    class_744be89803015d4fa974827041a9835a.def("get_num_ivar_initializers", method_pointer_dcb7bd102e5e547f801d8fef2dc987d6, "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_df11448ff3855726960dad96251bfdb3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_0048a1b0aacc583c8f0184ca790bf06f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("has_destructors", method_pointer_69f5e779baed5c10bd27fa64405b14ba, "");
    class_744be89803015d4fa974827041a9835a.def("has_non_zero_constructors", method_pointer_45165d463eba5e6495cea48a63aa85a9, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_empty", method_pointer_9fb8797908b15fe0bf008201f11e624e, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_size", method_pointer_1793659aa3bd5df599bc432b0a49b333, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_destructors", method_pointer_284de14ea7d95132bedbc0e78ee2c73b, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_non_zero_constructors", method_pointer_1306c02814d556d49083ad788f86f9f6, "");
    class_744be89803015d4fa974827041a9835a.def("set_num_ivar_initializers", method_pointer_e85edeea445b577589d40f5d7028e6df, "");
    class_744be89803015d4fa974827041a9835a.def("set_super_class", method_pointer_8a679a782fa55403883ca3b405a69ad6, "");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof_kind");
    class_744be89803015d4fa974827041a9835a.staticmethod("create_deserialized");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplementationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplementationDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}