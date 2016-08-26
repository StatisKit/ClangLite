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
    bool  (*method_pointer_19a6c8fcae65577f934ed93a11ca7c82)(class ::clang::Type  const *) = ::clang::ObjCObjectType::classof;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_d229c6adb03d5b999216353aead6a004)() const = &::clang::ObjCObjectType::desugar;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_732fd6a574c25b6f818d57e56ca4be5e)() const = &::clang::ObjCObjectType::getBaseType;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCObjectType::*method_pointer_b51fc6c525c15ac295e042e246c74a21)() const = &::clang::ObjCObjectType::getInterface;
    unsigned int  (::clang::ObjCObjectType::*method_pointer_0aef1cd09ef058ea8e1ce2de2caaa1b3)() const = &::clang::ObjCObjectType::getNumProtocols;
    class ::clang::ObjCProtocolDecl  * (::clang::ObjCObjectType::*method_pointer_3b2fb855356f5014aaf40e8a57df74ab)(unsigned int ) const = &::clang::ObjCObjectType::getProtocol;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_86abaf0bcd8b5791a5fbdbcb820edcbc)() const = &::clang::ObjCObjectType::getSuperClassType;
    bool  (::clang::ObjCObjectType::*method_pointer_3286b51b6c6b5c08b6d6ee1e6d608bc6)() const = &::clang::ObjCObjectType::isKindOfType;
    bool  (::clang::ObjCObjectType::*method_pointer_e634ffa5f56f5085b228f99af6505795)() const = &::clang::ObjCObjectType::isKindOfTypeAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_707a155e814655619d6e3b4487d139d9)() const = &::clang::ObjCObjectType::isObjCClass;
    bool  (::clang::ObjCObjectType::*method_pointer_f9c9ba97adf05c169726dbe345918edc)() const = &::clang::ObjCObjectType::isObjCId;
    bool  (::clang::ObjCObjectType::*method_pointer_f93397d179385fed82c7fa9d4513d495)() const = &::clang::ObjCObjectType::isObjCQualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_e87f132922105e6db152e413c3ccb51d)() const = &::clang::ObjCObjectType::isObjCQualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_0525869b19115c74be0d0fad0845151a)() const = &::clang::ObjCObjectType::isObjCUnqualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_098abdaccfef54349470b9354be6c1c2)() const = &::clang::ObjCObjectType::isObjCUnqualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_442dc1d72fb2532fa2fb54240caf989a)() const = &::clang::ObjCObjectType::isObjCUnqualifiedIdOrClass;
    bool  (::clang::ObjCObjectType::*method_pointer_99a537ad269d554c8c413cba2aa45371)() const = &::clang::ObjCObjectType::isSpecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_dd7bfba98ba4557f9585113d26990529)() const = &::clang::ObjCObjectType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_85b001f702585633b5fec92485b5300e)() const = &::clang::ObjCObjectType::isSugared;
    bool  (::clang::ObjCObjectType::*method_pointer_2ca9b9fb132955d8bf33a262708d72b0)() const = &::clang::ObjCObjectType::isUnspecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_9fd6b1267f12516b8752e3f8f3005327)() const = &::clang::ObjCObjectType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_ec65cdcd9f61551c8dff9a775a830bd9)() const = &::clang::ObjCObjectType::qual_empty;
    boost::python::class_< class ::clang::ObjCObjectType, autowig::HeldType< class ::clang::ObjCObjectType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3980f13801db50f498b55d818463d500("ObjCObjectType", "", boost::python::no_init);
    class_3980f13801db50f498b55d818463d500.def("classof", method_pointer_19a6c8fcae65577f934ed93a11ca7c82, "");
    class_3980f13801db50f498b55d818463d500.def("desugar", method_pointer_d229c6adb03d5b999216353aead6a004, "");
    class_3980f13801db50f498b55d818463d500.def("get_base_type", method_pointer_732fd6a574c25b6f818d57e56ca4be5e, "");
    class_3980f13801db50f498b55d818463d500.def("get_interface", method_pointer_b51fc6c525c15ac295e042e246c74a21, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_num_protocols", method_pointer_0aef1cd09ef058ea8e1ce2de2caaa1b3, "");
    class_3980f13801db50f498b55d818463d500.def("get_protocol", method_pointer_3b2fb855356f5014aaf40e8a57df74ab, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3980f13801db50f498b55d818463d500.def("get_super_class_type", method_pointer_86abaf0bcd8b5791a5fbdbcb820edcbc, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type", method_pointer_3286b51b6c6b5c08b6d6ee1e6d608bc6, "");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type_as_written", method_pointer_e634ffa5f56f5085b228f99af6505795, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_class", method_pointer_707a155e814655619d6e3b4487d139d9, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_id", method_pointer_f9c9ba97adf05c169726dbe345918edc, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_class", method_pointer_f93397d179385fed82c7fa9d4513d495, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_id", method_pointer_e87f132922105e6db152e413c3ccb51d, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_class", method_pointer_0525869b19115c74be0d0fad0845151a, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id", method_pointer_098abdaccfef54349470b9354be6c1c2, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id_or_class", method_pointer_442dc1d72fb2532fa2fb54240caf989a, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized", method_pointer_99a537ad269d554c8c413cba2aa45371, "");
    class_3980f13801db50f498b55d818463d500.def("is_specialized_as_written", method_pointer_dd7bfba98ba4557f9585113d26990529, "");
    class_3980f13801db50f498b55d818463d500.def("is_sugared", method_pointer_85b001f702585633b5fec92485b5300e, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized", method_pointer_2ca9b9fb132955d8bf33a262708d72b0, "");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized_as_written", method_pointer_9fd6b1267f12516b8752e3f8f3005327, "");
    class_3980f13801db50f498b55d818463d500.def("qual_empty", method_pointer_ec65cdcd9f61551c8dff9a775a830bd9, "");
    class_3980f13801db50f498b55d818463d500.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCObjectType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCObjectType >, autowig::HeldType< class ::clang::Type > >();
    }

}