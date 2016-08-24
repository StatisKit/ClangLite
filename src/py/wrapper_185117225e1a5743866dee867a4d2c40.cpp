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
    bool  (*method_pointer_19f8090697c8577bb0949d74a2792a2f)(class ::clang::Decl  const *) = ::clang::RecordDecl::classof;
    bool  (*method_pointer_f703f892ea6152e8b7aa811c495e9aba)(enum ::clang::Decl::Kind ) = ::clang::RecordDecl::classofKind;
    void  (::clang::RecordDecl::*method_pointer_2383c7ef52dd52729652347d5da9c246)() = &::clang::RecordDecl::completeDefinition;
    bool  (::clang::RecordDecl::*method_pointer_e5cd9ff05e115dca800bb894219220d0)() const = &::clang::RecordDecl::field_empty;
    class ::clang::FieldDecl  const * (::clang::RecordDecl::*method_pointer_ac9d9ce82abf503ea07b8c215ceedb8b)() const = &::clang::RecordDecl::findFirstNamedDataMember;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_c7e0dd6dcce2520097df5c66999d64dc)() const = &::clang::RecordDecl::getDefinition;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_48785db45005569caa20f73b3dbdce68)() = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_5e91523fc1555ea5a5eda51903be0f3a)() const = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_0e2fa2bb2e885269a071c77067b6f8f0)() = &::clang::RecordDecl::getPreviousDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_57dbed1468715919baadfb15f00455eb)() const = &::clang::RecordDecl::getPreviousDecl;
    bool  (::clang::RecordDecl::*method_pointer_c4b2d7aa2fb35af7984e6009f69f10ae)() const = &::clang::RecordDecl::hasFlexibleArrayMember;
    bool  (::clang::RecordDecl::*method_pointer_a89e63e9becd5c669c1bb0f23b2e7661)() const = &::clang::RecordDecl::hasLoadedFieldsFromExternalStorage;
    bool  (::clang::RecordDecl::*method_pointer_0c1d5bdcba0c5917935168c7f9ab974f)() const = &::clang::RecordDecl::hasObjectMember;
    bool  (::clang::RecordDecl::*method_pointer_a6406202e93f523eb0ba21307eeaa6ee)() const = &::clang::RecordDecl::hasVolatileMember;
    bool  (::clang::RecordDecl::*method_pointer_51cb3b6f66f35f32a3c23d7386730ea1)() const = &::clang::RecordDecl::isAnonymousStructOrUnion;
    bool  (::clang::RecordDecl::*method_pointer_990fa645d1555caa9f391a3c0f6bb961)() const = &::clang::RecordDecl::isCapturedRecord;
    bool  (::clang::RecordDecl::*method_pointer_8e9b7f315c5457a3b4222baaaeca6ab8)() const = &::clang::RecordDecl::isInjectedClassName;
    bool  (::clang::RecordDecl::*method_pointer_d9089bc31d2253678d32d09986c43f6f)() const = &::clang::RecordDecl::isLambda;
    bool  (::clang::RecordDecl::*method_pointer_67fe6895f02553829357772963a824c8)(bool ) const = &::clang::RecordDecl::mayInsertExtraPadding;
    void  (::clang::RecordDecl::*method_pointer_63c1ab0319c5572ebe98d79cb411ed5c)(bool ) = &::clang::RecordDecl::setAnonymousStructOrUnion;
    void  (::clang::RecordDecl::*method_pointer_df17d60245c2575aafe1e30c8c32d4e1)() = &::clang::RecordDecl::setCapturedRecord;
    void  (::clang::RecordDecl::*method_pointer_5025c2051fb9595bb41c50a82e387326)(bool ) = &::clang::RecordDecl::setHasFlexibleArrayMember;
    void  (::clang::RecordDecl::*method_pointer_b042eeb7e8d855779071b8f63ecee987)(bool ) = &::clang::RecordDecl::setHasLoadedFieldsFromExternalStorage;
    void  (::clang::RecordDecl::*method_pointer_c146901c83055e5a8254b4b2ce5e8870)(bool ) = &::clang::RecordDecl::setHasObjectMember;
    void  (::clang::RecordDecl::*method_pointer_cf5e111ef6f05358857bbb6a538d06e2)(bool ) = &::clang::RecordDecl::setHasVolatileMember;
    boost::python::class_< class ::clang::RecordDecl, autowig::HeldType< class ::clang::RecordDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_185117225e1a5743866dee867a4d2c40("RecordDecl", "", boost::python::no_init);
    class_185117225e1a5743866dee867a4d2c40.def("classof", method_pointer_19f8090697c8577bb0949d74a2792a2f, "");
    class_185117225e1a5743866dee867a4d2c40.def("classof_kind", method_pointer_f703f892ea6152e8b7aa811c495e9aba, "");
    class_185117225e1a5743866dee867a4d2c40.def("complete_definition", method_pointer_2383c7ef52dd52729652347d5da9c246, "");
    class_185117225e1a5743866dee867a4d2c40.def("field_empty", method_pointer_e5cd9ff05e115dca800bb894219220d0, "");
    class_185117225e1a5743866dee867a4d2c40.def("find_first_named_data_member", method_pointer_ac9d9ce82abf503ea07b8c215ceedb8b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_definition", method_pointer_c7e0dd6dcce2520097df5c66999d64dc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_48785db45005569caa20f73b3dbdce68, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_5e91523fc1555ea5a5eda51903be0f3a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_0e2fa2bb2e885269a071c77067b6f8f0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_57dbed1468715919baadfb15f00455eb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("has_flexible_array_member", method_pointer_c4b2d7aa2fb35af7984e6009f69f10ae, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_loaded_fields_from_external_storage", method_pointer_a89e63e9becd5c669c1bb0f23b2e7661, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_object_member", method_pointer_0c1d5bdcba0c5917935168c7f9ab974f, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_volatile_member", method_pointer_a6406202e93f523eb0ba21307eeaa6ee, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_anonymous_struct_or_union", method_pointer_51cb3b6f66f35f32a3c23d7386730ea1, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_captured_record", method_pointer_990fa645d1555caa9f391a3c0f6bb961, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_injected_class_name", method_pointer_8e9b7f315c5457a3b4222baaaeca6ab8, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_lambda", method_pointer_d9089bc31d2253678d32d09986c43f6f, "");
    class_185117225e1a5743866dee867a4d2c40.def("may_insert_extra_padding", method_pointer_67fe6895f02553829357772963a824c8, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_anonymous_struct_or_union", method_pointer_63c1ab0319c5572ebe98d79cb411ed5c, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_captured_record", method_pointer_df17d60245c2575aafe1e30c8c32d4e1, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_flexible_array_member", method_pointer_5025c2051fb9595bb41c50a82e387326, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_loaded_fields_from_external_storage", method_pointer_b042eeb7e8d855779071b8f63ecee987, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_object_member", method_pointer_c146901c83055e5a8254b4b2ce5e8870, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_volatile_member", method_pointer_cf5e111ef6f05358857bbb6a538d06e2, "");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof_kind");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}