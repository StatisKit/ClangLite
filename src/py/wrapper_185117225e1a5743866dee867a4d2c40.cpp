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
    bool  (*method_pointer_e77ee8044f0450e78cec926596989132)(class ::clang::Decl  const *) = ::clang::RecordDecl::classof;
    bool  (*method_pointer_9a2d6a3107d45614a3008f12985984e1)(enum ::clang::Decl::Kind ) = ::clang::RecordDecl::classofKind;
    void  (::clang::RecordDecl::*method_pointer_d456a7b1f618588b9c01e3db6e82e2e8)() = &::clang::RecordDecl::completeDefinition;
    bool  (::clang::RecordDecl::*method_pointer_b21a3abde1125009b85a1b81bc378df6)() const = &::clang::RecordDecl::field_empty;
    class ::clang::FieldDecl  const * (::clang::RecordDecl::*method_pointer_d25eae7bd7955796a16a660cd3e8cc79)() const = &::clang::RecordDecl::findFirstNamedDataMember;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_2f038b7b8343591388006f94ae0c2a95)() const = &::clang::RecordDecl::getDefinition;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_587538b3ec475e1ea3b1c82fc1b14f64)() const = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_394903f7557d531ca39c426fa5f5e2d4)() = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_3ab88fce981f5c18bc4b243f073a7bce)() = &::clang::RecordDecl::getPreviousDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_2950ceca7c9c53c494578c657203abbb)() const = &::clang::RecordDecl::getPreviousDecl;
    bool  (::clang::RecordDecl::*method_pointer_365afdf21a4f5b679c8821fd00d1fc1c)() const = &::clang::RecordDecl::hasFlexibleArrayMember;
    bool  (::clang::RecordDecl::*method_pointer_b778e2e88dbd5c1baf5033ccca2f0500)() const = &::clang::RecordDecl::hasLoadedFieldsFromExternalStorage;
    bool  (::clang::RecordDecl::*method_pointer_ca56e676534d54e3aea98402ec0fe7ea)() const = &::clang::RecordDecl::hasObjectMember;
    bool  (::clang::RecordDecl::*method_pointer_4115ab78233a52ccbe530858c77714d3)() const = &::clang::RecordDecl::hasVolatileMember;
    bool  (::clang::RecordDecl::*method_pointer_70223dafc54c5c7980914b6895d34658)() const = &::clang::RecordDecl::isAnonymousStructOrUnion;
    bool  (::clang::RecordDecl::*method_pointer_1075a91da8015148a088e5635e4a6b3a)() const = &::clang::RecordDecl::isCapturedRecord;
    bool  (::clang::RecordDecl::*method_pointer_b24876ec73e05be5ac1ecd769f0533e7)() const = &::clang::RecordDecl::isInjectedClassName;
    bool  (::clang::RecordDecl::*method_pointer_1e20aa1bd3335cbb9dec1487a7d64383)() const = &::clang::RecordDecl::isLambda;
    bool  (::clang::RecordDecl::*method_pointer_15054660feef5e459da6c0b2a55b4db6)(bool ) const = &::clang::RecordDecl::mayInsertExtraPadding;
    void  (::clang::RecordDecl::*method_pointer_df68c3657fba5a629bf420d36b2633ff)(bool ) = &::clang::RecordDecl::setAnonymousStructOrUnion;
    void  (::clang::RecordDecl::*method_pointer_110ae7fb68015efe95dd475fe14b2dd6)() = &::clang::RecordDecl::setCapturedRecord;
    void  (::clang::RecordDecl::*method_pointer_42f3441c6bbf533fa86b5f41fd2fb149)(bool ) = &::clang::RecordDecl::setHasFlexibleArrayMember;
    void  (::clang::RecordDecl::*method_pointer_95d1ca8579925d7f9cba8ed2cd177a9f)(bool ) = &::clang::RecordDecl::setHasLoadedFieldsFromExternalStorage;
    void  (::clang::RecordDecl::*method_pointer_484b46630bae5ee1b456feb2462425ba)(bool ) = &::clang::RecordDecl::setHasObjectMember;
    void  (::clang::RecordDecl::*method_pointer_c27cfca4e1ea5e03886bdac836c18633)(bool ) = &::clang::RecordDecl::setHasVolatileMember;
    boost::python::class_< class ::clang::RecordDecl, autowig::HeldType< class ::clang::RecordDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_185117225e1a5743866dee867a4d2c40("RecordDecl", "", boost::python::no_init);
    class_185117225e1a5743866dee867a4d2c40.def("classof", method_pointer_e77ee8044f0450e78cec926596989132, "");
    class_185117225e1a5743866dee867a4d2c40.def("classof_kind", method_pointer_9a2d6a3107d45614a3008f12985984e1, "");
    class_185117225e1a5743866dee867a4d2c40.def("complete_definition", method_pointer_d456a7b1f618588b9c01e3db6e82e2e8, "");
    class_185117225e1a5743866dee867a4d2c40.def("field_empty", method_pointer_b21a3abde1125009b85a1b81bc378df6, "");
    class_185117225e1a5743866dee867a4d2c40.def("find_first_named_data_member", method_pointer_d25eae7bd7955796a16a660cd3e8cc79, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_definition", method_pointer_2f038b7b8343591388006f94ae0c2a95, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_587538b3ec475e1ea3b1c82fc1b14f64, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_394903f7557d531ca39c426fa5f5e2d4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_3ab88fce981f5c18bc4b243f073a7bce, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_2950ceca7c9c53c494578c657203abbb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("has_flexible_array_member", method_pointer_365afdf21a4f5b679c8821fd00d1fc1c, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_loaded_fields_from_external_storage", method_pointer_b778e2e88dbd5c1baf5033ccca2f0500, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_object_member", method_pointer_ca56e676534d54e3aea98402ec0fe7ea, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_volatile_member", method_pointer_4115ab78233a52ccbe530858c77714d3, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_anonymous_struct_or_union", method_pointer_70223dafc54c5c7980914b6895d34658, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_captured_record", method_pointer_1075a91da8015148a088e5635e4a6b3a, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_injected_class_name", method_pointer_b24876ec73e05be5ac1ecd769f0533e7, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_lambda", method_pointer_1e20aa1bd3335cbb9dec1487a7d64383, "");
    class_185117225e1a5743866dee867a4d2c40.def("may_insert_extra_padding", method_pointer_15054660feef5e459da6c0b2a55b4db6, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_anonymous_struct_or_union", method_pointer_df68c3657fba5a629bf420d36b2633ff, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_captured_record", method_pointer_110ae7fb68015efe95dd475fe14b2dd6, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_flexible_array_member", method_pointer_42f3441c6bbf533fa86b5f41fd2fb149, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_loaded_fields_from_external_storage", method_pointer_95d1ca8579925d7f9cba8ed2cd177a9f, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_object_member", method_pointer_484b46630bae5ee1b456feb2462425ba, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_volatile_member", method_pointer_c27cfca4e1ea5e03886bdac836c18633, "");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof_kind");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}