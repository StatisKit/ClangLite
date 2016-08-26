#include "_clanglite.h"


namespace autowig
{
}


void wrapper_3980f13801db50f498b55d818463d500()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_20103a3e4d165c3f866b45d805551db1)(class ::clang::Type  const *) = ::clang::ObjCObjectType::classof;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectType::*method_pointer_788f7b9954b25bcc960986137f2ef0e1)() const = &::clang::ObjCObjectType::getInterface;
    unsigned int  (::clang::ObjCObjectType::*method_pointer_f0c9fc113332555c90f3627257fcba4e)() const = &::clang::ObjCObjectType::getNumProtocols;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectType::*method_pointer_4fc28b1791455b208decf5dede4309ef)(unsigned int ) const = &::clang::ObjCObjectType::getProtocol;
    bool  (::clang::ObjCObjectType::*method_pointer_13253c4fe5b450ee858d2a137723e3c8)() const = &::clang::ObjCObjectType::isKindOfType;
    bool  (::clang::ObjCObjectType::*method_pointer_3669d29f29c35329b6daaffba00b2521)() const = &::clang::ObjCObjectType::isKindOfTypeAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_41b0de6e6ea85fb6aa8d16d3e6f241d6)() const = &::clang::ObjCObjectType::isObjCClass;
    bool  (::clang::ObjCObjectType::*method_pointer_ed5acf4f589a53cc956c48c1ea598132)() const = &::clang::ObjCObjectType::isObjCId;
    bool  (::clang::ObjCObjectType::*method_pointer_50b45cf0488f54d7985587af606715b1)() const = &::clang::ObjCObjectType::isObjCQualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_04352ed1dc6b53c6ba09923559750f58)() const = &::clang::ObjCObjectType::isObjCQualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_0a98790669d25613a7f4c96f33efed24)() const = &::clang::ObjCObjectType::isObjCUnqualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_f95333a8d6bc5b60a32f42bf991c5258)() const = &::clang::ObjCObjectType::isObjCUnqualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_1176dc75cc015049944234857a43110a)() const = &::clang::ObjCObjectType::isObjCUnqualifiedIdOrClass;
    bool  (::clang::ObjCObjectType::*method_pointer_5ce2aea101e65f57a73884e11689e1f0)() const = &::clang::ObjCObjectType::isSpecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_275a97c42d315b7399c1deabbdac07b0)() const = &::clang::ObjCObjectType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_66a9389cfdd3529788486554f30b7103)() const = &::clang::ObjCObjectType::isSugared;
    bool  (::clang::ObjCObjectType::*method_pointer_dc9cc01b07c75f72babaa174b0423acb)() const = &::clang::ObjCObjectType::isUnspecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_72068166782d5a718b4171697eabb3b0)() const = &::clang::ObjCObjectType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_0c268a8d5e8f5cf8aa034fb8c291c10a)() const = &::clang::ObjCObjectType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectType, autowig::HeldType< class ::clang::ObjCObjectType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3980f13801db50f498b55d818463d500("ObjCObjectType", "", boost::python::no_init);
    class_3980f13801db50f498b55d818463d500.def("classof", method_pointer_20103a3e4d165c3f866b45d805551db1, "");
    class_3980f13801db50f498b55d818463d500.def("get_interface", method_pointer_788f7b9954b25bcc960986137f2ef0e1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_num_protocols", method_pointer_f0c9fc113332555c90f3627257fcba4e, "");
    class_3980f13801db50f498b55d818463d500.def("get_protocol", method_pointer_4fc28b1791455b208decf5dede4309ef, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type", method_pointer_13253c4fe5b450ee858d2a137723e3c8, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type_as_written", method_pointer_3669d29f29c35329b6daaffba00b2521, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_class", method_pointer_41b0de6e6ea85fb6aa8d16d3e6f241d6, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_id", method_pointer_ed5acf4f589a53cc956c48c1ea598132, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_class", method_pointer_50b45cf0488f54d7985587af606715b1, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_id", method_pointer_04352ed1dc6b53c6ba09923559750f58, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_class", method_pointer_0a98790669d25613a7f4c96f33efed24, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id", method_pointer_f95333a8d6bc5b60a32f42bf991c5258, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id_or_class", method_pointer_1176dc75cc015049944234857a43110a, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized", method_pointer_5ce2aea101e65f57a73884e11689e1f0, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized_as_written", method_pointer_275a97c42d315b7399c1deabbdac07b0, "");
    class_3980f13801db50f498b55d818463d500.def("is_sugared", method_pointer_66a9389cfdd3529788486554f30b7103, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized", method_pointer_dc9cc01b07c75f72babaa174b0423acb, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized_as_written", method_pointer_72068166782d5a718b4171697eabb3b0, "");
    class_3980f13801db50f498b55d818463d500.def("qual_empty", method_pointer_0c268a8d5e8f5cf8aa034fb8c291c10a, "");
    class_3980f13801db50f498b55d818463d500.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectType >, autowig::HeldType< class ::clang::Type > >();
    }

}