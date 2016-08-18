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
    class ::clang::ObjCImplementationDecl  * (*method_pointer_6086042fcfd15b5db728a2e512a6c284)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCImplementationDecl::CreateDeserialized;
    bool  (*method_pointer_5e07a74d60ba539d86dddb0e629bdccb)(class ::clang::Decl  const *) = ::clang::ObjCImplementationDecl::classof;
    bool  (*method_pointer_2a2e1320324d52709c055b74bb90a3a7)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplementationDecl::classofKind;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_67f3852f64065cbbbc61be00576e28aa)() const = &::clang::ObjCImplementationDecl::getNumIvarInitializers;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplementationDecl::*method_pointer_46e1befce84c5b2a97d580d2d899cc46)() = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplementationDecl::*method_pointer_d4cdfb35bde05e66b9f6626f84e52d35)() const = &::clang::ObjCImplementationDecl::getSuperClass;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_4d2db74f94795a02bef3701a2040a2b1)() const = &::clang::ObjCImplementationDecl::hasDestructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_99a2c8089b835b8faa9043a6aae82924)() const = &::clang::ObjCImplementationDecl::hasNonZeroConstructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_4d657ce3a22c51e2a6ff66575af39938)() const = &::clang::ObjCImplementationDecl::ivar_empty;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_46dac220f09c5c9fa56dbf9028b5fcee)() const = &::clang::ObjCImplementationDecl::ivar_size;
    void  (::clang::ObjCImplementationDecl::*method_pointer_6a8bb238327c5cd59f915b54ee3c693d)(bool ) = &::clang::ObjCImplementationDecl::setHasDestructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_c0806f0ee502522a84553cbcc27100d1)(bool ) = &::clang::ObjCImplementationDecl::setHasNonZeroConstructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_177e285f648754b899938becc7fcdcbd)(unsigned int ) = &::clang::ObjCImplementationDecl::setNumIvarInitializers;
    void  (::clang::ObjCImplementationDecl::*method_pointer_a0b00a09dc475a37811c8a05de5af994)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplementationDecl::setSuperClass;
    boost::python::class_< class ::clang::ObjCImplementationDecl, autowig::HeldType< class ::clang::ObjCImplementationDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_744be89803015d4fa974827041a9835a("ObjCImplementationDecl", "", boost::python::no_init);
    class_744be89803015d4fa974827041a9835a.def("create_deserialized", method_pointer_6086042fcfd15b5db728a2e512a6c284, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("classof", method_pointer_5e07a74d60ba539d86dddb0e629bdccb, "");
    class_744be89803015d4fa974827041a9835a.def("classof_kind", method_pointer_2a2e1320324d52709c055b74bb90a3a7, "");
    class_744be89803015d4fa974827041a9835a.def("get_num_ivar_initializers", method_pointer_67f3852f64065cbbbc61be00576e28aa, "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_46e1befce84c5b2a97d580d2d899cc46, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_d4cdfb35bde05e66b9f6626f84e52d35, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("has_destructors", method_pointer_4d2db74f94795a02bef3701a2040a2b1, "");
    class_744be89803015d4fa974827041a9835a.def("has_non_zero_constructors", method_pointer_99a2c8089b835b8faa9043a6aae82924, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_empty", method_pointer_4d657ce3a22c51e2a6ff66575af39938, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_size", method_pointer_46dac220f09c5c9fa56dbf9028b5fcee, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_destructors", method_pointer_6a8bb238327c5cd59f915b54ee3c693d, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_non_zero_constructors", method_pointer_c0806f0ee502522a84553cbcc27100d1, "");
    class_744be89803015d4fa974827041a9835a.def("set_num_ivar_initializers", method_pointer_177e285f648754b899938becc7fcdcbd, "");
    class_744be89803015d4fa974827041a9835a.def("set_super_class", method_pointer_a0b00a09dc475a37811c8a05de5af994, "");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof_kind");
    class_744be89803015d4fa974827041a9835a.staticmethod("create_deserialized");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplementationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplementationDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}