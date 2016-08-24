#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_41db8c9435975db59206c5f1329984a4()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCIvarDecl  * (*method_pointer_54ad17e6f5a3572c831e975c44c712c8)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCIvarDecl::CreateDeserialized;
    bool  (*method_pointer_a999f19f736d5578990430c6234da5ac)(class ::clang::Decl  const *) = ::clang::ObjCIvarDecl::classof;
    bool  (*method_pointer_6b965339aebe5819ab217d4297282aad)(enum ::clang::Decl::Kind ) = ::clang::ObjCIvarDecl::classofKind;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCIvarDecl::*method_pointer_35ea7b473453541fa4a69d918a9ea833)() const = &::clang::ObjCIvarDecl::getContainingInterface;
    class ::clang::ObjCIvarDecl  * (::clang::ObjCIvarDecl::*method_pointer_2febe77041d459b4add4ec47cce6b2cf)() = &::clang::ObjCIvarDecl::getNextIvar;
    class ::clang::ObjCIvarDecl  const * (::clang::ObjCIvarDecl::*method_pointer_57f1236df8255573a6272547b48772d8)() const = &::clang::ObjCIvarDecl::getNextIvar;
    bool  (::clang::ObjCIvarDecl::*method_pointer_55ea27de04515c17b108788380a38039)() const = &::clang::ObjCIvarDecl::getSynthesize;
    class ::clang::QualType  (::clang::ObjCIvarDecl::*method_pointer_eae1e833772d5961b211d5606005fe77)(class ::clang::QualType ) const = &::clang::ObjCIvarDecl::getUsageType;
    void  (::clang::ObjCIvarDecl::*method_pointer_96e44ea4d7be50c8b08483f116392243)(class ::clang::ObjCIvarDecl  *) = &::clang::ObjCIvarDecl::setNextIvar;
    void  (::clang::ObjCIvarDecl::*method_pointer_dda4b973d67459e0a071370b5679d09e)(bool ) = &::clang::ObjCIvarDecl::setSynthesize;
    boost::python::class_< class ::clang::ObjCIvarDecl, autowig::HeldType< class ::clang::ObjCIvarDecl >, boost::python::bases< class ::clang::FieldDecl >, boost::noncopyable > class_41db8c9435975db59206c5f1329984a4("ObjCIvarDecl", "", boost::python::no_init);
    class_41db8c9435975db59206c5f1329984a4.def("create_deserialized", method_pointer_54ad17e6f5a3572c831e975c44c712c8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("classof", method_pointer_a999f19f736d5578990430c6234da5ac, "");
    class_41db8c9435975db59206c5f1329984a4.def("classof_kind", method_pointer_6b965339aebe5819ab217d4297282aad, "");
    class_41db8c9435975db59206c5f1329984a4.def("get_containing_interface", method_pointer_35ea7b473453541fa4a69d918a9ea833, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("get_next_ivar", method_pointer_2febe77041d459b4add4ec47cce6b2cf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("get_next_ivar", method_pointer_57f1236df8255573a6272547b48772d8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_41db8c9435975db59206c5f1329984a4.def("get_synthesize", method_pointer_55ea27de04515c17b108788380a38039, "");
    class_41db8c9435975db59206c5f1329984a4.def("get_usage_type", method_pointer_eae1e833772d5961b211d5606005fe77, "");
    class_41db8c9435975db59206c5f1329984a4.def("set_next_ivar", method_pointer_96e44ea4d7be50c8b08483f116392243, "");
    class_41db8c9435975db59206c5f1329984a4.def("set_synthesize", method_pointer_dda4b973d67459e0a071370b5679d09e, "");
    class_41db8c9435975db59206c5f1329984a4.staticmethod("classof_kind");
    class_41db8c9435975db59206c5f1329984a4.staticmethod("create_deserialized");
    class_41db8c9435975db59206c5f1329984a4.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCIvarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCIvarDecl >, autowig::HeldType< class ::clang::FieldDecl > >();
    }

}