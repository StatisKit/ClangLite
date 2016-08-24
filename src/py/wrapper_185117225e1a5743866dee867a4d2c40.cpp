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
    bool  (*method_pointer_2e4fc02689d654f197102fe656a91f16)(class ::clang::Decl  const *) = ::clang::RecordDecl::classof;
    bool  (*method_pointer_a0b75211e4e05e8d9ea2b41160f05585)(enum ::clang::Decl::Kind ) = ::clang::RecordDecl::classofKind;
    void  (::clang::RecordDecl::*method_pointer_d6a7298309125201989927144cb46ee7)() = &::clang::RecordDecl::completeDefinition;
    bool  (::clang::RecordDecl::*method_pointer_05c9cb978a7d5d8684d2235b0f941946)() const = &::clang::RecordDecl::field_empty;
    class ::clang::FieldDecl  const * (::clang::RecordDecl::*method_pointer_3c59e6e2922d5be29195acb1a1d0e429)() const = &::clang::RecordDecl::findFirstNamedDataMember;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_fb73687da69d50bd9e73b79cd0f473cd)() const = &::clang::RecordDecl::getDefinition;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_b6ebd0efd5dd5347be1d24531f659e2e)() = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_21c59478239a5ee5bc5c53dc480428af)() const = &::clang::RecordDecl::getMostRecentDecl;
    class ::clang::RecordDecl  const * (::clang::RecordDecl::*method_pointer_467b2cdac0cb58d1b519a76f222001d9)() const = &::clang::RecordDecl::getPreviousDecl;
    class ::clang::RecordDecl  * (::clang::RecordDecl::*method_pointer_078ca70cdb5f5aaf9d5f6b640885b412)() = &::clang::RecordDecl::getPreviousDecl;
    bool  (::clang::RecordDecl::*method_pointer_edf21f6fa3fb5941a97cd9eee57c10bd)() const = &::clang::RecordDecl::hasFlexibleArrayMember;
    bool  (::clang::RecordDecl::*method_pointer_d90a973b7e3251219c95f7fbac902a1c)() const = &::clang::RecordDecl::hasLoadedFieldsFromExternalStorage;
    bool  (::clang::RecordDecl::*method_pointer_e55e3c68978b511c8ca51100eabedb34)() const = &::clang::RecordDecl::hasObjectMember;
    bool  (::clang::RecordDecl::*method_pointer_c451edd100865d4996b9402fdeeb864b)() const = &::clang::RecordDecl::hasVolatileMember;
    bool  (::clang::RecordDecl::*method_pointer_3407e95f1c3e5330b6e38f7f0c1b8385)() const = &::clang::RecordDecl::isAnonymousStructOrUnion;
    bool  (::clang::RecordDecl::*method_pointer_4054d547470452eca562f6de765c7b45)() const = &::clang::RecordDecl::isCapturedRecord;
    bool  (::clang::RecordDecl::*method_pointer_56e02f557f745cd5ad19f255fa5630bf)() const = &::clang::RecordDecl::isInjectedClassName;
    bool  (::clang::RecordDecl::*method_pointer_ee41e1695cde51c2b7fd7ca4bf254fc6)() const = &::clang::RecordDecl::isLambda;
    bool  (::clang::RecordDecl::*method_pointer_fdd15a85fac35777b09c8d0041039aa2)(bool ) const = &::clang::RecordDecl::mayInsertExtraPadding;
    void  (::clang::RecordDecl::*method_pointer_7bf3a95759d15d94936ce8be68574df4)(bool ) = &::clang::RecordDecl::setAnonymousStructOrUnion;
    void  (::clang::RecordDecl::*method_pointer_fb67d48c05275d9baa5f72776acece1f)() = &::clang::RecordDecl::setCapturedRecord;
    void  (::clang::RecordDecl::*method_pointer_43a212b2233d5dff850b816e8284e472)(bool ) = &::clang::RecordDecl::setHasFlexibleArrayMember;
    void  (::clang::RecordDecl::*method_pointer_5dc5152fa100566790d24a52214fe42b)(bool ) = &::clang::RecordDecl::setHasLoadedFieldsFromExternalStorage;
    void  (::clang::RecordDecl::*method_pointer_a426896a0a4c5b7185c3a41f7a789dc5)(bool ) = &::clang::RecordDecl::setHasObjectMember;
    void  (::clang::RecordDecl::*method_pointer_05ef6e092ecd505a855fdb00116502c6)(bool ) = &::clang::RecordDecl::setHasVolatileMember;
    boost::python::class_< class ::clang::RecordDecl, autowig::HeldType< class ::clang::RecordDecl >, boost::python::bases< class ::clang::TagDecl >, boost::noncopyable > class_185117225e1a5743866dee867a4d2c40("RecordDecl", "", boost::python::no_init);
    class_185117225e1a5743866dee867a4d2c40.def("classof", method_pointer_2e4fc02689d654f197102fe656a91f16, "");
    class_185117225e1a5743866dee867a4d2c40.def("classof_kind", method_pointer_a0b75211e4e05e8d9ea2b41160f05585, "");
    class_185117225e1a5743866dee867a4d2c40.def("complete_definition", method_pointer_d6a7298309125201989927144cb46ee7, "");
    class_185117225e1a5743866dee867a4d2c40.def("field_empty", method_pointer_05c9cb978a7d5d8684d2235b0f941946, "");
    class_185117225e1a5743866dee867a4d2c40.def("find_first_named_data_member", method_pointer_3c59e6e2922d5be29195acb1a1d0e429, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_definition", method_pointer_fb73687da69d50bd9e73b79cd0f473cd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_b6ebd0efd5dd5347be1d24531f659e2e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_most_recent_decl", method_pointer_21c59478239a5ee5bc5c53dc480428af, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_467b2cdac0cb58d1b519a76f222001d9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("get_previous_decl", method_pointer_078ca70cdb5f5aaf9d5f6b640885b412, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_185117225e1a5743866dee867a4d2c40.def("has_flexible_array_member", method_pointer_edf21f6fa3fb5941a97cd9eee57c10bd, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_loaded_fields_from_external_storage", method_pointer_d90a973b7e3251219c95f7fbac902a1c, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_object_member", method_pointer_e55e3c68978b511c8ca51100eabedb34, "");
    class_185117225e1a5743866dee867a4d2c40.def("has_volatile_member", method_pointer_c451edd100865d4996b9402fdeeb864b, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_anonymous_struct_or_union", method_pointer_3407e95f1c3e5330b6e38f7f0c1b8385, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_captured_record", method_pointer_4054d547470452eca562f6de765c7b45, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_injected_class_name", method_pointer_56e02f557f745cd5ad19f255fa5630bf, "");
    class_185117225e1a5743866dee867a4d2c40.def("is_lambda", method_pointer_ee41e1695cde51c2b7fd7ca4bf254fc6, "");
    class_185117225e1a5743866dee867a4d2c40.def("may_insert_extra_padding", method_pointer_fdd15a85fac35777b09c8d0041039aa2, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_anonymous_struct_or_union", method_pointer_7bf3a95759d15d94936ce8be68574df4, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_captured_record", method_pointer_fb67d48c05275d9baa5f72776acece1f, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_flexible_array_member", method_pointer_43a212b2233d5dff850b816e8284e472, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_loaded_fields_from_external_storage", method_pointer_5dc5152fa100566790d24a52214fe42b, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_object_member", method_pointer_a426896a0a4c5b7185c3a41f7a789dc5, "");
    class_185117225e1a5743866dee867a4d2c40.def("set_has_volatile_member", method_pointer_05ef6e092ecd505a855fdb00116502c6, "");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof_kind");
    class_185117225e1a5743866dee867a4d2c40.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordDecl >, autowig::HeldType< class ::clang::TagDecl > >();
    }

}