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
    class ::clang::ObjCPropertyImplDecl  * (*method_pointer_af216d921edd5ffa8d53151be938a48f)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCPropertyImplDecl::CreateDeserialized;
    bool  (*method_pointer_7e8e08d62bd35fdbafe8c8ea435b968a)(class ::clang::Decl  const *) = ::clang::ObjCPropertyImplDecl::classof;
    bool  (*method_pointer_abdaf72b0653572eb1a702e95d09d093)(enum ::clang::Decl::Kind ) = ::clang::ObjCPropertyImplDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCPropertyImplDecl::*method_pointer_6610ec018e975f0cb9ea61354f757339)() const = &::clang::ObjCPropertyImplDecl::getLocStart;
    class ::clang::ObjCPropertyDecl  * (::clang::ObjCPropertyImplDecl::*method_pointer_1ac2efaecf965aa08e5e0ab9a6eb311f)() const = &::clang::ObjCPropertyImplDecl::getPropertyDecl;
    class ::clang::ObjCIvarDecl  * (::clang::ObjCPropertyImplDecl::*method_pointer_29f23ab0bc6854039682016e57ffe296)() const = &::clang::ObjCPropertyImplDecl::getPropertyIvarDecl;
    class ::clang::SourceLocation  (::clang::ObjCPropertyImplDecl::*method_pointer_6c8d6c9044fc55ae98c7604abefe14b9)() const = &::clang::ObjCPropertyImplDecl::getPropertyIvarDeclLoc;
    bool  (::clang::ObjCPropertyImplDecl::*method_pointer_fd9f1d8b4f355c1798e839ac390ba20c)() const = &::clang::ObjCPropertyImplDecl::isIvarNameSpecified;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_bb1b2f6b216e5fb7af0b0ab56a770a59)(class ::clang::SourceLocation ) = &::clang::ObjCPropertyImplDecl::setAtLoc;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_9607ff29399b58949d232499c4a925e1)(class ::clang::ObjCPropertyDecl  *) = &::clang::ObjCPropertyImplDecl::setPropertyDecl;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_a79d52b301045e758c354cd30d8ac167)(class ::clang::ObjCIvarDecl  *, class ::clang::SourceLocation ) = &::clang::ObjCPropertyImplDecl::setPropertyIvarDecl;
    boost::python::class_< class ::clang::ObjCPropertyImplDecl, autowig::HeldType< class ::clang::ObjCPropertyImplDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_19b8049789335462bac78de513b121a7("ObjCPropertyImplDecl", "", boost::python::no_init);
    class_19b8049789335462bac78de513b121a7.def("create_deserialized", method_pointer_af216d921edd5ffa8d53151be938a48f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("classof", method_pointer_7e8e08d62bd35fdbafe8c8ea435b968a, "");
    class_19b8049789335462bac78de513b121a7.def("classof_kind", method_pointer_abdaf72b0653572eb1a702e95d09d093, "");
    class_19b8049789335462bac78de513b121a7.def("get_loc_start", method_pointer_6610ec018e975f0cb9ea61354f757339, "");
    class_19b8049789335462bac78de513b121a7.def("get_property_decl", method_pointer_1ac2efaecf965aa08e5e0ab9a6eb311f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("get_property_ivar_decl", method_pointer_29f23ab0bc6854039682016e57ffe296, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("get_property_ivar_decl_loc", method_pointer_6c8d6c9044fc55ae98c7604abefe14b9, "");
    class_19b8049789335462bac78de513b121a7.def("is_ivar_name_specified", method_pointer_fd9f1d8b4f355c1798e839ac390ba20c, "");
    class_19b8049789335462bac78de513b121a7.def("set_at_loc", method_pointer_bb1b2f6b216e5fb7af0b0ab56a770a59, "");
    class_19b8049789335462bac78de513b121a7.def("set_property_decl", method_pointer_9607ff29399b58949d232499c4a925e1, "");
    class_19b8049789335462bac78de513b121a7.def("set_property_ivar_decl", method_pointer_a79d52b301045e758c354cd30d8ac167, "");
    class_19b8049789335462bac78de513b121a7.staticmethod("classof_kind");
    class_19b8049789335462bac78de513b121a7.staticmethod("create_deserialized");
    class_19b8049789335462bac78de513b121a7.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCPropertyImplDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCPropertyImplDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}