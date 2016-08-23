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
    bool  (*method_pointer_54cf91b76cd75c9693316017eecec023)(class ::clang::Decl  const *) = ::clang::RecordDecl::classof;
    bool  (*method_pointer_26e5eef1ae4e55a38b5a3224defd67b7)(enum ::clang::Decl::Kind ) = ::clang::RecordDecl::classofKind;
    void  (::clang::RecordDecl::*method_pointer_8964468cc435510fadb83f5c2d546e44)() = &::clang::RecordDecl::completeDefinition;
    bool  (::clang::RecordDecl::*method_pointer_4e8da836c6335dccaafe8b810e74311b)() const = &::clang::RecordDecl::field_empty;
    class ::clang::FieldDecl  const * (::clang::RecordDecl::*method_pointer_323fab05966e511eb084e64a0d830680)() const = &::clang::RecordDecl::findFirstNamedDataMember;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_256e9144fb865a68bbe90b6c52a18baa)() const = &::clang::RecordDecl::getDefinition;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_74cf7894f4df58e5be6acd4ed9e2c09b)() = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_cbb6f6cd8caf580abe58c6540c0e65cc)() const = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_84f594ab839e561dad1c660a025e0a44)() = &::clang::RecordDecl::getPreviousDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_5ec2ff0c63595cd2811b840db2d80371)() const = &::clang::RecordDecl::getPreviousDecl;
    bool  (::clang::RecordDecl::*method_pointer_f1aed35c9d9454a69cfa13c79f0367d9)() const = &::clang::RecordDecl::hasFlexibleArrayMember;
    bool  (::clang::RecordDecl::*method_pointer_35a406f9afcf5ebfb98ef9fdece69208)() const = &::clang::RecordDecl::hasLoadedFieldsFromExternalStorage;
    bool  (::clang::RecordDecl::*method_pointer_3f37aec8ba52573d93b82a178c11b67a)() const = &::clang::RecordDecl::hasObjectMember;
    bool  (::clang::RecordDecl::*method_pointer_0e262852be42527a8112ce3a5ab61470)() const = &::clang::RecordDecl::hasVolatileMember;
    bool  (::clang::RecordDecl::*method_pointer_56d4b290f7dd5c36977ac624934b8af1)() const = &::clang::RecordDecl::isAnonymousStructOrUnion;
    bool  (::clang::RecordDecl::*method_pointer_064f169d073e5c9298d2a19a4a3439e6)() const = &::clang::RecordDecl::isCapturedRecord;
    bool  (::clang::RecordDecl::*method_pointer_47b3716fad405c238f7494ddb2c34838)() const = &::clang::RecordDecl::isInjectedClassName;
    bool  (::clang::RecordDecl::*method_pointer_0f9f3d431126580998ffcdbcf10ffee3)() const = &::clang::RecordDecl::isLambda;
    bool  (::clang::RecordDecl::*method_pointer_a4566551404451bcabb6f9c26e887dfc)(bool ) const = &::clang::RecordDecl::mayInsertExtraPadding;
    void  (::clang::RecordDecl::*method_pointer_6fa62deeac33516b8cfbb79dbe4ff8e6)(bool ) = &::clang::RecordDecl::setAnonymousStructOrUnion;
    void  (::clang::RecordDecl::*method_pointer_08f1e7e7f05f5049af4beb53d61497cf)() = &::clang::RecordDecl::setCapturedRecord;
    void  (::clang::RecordDecl::*method_pointer_0eced2a8f36359638e49842c119c63b3)(bool ) = &::clang::RecordDecl::setHasFlexibleArrayMember;
    void  (::clang::RecordDecl::*method_pointer_78f82ea2b18a52a6b82f9f445251bedf)(bool ) = &::clang::RecordDecl::setHasLoadedFieldsFromExternalStorage;
    void  (::clang::RecordDecl::*method_pointer_a15620eeae35578d94c86fde6d5dbe2f)(bool ) = &::clang::RecordDecl::setHasObjectMember;
    void  (::clang::RecordDecl::*method_pointer_2af458e9f3a85903938d8880998a3269)(bool ) = &::clang::RecordDecl::setHasVolatileMember;
    boost::python::class_< class ::clang::RecordDecl, autowig::HeldType< class ::clang::RecordDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_185117225e1a5743866dee867a4d2c40("RecordDecl", "", boost::python::no_init);
    class_185117225e1a5743866dee867a4d2c40.def("classof", method_pointer_54cf91b76cd75c9693316017eecec023, "");
    class_185117225e1a5743866dee867a4d2c40.def("classof_kind", method_pointer_26e5eef1ae4e55a38b5a3224defd67b7, "");
    class_185117225e1a5743866dee867a4d2c40.def("complete_definition", method_pointer_8964468cc435510fadb83f5c2d546e44, "");
    class_185117225e1a5743866dee867a4d2c40.def("field_empty", method_pointer_4e8da836c6335dccaafe8b810e74311b, "");
    class_185117225e1a5743866dee867a4d2c40.def("find_first_named_data_member", method_pointer_323fab05966e511eb084e64a0d830680, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_definition", method_pointer_256e9144fb865a68bbe90b6c52a18baa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_74cf7894f4df58e5be6acd4ed9e2c09b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_cbb6f6cd8caf580abe58c6540c0e65cc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_84f594ab839e561dad1c660a025e0a44, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_5ec2ff0c63595cd2811b840db2d80371, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("has_flexible_array_member", method_pointer_f1aed35c9d9454a69cfa13c79f0367d9, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_loaded_fields_from_external_storage", method_pointer_35a406f9afcf5ebfb98ef9fdece69208, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_object_member", method_pointer_3f37aec8ba52573d93b82a178c11b67a, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_volatile_member", method_pointer_0e262852be42527a8112ce3a5ab61470, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_anonymous_struct_or_union", method_pointer_56d4b290f7dd5c36977ac624934b8af1, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_captured_record", method_pointer_064f169d073e5c9298d2a19a4a3439e6, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_injected_class_name", method_pointer_47b3716fad405c238f7494ddb2c34838, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_lambda", method_pointer_0f9f3d431126580998ffcdbcf10ffee3, "");
    class_185117225e1a5743866dee867a4d2c40.def("may_insert_extra_padding", method_pointer_a4566551404451bcabb6f9c26e887dfc, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_anonymous_struct_or_union", method_pointer_6fa62deeac33516b8cfbb79dbe4ff8e6, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_captured_record", method_pointer_08f1e7e7f05f5049af4beb53d61497cf, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_flexible_array_member", method_pointer_0eced2a8f36359638e49842c119c63b3, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_loaded_fields_from_external_storage", method_pointer_78f82ea2b18a52a6b82f9f445251bedf, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_object_member", method_pointer_a15620eeae35578d94c86fde6d5dbe2f, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_volatile_member", method_pointer_2af458e9f3a85903938d8880998a3269, "");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof_kind");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}