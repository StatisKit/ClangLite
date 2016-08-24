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
    bool  (*method_pointer_954bc18a05185108b5b23186b87cad22)(class ::clang::Decl  const *) = ::clang::RecordDecl::classof;
    bool  (*method_pointer_2959a993a06257b9b91f06c1dd6e3f18)(enum ::clang::Decl::Kind ) = ::clang::RecordDecl::classofKind;
    void  (::clang::RecordDecl::*method_pointer_5ab70175c17e5a19abf6421acdd6042f)() = &::clang::RecordDecl::completeDefinition;
    bool  (::clang::RecordDecl::*method_pointer_b0d84994219b511fb868c68ebb6a1c1c)() const = &::clang::RecordDecl::field_empty;
    class ::clang::FieldDecl  const * (::clang::RecordDecl::*method_pointer_59a83015f0225d73a3e78c2a9fbfac1f)() const = &::clang::RecordDecl::findFirstNamedDataMember;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_ad5580b6db3b5ab0b9c5f9d535610a43)() const = &::clang::RecordDecl::getDefinition;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_f0dfa19f0afc59ceabe2bbcae585ffda)() = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_8bec654ab17b5b72acf626b10857c649)() const = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_02891c99719c50f1ba1dd503daa1cfd2)() const = &::clang::RecordDecl::getPreviousDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_4e46033bb6c7598ea5d9d444204fa1b4)() = &::clang::RecordDecl::getPreviousDecl;
    bool  (::clang::RecordDecl::*method_pointer_2c48f5cbd28e52f2b8801494e81a2cb1)() const = &::clang::RecordDecl::hasFlexibleArrayMember;
    bool  (::clang::RecordDecl::*method_pointer_aac1dd20bc1b56b583c0c394e99b048d)() const = &::clang::RecordDecl::hasLoadedFieldsFromExternalStorage;
    bool  (::clang::RecordDecl::*method_pointer_7aca3b32456a5f108996288aa9915daf)() const = &::clang::RecordDecl::hasObjectMember;
    bool  (::clang::RecordDecl::*method_pointer_deba1dc81f365f3d9ec0672432227f47)() const = &::clang::RecordDecl::hasVolatileMember;
    bool  (::clang::RecordDecl::*method_pointer_77d72d7c6c865d16b90383d1837671ba)() const = &::clang::RecordDecl::isAnonymousStructOrUnion;
    bool  (::clang::RecordDecl::*method_pointer_df4b1aeafaa45e628893927eeccc5be5)() const = &::clang::RecordDecl::isCapturedRecord;
    bool  (::clang::RecordDecl::*method_pointer_00b06092996a5a3da26c3932ad3c1ba9)() const = &::clang::RecordDecl::isInjectedClassName;
    bool  (::clang::RecordDecl::*method_pointer_e7beff8e6bb951dcb701d23e0fd7776a)() const = &::clang::RecordDecl::isLambda;
    bool  (::clang::RecordDecl::*method_pointer_f8f6d40619d45769b446d2c33b38e818)(bool ) const = &::clang::RecordDecl::mayInsertExtraPadding;
    void  (::clang::RecordDecl::*method_pointer_f22e09ae0c10550f9cadaa9ddcbd68b6)(bool ) = &::clang::RecordDecl::setAnonymousStructOrUnion;
    void  (::clang::RecordDecl::*method_pointer_0a0f6dae05e456e8b97f474ada10ef74)() = &::clang::RecordDecl::setCapturedRecord;
    void  (::clang::RecordDecl::*method_pointer_b9ddcb5f8fd654c983d9c9d8783c953c)(bool ) = &::clang::RecordDecl::setHasFlexibleArrayMember;
    void  (::clang::RecordDecl::*method_pointer_720e2754b6285b6fb7a7b22fcd63b172)(bool ) = &::clang::RecordDecl::setHasLoadedFieldsFromExternalStorage;
    void  (::clang::RecordDecl::*method_pointer_669b06f617395c398238a7d358e910e3)(bool ) = &::clang::RecordDecl::setHasObjectMember;
    void  (::clang::RecordDecl::*method_pointer_de2d5424e70a50c4b1713b926f6b966f)(bool ) = &::clang::RecordDecl::setHasVolatileMember;
    boost::python::class_< class ::clang::RecordDecl, autowig::HeldType< class ::clang::RecordDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_185117225e1a5743866dee867a4d2c40("RecordDecl", "", boost::python::no_init);
    class_185117225e1a5743866dee867a4d2c40.def("classof", method_pointer_954bc18a05185108b5b23186b87cad22, "");
    class_185117225e1a5743866dee867a4d2c40.def("classof_kind", method_pointer_2959a993a06257b9b91f06c1dd6e3f18, "");
    class_185117225e1a5743866dee867a4d2c40.def("complete_definition", method_pointer_5ab70175c17e5a19abf6421acdd6042f, "");
    class_185117225e1a5743866dee867a4d2c40.def("field_empty", method_pointer_b0d84994219b511fb868c68ebb6a1c1c, "");
    class_185117225e1a5743866dee867a4d2c40.def("find_first_named_data_member", method_pointer_59a83015f0225d73a3e78c2a9fbfac1f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_definition", method_pointer_ad5580b6db3b5ab0b9c5f9d535610a43, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_f0dfa19f0afc59ceabe2bbcae585ffda, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_8bec654ab17b5b72acf626b10857c649, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_02891c99719c50f1ba1dd503daa1cfd2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_4e46033bb6c7598ea5d9d444204fa1b4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("has_flexible_array_member", method_pointer_2c48f5cbd28e52f2b8801494e81a2cb1, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_loaded_fields_from_external_storage", method_pointer_aac1dd20bc1b56b583c0c394e99b048d, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_object_member", method_pointer_7aca3b32456a5f108996288aa9915daf, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_volatile_member", method_pointer_deba1dc81f365f3d9ec0672432227f47, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_anonymous_struct_or_union", method_pointer_77d72d7c6c865d16b90383d1837671ba, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_captured_record", method_pointer_df4b1aeafaa45e628893927eeccc5be5, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_injected_class_name", method_pointer_00b06092996a5a3da26c3932ad3c1ba9, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_lambda", method_pointer_e7beff8e6bb951dcb701d23e0fd7776a, "");
    class_185117225e1a5743866dee867a4d2c40.def("may_insert_extra_padding", method_pointer_f8f6d40619d45769b446d2c33b38e818, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_anonymous_struct_or_union", method_pointer_f22e09ae0c10550f9cadaa9ddcbd68b6, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_captured_record", method_pointer_0a0f6dae05e456e8b97f474ada10ef74, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_flexible_array_member", method_pointer_b9ddcb5f8fd654c983d9c9d8783c953c, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_loaded_fields_from_external_storage", method_pointer_720e2754b6285b6fb7a7b22fcd63b172, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_object_member", method_pointer_669b06f617395c398238a7d358e910e3, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_volatile_member", method_pointer_de2d5424e70a50c4b1713b926f6b966f, "");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof_kind");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}