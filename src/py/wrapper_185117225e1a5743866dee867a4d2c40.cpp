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
    bool  (*method_pointer_0d5bd9f2e09255ad8ee2ede81ea6bf0c)(class ::clang::Decl  const *) = ::clang::RecordDecl::classof;
    bool  (*method_pointer_afe77b30022a5cc19bf2f9ea71915671)(enum ::clang::Decl::Kind ) = ::clang::RecordDecl::classofKind;
    void  (::clang::RecordDecl::*method_pointer_21f69b17e2885235bdb2f35f9fa2e8ab)() = &::clang::RecordDecl::completeDefinition;
    bool  (::clang::RecordDecl::*method_pointer_49aad68321845a36826f5987dde701bd)() const = &::clang::RecordDecl::field_empty;
    class ::clang::FieldDecl  const * (::clang::RecordDecl::*method_pointer_d79047c367ba543989bd4be899f9ee80)() const = &::clang::RecordDecl::findFirstNamedDataMember;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_b449e5371b705c4088c4179b66e8d260)() const = &::clang::RecordDecl::getDefinition;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_60a2c965fced5ff8b878443aa57aafdb)() = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_dddaa3e21264509a834442f80fcc205d)() const = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_0cc05bedf754590e9326edb1ae3a069c)() const = &::clang::RecordDecl::getPreviousDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_707f9270e4095aab9e8428a9f8533154)() = &::clang::RecordDecl::getPreviousDecl;
    bool  (::clang::RecordDecl::*method_pointer_f081937498d55fd7bcacceac97fc8f34)() const = &::clang::RecordDecl::hasFlexibleArrayMember;
    bool  (::clang::RecordDecl::*method_pointer_3352dc0c65b75f30b4498a0ebde2aeb2)() const = &::clang::RecordDecl::hasLoadedFieldsFromExternalStorage;
    bool  (::clang::RecordDecl::*method_pointer_648473e65704517b940a164e3704f551)() const = &::clang::RecordDecl::hasObjectMember;
    bool  (::clang::RecordDecl::*method_pointer_4588394f57035ae2b2e4fbdc0285cae5)() const = &::clang::RecordDecl::hasVolatileMember;
    bool  (::clang::RecordDecl::*method_pointer_da00609460f455fc810b28027bed0351)() const = &::clang::RecordDecl::isAnonymousStructOrUnion;
    bool  (::clang::RecordDecl::*method_pointer_d92e4208669e503a8e3a282781efaa18)() const = &::clang::RecordDecl::isCapturedRecord;
    bool  (::clang::RecordDecl::*method_pointer_4c7a992ce3005d72879ececedae7ba16)() const = &::clang::RecordDecl::isInjectedClassName;
    bool  (::clang::RecordDecl::*method_pointer_3800f8fb3d745e4ca2bddf6ee60ccf8c)() const = &::clang::RecordDecl::isLambda;
    bool  (::clang::RecordDecl::*method_pointer_3a476cc7e1215fc78df13fc438af4eab)(bool ) const = &::clang::RecordDecl::mayInsertExtraPadding;
    void  (::clang::RecordDecl::*method_pointer_eef9b3c4975858a790ca2409a9e0733d)(bool ) = &::clang::RecordDecl::setAnonymousStructOrUnion;
    void  (::clang::RecordDecl::*method_pointer_ef6a846cf22f57ab910bb0854cfe366c)() = &::clang::RecordDecl::setCapturedRecord;
    void  (::clang::RecordDecl::*method_pointer_b660328c27335ed6aa9ce7b32a44ea89)(bool ) = &::clang::RecordDecl::setHasFlexibleArrayMember;
    void  (::clang::RecordDecl::*method_pointer_82060925ff6859cd821ab40556797647)(bool ) = &::clang::RecordDecl::setHasLoadedFieldsFromExternalStorage;
    void  (::clang::RecordDecl::*method_pointer_ff9093b5d85854379585c809312fe8c1)(bool ) = &::clang::RecordDecl::setHasObjectMember;
    void  (::clang::RecordDecl::*method_pointer_0f05063c07ce58d5b85eb1cd4ef6e9aa)(bool ) = &::clang::RecordDecl::setHasVolatileMember;
    boost::python::class_< class ::clang::RecordDecl, autowig::HeldType< class ::clang::RecordDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_185117225e1a5743866dee867a4d2c40("RecordDecl", "", boost::python::no_init);
    class_185117225e1a5743866dee867a4d2c40.def("classof", method_pointer_0d5bd9f2e09255ad8ee2ede81ea6bf0c, "");
    class_185117225e1a5743866dee867a4d2c40.def("classof_kind", method_pointer_afe77b30022a5cc19bf2f9ea71915671, "");
    class_185117225e1a5743866dee867a4d2c40.def("complete_definition", method_pointer_21f69b17e2885235bdb2f35f9fa2e8ab, "");
    class_185117225e1a5743866dee867a4d2c40.def("field_empty", method_pointer_49aad68321845a36826f5987dde701bd, "");
    class_185117225e1a5743866dee867a4d2c40.def("find_first_named_data_member", method_pointer_d79047c367ba543989bd4be899f9ee80, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_definition", method_pointer_b449e5371b705c4088c4179b66e8d260, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_60a2c965fced5ff8b878443aa57aafdb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_dddaa3e21264509a834442f80fcc205d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_0cc05bedf754590e9326edb1ae3a069c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_707f9270e4095aab9e8428a9f8533154, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("has_flexible_array_member", method_pointer_f081937498d55fd7bcacceac97fc8f34, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_loaded_fields_from_external_storage", method_pointer_3352dc0c65b75f30b4498a0ebde2aeb2, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_object_member", method_pointer_648473e65704517b940a164e3704f551, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_volatile_member", method_pointer_4588394f57035ae2b2e4fbdc0285cae5, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_anonymous_struct_or_union", method_pointer_da00609460f455fc810b28027bed0351, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_captured_record", method_pointer_d92e4208669e503a8e3a282781efaa18, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_injected_class_name", method_pointer_4c7a992ce3005d72879ececedae7ba16, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_lambda", method_pointer_3800f8fb3d745e4ca2bddf6ee60ccf8c, "");
    class_185117225e1a5743866dee867a4d2c40.def("may_insert_extra_padding", method_pointer_3a476cc7e1215fc78df13fc438af4eab, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_anonymous_struct_or_union", method_pointer_eef9b3c4975858a790ca2409a9e0733d, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_captured_record", method_pointer_ef6a846cf22f57ab910bb0854cfe366c, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_flexible_array_member", method_pointer_b660328c27335ed6aa9ce7b32a44ea89, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_loaded_fields_from_external_storage", method_pointer_82060925ff6859cd821ab40556797647, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_object_member", method_pointer_ff9093b5d85854379585c809312fe8c1, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_volatile_member", method_pointer_0f05063c07ce58d5b85eb1cd4ef6e9aa, "");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof_kind");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}