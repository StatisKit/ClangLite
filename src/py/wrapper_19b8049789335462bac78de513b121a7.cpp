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
    bool  (*method_pointer_6a2bb381c84d5f3a872e0e6bda6ed530)(class ::clang::Decl  const *) = ::clang::ObjCPropertyImplDecl::classof;
    class ::clang::ObjCPropertyDecl  * (::clang::ObjCPropertyImplDecl::*method_pointer_9f72aa75c7f85eb5a69fd241070b4c9a)() const = &::clang::ObjCPropertyImplDecl::getPropertyDecl;
    bool  (*method_pointer_71ddc6d7b0f75cd68302e7daac04bca5)(enum ::clang::Decl::Kind ) = ::clang::ObjCPropertyImplDecl::classofKind;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_7fdec5a058f550ae989f8f047a4cec91)(class ::clang::ObjCPropertyDecl  *) = &::clang::ObjCPropertyImplDecl::setPropertyDecl;
    class ::clang::ObjCIvarDecl  * (::clang::ObjCPropertyImplDecl::*method_pointer_51a0c33b40e1565db22dba13ae8431f1)() const = &::clang::ObjCPropertyImplDecl::getPropertyIvarDecl;
    class ::clang::ObjCPropertyImplDecl  * (*method_pointer_76bc4024575f51e19ff816aa9b18e681)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCPropertyImplDecl::CreateDeserialized;
    bool  (::clang::ObjCPropertyImplDecl::*method_pointer_2279c78e216850d3a03e27c62868b332)() const = &::clang::ObjCPropertyImplDecl::isIvarNameSpecified;
    boost::python::class_< class ::clang::ObjCPropertyImplDecl, autowig::HeldType< class ::clang::ObjCPropertyImplDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_19b8049789335462bac78de513b121a7("ObjCPropertyImplDecl", "", boost::python::no_init);
    class_19b8049789335462bac78de513b121a7.def("classof", method_pointer_6a2bb381c84d5f3a872e0e6bda6ed530, "");
    class_19b8049789335462bac78de513b121a7.def("get_property_decl", method_pointer_9f72aa75c7f85eb5a69fd241070b4c9a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("classof_kind", method_pointer_71ddc6d7b0f75cd68302e7daac04bca5, "");
    class_19b8049789335462bac78de513b121a7.def("set_property_decl", method_pointer_7fdec5a058f550ae989f8f047a4cec91, "");
    class_19b8049789335462bac78de513b121a7.def("get_property_ivar_decl", method_pointer_51a0c33b40e1565db22dba13ae8431f1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("create_deserialized", method_pointer_76bc4024575f51e19ff816aa9b18e681, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("is_ivar_name_specified", method_pointer_2279c78e216850d3a03e27c62868b332, "");
    class_19b8049789335462bac78de513b121a7.staticmethod("classof_kind");
    class_19b8049789335462bac78de513b121a7.staticmethod("create_deserialized");
    class_19b8049789335462bac78de513b121a7.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCPropertyImplDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCPropertyImplDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}