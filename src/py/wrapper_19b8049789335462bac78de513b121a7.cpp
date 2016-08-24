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
    class ::clang::ObjCPropertyImplDecl  * (*method_pointer_9437838124e45ff7bcc99a3500a95173)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCPropertyImplDecl::CreateDeserialized;
    bool  (*method_pointer_5ee039a4a56d58aa87152d9df9348bad)(class ::clang::Decl  const *) = ::clang::ObjCPropertyImplDecl::classof;
    bool  (*method_pointer_ecbe6232f701591d87690dfaf3ba3f4a)(enum ::clang::Decl::Kind ) = ::clang::ObjCPropertyImplDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCPropertyImplDecl::*method_pointer_bef0c126362951a8b015005fa234ecb7)() const = &::clang::ObjCPropertyImplDecl::getLocStart;
    class ::clang::ObjCPropertyDecl  * (::clang::ObjCPropertyImplDecl::*method_pointer_1a4dd5f3387d5f65b6936720d8ead273)() const = &::clang::ObjCPropertyImplDecl::getPropertyDecl;
    class ::clang::ObjCIvarDecl  * (::clang::ObjCPropertyImplDecl::*method_pointer_e73468533d7c590ab360892a3931acd2)() const = &::clang::ObjCPropertyImplDecl::getPropertyIvarDecl;
    class ::clang::SourceLocation  (::clang::ObjCPropertyImplDecl::*method_pointer_96e0ea2686915d98bfa599adc2a48aa5)() const = &::clang::ObjCPropertyImplDecl::getPropertyIvarDeclLoc;
    bool  (::clang::ObjCPropertyImplDecl::*method_pointer_f430577a646452fb9ab0f64a0257515b)() const = &::clang::ObjCPropertyImplDecl::isIvarNameSpecified;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_5d4760d61c4951c78c5a8bac76143fcc)(class ::clang::SourceLocation ) = &::clang::ObjCPropertyImplDecl::setAtLoc;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_921ff01721dc5edd8f075b3b6e519d29)(class ::clang::ObjCPropertyDecl  *) = &::clang::ObjCPropertyImplDecl::setPropertyDecl;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_5182fa75685551f5a113e88f74ff3f45)(class ::clang::ObjCIvarDecl  *, class ::clang::SourceLocation ) = &::clang::ObjCPropertyImplDecl::setPropertyIvarDecl;
    boost::python::class_< class ::clang::ObjCPropertyImplDecl, autowig::HeldType< class ::clang::ObjCPropertyImplDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_19b8049789335462bac78de513b121a7("ObjCPropertyImplDecl", "", boost::python::no_init);
    class_19b8049789335462bac78de513b121a7.def("create_deserialized", method_pointer_9437838124e45ff7bcc99a3500a95173, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("classof", method_pointer_5ee039a4a56d58aa87152d9df9348bad, "");
    class_19b8049789335462bac78de513b121a7.def("classof_kind", method_pointer_ecbe6232f701591d87690dfaf3ba3f4a, "");
    class_19b8049789335462bac78de513b121a7.def("get_loc_start", method_pointer_bef0c126362951a8b015005fa234ecb7, "");
    class_19b8049789335462bac78de513b121a7.def("get_property_decl", method_pointer_1a4dd5f3387d5f65b6936720d8ead273, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("get_property_ivar_decl", method_pointer_e73468533d7c590ab360892a3931acd2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("get_property_ivar_decl_loc", method_pointer_96e0ea2686915d98bfa599adc2a48aa5, "");
    class_19b8049789335462bac78de513b121a7.def("is_ivar_name_specified", method_pointer_f430577a646452fb9ab0f64a0257515b, "");
    class_19b8049789335462bac78de513b121a7.def("set_at_loc", method_pointer_5d4760d61c4951c78c5a8bac76143fcc, "");
    class_19b8049789335462bac78de513b121a7.def("set_property_decl", method_pointer_921ff01721dc5edd8f075b3b6e519d29, "");
    class_19b8049789335462bac78de513b121a7.def("set_property_ivar_decl", method_pointer_5182fa75685551f5a113e88f74ff3f45, "");
    class_19b8049789335462bac78de513b121a7.staticmethod("classof_kind");
    class_19b8049789335462bac78de513b121a7.staticmethod("create_deserialized");
    class_19b8049789335462bac78de513b121a7.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCPropertyImplDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCPropertyImplDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}