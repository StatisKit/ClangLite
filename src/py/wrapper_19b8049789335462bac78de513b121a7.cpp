#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_19b8049789335462bac78de513b121a7()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_d93f2f28d5f05ed58d1a88233b2a01eb)(class ::clang::Decl  const *) = ::clang::ObjCPropertyImplDecl::classof;
    bool  (*method_pointer_d3fd9a24315359d7833230629ff82d2b)(enum ::clang::Decl::Kind ) = ::clang::ObjCPropertyImplDecl::classofKind;
    bool  (::clang::ObjCPropertyImplDecl::*method_pointer_2566bb1318255e25913d3b8bbdaa924d)() const = &::clang::ObjCPropertyImplDecl::isIvarNameSpecified;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_7bacae9851205545a3a46a043812d53d)(class ::clang::ObjCPropertyDecl  *) = &::clang::ObjCPropertyImplDecl::setPropertyDecl;
    class ::clang::ObjCIvarDecl  * (::clang::ObjCPropertyImplDecl::*method_pointer_256cc70cbc1b52e7a9afed1e4b71ad66)() const = &::clang::ObjCPropertyImplDecl::getPropertyIvarDecl;
    class ::clang::ObjCPropertyDecl  * (::clang::ObjCPropertyImplDecl::*method_pointer_ffc57a934f985c00aee646df1dbcdadd)() const = &::clang::ObjCPropertyImplDecl::getPropertyDecl;
    class ::clang::ObjCPropertyImplDecl  * (*method_pointer_143c6b8e033452b983c61d83111b3146)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCPropertyImplDecl::CreateDeserialized;
    boost::python::class_< class ::clang::ObjCPropertyImplDecl, autowig::HeldType< class ::clang::ObjCPropertyImplDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_19b8049789335462bac78de513b121a7("ObjCPropertyImplDecl", "", boost::python::no_init);
    class_19b8049789335462bac78de513b121a7.def("classof", method_pointer_d93f2f28d5f05ed58d1a88233b2a01eb, "");
    class_19b8049789335462bac78de513b121a7.def("classof_kind", method_pointer_d3fd9a24315359d7833230629ff82d2b, "");
    class_19b8049789335462bac78de513b121a7.def("is_ivar_name_specified", method_pointer_2566bb1318255e25913d3b8bbdaa924d, "");
    class_19b8049789335462bac78de513b121a7.def("set_property_decl", method_pointer_7bacae9851205545a3a46a043812d53d, "");
    class_19b8049789335462bac78de513b121a7.def("get_property_ivar_decl", method_pointer_256cc70cbc1b52e7a9afed1e4b71ad66, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("get_property_decl", method_pointer_ffc57a934f985c00aee646df1dbcdadd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("create_deserialized", method_pointer_143c6b8e033452b983c61d83111b3146, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.staticmethod("classof_kind");
    class_19b8049789335462bac78de513b121a7.staticmethod("create_deserialized");
    class_19b8049789335462bac78de513b121a7.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCPropertyImplDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCPropertyImplDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}