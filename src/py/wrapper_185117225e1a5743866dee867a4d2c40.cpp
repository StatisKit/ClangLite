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
    bool  (*method_pointer_b5687f66091751338d7606a31e4d8092)(class ::clang::Decl  const *) = ::clang::RecordDecl::classof;
    bool  (*method_pointer_d5d5ee39122950e7a9f20b965110cd2c)(enum ::clang::Decl::Kind ) = ::clang::RecordDecl::classofKind;
    void  (::clang::RecordDecl::*method_pointer_cdc14e33011e5485a9dca286e7e28a6f)() = &::clang::RecordDecl::completeDefinition;
    bool  (::clang::RecordDecl::*method_pointer_95fcb9ead27750878d9ecfb71dcc2b54)() const = &::clang::RecordDecl::field_empty;
    class ::clang::FieldDecl  const * (::clang::RecordDecl::*method_pointer_2e8bb262f71b58bda3435b22b7eb5732)() const = &::clang::RecordDecl::findFirstNamedDataMember;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_cb2fc936b0d2597d9f12b17141883818)() const = &::clang::RecordDecl::getDefinition;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_3bb00b0b7865559caff987c8aae9ac91)() const = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_9902d21c843d5f3280d144cc811bc70c)() = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_873a6ac4011156928c1f9f7d9cc6e121)() = &::clang::RecordDecl::getPreviousDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_2fbf25f1cca95e99a2198a01750999a0)() const = &::clang::RecordDecl::getPreviousDecl;
    bool  (::clang::RecordDecl::*method_pointer_3c32f9cca4645fc79a4333fcb5732a5d)() const = &::clang::RecordDecl::hasFlexibleArrayMember;
    bool  (::clang::RecordDecl::*method_pointer_4f512c2b849357de9673d37b5eb138d5)() const = &::clang::RecordDecl::hasLoadedFieldsFromExternalStorage;
    bool  (::clang::RecordDecl::*method_pointer_3702317abb51524c9fea367c70877b31)() const = &::clang::RecordDecl::hasObjectMember;
    bool  (::clang::RecordDecl::*method_pointer_99cef859dbfd54c7b5431c25a69b2c37)() const = &::clang::RecordDecl::hasVolatileMember;
    bool  (::clang::RecordDecl::*method_pointer_9655105b82a4521e800e9653dfb6ec54)() const = &::clang::RecordDecl::isAnonymousStructOrUnion;
    bool  (::clang::RecordDecl::*method_pointer_1e4fc668466a59f7a4abef217409e57a)() const = &::clang::RecordDecl::isCapturedRecord;
    bool  (::clang::RecordDecl::*method_pointer_2ee555e8f2ef535fa7e56a3050c67f60)() const = &::clang::RecordDecl::isInjectedClassName;
    bool  (::clang::RecordDecl::*method_pointer_24e3f235f2495ac382c63a367919e2f4)() const = &::clang::RecordDecl::isLambda;
    bool  (::clang::RecordDecl::*method_pointer_467a8883b5345870b82848786119fdd6)(bool ) const = &::clang::RecordDecl::mayInsertExtraPadding;
    void  (::clang::RecordDecl::*method_pointer_5f40a6da958f596abc8673e86cc2ac66)(bool ) = &::clang::RecordDecl::setAnonymousStructOrUnion;
    void  (::clang::RecordDecl::*method_pointer_6d15c10b357f5db4b4b42384f8090bf3)() = &::clang::RecordDecl::setCapturedRecord;
    void  (::clang::RecordDecl::*method_pointer_b7ceb861b03950979583fd2732f06db3)(bool ) = &::clang::RecordDecl::setHasFlexibleArrayMember;
    void  (::clang::RecordDecl::*method_pointer_e042071d36de5072abd4c1a514d359be)(bool ) = &::clang::RecordDecl::setHasLoadedFieldsFromExternalStorage;
    void  (::clang::RecordDecl::*method_pointer_e05ac6e8d12957c495559f14714b9160)(bool ) = &::clang::RecordDecl::setHasObjectMember;
    void  (::clang::RecordDecl::*method_pointer_c1168f68162658ccaee470c5291e9615)(bool ) = &::clang::RecordDecl::setHasVolatileMember;
    boost::python::class_< class ::clang::RecordDecl, autowig::HeldType< class ::clang::RecordDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_185117225e1a5743866dee867a4d2c40("RecordDecl", "", boost::python::no_init);
    class_185117225e1a5743866dee867a4d2c40.def("classof", method_pointer_b5687f66091751338d7606a31e4d8092, "");
    class_185117225e1a5743866dee867a4d2c40.def("classof_kind", method_pointer_d5d5ee39122950e7a9f20b965110cd2c, "");
    class_185117225e1a5743866dee867a4d2c40.def("complete_definition", method_pointer_cdc14e33011e5485a9dca286e7e28a6f, "");
    class_185117225e1a5743866dee867a4d2c40.def("field_empty", method_pointer_95fcb9ead27750878d9ecfb71dcc2b54, "");
    class_185117225e1a5743866dee867a4d2c40.def("find_first_named_data_member", method_pointer_2e8bb262f71b58bda3435b22b7eb5732, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_definition", method_pointer_cb2fc936b0d2597d9f12b17141883818, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_3bb00b0b7865559caff987c8aae9ac91, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_9902d21c843d5f3280d144cc811bc70c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_873a6ac4011156928c1f9f7d9cc6e121, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_2fbf25f1cca95e99a2198a01750999a0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("has_flexible_array_member", method_pointer_3c32f9cca4645fc79a4333fcb5732a5d, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_loaded_fields_from_external_storage", method_pointer_4f512c2b849357de9673d37b5eb138d5, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_object_member", method_pointer_3702317abb51524c9fea367c70877b31, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_volatile_member", method_pointer_99cef859dbfd54c7b5431c25a69b2c37, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_anonymous_struct_or_union", method_pointer_9655105b82a4521e800e9653dfb6ec54, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_captured_record", method_pointer_1e4fc668466a59f7a4abef217409e57a, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_injected_class_name", method_pointer_2ee555e8f2ef535fa7e56a3050c67f60, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_lambda", method_pointer_24e3f235f2495ac382c63a367919e2f4, "");
    class_185117225e1a5743866dee867a4d2c40.def("may_insert_extra_padding", method_pointer_467a8883b5345870b82848786119fdd6, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_anonymous_struct_or_union", method_pointer_5f40a6da958f596abc8673e86cc2ac66, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_captured_record", method_pointer_6d15c10b357f5db4b4b42384f8090bf3, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_flexible_array_member", method_pointer_b7ceb861b03950979583fd2732f06db3, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_loaded_fields_from_external_storage", method_pointer_e042071d36de5072abd4c1a514d359be, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_object_member", method_pointer_e05ac6e8d12957c495559f14714b9160, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_volatile_member", method_pointer_c1168f68162658ccaee470c5291e9615, "");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof_kind");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}