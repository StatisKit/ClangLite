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
    bool  (::clang::RecordDecl::*method_pointer_90ff8c6a0072571e8c88a3ef75000a59)() const = &::clang::RecordDecl::isCapturedRecord;
    bool  (*method_pointer_3e9ec9b291fa5518ba572ca6497cc0a4)(enum ::clang::Decl::Kind ) = ::clang::RecordDecl::classofKind;
    class ::clang::FieldDecl  const * (::clang::RecordDecl::*method_pointer_09f275e01bbe587785a697989c8870e1)() const = &::clang::RecordDecl::findFirstNamedDataMember;
    bool  (::clang::RecordDecl::*method_pointer_a6d571a999a85f919cce34cb571b5cfd)() const = &::clang::RecordDecl::field_empty;
    void  (::clang::RecordDecl::*method_pointer_296352d9c34b577d839d72a0416c6ac0)(bool ) = &::clang::RecordDecl::setHasObjectMember;
    bool  (::clang::RecordDecl::*method_pointer_f7bf8b986fc75d6cbf534ec2cf4e5569)() const = &::clang::RecordDecl::hasFlexibleArrayMember;
    bool  (::clang::RecordDecl::*method_pointer_2f868ad771f455b4883bc4313bc0ca8d)() const = &::clang::RecordDecl::hasObjectMember;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_acb2b8e7eea652d6814b7404e4ef5959)() const = &::clang::RecordDecl::getDefinition;
    void  (::clang::RecordDecl::*method_pointer_2cc055279d7b56c8903697a4e2f3fe98)(bool ) = &::clang::RecordDecl::setHasVolatileMember;
    bool  (::clang::RecordDecl::*method_pointer_c5feee29e55551d088356e9645d4e6b7)() const = &::clang::RecordDecl::isLambda;
    bool  (::clang::RecordDecl::*method_pointer_44fbddb5f4705bd085568a2c60b4bb86)() const = &::clang::RecordDecl::isInjectedClassName;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_9623e2bf31795ee5b8f00829c02873db)() = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_84bbf49ace55541f81834e77d7c08a64)() = &::clang::RecordDecl::getPreviousDecl;
    bool  (*method_pointer_6786eaa0dce45279a4977ea8e6e3460b)(class ::clang::Decl  const *) = ::clang::RecordDecl::classof;
    void  (::clang::RecordDecl::*method_pointer_31335a02d4d05ffdbd3462ee0fb48bda)(bool ) = &::clang::RecordDecl::setHasLoadedFieldsFromExternalStorage;
    void  (::clang::RecordDecl::*method_pointer_0077325dc3e9586fa14af868cf95e0c9)(bool ) = &::clang::RecordDecl::setHasFlexibleArrayMember;
    void  (::clang::RecordDecl::*method_pointer_8d8f184af54f5e6abfe0beccd30b3010)() = &::clang::RecordDecl::setCapturedRecord;
    void  (::clang::RecordDecl::*method_pointer_abacd8c40aa15a5299da125ea67edd80)() = &::clang::RecordDecl::completeDefinition;
    bool  (::clang::RecordDecl::*method_pointer_c922e0b96db2500695ff6167942e2502)() const = &::clang::RecordDecl::hasVolatileMember;
    void  (::clang::RecordDecl::*method_pointer_4804a479faaa5300a3d0c3e211183e43)(bool ) = &::clang::RecordDecl::setAnonymousStructOrUnion;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_b1a63e508a7156cbbe9c4e3193db4168)() const = &::clang::RecordDecl::getMostRecentDecl;
    bool  (::clang::RecordDecl::*method_pointer_7502db27101850eeb7dd697421adf65e)(bool ) const = &::clang::RecordDecl::mayInsertExtraPadding;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_6f1a7cd4729f5976b5ab691ba78e629f)() const = &::clang::RecordDecl::getPreviousDecl;
    bool  (::clang::RecordDecl::*method_pointer_03bffc6484a35163b048d9b94ea2832e)() const = &::clang::RecordDecl::hasLoadedFieldsFromExternalStorage;
    bool  (::clang::RecordDecl::*method_pointer_015eacd62f1c5b37bf17b9eb21c79770)() const = &::clang::RecordDecl::isAnonymousStructOrUnion;
    boost::python::class_< class ::clang::RecordDecl, autowig::HeldType< class ::clang::RecordDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_185117225e1a5743866dee867a4d2c40("RecordDecl", "", boost::python::no_init);
    class_185117225e1a5743866dee867a4d2c40.def("is_captured_record", method_pointer_90ff8c6a0072571e8c88a3ef75000a59, "");
    class_185117225e1a5743866dee867a4d2c40.def("classof_kind", method_pointer_3e9ec9b291fa5518ba572ca6497cc0a4, "");
    class_185117225e1a5743866dee867a4d2c40.def("find_first_named_data_member", method_pointer_09f275e01bbe587785a697989c8870e1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("field_empty", method_pointer_a6d571a999a85f919cce34cb571b5cfd, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_object_member", method_pointer_296352d9c34b577d839d72a0416c6ac0, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_flexible_array_member", method_pointer_f7bf8b986fc75d6cbf534ec2cf4e5569, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_object_member", method_pointer_2f868ad771f455b4883bc4313bc0ca8d, "");
    class_185117225e1a5743866dee867a4d2c40.def("get_definition", method_pointer_acb2b8e7eea652d6814b7404e4ef5959, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_volatile_member", method_pointer_2cc055279d7b56c8903697a4e2f3fe98, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_lambda", method_pointer_c5feee29e55551d088356e9645d4e6b7, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_injected_class_name", method_pointer_44fbddb5f4705bd085568a2c60b4bb86, "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_9623e2bf31795ee5b8f00829c02873db, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_84bbf49ace55541f81834e77d7c08a64, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("classof", method_pointer_6786eaa0dce45279a4977ea8e6e3460b, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_loaded_fields_from_external_storage", method_pointer_31335a02d4d05ffdbd3462ee0fb48bda, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_flexible_array_member", method_pointer_0077325dc3e9586fa14af868cf95e0c9, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_captured_record", method_pointer_8d8f184af54f5e6abfe0beccd30b3010, "");
    class_185117225e1a5743866dee867a4d2c40.def("complete_definition", method_pointer_abacd8c40aa15a5299da125ea67edd80, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_volatile_member", method_pointer_c922e0b96db2500695ff6167942e2502, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_anonymous_struct_or_union", method_pointer_4804a479faaa5300a3d0c3e211183e43, "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_b1a63e508a7156cbbe9c4e3193db4168, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("may_insert_extra_padding", method_pointer_7502db27101850eeb7dd697421adf65e, "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_6f1a7cd4729f5976b5ab691ba78e629f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("has_loaded_fields_from_external_storage", method_pointer_03bffc6484a35163b048d9b94ea2832e, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_anonymous_struct_or_union", method_pointer_015eacd62f1c5b37bf17b9eb21c79770, "");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof_kind");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}