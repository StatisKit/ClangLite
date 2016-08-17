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
    void  (::clang::ObjCImplementationDecl::*method_pointer_a185032877575f4a9065da2041d1d7d7)(bool ) = &::clang::ObjCImplementationDecl::setHasDestructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_6249a580c1f6544992d8218c3a7addec)(unsigned int ) = &::clang::ObjCImplementationDecl::setNumIvarInitializers;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_7e398747a9b655549bb089854bb7fcf4)() const = &::clang::ObjCImplementationDecl::getNumIvarInitializers;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplementationDecl::*method_pointer_18d10a6bc2e553d4af0886b7350dfee9)() = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::ObjCImplementationDecl  * (*method_pointer_09a655ebbb015b2c9d3352e9861f190d)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCImplementationDecl::CreateDeserialized;
    bool  (*method_pointer_74c2f37daf395db49def0305c674f955)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplementationDecl::classofKind;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_20bc8a812aab5b47918f7a3273576318)() const = &::clang::ObjCImplementationDecl::hasNonZeroConstructors;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_09b4a69a3bc0524d9ed4a29a6cb73b29)() const = &::clang::ObjCImplementationDecl::ivar_size;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_429f148c0f875581be0f2f746f903563)() const = &::clang::ObjCImplementationDecl::hasDestructors;
    bool  (*method_pointer_8545b3cc49f75193a1c86793431af563)(class ::clang::Decl  const *) = ::clang::ObjCImplementationDecl::classof;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_8d47a39a34d155e6becf3392c3c9891c)() const = &::clang::ObjCImplementationDecl::ivar_empty;
    void  (::clang::ObjCImplementationDecl::*method_pointer_63c597e854b25296abb9a96cb1d22c88)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplementationDecl::setSuperClass;
    void  (::clang::ObjCImplementationDecl::*method_pointer_12a24c853fca502db62fa6b2c2b76307)(bool ) = &::clang::ObjCImplementationDecl::setHasNonZeroConstructors;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplementationDecl::*method_pointer_accfeeed6f4252718acc34975eb152e7)() const = &::clang::ObjCImplementationDecl::getSuperClass;
    boost::python::class_< class ::clang::ObjCImplementationDecl, autowig::HeldType< class ::clang::ObjCImplementationDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_744be89803015d4fa974827041a9835a("ObjCImplementationDecl", "", boost::python::no_init);
    class_744be89803015d4fa974827041a9835a.def("set_has_destructors", method_pointer_a185032877575f4a9065da2041d1d7d7, "");
    class_744be89803015d4fa974827041a9835a.def("set_num_ivar_initializers", method_pointer_6249a580c1f6544992d8218c3a7addec, "");
    class_744be89803015d4fa974827041a9835a.def("get_num_ivar_initializers", method_pointer_7e398747a9b655549bb089854bb7fcf4, "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_18d10a6bc2e553d4af0886b7350dfee9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("create_deserialized", method_pointer_09a655ebbb015b2c9d3352e9861f190d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("classof_kind", method_pointer_74c2f37daf395db49def0305c674f955, "");
    class_744be89803015d4fa974827041a9835a.def("has_non_zero_constructors", method_pointer_20bc8a812aab5b47918f7a3273576318, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_size", method_pointer_09b4a69a3bc0524d9ed4a29a6cb73b29, "");
    class_744be89803015d4fa974827041a9835a.def("has_destructors", method_pointer_429f148c0f875581be0f2f746f903563, "");
    class_744be89803015d4fa974827041a9835a.def("classof", method_pointer_8545b3cc49f75193a1c86793431af563, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_empty", method_pointer_8d47a39a34d155e6becf3392c3c9891c, "");
    class_744be89803015d4fa974827041a9835a.def("set_super_class", method_pointer_63c597e854b25296abb9a96cb1d22c88, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_non_zero_constructors", method_pointer_12a24c853fca502db62fa6b2c2b76307, "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_accfeeed6f4252718acc34975eb152e7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof_kind");
    class_744be89803015d4fa974827041a9835a.staticmethod("create_deserialized");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplementationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplementationDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}