#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::RecordDecl const volatile * get_pointer<class ::clang::RecordDecl const volatile >(class ::clang::RecordDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_185117225e1a5743866dee867a4d2c40()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::RecordDecl * (::clang::RecordDecl::*method_pointer_1fdfd78761fd5da4ba1e6500928e8e56)() = &::clang::RecordDecl::getPreviousDecl;
    class ::clang::RecordDecl const * (::clang::RecordDecl::*method_pointer_8da7e6e2be05583ab61debedf05fcbff)() const = &::clang::RecordDecl::getPreviousDecl;
    class ::clang::RecordDecl * (::clang::RecordDecl::*method_pointer_426ec22402415a26b67884a879738dd5)() = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl const * (::clang::RecordDecl::*method_pointer_f46a88bb0e9f506baf5dac7f28f10c29)() const = &::clang::RecordDecl::getMostRecentDecl;
    bool  (::clang::RecordDecl::*method_pointer_b44c74c226c75765a9933d41ddb5952d)() const = &::clang::RecordDecl::hasFlexibleArrayMember;
    void  (::clang::RecordDecl::*method_pointer_e29353accfc25d50aa3782d7ace5c756)(bool ) = &::clang::RecordDecl::setHasFlexibleArrayMember;
    bool  (::clang::RecordDecl::*method_pointer_0a8e0e22135d5b0da273c62ef32707c5)() const = &::clang::RecordDecl::isAnonymousStructOrUnion;
    void  (::clang::RecordDecl::*method_pointer_e33a27829c4f55e98c2ec1143fc6b6c3)(bool ) = &::clang::RecordDecl::setAnonymousStructOrUnion;
    bool  (::clang::RecordDecl::*method_pointer_8444dd518d2c5bcd857cb7716b49ce02)() const = &::clang::RecordDecl::hasObjectMember;
    void  (::clang::RecordDecl::*method_pointer_dcc7502f88d154ed9d58a3df8e8b8670)(bool ) = &::clang::RecordDecl::setHasObjectMember;
    bool  (::clang::RecordDecl::*method_pointer_55927f73998e5f03b6a6d2339a4838c1)() const = &::clang::RecordDecl::hasVolatileMember;
    void  (::clang::RecordDecl::*method_pointer_75a0e274e64151c2bbde7007919c60c6)(bool ) = &::clang::RecordDecl::setHasVolatileMember;
    bool  (::clang::RecordDecl::*method_pointer_e8a30e85823255da9b87347893a2b073)() const = &::clang::RecordDecl::hasLoadedFieldsFromExternalStorage;
    void  (::clang::RecordDecl::*method_pointer_ea7bb365cecf5a39b5eb2e337916f75e)(bool ) = &::clang::RecordDecl::setHasLoadedFieldsFromExternalStorage;
    bool  (::clang::RecordDecl::*method_pointer_54fcf92d5be35813bd60a25f0b63f131)() const = &::clang::RecordDecl::isInjectedClassName;
    bool  (::clang::RecordDecl::*method_pointer_ab7a4cbd87405e24b6921353458ecad9)() const = &::clang::RecordDecl::isLambda;
    bool  (::clang::RecordDecl::*method_pointer_17c8489036a656d28a8cf62b2f566687)() const = &::clang::RecordDecl::isCapturedRecord;
    void  (::clang::RecordDecl::*method_pointer_56d8dc828841516182e40cdbbd69f7e6)() = &::clang::RecordDecl::setCapturedRecord;
    class ::clang::RecordDecl * (::clang::RecordDecl::*method_pointer_941b395ec4e15a9bb7c81edbd5bc90ab)() const = &::clang::RecordDecl::getDefinition;
    bool  (::clang::RecordDecl::*method_pointer_1de82830699f58379e5d44c560c9b3c4)() const = &::clang::RecordDecl::field_empty;
    bool  (*method_pointer_c801a507b00d573aa619d0faf39cab68)(class ::clang::Decl const *) = ::clang::RecordDecl::classof;
    bool  (*method_pointer_2dc64ca2060e550c9379afa560a10b84)(enum ::clang::Decl::Kind ) = ::clang::RecordDecl::classofKind;
    bool  (::clang::RecordDecl::*method_pointer_79712d6cdaf5557796c713cf1960587f)(bool ) const = &::clang::RecordDecl::mayInsertExtraPadding;
    class ::clang::FieldDecl const * (::clang::RecordDecl::*method_pointer_d6c3aaa90049542c8aded907ed8a5b23)() const = &::clang::RecordDecl::findFirstNamedDataMember;
    boost::python::class_< class ::clang::RecordDecl, autowig::Held< class ::clang::RecordDecl >::Type, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_185117225e1a5743866dee867a4d2c40("RecordDecl", "", boost::python::no_init);
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_1fdfd78761fd5da4ba1e6500928e8e56, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_8da7e6e2be05583ab61debedf05fcbff, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_426ec22402415a26b67884a879738dd5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_f46a88bb0e9f506baf5dac7f28f10c29, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("has_flexible_array_member", method_pointer_b44c74c226c75765a9933d41ddb5952d, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_flexible_array_member", method_pointer_e29353accfc25d50aa3782d7ace5c756, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_anonymous_struct_or_union", method_pointer_0a8e0e22135d5b0da273c62ef32707c5, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_185117225e1a5743866dee867a4d2c40.def("set_anonymous_struct_or_union", method_pointer_e33a27829c4f55e98c2ec1143fc6b6c3, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_object_member", method_pointer_8444dd518d2c5bcd857cb7716b49ce02, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_object_member", method_pointer_dcc7502f88d154ed9d58a3df8e8b8670, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_volatile_member", method_pointer_55927f73998e5f03b6a6d2339a4838c1, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_volatile_member", method_pointer_75a0e274e64151c2bbde7007919c60c6, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_loaded_fields_from_external_storage", method_pointer_e8a30e85823255da9b87347893a2b073, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_loaded_fields_from_external_storage", method_pointer_ea7bb365cecf5a39b5eb2e337916f75e, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_injected_class_name", method_pointer_54fcf92d5be35813bd60a25f0b63f131, "Determines whether this declaration represents the injected class name.\n\nThe injected class name in C++ is the name of the class that appears\ninside the class itself. For example:\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_185117225e1a5743866dee867a4d2c40.def("is_lambda", method_pointer_ab7a4cbd87405e24b6921353458ecad9, "Determine whether this record is a class describing a lambda function\nobject.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_185117225e1a5743866dee867a4d2c40.def("is_captured_record", method_pointer_17c8489036a656d28a8cf62b2f566687, "Determine whether this record is a record for captured variables in\nCapturedStmt construct.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_185117225e1a5743866dee867a4d2c40.def("set_captured_record", method_pointer_56d8dc828841516182e40cdbbd69f7e6, "Mark the record as a record for captured variables in CapturedStmt\nconstruct.\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_185117225e1a5743866dee867a4d2c40.def("get_definition", method_pointer_941b395ec4e15a9bb7c81edbd5bc90ab, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.RecordDecl`\n\n");
    class_185117225e1a5743866dee867a4d2c40.def("field_empty", method_pointer_1de82830699f58379e5d44c560c9b3c4, "");
    class_185117225e1a5743866dee867a4d2c40.def("classof", method_pointer_c801a507b00d573aa619d0faf39cab68, "");
    class_185117225e1a5743866dee867a4d2c40.def("classof_kind", method_pointer_2dc64ca2060e550c9379afa560a10b84, "");
    class_185117225e1a5743866dee867a4d2c40.def("may_insert_extra_padding", method_pointer_79712d6cdaf5557796c713cf1960587f, "Whether we are allowed to insert extra padding between fields. These\npadding are added to help AddressSanitizer detect intra-object-overflow\nbugs.\n\n:Parameter:\n    `EmitRemark` (:cpp:any:`bool`) - Undocumented\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_185117225e1a5743866dee867a4d2c40.def("find_first_named_data_member", method_pointer_d6c3aaa90049542c8aded907ed8a5b23, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.FieldDecl`\n\n");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof_kind");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof");

    if(autowig::Held< class ::clang::RecordDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::RecordDecl >::Type, autowig::Held< class ::clang::TagDecl >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::RecordDecl >::Type, boost::python::objects::make_ptr_instance< class ::clang::RecordDecl, boost::python::objects::pointer_holder< autowig::Held< class ::clang::RecordDecl >::Type, class ::clang::RecordDecl > > >();
    }

}