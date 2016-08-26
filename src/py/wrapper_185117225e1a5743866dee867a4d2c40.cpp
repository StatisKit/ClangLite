#include "_clanglite.h"


namespace autowig
{
}


void wrapper_185117225e1a5743866dee867a4d2c40()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_599f54d3d6c158f680c688c2fd16ce59)(class ::clang::Decl  const *) = ::clang::RecordDecl::classof;
    bool  (*method_pointer_4d2be1e05b685fd2966a47f4a44426b0)(enum ::clang::Decl::Kind ) = ::clang::RecordDecl::classofKind;
    void  (::clang::RecordDecl::*method_pointer_f4c507a1b2c95a2cb551c76dce6dc840)() = &::clang::RecordDecl::completeDefinition;
    bool  (::clang::RecordDecl::*method_pointer_d15ae84740ab5163b6b912faab309798)() const = &::clang::RecordDecl::field_empty;
    class ::clang::FieldDecl  const * (::clang::RecordDecl::*method_pointer_b202152bc38854299c2372dd3699846d)() const = &::clang::RecordDecl::findFirstNamedDataMember;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_11dc85b1dd04584dab78372d1d550a78)() const = &::clang::RecordDecl::getDefinition;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_c1e8eb39e6d4558e974ce813c7413597)() const = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_bfc2c02a2cb857a792c58021d0517846)() = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_84c2908edcf951fb857dc2e31016cfd0)() = &::clang::RecordDecl::getPreviousDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_68029b66d8075d45a4bc4519afb96406)() const = &::clang::RecordDecl::getPreviousDecl;
    bool  (::clang::RecordDecl::*method_pointer_78b88f207de252af8daa10780a8ba5e4)() const = &::clang::RecordDecl::hasFlexibleArrayMember;
    bool  (::clang::RecordDecl::*method_pointer_1f14addd06765a118eb277d510ba1299)() const = &::clang::RecordDecl::hasLoadedFieldsFromExternalStorage;
    bool  (::clang::RecordDecl::*method_pointer_7e4b68af32725c07bab7b5e1e570d372)() const = &::clang::RecordDecl::hasObjectMember;
    bool  (::clang::RecordDecl::*method_pointer_5e9c960281535cea882f19a8a1c2e868)() const = &::clang::RecordDecl::hasVolatileMember;
    bool  (::clang::RecordDecl::*method_pointer_5be0dc4154755695a000c00012d45d90)() const = &::clang::RecordDecl::isAnonymousStructOrUnion;
    bool  (::clang::RecordDecl::*method_pointer_feb55c4e969f5bfc84fff824a983cbca)() const = &::clang::RecordDecl::isCapturedRecord;
    bool  (::clang::RecordDecl::*method_pointer_243e7e2641595b20be9c62412fdecc04)() const = &::clang::RecordDecl::isInjectedClassName;
    bool  (::clang::RecordDecl::*method_pointer_f3302af84fcc54979cb9cda73aaec585)() const = &::clang::RecordDecl::isLambda;
    bool  (::clang::RecordDecl::*method_pointer_6326e5fb7fd059f78d984478358e99e5)(bool ) const = &::clang::RecordDecl::mayInsertExtraPadding;
    void  (::clang::RecordDecl::*method_pointer_e2a6da9ee56d597b8aae2f6da0d23ab8)(bool ) = &::clang::RecordDecl::setAnonymousStructOrUnion;
    void  (::clang::RecordDecl::*method_pointer_54af400987f853e2bdc858223fd926d2)() = &::clang::RecordDecl::setCapturedRecord;
    void  (::clang::RecordDecl::*method_pointer_bb444872976f51c8814cc334a8fd35a2)(bool ) = &::clang::RecordDecl::setHasFlexibleArrayMember;
    void  (::clang::RecordDecl::*method_pointer_e0eadba8c70d5927b5870884c28e7ab1)(bool ) = &::clang::RecordDecl::setHasLoadedFieldsFromExternalStorage;
    void  (::clang::RecordDecl::*method_pointer_a73c2bc62a2f542487aa605d5dbd4bd9)(bool ) = &::clang::RecordDecl::setHasObjectMember;
    void  (::clang::RecordDecl::*method_pointer_22c1d444163f5672aea4963427ad8a3f)(bool ) = &::clang::RecordDecl::setHasVolatileMember;
    boost::python::class_< class ::clang::RecordDecl, autowig::HeldType< class ::clang::RecordDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_185117225e1a5743866dee867a4d2c40("RecordDecl", "", boost::python::no_init);
    class_185117225e1a5743866dee867a4d2c40.def("classof", method_pointer_599f54d3d6c158f680c688c2fd16ce59, "");
    class_185117225e1a5743866dee867a4d2c40.def("classof_kind", method_pointer_4d2be1e05b685fd2966a47f4a44426b0, "");
    class_185117225e1a5743866dee867a4d2c40.def("complete_definition", method_pointer_f4c507a1b2c95a2cb551c76dce6dc840, "");
    class_185117225e1a5743866dee867a4d2c40.def("field_empty", method_pointer_d15ae84740ab5163b6b912faab309798, "");
    class_185117225e1a5743866dee867a4d2c40.def("find_first_named_data_member", method_pointer_b202152bc38854299c2372dd3699846d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_definition", method_pointer_11dc85b1dd04584dab78372d1d550a78, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_c1e8eb39e6d4558e974ce813c7413597, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_bfc2c02a2cb857a792c58021d0517846, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_84c2908edcf951fb857dc2e31016cfd0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_68029b66d8075d45a4bc4519afb96406, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("has_flexible_array_member", method_pointer_78b88f207de252af8daa10780a8ba5e4, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_loaded_fields_from_external_storage", method_pointer_1f14addd06765a118eb277d510ba1299, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_object_member", method_pointer_7e4b68af32725c07bab7b5e1e570d372, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_volatile_member", method_pointer_5e9c960281535cea882f19a8a1c2e868, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_anonymous_struct_or_union", method_pointer_5be0dc4154755695a000c00012d45d90, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_captured_record", method_pointer_feb55c4e969f5bfc84fff824a983cbca, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_injected_class_name", method_pointer_243e7e2641595b20be9c62412fdecc04, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_lambda", method_pointer_f3302af84fcc54979cb9cda73aaec585, "");
    class_185117225e1a5743866dee867a4d2c40.def("may_insert_extra_padding", method_pointer_6326e5fb7fd059f78d984478358e99e5, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_anonymous_struct_or_union", method_pointer_e2a6da9ee56d597b8aae2f6da0d23ab8, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_captured_record", method_pointer_54af400987f853e2bdc858223fd926d2, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_flexible_array_member", method_pointer_bb444872976f51c8814cc334a8fd35a2, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_loaded_fields_from_external_storage", method_pointer_e0eadba8c70d5927b5870884c28e7ab1, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_object_member", method_pointer_a73c2bc62a2f542487aa605d5dbd4bd9, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_volatile_member", method_pointer_22c1d444163f5672aea4963427ad8a3f, "");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof_kind");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}