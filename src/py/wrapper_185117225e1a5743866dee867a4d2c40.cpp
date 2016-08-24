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
    bool  (*method_pointer_95e28a79ce2455aeb8d13a298297b8fa)(class ::clang::Decl  const *) = ::clang::RecordDecl::classof;
    bool  (*method_pointer_3ac63863b8c45de7bc30457eb20b3535)(enum ::clang::Decl::Kind ) = ::clang::RecordDecl::classofKind;
    void  (::clang::RecordDecl::*method_pointer_1b465666955e5ad49ad5f5f1dc35208e)() = &::clang::RecordDecl::completeDefinition;
    bool  (::clang::RecordDecl::*method_pointer_f7d2a8548e2c53b195e808e0b9acf725)() const = &::clang::RecordDecl::field_empty;
    class ::clang::FieldDecl  const * (::clang::RecordDecl::*method_pointer_1eb83e101fcd5665a3c98ee18216325c)() const = &::clang::RecordDecl::findFirstNamedDataMember;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_3c1fcd94456c5c2c8d861629095a5965)() const = &::clang::RecordDecl::getDefinition;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_33e0c169ab5c5ade88129d545485cbf1)() const = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_54bda693e8dc5a04a47de54fb164d587)() = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_cce5b78f00ab55659fa3666d5eceaf94)() = &::clang::RecordDecl::getPreviousDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_f5a189f152135e4fa8cbf981fed34923)() const = &::clang::RecordDecl::getPreviousDecl;
    bool  (::clang::RecordDecl::*method_pointer_005285a245e45b5db76ac72938dd0cdf)() const = &::clang::RecordDecl::hasFlexibleArrayMember;
    bool  (::clang::RecordDecl::*method_pointer_f12c2afacbec5a15b685f4cc79ee9306)() const = &::clang::RecordDecl::hasLoadedFieldsFromExternalStorage;
    bool  (::clang::RecordDecl::*method_pointer_1d341384b186522382f2d691eb8c5f0c)() const = &::clang::RecordDecl::hasObjectMember;
    bool  (::clang::RecordDecl::*method_pointer_cd2999bf08ea51b8af370e4a71b12ad5)() const = &::clang::RecordDecl::hasVolatileMember;
    bool  (::clang::RecordDecl::*method_pointer_d8f6a0885b2a5a048424f26f72426fff)() const = &::clang::RecordDecl::isAnonymousStructOrUnion;
    bool  (::clang::RecordDecl::*method_pointer_8319f09801c2595ca64075245d23676e)() const = &::clang::RecordDecl::isCapturedRecord;
    bool  (::clang::RecordDecl::*method_pointer_3ba70b58447358308cd70a4faa4c1b4d)() const = &::clang::RecordDecl::isInjectedClassName;
    bool  (::clang::RecordDecl::*method_pointer_80287564edc958c5a6c7e8600077ffa4)() const = &::clang::RecordDecl::isLambda;
    bool  (::clang::RecordDecl::*method_pointer_893bddf5c4f8549aa74d42f8626fca31)(bool ) const = &::clang::RecordDecl::mayInsertExtraPadding;
    void  (::clang::RecordDecl::*method_pointer_8c124fb64e9e565b98ab21252e316a0c)(bool ) = &::clang::RecordDecl::setAnonymousStructOrUnion;
    void  (::clang::RecordDecl::*method_pointer_8640ed6dccb15f0d8fe8a19aaf6d714a)() = &::clang::RecordDecl::setCapturedRecord;
    void  (::clang::RecordDecl::*method_pointer_27d8c48562485ced97935b5986fb32ac)(bool ) = &::clang::RecordDecl::setHasFlexibleArrayMember;
    void  (::clang::RecordDecl::*method_pointer_e2519bf72e265cd4b7301649256d7af4)(bool ) = &::clang::RecordDecl::setHasLoadedFieldsFromExternalStorage;
    void  (::clang::RecordDecl::*method_pointer_d75b50d3e1755086a633402505ccb1f6)(bool ) = &::clang::RecordDecl::setHasObjectMember;
    void  (::clang::RecordDecl::*method_pointer_4705316556c2560ca3145ce0202ffd71)(bool ) = &::clang::RecordDecl::setHasVolatileMember;
    boost::python::class_< class ::clang::RecordDecl, autowig::HeldType< class ::clang::RecordDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_185117225e1a5743866dee867a4d2c40("RecordDecl", "", boost::python::no_init);
    class_185117225e1a5743866dee867a4d2c40.def("classof", method_pointer_95e28a79ce2455aeb8d13a298297b8fa, "");
    class_185117225e1a5743866dee867a4d2c40.def("classof_kind", method_pointer_3ac63863b8c45de7bc30457eb20b3535, "");
    class_185117225e1a5743866dee867a4d2c40.def("complete_definition", method_pointer_1b465666955e5ad49ad5f5f1dc35208e, "");
    class_185117225e1a5743866dee867a4d2c40.def("field_empty", method_pointer_f7d2a8548e2c53b195e808e0b9acf725, "");
    class_185117225e1a5743866dee867a4d2c40.def("find_first_named_data_member", method_pointer_1eb83e101fcd5665a3c98ee18216325c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_definition", method_pointer_3c1fcd94456c5c2c8d861629095a5965, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_33e0c169ab5c5ade88129d545485cbf1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_54bda693e8dc5a04a47de54fb164d587, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_cce5b78f00ab55659fa3666d5eceaf94, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_f5a189f152135e4fa8cbf981fed34923, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("has_flexible_array_member", method_pointer_005285a245e45b5db76ac72938dd0cdf, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_loaded_fields_from_external_storage", method_pointer_f12c2afacbec5a15b685f4cc79ee9306, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_object_member", method_pointer_1d341384b186522382f2d691eb8c5f0c, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_volatile_member", method_pointer_cd2999bf08ea51b8af370e4a71b12ad5, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_anonymous_struct_or_union", method_pointer_d8f6a0885b2a5a048424f26f72426fff, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_captured_record", method_pointer_8319f09801c2595ca64075245d23676e, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_injected_class_name", method_pointer_3ba70b58447358308cd70a4faa4c1b4d, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_lambda", method_pointer_80287564edc958c5a6c7e8600077ffa4, "");
    class_185117225e1a5743866dee867a4d2c40.def("may_insert_extra_padding", method_pointer_893bddf5c4f8549aa74d42f8626fca31, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_anonymous_struct_or_union", method_pointer_8c124fb64e9e565b98ab21252e316a0c, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_captured_record", method_pointer_8640ed6dccb15f0d8fe8a19aaf6d714a, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_flexible_array_member", method_pointer_27d8c48562485ced97935b5986fb32ac, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_loaded_fields_from_external_storage", method_pointer_e2519bf72e265cd4b7301649256d7af4, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_object_member", method_pointer_d75b50d3e1755086a633402505ccb1f6, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_volatile_member", method_pointer_4705316556c2560ca3145ce0202ffd71, "");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof_kind");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}