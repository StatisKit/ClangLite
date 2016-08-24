#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_19b8049789335462bac78de513b121a7()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCPropertyImplDecl  * (*method_pointer_bb208ea31d0a55928fa6e04a93624521)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCPropertyImplDecl::CreateDeserialized;
    bool  (*method_pointer_882d387f655b52ebb5daa431ccd7d207)(class ::clang::Decl  const *) = ::clang::ObjCPropertyImplDecl::classof;
    bool  (*method_pointer_49785435aa7e54bc9a316bfc2cd7b008)(enum ::clang::Decl::Kind ) = ::clang::ObjCPropertyImplDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCPropertyImplDecl::*method_pointer_a142d1299335545884f899b0f2105d3b)() const = &::clang::ObjCPropertyImplDecl::getLocStart;
    class ::clang::ObjCPropertyDecl  * (::clang::ObjCPropertyImplDecl::*method_pointer_e7c35aeca7d35a5a963f76089e0570b3)() const = &::clang::ObjCPropertyImplDecl::getPropertyDecl;
    class ::clang::ObjCIvarDecl  * (::clang::ObjCPropertyImplDecl::*method_pointer_37faeccaedab5746806fad4ea66b209b)() const = &::clang::ObjCPropertyImplDecl::getPropertyIvarDecl;
    class ::clang::SourceLocation  (::clang::ObjCPropertyImplDecl::*method_pointer_a054d6137f7c545cb81ced13c430fb28)() const = &::clang::ObjCPropertyImplDecl::getPropertyIvarDeclLoc;
    bool  (::clang::ObjCPropertyImplDecl::*method_pointer_ff6d6c65f54f5c6c9de376f82dba1462)() const = &::clang::ObjCPropertyImplDecl::isIvarNameSpecified;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_a9d618a3e30252d1bf164de9cea0237d)(class ::clang::SourceLocation ) = &::clang::ObjCPropertyImplDecl::setAtLoc;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_c21d604dd57254abaac4f1c1a830ea6d)(class ::clang::ObjCPropertyDecl  *) = &::clang::ObjCPropertyImplDecl::setPropertyDecl;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_4e8120d469ac51faa7b0617ee44bb4bd)(class ::clang::ObjCIvarDecl  *, class ::clang::SourceLocation ) = &::clang::ObjCPropertyImplDecl::setPropertyIvarDecl;
    boost::python::class_< class ::clang::ObjCPropertyImplDecl, autowig::HeldType< class ::clang::ObjCPropertyImplDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_19b8049789335462bac78de513b121a7("ObjCPropertyImplDecl", "", boost::python::no_init);
    class_19b8049789335462bac78de513b121a7.def("create_deserialized", method_pointer_bb208ea31d0a55928fa6e04a93624521, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("classof", method_pointer_882d387f655b52ebb5daa431ccd7d207, "");
    class_19b8049789335462bac78de513b121a7.def("classof_kind", method_pointer_49785435aa7e54bc9a316bfc2cd7b008, "");
    class_19b8049789335462bac78de513b121a7.def("get_loc_start", method_pointer_a142d1299335545884f899b0f2105d3b, "");
    class_19b8049789335462bac78de513b121a7.def("get_property_decl", method_pointer_e7c35aeca7d35a5a963f76089e0570b3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("get_property_ivar_decl", method_pointer_37faeccaedab5746806fad4ea66b209b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("get_property_ivar_decl_loc", method_pointer_a054d6137f7c545cb81ced13c430fb28, "");
    class_19b8049789335462bac78de513b121a7.def("is_ivar_name_specified", method_pointer_ff6d6c65f54f5c6c9de376f82dba1462, "");
    class_19b8049789335462bac78de513b121a7.def("set_at_loc", method_pointer_a9d618a3e30252d1bf164de9cea0237d, "");
    class_19b8049789335462bac78de513b121a7.def("set_property_decl", method_pointer_c21d604dd57254abaac4f1c1a830ea6d, "");
    class_19b8049789335462bac78de513b121a7.def("set_property_ivar_decl", method_pointer_4e8120d469ac51faa7b0617ee44bb4bd, "");
    class_19b8049789335462bac78de513b121a7.staticmethod("classof_kind");
    class_19b8049789335462bac78de513b121a7.staticmethod("create_deserialized");
    class_19b8049789335462bac78de513b121a7.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCPropertyImplDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCPropertyImplDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}