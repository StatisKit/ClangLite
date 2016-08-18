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
    bool  (*method_pointer_66d3631e73a65f39bca4a69461c031bf)(class ::clang::Decl  const *) = ::clang::RecordDecl::classof;
    bool  (*method_pointer_46a9f7ae67f256d2af41b8ae77efbc04)(enum ::clang::Decl::Kind ) = ::clang::RecordDecl::classofKind;
    void  (::clang::RecordDecl::*method_pointer_673bd469fd5854d08672617315b4b50e)() = &::clang::RecordDecl::completeDefinition;
    bool  (::clang::RecordDecl::*method_pointer_4f3bc254b6c85f309a08dcac96dd1401)() const = &::clang::RecordDecl::field_empty;
    class ::clang::FieldDecl  const * (::clang::RecordDecl::*method_pointer_58024876e1ba52698bb01e063077676b)() const = &::clang::RecordDecl::findFirstNamedDataMember;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_c50a48addf5556419e05602dfd06583a)() const = &::clang::RecordDecl::getDefinition;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_6560e2464f1b5420afe62f470cd25887)() = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_ed9823f7ce3a5841984a29c66493d5a7)() const = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_41c5e2cfb81a52dcb16fe536318d184b)() = &::clang::RecordDecl::getPreviousDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_f2eb27662b085c8caae0076d2956b04d)() const = &::clang::RecordDecl::getPreviousDecl;
    bool  (::clang::RecordDecl::*method_pointer_6fcfe547829551eda5c48d8a53034f36)() const = &::clang::RecordDecl::hasFlexibleArrayMember;
    bool  (::clang::RecordDecl::*method_pointer_d00efc78344d53b48e69dff60cae9e0a)() const = &::clang::RecordDecl::hasLoadedFieldsFromExternalStorage;
    bool  (::clang::RecordDecl::*method_pointer_eca5f5f671dc5a2b99eea12869297b64)() const = &::clang::RecordDecl::hasObjectMember;
    bool  (::clang::RecordDecl::*method_pointer_32038a0d38835e2ea06fedc325433a65)() const = &::clang::RecordDecl::hasVolatileMember;
    bool  (::clang::RecordDecl::*method_pointer_64c5a9eef5ba5088b2d6ec34050169c3)() const = &::clang::RecordDecl::isAnonymousStructOrUnion;
    bool  (::clang::RecordDecl::*method_pointer_94c60991522d54de91cdb8a502f16e28)() const = &::clang::RecordDecl::isCapturedRecord;
    bool  (::clang::RecordDecl::*method_pointer_0c744e96bf7c5e1cb5f18341a629acee)() const = &::clang::RecordDecl::isInjectedClassName;
    bool  (::clang::RecordDecl::*method_pointer_087cada95e245453b69670ce55bcb952)() const = &::clang::RecordDecl::isLambda;
    bool  (::clang::RecordDecl::*method_pointer_24e29dd94c495b86a531791b74838e43)(bool ) const = &::clang::RecordDecl::mayInsertExtraPadding;
    void  (::clang::RecordDecl::*method_pointer_5c965391080856a780bd5e7a540bc866)(bool ) = &::clang::RecordDecl::setAnonymousStructOrUnion;
    void  (::clang::RecordDecl::*method_pointer_9abf09ba49d450f2a23eebb6ece7b145)() = &::clang::RecordDecl::setCapturedRecord;
    void  (::clang::RecordDecl::*method_pointer_0c09b399bab45096828b1273c4e84a04)(bool ) = &::clang::RecordDecl::setHasFlexibleArrayMember;
    void  (::clang::RecordDecl::*method_pointer_55153efcfdc457ea81dfaa5843d73811)(bool ) = &::clang::RecordDecl::setHasLoadedFieldsFromExternalStorage;
    void  (::clang::RecordDecl::*method_pointer_7fd37f93a1265f26905534a9671a9d55)(bool ) = &::clang::RecordDecl::setHasObjectMember;
    void  (::clang::RecordDecl::*method_pointer_62edc08bbb215cd0acbb8caaacc03aaa)(bool ) = &::clang::RecordDecl::setHasVolatileMember;
    boost::python::class_< class ::clang::RecordDecl, autowig::HeldType< class ::clang::RecordDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_185117225e1a5743866dee867a4d2c40("RecordDecl", "", boost::python::no_init);
    class_185117225e1a5743866dee867a4d2c40.def("classof", method_pointer_66d3631e73a65f39bca4a69461c031bf, "");
    class_185117225e1a5743866dee867a4d2c40.def("classof_kind", method_pointer_46a9f7ae67f256d2af41b8ae77efbc04, "");
    class_185117225e1a5743866dee867a4d2c40.def("complete_definition", method_pointer_673bd469fd5854d08672617315b4b50e, "");
    class_185117225e1a5743866dee867a4d2c40.def("field_empty", method_pointer_4f3bc254b6c85f309a08dcac96dd1401, "");
    class_185117225e1a5743866dee867a4d2c40.def("find_first_named_data_member", method_pointer_58024876e1ba52698bb01e063077676b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_definition", method_pointer_c50a48addf5556419e05602dfd06583a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_6560e2464f1b5420afe62f470cd25887, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_ed9823f7ce3a5841984a29c66493d5a7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_41c5e2cfb81a52dcb16fe536318d184b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_f2eb27662b085c8caae0076d2956b04d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("has_flexible_array_member", method_pointer_6fcfe547829551eda5c48d8a53034f36, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_loaded_fields_from_external_storage", method_pointer_d00efc78344d53b48e69dff60cae9e0a, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_object_member", method_pointer_eca5f5f671dc5a2b99eea12869297b64, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_volatile_member", method_pointer_32038a0d38835e2ea06fedc325433a65, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_anonymous_struct_or_union", method_pointer_64c5a9eef5ba5088b2d6ec34050169c3, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_captured_record", method_pointer_94c60991522d54de91cdb8a502f16e28, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_injected_class_name", method_pointer_0c744e96bf7c5e1cb5f18341a629acee, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_lambda", method_pointer_087cada95e245453b69670ce55bcb952, "");
    class_185117225e1a5743866dee867a4d2c40.def("may_insert_extra_padding", method_pointer_24e29dd94c495b86a531791b74838e43, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_anonymous_struct_or_union", method_pointer_5c965391080856a780bd5e7a540bc866, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_captured_record", method_pointer_9abf09ba49d450f2a23eebb6ece7b145, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_flexible_array_member", method_pointer_0c09b399bab45096828b1273c4e84a04, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_loaded_fields_from_external_storage", method_pointer_55153efcfdc457ea81dfaa5843d73811, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_object_member", method_pointer_7fd37f93a1265f26905534a9671a9d55, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_volatile_member", method_pointer_62edc08bbb215cd0acbb8caaacc03aaa, "");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof_kind");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}