#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_185117225e1a5743866dee867a4d2c40()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_db30283f165b57599572606432270172)(class ::clang::Decl  const *) = ::clang::RecordDecl::classof;
    bool  (*method_pointer_f4d73a9d7bc558e486e8966fb725acd7)(enum ::clang::Decl::Kind ) = ::clang::RecordDecl::classofKind;
    void  (::clang::RecordDecl::*method_pointer_7d6c4b209cf95927903fbb346ed1915e)() = &::clang::RecordDecl::completeDefinition;
    bool  (::clang::RecordDecl::*method_pointer_0a5b25471bff528fbb9b72ef5af7876f)() const = &::clang::RecordDecl::field_empty;
    class ::clang::FieldDecl  const * (::clang::RecordDecl::*method_pointer_181cc72bb74b580dabe2e20e6a73be33)() const = &::clang::RecordDecl::findFirstNamedDataMember;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_a4afdcf804ce50869924bb719e8c56ad)() const = &::clang::RecordDecl::getDefinition;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_f33205380b3d59f9ab055c88162aae26)() const = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_b2bf2fbc98ea584d8af311b737d890c4)() = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_3bb26b4f469956498545902e3ceeb370)() = &::clang::RecordDecl::getPreviousDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_467ef85acbb658b6bca39f94e88e04b9)() const = &::clang::RecordDecl::getPreviousDecl;
    bool  (::clang::RecordDecl::*method_pointer_9a5daeba1efd59029ff8f262e494e47b)() const = &::clang::RecordDecl::hasFlexibleArrayMember;
    bool  (::clang::RecordDecl::*method_pointer_28cf01aca6005ccd808452a268c8d4a4)() const = &::clang::RecordDecl::hasLoadedFieldsFromExternalStorage;
    bool  (::clang::RecordDecl::*method_pointer_029b3ed72e8d58c78f6d3e2b2e93ecd2)() const = &::clang::RecordDecl::hasObjectMember;
    bool  (::clang::RecordDecl::*method_pointer_e0241aa50e00570db5d7c38952fa095c)() const = &::clang::RecordDecl::hasVolatileMember;
    bool  (::clang::RecordDecl::*method_pointer_15ca7f49e43f5b25bf3a8d4f339fb133)() const = &::clang::RecordDecl::isAnonymousStructOrUnion;
    bool  (::clang::RecordDecl::*method_pointer_45afc47cbda55b5ea80e6819cdcbaeaf)() const = &::clang::RecordDecl::isCapturedRecord;
    bool  (::clang::RecordDecl::*method_pointer_40368c0592785f4fbf93065ceb1f893b)() const = &::clang::RecordDecl::isInjectedClassName;
    bool  (::clang::RecordDecl::*method_pointer_5c0db88ea6fa5a05be0159c550fd9c4b)() const = &::clang::RecordDecl::isLambda;
    bool  (::clang::RecordDecl::*method_pointer_f0ec893545b65ce8bd40e0d37fb8d246)(bool ) const = &::clang::RecordDecl::mayInsertExtraPadding;
    void  (::clang::RecordDecl::*method_pointer_a031071ae7f357c3829049818c9dfcd0)(bool ) = &::clang::RecordDecl::setAnonymousStructOrUnion;
    void  (::clang::RecordDecl::*method_pointer_560a6bfc2e665e44974df63e73ea75a9)() = &::clang::RecordDecl::setCapturedRecord;
    void  (::clang::RecordDecl::*method_pointer_cc33a0910fbf5fdc95d97c2f23f96528)(bool ) = &::clang::RecordDecl::setHasFlexibleArrayMember;
    void  (::clang::RecordDecl::*method_pointer_6615669a8a8f5695859bb4ea0332556f)(bool ) = &::clang::RecordDecl::setHasLoadedFieldsFromExternalStorage;
    void  (::clang::RecordDecl::*method_pointer_b8a5822bd35e54a5a0bedc2463b0685b)(bool ) = &::clang::RecordDecl::setHasObjectMember;
    void  (::clang::RecordDecl::*method_pointer_0c95bac14dfc5319aa996ce4fec5113a)(bool ) = &::clang::RecordDecl::setHasVolatileMember;
    boost::python::class_< class ::clang::RecordDecl, autowig::HeldType< class ::clang::RecordDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_185117225e1a5743866dee867a4d2c40("RecordDecl", "", boost::python::no_init);
    class_185117225e1a5743866dee867a4d2c40.def("classof", method_pointer_db30283f165b57599572606432270172, "");
    class_185117225e1a5743866dee867a4d2c40.def("classof_kind", method_pointer_f4d73a9d7bc558e486e8966fb725acd7, "");
    class_185117225e1a5743866dee867a4d2c40.def("complete_definition", method_pointer_7d6c4b209cf95927903fbb346ed1915e, "");
    class_185117225e1a5743866dee867a4d2c40.def("field_empty", method_pointer_0a5b25471bff528fbb9b72ef5af7876f, "");
    class_185117225e1a5743866dee867a4d2c40.def("find_first_named_data_member", method_pointer_181cc72bb74b580dabe2e20e6a73be33, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_definition", method_pointer_a4afdcf804ce50869924bb719e8c56ad, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_f33205380b3d59f9ab055c88162aae26, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_b2bf2fbc98ea584d8af311b737d890c4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_3bb26b4f469956498545902e3ceeb370, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_467ef85acbb658b6bca39f94e88e04b9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("has_flexible_array_member", method_pointer_9a5daeba1efd59029ff8f262e494e47b, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_loaded_fields_from_external_storage", method_pointer_28cf01aca6005ccd808452a268c8d4a4, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_object_member", method_pointer_029b3ed72e8d58c78f6d3e2b2e93ecd2, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_volatile_member", method_pointer_e0241aa50e00570db5d7c38952fa095c, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_anonymous_struct_or_union", method_pointer_15ca7f49e43f5b25bf3a8d4f339fb133, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_captured_record", method_pointer_45afc47cbda55b5ea80e6819cdcbaeaf, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_injected_class_name", method_pointer_40368c0592785f4fbf93065ceb1f893b, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_lambda", method_pointer_5c0db88ea6fa5a05be0159c550fd9c4b, "");
    class_185117225e1a5743866dee867a4d2c40.def("may_insert_extra_padding", method_pointer_f0ec893545b65ce8bd40e0d37fb8d246, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_anonymous_struct_or_union", method_pointer_a031071ae7f357c3829049818c9dfcd0, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_captured_record", method_pointer_560a6bfc2e665e44974df63e73ea75a9, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_flexible_array_member", method_pointer_cc33a0910fbf5fdc95d97c2f23f96528, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_loaded_fields_from_external_storage", method_pointer_6615669a8a8f5695859bb4ea0332556f, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_object_member", method_pointer_b8a5822bd35e54a5a0bedc2463b0685b, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_volatile_member", method_pointer_0c95bac14dfc5319aa996ce4fec5113a, "");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof_kind");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}