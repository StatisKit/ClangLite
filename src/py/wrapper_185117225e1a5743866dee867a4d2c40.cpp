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
    bool  (*method_pointer_ca4a758ef5a1586cbe808627db1091ba)(class ::clang::Decl  const *) = ::clang::RecordDecl::classof;
    bool  (*method_pointer_6a46a2a0266b5c4ab5368f114d58cb94)(enum ::clang::Decl::Kind ) = ::clang::RecordDecl::classofKind;
    void  (::clang::RecordDecl::*method_pointer_cd8fc0f9207b5bdfa99819392bf2997a)() = &::clang::RecordDecl::completeDefinition;
    bool  (::clang::RecordDecl::*method_pointer_e7acf95861af505096bf2e94480cf2ab)() const = &::clang::RecordDecl::field_empty;
    class ::clang::FieldDecl  const * (::clang::RecordDecl::*method_pointer_0d0ebc51be4a5d959cb39db31a8a95b4)() const = &::clang::RecordDecl::findFirstNamedDataMember;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_535153435c5d50b8aa67a54288f577e3)() const = &::clang::RecordDecl::getDefinition;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_b9a80b60e6905096abb0c29abfacfe73)() = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_c7cef986ada05c2c84af249c9d2cf28a)() const = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_6a1494a1b2875a06a433e9c3255d7149)() = &::clang::RecordDecl::getPreviousDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_bf4f66c807a55312b48f3df12dd00815)() const = &::clang::RecordDecl::getPreviousDecl;
    bool  (::clang::RecordDecl::*method_pointer_7e0ccc708dbd5de4910e6295bccbfd15)() const = &::clang::RecordDecl::hasFlexibleArrayMember;
    bool  (::clang::RecordDecl::*method_pointer_9996201178ca56d2826ef13d5ccda79e)() const = &::clang::RecordDecl::hasLoadedFieldsFromExternalStorage;
    bool  (::clang::RecordDecl::*method_pointer_f8877124e75153c1b5d256cb43588788)() const = &::clang::RecordDecl::hasObjectMember;
    bool  (::clang::RecordDecl::*method_pointer_05beb17539f55809899c8dab7a806381)() const = &::clang::RecordDecl::hasVolatileMember;
    bool  (::clang::RecordDecl::*method_pointer_89e3fe97f64d5378932a6b0869bd3fe4)() const = &::clang::RecordDecl::isAnonymousStructOrUnion;
    bool  (::clang::RecordDecl::*method_pointer_4c7c03b2a02759e4b5a7a4939e3f3139)() const = &::clang::RecordDecl::isCapturedRecord;
    bool  (::clang::RecordDecl::*method_pointer_24b1edcb9e1a5b5f933c2f331fce5b03)() const = &::clang::RecordDecl::isInjectedClassName;
    bool  (::clang::RecordDecl::*method_pointer_a77cbada0b575158acdc1cfe0064f1f4)() const = &::clang::RecordDecl::isLambda;
    bool  (::clang::RecordDecl::*method_pointer_d2e88e35d1e452b086aaeb056b14b7ff)(bool ) const = &::clang::RecordDecl::mayInsertExtraPadding;
    void  (::clang::RecordDecl::*method_pointer_42d1eab24c2957e08e44a70c2cc81c4e)(bool ) = &::clang::RecordDecl::setAnonymousStructOrUnion;
    void  (::clang::RecordDecl::*method_pointer_8fd34701d4e8519ea8a4a518490f41cc)() = &::clang::RecordDecl::setCapturedRecord;
    void  (::clang::RecordDecl::*method_pointer_a7e292e4b2b75e23aad71ede40c4ce23)(bool ) = &::clang::RecordDecl::setHasFlexibleArrayMember;
    void  (::clang::RecordDecl::*method_pointer_198c72ec3bb7546487ed42d9c3f781a4)(bool ) = &::clang::RecordDecl::setHasLoadedFieldsFromExternalStorage;
    void  (::clang::RecordDecl::*method_pointer_f1405f72099350789e409d130aebfb0e)(bool ) = &::clang::RecordDecl::setHasObjectMember;
    void  (::clang::RecordDecl::*method_pointer_83652fcdb62f5785851941e4c65bb216)(bool ) = &::clang::RecordDecl::setHasVolatileMember;
    boost::python::class_< class ::clang::RecordDecl, autowig::HeldType< class ::clang::RecordDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_185117225e1a5743866dee867a4d2c40("RecordDecl", "", boost::python::no_init);
    class_185117225e1a5743866dee867a4d2c40.def("classof", method_pointer_ca4a758ef5a1586cbe808627db1091ba, "");
    class_185117225e1a5743866dee867a4d2c40.def("classof_kind", method_pointer_6a46a2a0266b5c4ab5368f114d58cb94, "");
    class_185117225e1a5743866dee867a4d2c40.def("complete_definition", method_pointer_cd8fc0f9207b5bdfa99819392bf2997a, "");
    class_185117225e1a5743866dee867a4d2c40.def("field_empty", method_pointer_e7acf95861af505096bf2e94480cf2ab, "");
    class_185117225e1a5743866dee867a4d2c40.def("find_first_named_data_member", method_pointer_0d0ebc51be4a5d959cb39db31a8a95b4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_definition", method_pointer_535153435c5d50b8aa67a54288f577e3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_b9a80b60e6905096abb0c29abfacfe73, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_c7cef986ada05c2c84af249c9d2cf28a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_6a1494a1b2875a06a433e9c3255d7149, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_bf4f66c807a55312b48f3df12dd00815, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("has_flexible_array_member", method_pointer_7e0ccc708dbd5de4910e6295bccbfd15, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_loaded_fields_from_external_storage", method_pointer_9996201178ca56d2826ef13d5ccda79e, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_object_member", method_pointer_f8877124e75153c1b5d256cb43588788, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_volatile_member", method_pointer_05beb17539f55809899c8dab7a806381, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_anonymous_struct_or_union", method_pointer_89e3fe97f64d5378932a6b0869bd3fe4, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_captured_record", method_pointer_4c7c03b2a02759e4b5a7a4939e3f3139, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_injected_class_name", method_pointer_24b1edcb9e1a5b5f933c2f331fce5b03, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_lambda", method_pointer_a77cbada0b575158acdc1cfe0064f1f4, "");
    class_185117225e1a5743866dee867a4d2c40.def("may_insert_extra_padding", method_pointer_d2e88e35d1e452b086aaeb056b14b7ff, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_anonymous_struct_or_union", method_pointer_42d1eab24c2957e08e44a70c2cc81c4e, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_captured_record", method_pointer_8fd34701d4e8519ea8a4a518490f41cc, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_flexible_array_member", method_pointer_a7e292e4b2b75e23aad71ede40c4ce23, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_loaded_fields_from_external_storage", method_pointer_198c72ec3bb7546487ed42d9c3f781a4, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_object_member", method_pointer_f1405f72099350789e409d130aebfb0e, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_volatile_member", method_pointer_83652fcdb62f5785851941e4c65bb216, "");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof_kind");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}