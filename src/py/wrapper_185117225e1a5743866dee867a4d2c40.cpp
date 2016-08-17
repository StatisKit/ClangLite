#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_185117225e1a5743866dee867a4d2c40()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::RecordDecl::*method_pointer_6378a8f829425e57a60187a9ed84fa42)() const = &::clang::RecordDecl::hasVolatileMember;
    bool  (::clang::RecordDecl::*method_pointer_5ee51581ca265623bf21d923fdabbca4)() const = &::clang::RecordDecl::isAnonymousStructOrUnion;
    void  (::clang::RecordDecl::*method_pointer_89afd70f31045a7ea16d8b996133930a)(bool ) = &::clang::RecordDecl::setHasVolatileMember;
    bool  (::clang::RecordDecl::*method_pointer_0487a2e1e1fb56d9bacfb122f942dbe0)() const = &::clang::RecordDecl::hasFlexibleArrayMember;
    bool  (::clang::RecordDecl::*method_pointer_5d8486068baf5ff3b4b587c9f2958cc0)() const = &::clang::RecordDecl::isInjectedClassName;
    bool  (::clang::RecordDecl::*method_pointer_20e1929adb58516c88ebb580f09431c1)() const = &::clang::RecordDecl::isCapturedRecord;
    bool  (::clang::RecordDecl::*method_pointer_f64acb24e2a35462b7e6bf5bf0f8f181)() const = &::clang::RecordDecl::hasObjectMember;
    void  (::clang::RecordDecl::*method_pointer_98d4d2bf5a0c5dacbf21bdbe6e640ab0)(bool ) = &::clang::RecordDecl::setHasObjectMember;
    void  (::clang::RecordDecl::*method_pointer_97b78495c2d75698a88c1dcdb035e65b)(bool ) = &::clang::RecordDecl::setHasFlexibleArrayMember;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_f4f603cee7905ab8912419fb418c1aa7)() const = &::clang::RecordDecl::getPreviousDecl;
    bool  (::clang::RecordDecl::*method_pointer_4166649192d85e498967696dbaddbdc3)() const = &::clang::RecordDecl::field_empty;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_369d77a099715fb9b12deecd2d79c240)() = &::clang::RecordDecl::getPreviousDecl;
    bool  (*method_pointer_7979a40b222451e7a6a1e13d728a0457)(enum ::clang::Decl::Kind ) = ::clang::RecordDecl::classofKind;
    void  (::clang::RecordDecl::*method_pointer_786717eec5fc52d88c9044e189326e53)(bool ) = &::clang::RecordDecl::setAnonymousStructOrUnion;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_beb51a3f24465ad98e3aad942c2e66dc)() = &::clang::RecordDecl::getMostRecentDecl;
    bool  (::clang::RecordDecl::*method_pointer_8c5b860831b3543d9b7e7d59c1688eb9)() const = &::clang::RecordDecl::hasLoadedFieldsFromExternalStorage;
    void  (::clang::RecordDecl::*method_pointer_0a9105610bee57e5b3a2d8df3d8a764a)() = &::clang::RecordDecl::completeDefinition;
    void  (::clang::RecordDecl::*method_pointer_ad756f214c0e5af884afba6f25e48f24)(bool ) = &::clang::RecordDecl::setHasLoadedFieldsFromExternalStorage;
    bool  (*method_pointer_9542fcb50b8c565cbf20cc30d6d2cb27)(class ::clang::Decl  const *) = ::clang::RecordDecl::classof;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_400d417bf11b5c64a4d87ade29c66545)() const = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_1343bbf989c25815987bb9fa0dbad8d6)() const = &::clang::RecordDecl::getDefinition;
    void  (::clang::RecordDecl::*method_pointer_1f076ff565f256ccbd1836b74894d14e)() = &::clang::RecordDecl::setCapturedRecord;
    bool  (::clang::RecordDecl::*method_pointer_2f6a75189d9a50589830ea1004f39e9d)(bool ) const = &::clang::RecordDecl::mayInsertExtraPadding;
    class ::clang::FieldDecl  const * (::clang::RecordDecl::*method_pointer_4dd55f4ddbff57e89006e39a99eb428c)() const = &::clang::RecordDecl::findFirstNamedDataMember;
    bool  (::clang::RecordDecl::*method_pointer_21291083e275508998542f65134d83b1)() const = &::clang::RecordDecl::isLambda;
    boost::python::class_< class ::clang::RecordDecl, autowig::HeldType< class ::clang::RecordDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_185117225e1a5743866dee867a4d2c40("RecordDecl", "", boost::python::no_init);
    class_185117225e1a5743866dee867a4d2c40.def("has_volatile_member", method_pointer_6378a8f829425e57a60187a9ed84fa42, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_anonymous_struct_or_union", method_pointer_5ee51581ca265623bf21d923fdabbca4, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_volatile_member", method_pointer_89afd70f31045a7ea16d8b996133930a, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_flexible_array_member", method_pointer_0487a2e1e1fb56d9bacfb122f942dbe0, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_injected_class_name", method_pointer_5d8486068baf5ff3b4b587c9f2958cc0, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_captured_record", method_pointer_20e1929adb58516c88ebb580f09431c1, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_object_member", method_pointer_f64acb24e2a35462b7e6bf5bf0f8f181, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_object_member", method_pointer_98d4d2bf5a0c5dacbf21bdbe6e640ab0, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_flexible_array_member", method_pointer_97b78495c2d75698a88c1dcdb035e65b, "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_f4f603cee7905ab8912419fb418c1aa7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("field_empty", method_pointer_4166649192d85e498967696dbaddbdc3, "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_369d77a099715fb9b12deecd2d79c240, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("classof_kind", method_pointer_7979a40b222451e7a6a1e13d728a0457, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_anonymous_struct_or_union", method_pointer_786717eec5fc52d88c9044e189326e53, "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_beb51a3f24465ad98e3aad942c2e66dc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("has_loaded_fields_from_external_storage", method_pointer_8c5b860831b3543d9b7e7d59c1688eb9, "");
    class_185117225e1a5743866dee867a4d2c40.def("complete_definition", method_pointer_0a9105610bee57e5b3a2d8df3d8a764a, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_loaded_fields_from_external_storage", method_pointer_ad756f214c0e5af884afba6f25e48f24, "");
    class_185117225e1a5743866dee867a4d2c40.def("classof", method_pointer_9542fcb50b8c565cbf20cc30d6d2cb27, "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_400d417bf11b5c64a4d87ade29c66545, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_definition", method_pointer_1343bbf989c25815987bb9fa0dbad8d6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("set_captured_record", method_pointer_1f076ff565f256ccbd1836b74894d14e, "");
    class_185117225e1a5743866dee867a4d2c40.def("may_insert_extra_padding", method_pointer_2f6a75189d9a50589830ea1004f39e9d, "");
    class_185117225e1a5743866dee867a4d2c40.def("find_first_named_data_member", method_pointer_4dd55f4ddbff57e89006e39a99eb428c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("is_lambda", method_pointer_21291083e275508998542f65134d83b1, "");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof_kind");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}