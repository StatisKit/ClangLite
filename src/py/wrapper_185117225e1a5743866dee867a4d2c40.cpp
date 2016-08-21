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
    bool  (*method_pointer_e45721989afc5d0e9e327d3a055a267e)(class ::clang::Decl  const *) = ::clang::RecordDecl::classof;
    bool  (*method_pointer_a0515fc0c2a352b7b407c78c81bcab2f)(enum ::clang::Decl::Kind ) = ::clang::RecordDecl::classofKind;
    void  (::clang::RecordDecl::*method_pointer_fe99c930fc3a5f558905689578f9d855)() = &::clang::RecordDecl::completeDefinition;
    bool  (::clang::RecordDecl::*method_pointer_9a876099566c5f7fa4690e1d94749f48)() const = &::clang::RecordDecl::field_empty;
    class ::clang::FieldDecl  const * (::clang::RecordDecl::*method_pointer_1a8d0602d54056a79aec986cdc2ff80a)() const = &::clang::RecordDecl::findFirstNamedDataMember;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_eca922151c8752ab984ba17182db14ad)() const = &::clang::RecordDecl::getDefinition;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_a8ab32737e4d5e4dbf071e392f1c8346)() = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_404524cfdb7b53e38d0bdcf6e7fb8489)() const = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_c7b424bbf3e158fa84d8b0a9dadfbe60)() = &::clang::RecordDecl::getPreviousDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_86aec2326a2e5b198d8da36b8bda0b15)() const = &::clang::RecordDecl::getPreviousDecl;
    bool  (::clang::RecordDecl::*method_pointer_b42118f5d22451d5a6261a486adabd8d)() const = &::clang::RecordDecl::hasFlexibleArrayMember;
    bool  (::clang::RecordDecl::*method_pointer_fe0c235a7d855738b644e942fce83dc0)() const = &::clang::RecordDecl::hasLoadedFieldsFromExternalStorage;
    bool  (::clang::RecordDecl::*method_pointer_406ea8ba17025a428365789492e23b55)() const = &::clang::RecordDecl::hasObjectMember;
    bool  (::clang::RecordDecl::*method_pointer_453c2c29b11455e49b7872587934b034)() const = &::clang::RecordDecl::hasVolatileMember;
    bool  (::clang::RecordDecl::*method_pointer_62f3a593bcba59c1a611f2ffce79d1a9)() const = &::clang::RecordDecl::isAnonymousStructOrUnion;
    bool  (::clang::RecordDecl::*method_pointer_efa7161750685eb285c7b1e118c49ace)() const = &::clang::RecordDecl::isCapturedRecord;
    bool  (::clang::RecordDecl::*method_pointer_ff745309c326506ca0c4ad9cd57cf5ea)() const = &::clang::RecordDecl::isInjectedClassName;
    bool  (::clang::RecordDecl::*method_pointer_4ba63d9bbe8a5871aa03917a23644d8e)() const = &::clang::RecordDecl::isLambda;
    bool  (::clang::RecordDecl::*method_pointer_ef4701b1c147541f96f4040504c45dc0)(bool ) const = &::clang::RecordDecl::mayInsertExtraPadding;
    void  (::clang::RecordDecl::*method_pointer_b086ba51f93b5bd584528d7c16b17dd1)(bool ) = &::clang::RecordDecl::setAnonymousStructOrUnion;
    void  (::clang::RecordDecl::*method_pointer_a77bc6a7203e583e8ba66c27e9cd08cb)() = &::clang::RecordDecl::setCapturedRecord;
    void  (::clang::RecordDecl::*method_pointer_ca28a34c8ea051bca566dfeeb0e82ee3)(bool ) = &::clang::RecordDecl::setHasFlexibleArrayMember;
    void  (::clang::RecordDecl::*method_pointer_8f2176ad844256b79a5b2792425ef5a6)(bool ) = &::clang::RecordDecl::setHasLoadedFieldsFromExternalStorage;
    void  (::clang::RecordDecl::*method_pointer_9347fa8ca0f75354b4544607bc925eff)(bool ) = &::clang::RecordDecl::setHasObjectMember;
    void  (::clang::RecordDecl::*method_pointer_2a018fc69f9f587eaf01687c06957bb0)(bool ) = &::clang::RecordDecl::setHasVolatileMember;
    boost::python::class_< class ::clang::RecordDecl, autowig::HeldType< class ::clang::RecordDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_185117225e1a5743866dee867a4d2c40("RecordDecl", "", boost::python::no_init);
    class_185117225e1a5743866dee867a4d2c40.def("classof", method_pointer_e45721989afc5d0e9e327d3a055a267e, "");
    class_185117225e1a5743866dee867a4d2c40.def("classof_kind", method_pointer_a0515fc0c2a352b7b407c78c81bcab2f, "");
    class_185117225e1a5743866dee867a4d2c40.def("complete_definition", method_pointer_fe99c930fc3a5f558905689578f9d855, "");
    class_185117225e1a5743866dee867a4d2c40.def("field_empty", method_pointer_9a876099566c5f7fa4690e1d94749f48, "");
    class_185117225e1a5743866dee867a4d2c40.def("find_first_named_data_member", method_pointer_1a8d0602d54056a79aec986cdc2ff80a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_definition", method_pointer_eca922151c8752ab984ba17182db14ad, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_a8ab32737e4d5e4dbf071e392f1c8346, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_404524cfdb7b53e38d0bdcf6e7fb8489, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_c7b424bbf3e158fa84d8b0a9dadfbe60, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_86aec2326a2e5b198d8da36b8bda0b15, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("has_flexible_array_member", method_pointer_b42118f5d22451d5a6261a486adabd8d, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_loaded_fields_from_external_storage", method_pointer_fe0c235a7d855738b644e942fce83dc0, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_object_member", method_pointer_406ea8ba17025a428365789492e23b55, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_volatile_member", method_pointer_453c2c29b11455e49b7872587934b034, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_anonymous_struct_or_union", method_pointer_62f3a593bcba59c1a611f2ffce79d1a9, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_captured_record", method_pointer_efa7161750685eb285c7b1e118c49ace, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_injected_class_name", method_pointer_ff745309c326506ca0c4ad9cd57cf5ea, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_lambda", method_pointer_4ba63d9bbe8a5871aa03917a23644d8e, "");
    class_185117225e1a5743866dee867a4d2c40.def("may_insert_extra_padding", method_pointer_ef4701b1c147541f96f4040504c45dc0, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_anonymous_struct_or_union", method_pointer_b086ba51f93b5bd584528d7c16b17dd1, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_captured_record", method_pointer_a77bc6a7203e583e8ba66c27e9cd08cb, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_flexible_array_member", method_pointer_ca28a34c8ea051bca566dfeeb0e82ee3, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_loaded_fields_from_external_storage", method_pointer_8f2176ad844256b79a5b2792425ef5a6, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_object_member", method_pointer_9347fa8ca0f75354b4544607bc925eff, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_volatile_member", method_pointer_2a018fc69f9f587eaf01687c06957bb0, "");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof_kind");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}