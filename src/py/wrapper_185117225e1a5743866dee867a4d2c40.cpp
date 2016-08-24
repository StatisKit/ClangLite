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
    bool  (*method_pointer_f03aa25b142a5a8d9a29a6d0470ff372)(class ::clang::Decl  const *) = ::clang::RecordDecl::classof;
    bool  (*method_pointer_c2bb1c8870c953e2b3317372fa7979cb)(enum ::clang::Decl::Kind ) = ::clang::RecordDecl::classofKind;
    void  (::clang::RecordDecl::*method_pointer_abcc40af35a455d2aa0a10832ca76f12)() = &::clang::RecordDecl::completeDefinition;
    bool  (::clang::RecordDecl::*method_pointer_cbc8067fd6835993ae8c543fd768f502)() const = &::clang::RecordDecl::field_empty;
    class ::clang::FieldDecl  const * (::clang::RecordDecl::*method_pointer_aa22e568f5525d81a3b43eb952f567ac)() const = &::clang::RecordDecl::findFirstNamedDataMember;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_344befee25ee57a6ab318218bff15551)() const = &::clang::RecordDecl::getDefinition;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_4b559bbceaa1562f8f91a8d65713ba17)() = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_ac32aa5c619658adbdfea63d80458b8d)() const = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_717f1737ab3f56ffa54b8ca98eda638e)() const = &::clang::RecordDecl::getPreviousDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_60c15f81edb55c6890e3aa7699726e88)() = &::clang::RecordDecl::getPreviousDecl;
    bool  (::clang::RecordDecl::*method_pointer_bde25bdc5eb759808bc027c23e0ca3f9)() const = &::clang::RecordDecl::hasFlexibleArrayMember;
    bool  (::clang::RecordDecl::*method_pointer_9617444c00fa50eca2fe7470bc1bc357)() const = &::clang::RecordDecl::hasLoadedFieldsFromExternalStorage;
    bool  (::clang::RecordDecl::*method_pointer_26ab71596b1558e8813c9e63b542089b)() const = &::clang::RecordDecl::hasObjectMember;
    bool  (::clang::RecordDecl::*method_pointer_fcce5be0e4e05548bbd87e6347407934)() const = &::clang::RecordDecl::hasVolatileMember;
    bool  (::clang::RecordDecl::*method_pointer_021f89028f935575a51d05c9963bef1a)() const = &::clang::RecordDecl::isAnonymousStructOrUnion;
    bool  (::clang::RecordDecl::*method_pointer_1722947e04e35adeba964984067c4f39)() const = &::clang::RecordDecl::isCapturedRecord;
    bool  (::clang::RecordDecl::*method_pointer_e0ccd778fd495ce588f3eae6d3a3d53a)() const = &::clang::RecordDecl::isInjectedClassName;
    bool  (::clang::RecordDecl::*method_pointer_e07e07c4196857e0b5a6d8ec04f34601)() const = &::clang::RecordDecl::isLambda;
    bool  (::clang::RecordDecl::*method_pointer_d61e4a2188595a93a721b8097360e187)(bool ) const = &::clang::RecordDecl::mayInsertExtraPadding;
    void  (::clang::RecordDecl::*method_pointer_72d21cdf67985a0fb84302c6aa312475)(bool ) = &::clang::RecordDecl::setAnonymousStructOrUnion;
    void  (::clang::RecordDecl::*method_pointer_95b0c99b931c594fa4bca0323826419c)() = &::clang::RecordDecl::setCapturedRecord;
    void  (::clang::RecordDecl::*method_pointer_425f8a2e4e145f2bb2323c5dd71ef8fe)(bool ) = &::clang::RecordDecl::setHasFlexibleArrayMember;
    void  (::clang::RecordDecl::*method_pointer_0215741bf4905ede94b9272dc4443cfe)(bool ) = &::clang::RecordDecl::setHasLoadedFieldsFromExternalStorage;
    void  (::clang::RecordDecl::*method_pointer_a8e836c40a5357868f86424b02cc6901)(bool ) = &::clang::RecordDecl::setHasObjectMember;
    void  (::clang::RecordDecl::*method_pointer_b507135294cc51378cc4f46005fdb4f1)(bool ) = &::clang::RecordDecl::setHasVolatileMember;
    boost::python::class_< class ::clang::RecordDecl, autowig::HeldType< class ::clang::RecordDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_185117225e1a5743866dee867a4d2c40("RecordDecl", "", boost::python::no_init);
    class_185117225e1a5743866dee867a4d2c40.def("classof", method_pointer_f03aa25b142a5a8d9a29a6d0470ff372, "");
    class_185117225e1a5743866dee867a4d2c40.def("classof_kind", method_pointer_c2bb1c8870c953e2b3317372fa7979cb, "");
    class_185117225e1a5743866dee867a4d2c40.def("complete_definition", method_pointer_abcc40af35a455d2aa0a10832ca76f12, "");
    class_185117225e1a5743866dee867a4d2c40.def("field_empty", method_pointer_cbc8067fd6835993ae8c543fd768f502, "");
    class_185117225e1a5743866dee867a4d2c40.def("find_first_named_data_member", method_pointer_aa22e568f5525d81a3b43eb952f567ac, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_definition", method_pointer_344befee25ee57a6ab318218bff15551, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_4b559bbceaa1562f8f91a8d65713ba17, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_ac32aa5c619658adbdfea63d80458b8d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_717f1737ab3f56ffa54b8ca98eda638e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_60c15f81edb55c6890e3aa7699726e88, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("has_flexible_array_member", method_pointer_bde25bdc5eb759808bc027c23e0ca3f9, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_loaded_fields_from_external_storage", method_pointer_9617444c00fa50eca2fe7470bc1bc357, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_object_member", method_pointer_26ab71596b1558e8813c9e63b542089b, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_volatile_member", method_pointer_fcce5be0e4e05548bbd87e6347407934, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_anonymous_struct_or_union", method_pointer_021f89028f935575a51d05c9963bef1a, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_captured_record", method_pointer_1722947e04e35adeba964984067c4f39, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_injected_class_name", method_pointer_e0ccd778fd495ce588f3eae6d3a3d53a, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_lambda", method_pointer_e07e07c4196857e0b5a6d8ec04f34601, "");
    class_185117225e1a5743866dee867a4d2c40.def("may_insert_extra_padding", method_pointer_d61e4a2188595a93a721b8097360e187, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_anonymous_struct_or_union", method_pointer_72d21cdf67985a0fb84302c6aa312475, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_captured_record", method_pointer_95b0c99b931c594fa4bca0323826419c, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_flexible_array_member", method_pointer_425f8a2e4e145f2bb2323c5dd71ef8fe, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_loaded_fields_from_external_storage", method_pointer_0215741bf4905ede94b9272dc4443cfe, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_object_member", method_pointer_a8e836c40a5357868f86424b02cc6901, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_volatile_member", method_pointer_b507135294cc51378cc4f46005fdb4f1, "");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof_kind");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}