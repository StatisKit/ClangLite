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
    bool  (*method_pointer_e1d5bab2d6f85eef901a68b1ca88ccfc)(class ::clang::Decl  const *) = ::clang::RecordDecl::classof;
    bool  (*method_pointer_131ab4fee2bf5c91bfea96c2a2eb9138)(enum ::clang::Decl::Kind ) = ::clang::RecordDecl::classofKind;
    void  (::clang::RecordDecl::*method_pointer_1ca03ab7aa1a5993bb3d2be1f570172b)() = &::clang::RecordDecl::completeDefinition;
    bool  (::clang::RecordDecl::*method_pointer_71622f09b40e5e9f8ae3d1e012209e72)() const = &::clang::RecordDecl::field_empty;
    class ::clang::FieldDecl  const * (::clang::RecordDecl::*method_pointer_0ecec073e54a54fdacb48f1106dd8447)() const = &::clang::RecordDecl::findFirstNamedDataMember;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_d2825fa6aa1257f79a4dc59ae3df6722)() const = &::clang::RecordDecl::getDefinition;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_5936c547acf0565fbd40f78c0d783623)() = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_b43783fb9ed25a1cad56b04942f99490)() const = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_f35c284b05395aaaa0e3a00878087f59)() = &::clang::RecordDecl::getPreviousDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_5ca7110b22e25eab88854034ba44b7d1)() const = &::clang::RecordDecl::getPreviousDecl;
    bool  (::clang::RecordDecl::*method_pointer_4f97569a71bb5292b888ce8ca542f298)() const = &::clang::RecordDecl::hasFlexibleArrayMember;
    bool  (::clang::RecordDecl::*method_pointer_5ba70ec2a5bd5f2b8c3875963c949bdf)() const = &::clang::RecordDecl::hasLoadedFieldsFromExternalStorage;
    bool  (::clang::RecordDecl::*method_pointer_22eb4305efc257f7a0adb59b932db12c)() const = &::clang::RecordDecl::hasObjectMember;
    bool  (::clang::RecordDecl::*method_pointer_87c99b6c5543598d86bf34460d100255)() const = &::clang::RecordDecl::hasVolatileMember;
    bool  (::clang::RecordDecl::*method_pointer_5b10f0770410578a97c55b482768316f)() const = &::clang::RecordDecl::isAnonymousStructOrUnion;
    bool  (::clang::RecordDecl::*method_pointer_bc9a8964590e5e3eba8d90ef293fc82d)() const = &::clang::RecordDecl::isCapturedRecord;
    bool  (::clang::RecordDecl::*method_pointer_11f57f56b4a9588f8e5e6b5b95d38ccf)() const = &::clang::RecordDecl::isInjectedClassName;
    bool  (::clang::RecordDecl::*method_pointer_aadb88b7d9235c208959343799d3419c)() const = &::clang::RecordDecl::isLambda;
    bool  (::clang::RecordDecl::*method_pointer_ac6c065526715a53ac785206073d05b9)(bool ) const = &::clang::RecordDecl::mayInsertExtraPadding;
    void  (::clang::RecordDecl::*method_pointer_7a5781f51ba950aaa0232e2fb47fefd1)(bool ) = &::clang::RecordDecl::setAnonymousStructOrUnion;
    void  (::clang::RecordDecl::*method_pointer_6e593dc6f5885e678c07ebd6499cbf91)() = &::clang::RecordDecl::setCapturedRecord;
    void  (::clang::RecordDecl::*method_pointer_85cc914b2e2a56bea1d73ea3e219b237)(bool ) = &::clang::RecordDecl::setHasFlexibleArrayMember;
    void  (::clang::RecordDecl::*method_pointer_3f752336e570581691b7aa891d4099e8)(bool ) = &::clang::RecordDecl::setHasLoadedFieldsFromExternalStorage;
    void  (::clang::RecordDecl::*method_pointer_da5b95534007529088b2555f74d2e310)(bool ) = &::clang::RecordDecl::setHasObjectMember;
    void  (::clang::RecordDecl::*method_pointer_f8fa535b23d15399a9eab58e6f419604)(bool ) = &::clang::RecordDecl::setHasVolatileMember;
    boost::python::class_< class ::clang::RecordDecl, autowig::HeldType< class ::clang::RecordDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_185117225e1a5743866dee867a4d2c40("RecordDecl", "", boost::python::no_init);
    class_185117225e1a5743866dee867a4d2c40.def("classof", method_pointer_e1d5bab2d6f85eef901a68b1ca88ccfc, "");
    class_185117225e1a5743866dee867a4d2c40.def("classof_kind", method_pointer_131ab4fee2bf5c91bfea96c2a2eb9138, "");
    class_185117225e1a5743866dee867a4d2c40.def("complete_definition", method_pointer_1ca03ab7aa1a5993bb3d2be1f570172b, "");
    class_185117225e1a5743866dee867a4d2c40.def("field_empty", method_pointer_71622f09b40e5e9f8ae3d1e012209e72, "");
    class_185117225e1a5743866dee867a4d2c40.def("find_first_named_data_member", method_pointer_0ecec073e54a54fdacb48f1106dd8447, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_definition", method_pointer_d2825fa6aa1257f79a4dc59ae3df6722, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_5936c547acf0565fbd40f78c0d783623, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_b43783fb9ed25a1cad56b04942f99490, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_f35c284b05395aaaa0e3a00878087f59, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_5ca7110b22e25eab88854034ba44b7d1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("has_flexible_array_member", method_pointer_4f97569a71bb5292b888ce8ca542f298, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_loaded_fields_from_external_storage", method_pointer_5ba70ec2a5bd5f2b8c3875963c949bdf, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_object_member", method_pointer_22eb4305efc257f7a0adb59b932db12c, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_volatile_member", method_pointer_87c99b6c5543598d86bf34460d100255, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_anonymous_struct_or_union", method_pointer_5b10f0770410578a97c55b482768316f, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_captured_record", method_pointer_bc9a8964590e5e3eba8d90ef293fc82d, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_injected_class_name", method_pointer_11f57f56b4a9588f8e5e6b5b95d38ccf, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_lambda", method_pointer_aadb88b7d9235c208959343799d3419c, "");
    class_185117225e1a5743866dee867a4d2c40.def("may_insert_extra_padding", method_pointer_ac6c065526715a53ac785206073d05b9, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_anonymous_struct_or_union", method_pointer_7a5781f51ba950aaa0232e2fb47fefd1, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_captured_record", method_pointer_6e593dc6f5885e678c07ebd6499cbf91, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_flexible_array_member", method_pointer_85cc914b2e2a56bea1d73ea3e219b237, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_loaded_fields_from_external_storage", method_pointer_3f752336e570581691b7aa891d4099e8, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_object_member", method_pointer_da5b95534007529088b2555f74d2e310, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_volatile_member", method_pointer_f8fa535b23d15399a9eab58e6f419604, "");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof_kind");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}