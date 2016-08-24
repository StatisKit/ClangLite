#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_99d3396ee242572bbeaada83b5e83165()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::VarDecl  * (*method_pointer_1f8e9d6c361a5acdad8479735440709b)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarDecl::CreateDeserialized;
    bool  (::clang::VarDecl::*method_pointer_fcaffe4ac4b55ec4a96cef0342c31ffe)() const = &::clang::VarDecl::checkInitIsICE;
    bool  (*method_pointer_2aaf020bf5b05406bfb38141bc023a76)(class ::clang::Decl  const *) = ::clang::VarDecl::classof;
    bool  (*method_pointer_faa113d973ed50e8a8db35644d586015)(enum ::clang::Decl::Kind ) = ::clang::VarDecl::classofKind;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_f04ec183c30b5c9aa09c78f4a660644f)() = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_a68d4463153a513d83ac2537220266cc)() const = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_ac097510b6b455efbeb81b1bfcd04594)() = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_b543dad386be538f8f81e0136cc9bb3a)() const = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_6ec96ba3c4785c5d8bc5ac1e79054e2e)() const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_81688e16f70f50f69f101f37535a8071)() = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_0f9b426024cb56298e964b190e7b0fdb)(class ::clang::ASTContext  &) const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_aa77c43f14d1581da40ad000b5bd018d)(class ::clang::ASTContext  &) = &::clang::VarDecl::getDefinition;
    class ::clang::VarTemplateDecl  * (::clang::VarDecl::*method_pointer_56f37ee1e47a5fdb858bf6e7f78f8ea9)() const = &::clang::VarDecl::getDescribedVarTemplate;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_04278fb33ab2525e9bc9b546da261b0f)() const = &::clang::VarDecl::getInstantiatedFromStaticDataMember;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_9d1c2dc5428e5ccca48a84253683f099)() = &::clang::VarDecl::getOutOfLineDefinition;
    class ::clang::SourceLocation  (::clang::VarDecl::*method_pointer_b59961294ddb5dfe9fb427370e3968f7)() const = &::clang::VarDecl::getPointOfInstantiation;
    bool  (::clang::VarDecl::*method_pointer_63f01e9859f652afb6e3e20df4e2684e)() const = &::clang::VarDecl::hasExternalStorage;
    bool  (::clang::VarDecl::*method_pointer_46822f3575f453d6bedb3cd9ddeb4ead)() const = &::clang::VarDecl::hasGlobalStorage;
    bool  (::clang::VarDecl::*method_pointer_0e7e8ce3b86f5a3db647f4db450e5c85)() const = &::clang::VarDecl::hasInit;
    bool  (::clang::VarDecl::*method_pointer_e026676b28215220ac2eeb7659ece00b)() const = &::clang::VarDecl::hasLocalStorage;
    bool  (::clang::VarDecl::*method_pointer_a5b933a7dd375beeb32a469313ac8322)() const = &::clang::VarDecl::isARCPseudoStrong;
    bool  (::clang::VarDecl::*method_pointer_6e1090ef87d7502faccea7abff60e116)() const = &::clang::VarDecl::isCXXForRangeDecl;
    bool  (::clang::VarDecl::*method_pointer_afe3ec7c3b8a541d8f248ad0e9bb701b)() const = &::clang::VarDecl::isConcept;
    bool  (::clang::VarDecl::*method_pointer_e6945311a2c451e68fea6f3f822b49cc)() const = &::clang::VarDecl::isConstexpr;
    bool  (::clang::VarDecl::*method_pointer_b229c9c07c9658daa394c2be541ed808)() const = &::clang::VarDecl::isDirectInit;
    bool  (::clang::VarDecl::*method_pointer_17475bc4d5ac5ad1929f86c02e75d6f5)() const = &::clang::VarDecl::isExceptionVariable;
    bool  (::clang::VarDecl::*method_pointer_39ee656a74db55248d6342844f65c2f8)() const = &::clang::VarDecl::isExternC;
    bool  (::clang::VarDecl::*method_pointer_648c9892e330515881556d01df99d8d7)() const = &::clang::VarDecl::isFileVarDecl;
    bool  (::clang::VarDecl::*method_pointer_d037551de14f52ffa88dba1270c5aa5f)() const = &::clang::VarDecl::isFunctionOrMethodVarDecl;
    bool  (::clang::VarDecl::*method_pointer_621ca9e5c7025f06a3c6df76232a3ed4)() const = &::clang::VarDecl::isInExternCContext;
    bool  (::clang::VarDecl::*method_pointer_84de35aa3dbf55a1b8c0558190dbb962)() const = &::clang::VarDecl::isInExternCXXContext;
    bool  (::clang::VarDecl::*method_pointer_bbdd745548905e77bc5e74eaf1a1c925)() const = &::clang::VarDecl::isInitCapture;
    bool  (::clang::VarDecl::*method_pointer_3041ea32b54c5f40a3da54fad40b8433)() const = &::clang::VarDecl::isInitICE;
    bool  (::clang::VarDecl::*method_pointer_818c0fed162555a6bd11301aac8d79f6)() const = &::clang::VarDecl::isInitKnownICE;
    bool  (::clang::VarDecl::*method_pointer_90b9b29eb3195d2a934d9c7baf3d6f73)() const = &::clang::VarDecl::isLocalVarDecl;
    bool  (::clang::VarDecl::*method_pointer_74495687eb4f56bd99f042c8de097776)() const = &::clang::VarDecl::isLocalVarDeclOrParm;
    bool  (::clang::VarDecl::*method_pointer_3821fe3a9a7a5046930c15ac20c32977)() const = &::clang::VarDecl::isNRVOVariable;
    bool  (::clang::VarDecl::*method_pointer_d87e45b73146561992af8e1235f238f5)() const = &::clang::VarDecl::isOutOfLine;
    bool  (::clang::VarDecl::*method_pointer_de9e18f62fc35acba71f18da1242c050)() const = &::clang::VarDecl::isPreviousDeclInSameBlockScope;
    bool  (::clang::VarDecl::*method_pointer_975c816102645c1c9a9a9667b2c51da0)() const = &::clang::VarDecl::isStaticDataMember;
    bool  (::clang::VarDecl::*method_pointer_694715be54b955afbf0d7c10c455a1cc)() const = &::clang::VarDecl::isStaticLocal;
    bool  (::clang::VarDecl::*method_pointer_dcd67863fe975a71bbdd7a1682ca4bb4)(class ::clang::ASTContext  &) const = &::clang::VarDecl::isUsableInConstantExpressions;
    void  (::clang::VarDecl::*method_pointer_8215a5a9cc3b5bb5b420581c481963ad)(bool ) = &::clang::VarDecl::setARCPseudoStrong;
    void  (::clang::VarDecl::*method_pointer_5f37cb432fb255e1860658902f0c770f)(bool ) = &::clang::VarDecl::setCXXForRangeDecl;
    void  (::clang::VarDecl::*method_pointer_5bde5c08721459c58cfc791fe6267ec5)(bool ) = &::clang::VarDecl::setConcept;
    void  (::clang::VarDecl::*method_pointer_f221d94ad7895639bf7969de653b7487)(bool ) = &::clang::VarDecl::setConstexpr;
    void  (::clang::VarDecl::*method_pointer_123459d0a9885a0e983d8f1dc3ff780e)(class ::clang::VarTemplateDecl  *) = &::clang::VarDecl::setDescribedVarTemplate;
    void  (::clang::VarDecl::*method_pointer_b33baa2de0435c108ff52855b6ee172c)(bool ) = &::clang::VarDecl::setExceptionVariable;
    void  (::clang::VarDecl::*method_pointer_b1f7a51294665597909fe96e7c20fa0f)(bool ) = &::clang::VarDecl::setInitCapture;
    void  (::clang::VarDecl::*method_pointer_425ab81c4bb250aca950c23becb6a4f0)(bool ) = &::clang::VarDecl::setNRVOVariable;
    void  (::clang::VarDecl::*method_pointer_ff0a6a8c4fc25ba0941a033654ce5e70)(bool ) = &::clang::VarDecl::setPreviousDeclInSameBlockScope;
    boost::python::class_< class ::clang::VarDecl, autowig::HeldType< class ::clang::VarDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_99d3396ee242572bbeaada83b5e83165("VarDecl", "", boost::python::no_init);
    class_99d3396ee242572bbeaada83b5e83165.def("create_deserialized", method_pointer_1f8e9d6c361a5acdad8479735440709b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("check_init_is_ice", method_pointer_fcaffe4ac4b55ec4a96cef0342c31ffe, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof", method_pointer_2aaf020bf5b05406bfb38141bc023a76, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof_kind", method_pointer_faa113d973ed50e8a8db35644d586015, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_f04ec183c30b5c9aa09c78f4a660644f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_a68d4463153a513d83ac2537220266cc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_ac097510b6b455efbeb81b1bfcd04594, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_b543dad386be538f8f81e0136cc9bb3a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_6ec96ba3c4785c5d8bc5ac1e79054e2e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_81688e16f70f50f69f101f37535a8071, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_0f9b426024cb56298e964b190e7b0fdb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_aa77c43f14d1581da40ad000b5bd018d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_described_var_template", method_pointer_56f37ee1e47a5fdb858bf6e7f78f8ea9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_instantiated_from_static_data_member", method_pointer_04278fb33ab2525e9bc9b546da261b0f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_out_of_line_definition", method_pointer_9d1c2dc5428e5ccca48a84253683f099, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_point_of_instantiation", method_pointer_b59961294ddb5dfe9fb427370e3968f7, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_external_storage", method_pointer_63f01e9859f652afb6e3e20df4e2684e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_global_storage", method_pointer_46822f3575f453d6bedb3cd9ddeb4ead, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_init", method_pointer_0e7e8ce3b86f5a3db647f4db450e5c85, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_local_storage", method_pointer_e026676b28215220ac2eeb7659ece00b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_arc_pseudo_strong", method_pointer_a5b933a7dd375beeb32a469313ac8322, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_cxx_for_range_decl", method_pointer_6e1090ef87d7502faccea7abff60e116, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_concept", method_pointer_afe3ec7c3b8a541d8f248ad0e9bb701b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_constexpr", method_pointer_e6945311a2c451e68fea6f3f822b49cc, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_direct_init", method_pointer_b229c9c07c9658daa394c2be541ed808, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_exception_variable", method_pointer_17475bc4d5ac5ad1929f86c02e75d6f5, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_extern_c", method_pointer_39ee656a74db55248d6342844f65c2f8, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_file_var_decl", method_pointer_648c9892e330515881556d01df99d8d7, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_function_or_method_var_decl", method_pointer_d037551de14f52ffa88dba1270c5aa5f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_c_context", method_pointer_621ca9e5c7025f06a3c6df76232a3ed4, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_cxx_context", method_pointer_84de35aa3dbf55a1b8c0558190dbb962, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_capture", method_pointer_bbdd745548905e77bc5e74eaf1a1c925, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_ice", method_pointer_3041ea32b54c5f40a3da54fad40b8433, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_known_ice", method_pointer_818c0fed162555a6bd11301aac8d79f6, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl", method_pointer_90b9b29eb3195d2a934d9c7baf3d6f73, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl_or_parm", method_pointer_74495687eb4f56bd99f042c8de097776, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_nrvo_variable", method_pointer_3821fe3a9a7a5046930c15ac20c32977, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_out_of_line", method_pointer_d87e45b73146561992af8e1235f238f5, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_previous_decl_in_same_block_scope", method_pointer_de9e18f62fc35acba71f18da1242c050, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_data_member", method_pointer_975c816102645c1c9a9a9667b2c51da0, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_local", method_pointer_694715be54b955afbf0d7c10c455a1cc, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_usable_in_constant_expressions", method_pointer_dcd67863fe975a71bbdd7a1682ca4bb4, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_arc_pseudo_strong", method_pointer_8215a5a9cc3b5bb5b420581c481963ad, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_cxx_for_range_decl", method_pointer_5f37cb432fb255e1860658902f0c770f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_concept", method_pointer_5bde5c08721459c58cfc791fe6267ec5, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_constexpr", method_pointer_f221d94ad7895639bf7969de653b7487, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_described_var_template", method_pointer_123459d0a9885a0e983d8f1dc3ff780e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_exception_variable", method_pointer_b33baa2de0435c108ff52855b6ee172c, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_init_capture", method_pointer_b1f7a51294665597909fe96e7c20fa0f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_nrvo_variable", method_pointer_425ab81c4bb250aca950c23becb6a4f0, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_previous_decl_in_same_block_scope", method_pointer_ff0a6a8c4fc25ba0941a033654ce5e70, "");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof_kind");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("create_deserialized");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}