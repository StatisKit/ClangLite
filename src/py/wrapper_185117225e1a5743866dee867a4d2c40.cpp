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
    bool  (*method_pointer_dd84cc8f956e5720b4621e2c9a34e8e7)(class ::clang::Decl  const *) = ::clang::RecordDecl::classof;
    bool  (*method_pointer_6e3dc2e9549358fca4506be8ced6c1da)(enum ::clang::Decl::Kind ) = ::clang::RecordDecl::classofKind;
    void  (::clang::RecordDecl::*method_pointer_bc68975503ac50b7a0daff189688976b)() = &::clang::RecordDecl::completeDefinition;
    bool  (::clang::RecordDecl::*method_pointer_4a82ff8c7d4f52838f75320a69443a2d)() const = &::clang::RecordDecl::field_empty;
    class ::clang::FieldDecl  const * (::clang::RecordDecl::*method_pointer_5e4069b64ce95f9f9dae4d16cb646b75)() const = &::clang::RecordDecl::findFirstNamedDataMember;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_a1d500173c385b528eed5aeb10212d39)() const = &::clang::RecordDecl::getDefinition;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_c4e9b09a414e59cf85a7f2231087101f)() = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_78d68e4496f355038791b9dc7dac1550)() const = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_d3ff8a717ed65f6caa468eb16add778f)() const = &::clang::RecordDecl::getPreviousDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_833317109af956a39d1524700bcab358)() = &::clang::RecordDecl::getPreviousDecl;
    bool  (::clang::RecordDecl::*method_pointer_9f6d267951e05e3b8e19dd17be2bbe0b)() const = &::clang::RecordDecl::hasFlexibleArrayMember;
    bool  (::clang::RecordDecl::*method_pointer_02c9b13f11225460847b8a2beeac15d9)() const = &::clang::RecordDecl::hasLoadedFieldsFromExternalStorage;
    bool  (::clang::RecordDecl::*method_pointer_c6d587c6363b5f48a03de0adc2bfaf9e)() const = &::clang::RecordDecl::hasObjectMember;
    bool  (::clang::RecordDecl::*method_pointer_a75e27d67b76581eaff30c73d0baac67)() const = &::clang::RecordDecl::hasVolatileMember;
    bool  (::clang::RecordDecl::*method_pointer_b5538b1045f852adafd2d2bf1f71d816)() const = &::clang::RecordDecl::isAnonymousStructOrUnion;
    bool  (::clang::RecordDecl::*method_pointer_1c6ec4af6aaa5bf09c7f9785f7067951)() const = &::clang::RecordDecl::isCapturedRecord;
    bool  (::clang::RecordDecl::*method_pointer_c50a12c1736f58ffba834d30786c5f22)() const = &::clang::RecordDecl::isInjectedClassName;
    bool  (::clang::RecordDecl::*method_pointer_21352b5ed1115543905f4bc01c887c95)() const = &::clang::RecordDecl::isLambda;
    bool  (::clang::RecordDecl::*method_pointer_d86b7280100959c39453d03d5e778493)(bool ) const = &::clang::RecordDecl::mayInsertExtraPadding;
    void  (::clang::RecordDecl::*method_pointer_1c7cb568ee4f55fd934d49278f38bfc8)(bool ) = &::clang::RecordDecl::setAnonymousStructOrUnion;
    void  (::clang::RecordDecl::*method_pointer_f8de366f9661599c9bc694e01164484e)() = &::clang::RecordDecl::setCapturedRecord;
    void  (::clang::RecordDecl::*method_pointer_4192a680097950529939a4946d1ecea7)(bool ) = &::clang::RecordDecl::setHasFlexibleArrayMember;
    void  (::clang::RecordDecl::*method_pointer_124935ba3e51506e96a7a0dac98de2c8)(bool ) = &::clang::RecordDecl::setHasLoadedFieldsFromExternalStorage;
    void  (::clang::RecordDecl::*method_pointer_8dbe408e18ca5f8bb40df88435bd8f0b)(bool ) = &::clang::RecordDecl::setHasObjectMember;
    void  (::clang::RecordDecl::*method_pointer_926823d3b77b5504b47e03ef1ab9e140)(bool ) = &::clang::RecordDecl::setHasVolatileMember;
    boost::python::class_< class ::clang::RecordDecl, autowig::HeldType< class ::clang::RecordDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_185117225e1a5743866dee867a4d2c40("RecordDecl", "", boost::python::no_init);
    class_185117225e1a5743866dee867a4d2c40.def("classof", method_pointer_dd84cc8f956e5720b4621e2c9a34e8e7, "");
    class_185117225e1a5743866dee867a4d2c40.def("classof_kind", method_pointer_6e3dc2e9549358fca4506be8ced6c1da, "");
    class_185117225e1a5743866dee867a4d2c40.def("complete_definition", method_pointer_bc68975503ac50b7a0daff189688976b, "");
    class_185117225e1a5743866dee867a4d2c40.def("field_empty", method_pointer_4a82ff8c7d4f52838f75320a69443a2d, "");
    class_185117225e1a5743866dee867a4d2c40.def("find_first_named_data_member", method_pointer_5e4069b64ce95f9f9dae4d16cb646b75, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_definition", method_pointer_a1d500173c385b528eed5aeb10212d39, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_c4e9b09a414e59cf85a7f2231087101f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_78d68e4496f355038791b9dc7dac1550, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_d3ff8a717ed65f6caa468eb16add778f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_833317109af956a39d1524700bcab358, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("has_flexible_array_member", method_pointer_9f6d267951e05e3b8e19dd17be2bbe0b, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_loaded_fields_from_external_storage", method_pointer_02c9b13f11225460847b8a2beeac15d9, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_object_member", method_pointer_c6d587c6363b5f48a03de0adc2bfaf9e, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_volatile_member", method_pointer_a75e27d67b76581eaff30c73d0baac67, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_anonymous_struct_or_union", method_pointer_b5538b1045f852adafd2d2bf1f71d816, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_captured_record", method_pointer_1c6ec4af6aaa5bf09c7f9785f7067951, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_injected_class_name", method_pointer_c50a12c1736f58ffba834d30786c5f22, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_lambda", method_pointer_21352b5ed1115543905f4bc01c887c95, "");
    class_185117225e1a5743866dee867a4d2c40.def("may_insert_extra_padding", method_pointer_d86b7280100959c39453d03d5e778493, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_anonymous_struct_or_union", method_pointer_1c7cb568ee4f55fd934d49278f38bfc8, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_captured_record", method_pointer_f8de366f9661599c9bc694e01164484e, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_flexible_array_member", method_pointer_4192a680097950529939a4946d1ecea7, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_loaded_fields_from_external_storage", method_pointer_124935ba3e51506e96a7a0dac98de2c8, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_object_member", method_pointer_8dbe408e18ca5f8bb40df88435bd8f0b, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_volatile_member", method_pointer_926823d3b77b5504b47e03ef1ab9e140, "");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof_kind");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}