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
    class ::clang::ObjCPropertyImplDecl  * (*method_pointer_5fa3baaa97045fcfb6a78dcfda17faf1)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCPropertyImplDecl::CreateDeserialized;
    bool  (*method_pointer_626375c8ce8e5570b5d16f1caff3b483)(class ::clang::Decl  const *) = ::clang::ObjCPropertyImplDecl::classof;
    bool  (*method_pointer_fc708a7c1f645261bd9b7f83ffbcee7e)(enum ::clang::Decl::Kind ) = ::clang::ObjCPropertyImplDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCPropertyImplDecl::*method_pointer_48b39c4af90e51309c3031307da8e9b9)() const = &::clang::ObjCPropertyImplDecl::getLocStart;
    class ::clang::ObjCPropertyDecl  * (::clang::ObjCPropertyImplDecl::*method_pointer_5a434c133f4f59aba2345ab86ed11fb0)() const = &::clang::ObjCPropertyImplDecl::getPropertyDecl;
    class ::clang::ObjCIvarDecl  * (::clang::ObjCPropertyImplDecl::*method_pointer_3ee64de0d7405dbe9bf6e198ef9b6bef)() const = &::clang::ObjCPropertyImplDecl::getPropertyIvarDecl;
    class ::clang::SourceLocation  (::clang::ObjCPropertyImplDecl::*method_pointer_7a999b84914359f7a0f3e88448a40b81)() const = &::clang::ObjCPropertyImplDecl::getPropertyIvarDeclLoc;
    bool  (::clang::ObjCPropertyImplDecl::*method_pointer_e24fd9bea7f752e5a795f8b88b989103)() const = &::clang::ObjCPropertyImplDecl::isIvarNameSpecified;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_ffbd5c96215b5be099e7c2e9f27d985f)(class ::clang::SourceLocation ) = &::clang::ObjCPropertyImplDecl::setAtLoc;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_3ec0e77463325002a4343c87e714c956)(class ::clang::ObjCPropertyDecl  *) = &::clang::ObjCPropertyImplDecl::setPropertyDecl;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_5ec8d5b5b5b5597ca6c084692ff9da30)(class ::clang::ObjCIvarDecl  *, class ::clang::SourceLocation ) = &::clang::ObjCPropertyImplDecl::setPropertyIvarDecl;
    boost::python::class_< class ::clang::ObjCPropertyImplDecl, autowig::HeldType< class ::clang::ObjCPropertyImplDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_19b8049789335462bac78de513b121a7("ObjCPropertyImplDecl", "", boost::python::no_init);
    class_19b8049789335462bac78de513b121a7.def("create_deserialized", method_pointer_5fa3baaa97045fcfb6a78dcfda17faf1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("classof", method_pointer_626375c8ce8e5570b5d16f1caff3b483, "");
    class_19b8049789335462bac78de513b121a7.def("classof_kind", method_pointer_fc708a7c1f645261bd9b7f83ffbcee7e, "");
    class_19b8049789335462bac78de513b121a7.def("get_loc_start", method_pointer_48b39c4af90e51309c3031307da8e9b9, "");
    class_19b8049789335462bac78de513b121a7.def("get_property_decl", method_pointer_5a434c133f4f59aba2345ab86ed11fb0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("get_property_ivar_decl", method_pointer_3ee64de0d7405dbe9bf6e198ef9b6bef, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("get_property_ivar_decl_loc", method_pointer_7a999b84914359f7a0f3e88448a40b81, "");
    class_19b8049789335462bac78de513b121a7.def("is_ivar_name_specified", method_pointer_e24fd9bea7f752e5a795f8b88b989103, "");
    class_19b8049789335462bac78de513b121a7.def("set_at_loc", method_pointer_ffbd5c96215b5be099e7c2e9f27d985f, "");
    class_19b8049789335462bac78de513b121a7.def("set_property_decl", method_pointer_3ec0e77463325002a4343c87e714c956, "");
    class_19b8049789335462bac78de513b121a7.def("set_property_ivar_decl", method_pointer_5ec8d5b5b5b5597ca6c084692ff9da30, "");
    class_19b8049789335462bac78de513b121a7.staticmethod("classof_kind");
    class_19b8049789335462bac78de513b121a7.staticmethod("create_deserialized");
    class_19b8049789335462bac78de513b121a7.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCPropertyImplDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCPropertyImplDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}