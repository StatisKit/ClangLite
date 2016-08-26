#include "_clanglite.h"


namespace autowig
{
}


void wrapper_99d3396ee242572bbeaada83b5e83165()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::VarDecl  * (*method_pointer_41ce5f9989d859a6943390c24563bf31)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarDecl::CreateDeserialized;
    bool  (::clang::VarDecl::*method_pointer_313133daa4ca5e40bc43920bd9b26b1d)() const = &::clang::VarDecl::checkInitIsICE;
    bool  (*method_pointer_298f5dca145b5946ac6c98e12a560c33)(class ::clang::Decl  const *) = ::clang::VarDecl::classof;
    bool  (*method_pointer_cc7103117c955684ae47e3b60b87e17b)(enum ::clang::Decl::Kind ) = ::clang::VarDecl::classofKind;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_69fa5e1718ce50eb82d531d60f667234)() = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_3156eb6d069c52e09ea62aefe9a2797d)() const = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_eef06fea72c15973bb5b7ce7f8faf5d0)() = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_d2b4d621ee805d08b01e4627497fdfe4)() const = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_abbf1b907a845445acbad53b492feed7)() = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_4f89f5fab27558ab98a9a6c619e51ee0)(class ::clang::ASTContext  &) const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_7d44464f243d5bc19dde9191014bbd1e)() const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_5be611cdf145591887f232a3eff7e4af)(class ::clang::ASTContext  &) = &::clang::VarDecl::getDefinition;
    class ::clang::VarTemplateDecl  * (::clang::VarDecl::*method_pointer_86aac58668d355919b1a03af26c6394c)() const = &::clang::VarDecl::getDescribedVarTemplate;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_77e019b7e8fa55469d354801942e23c5)() const = &::clang::VarDecl::getInstantiatedFromStaticDataMember;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_788db80425795e33860eb620de248f40)() = &::clang::VarDecl::getOutOfLineDefinition;
    bool  (::clang::VarDecl::*method_pointer_eaa5ee0490c95b58a151aeef9c89fcc2)() const = &::clang::VarDecl::hasExternalStorage;
    bool  (::clang::VarDecl::*method_pointer_cec86a31eb8d56e1a77d7a98cca75a56)() const = &::clang::VarDecl::hasGlobalStorage;
    bool  (::clang::VarDecl::*method_pointer_ab77746372cd5a2aac83baec67c76f6e)() const = &::clang::VarDecl::hasInit;
    bool  (::clang::VarDecl::*method_pointer_f0d3a939967456c09853fda7e6675e68)() const = &::clang::VarDecl::hasLocalStorage;
    bool  (::clang::VarDecl::*method_pointer_98b84268de1d5671bc54c7334786e855)() const = &::clang::VarDecl::isARCPseudoStrong;
    bool  (::clang::VarDecl::*method_pointer_b76b39e0a434592f93f8dee3389fa70c)() const = &::clang::VarDecl::isCXXForRangeDecl;
    bool  (::clang::VarDecl::*method_pointer_faf4cc933b43512b90109efe801dc159)() const = &::clang::VarDecl::isConcept;
    bool  (::clang::VarDecl::*method_pointer_70a92eb53f9f52d4a077e2d24cb000be)() const = &::clang::VarDecl::isConstexpr;
    bool  (::clang::VarDecl::*method_pointer_53923b54d0555fc79e4eb76b23c02a05)() const = &::clang::VarDecl::isDirectInit;
    bool  (::clang::VarDecl::*method_pointer_90084d6cff355bba84e65e4d235848e8)() const = &::clang::VarDecl::isExceptionVariable;
    bool  (::clang::VarDecl::*method_pointer_e7c45bf9c26252a88669d11ab978a50f)() const = &::clang::VarDecl::isExternC;
    bool  (::clang::VarDecl::*method_pointer_007ab669d9eb5d1b9ddda134742ecaab)() const = &::clang::VarDecl::isFileVarDecl;
    bool  (::clang::VarDecl::*method_pointer_b2d0fc6da85452168431b9cbd4894473)() const = &::clang::VarDecl::isFunctionOrMethodVarDecl;
    bool  (::clang::VarDecl::*method_pointer_1e32dbe1e02751698137545f4791a901)() const = &::clang::VarDecl::isInExternCContext;
    bool  (::clang::VarDecl::*method_pointer_407c98892d5a53f28fcb74a1dda3a12d)() const = &::clang::VarDecl::isInExternCXXContext;
    bool  (::clang::VarDecl::*method_pointer_ec88cda512ce5999a405b9075e0d6a86)() const = &::clang::VarDecl::isInitCapture;
    bool  (::clang::VarDecl::*method_pointer_dde8d2fc2da45e3d80f9d983da67424d)() const = &::clang::VarDecl::isInitICE;
    bool  (::clang::VarDecl::*method_pointer_c4a8bb14f93258cc98cddcbc7786a494)() const = &::clang::VarDecl::isInitKnownICE;
    bool  (::clang::VarDecl::*method_pointer_cf85a5074a9e5617807da18790a36865)() const = &::clang::VarDecl::isLocalVarDecl;
    bool  (::clang::VarDecl::*method_pointer_551520503b00548abba03afa77309fda)() const = &::clang::VarDecl::isLocalVarDeclOrParm;
    bool  (::clang::VarDecl::*method_pointer_3c2ecc4f57fb59fe811c170541e32789)() const = &::clang::VarDecl::isNRVOVariable;
    bool  (::clang::VarDecl::*method_pointer_b434347926425b67aa435d86ff9e3803)() const = &::clang::VarDecl::isOutOfLine;
    bool  (::clang::VarDecl::*method_pointer_4dc9edaa712558d691fd23dd899e17a7)() const = &::clang::VarDecl::isPreviousDeclInSameBlockScope;
    bool  (::clang::VarDecl::*method_pointer_c52dabfdd01c5530a12284103c4e1e2e)() const = &::clang::VarDecl::isStaticDataMember;
    bool  (::clang::VarDecl::*method_pointer_c9918818670a55a4b8fa2840f2518524)() const = &::clang::VarDecl::isStaticLocal;
    bool  (::clang::VarDecl::*method_pointer_c034717308f6509b909f13dfc6b59931)(class ::clang::ASTContext  &) const = &::clang::VarDecl::isUsableInConstantExpressions;
    void  (::clang::VarDecl::*method_pointer_833b85b9cf4d5f3fa6887807422eecc4)(bool ) = &::clang::VarDecl::setARCPseudoStrong;
    void  (::clang::VarDecl::*method_pointer_3027a2976f3952769de6d924990efa1a)(bool ) = &::clang::VarDecl::setCXXForRangeDecl;
    void  (::clang::VarDecl::*method_pointer_9792281a957e59429d7278b8d5d7493c)(bool ) = &::clang::VarDecl::setConcept;
    void  (::clang::VarDecl::*method_pointer_cfd7b1d1b91e5fb9a936afe92f278159)(bool ) = &::clang::VarDecl::setConstexpr;
    void  (::clang::VarDecl::*method_pointer_4409273b1ca455a39c96379d3a3aec10)(class ::clang::VarTemplateDecl  *) = &::clang::VarDecl::setDescribedVarTemplate;
    void  (::clang::VarDecl::*method_pointer_4e3f47fa7179531d93ae5bd24f7f3098)(bool ) = &::clang::VarDecl::setExceptionVariable;
    void  (::clang::VarDecl::*method_pointer_47e26d41489655bca87d58b5103182c1)(bool ) = &::clang::VarDecl::setInitCapture;
    void  (::clang::VarDecl::*method_pointer_ba49e70515dd5c41a27b0d860562d962)(bool ) = &::clang::VarDecl::setNRVOVariable;
    void  (::clang::VarDecl::*method_pointer_97c1727d258756e9bebb479c49b14b31)(bool ) = &::clang::VarDecl::setPreviousDeclInSameBlockScope;
    boost::python::class_< class ::clang::VarDecl, autowig::HeldType< class ::clang::VarDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_99d3396ee242572bbeaada83b5e83165("VarDecl", "", boost::python::no_init);
    class_99d3396ee242572bbeaada83b5e83165.def("create_deserialized", method_pointer_41ce5f9989d859a6943390c24563bf31, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("check_init_is_ice", method_pointer_313133daa4ca5e40bc43920bd9b26b1d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof", method_pointer_298f5dca145b5946ac6c98e12a560c33, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof_kind", method_pointer_cc7103117c955684ae47e3b60b87e17b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_69fa5e1718ce50eb82d531d60f667234, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_3156eb6d069c52e09ea62aefe9a2797d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_eef06fea72c15973bb5b7ce7f8faf5d0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_d2b4d621ee805d08b01e4627497fdfe4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_abbf1b907a845445acbad53b492feed7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_4f89f5fab27558ab98a9a6c619e51ee0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_7d44464f243d5bc19dde9191014bbd1e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_5be611cdf145591887f232a3eff7e4af, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_described_var_template", method_pointer_86aac58668d355919b1a03af26c6394c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_instantiated_from_static_data_member", method_pointer_77e019b7e8fa55469d354801942e23c5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_out_of_line_definition", method_pointer_788db80425795e33860eb620de248f40, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_external_storage", method_pointer_eaa5ee0490c95b58a151aeef9c89fcc2, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_global_storage", method_pointer_cec86a31eb8d56e1a77d7a98cca75a56, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_init", method_pointer_ab77746372cd5a2aac83baec67c76f6e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_local_storage", method_pointer_f0d3a939967456c09853fda7e6675e68, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_arc_pseudo_strong", method_pointer_98b84268de1d5671bc54c7334786e855, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_cxx_for_range_decl", method_pointer_b76b39e0a434592f93f8dee3389fa70c, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_concept", method_pointer_faf4cc933b43512b90109efe801dc159, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_constexpr", method_pointer_70a92eb53f9f52d4a077e2d24cb000be, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_direct_init", method_pointer_53923b54d0555fc79e4eb76b23c02a05, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_exception_variable", method_pointer_90084d6cff355bba84e65e4d235848e8, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_extern_c", method_pointer_e7c45bf9c26252a88669d11ab978a50f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_file_var_decl", method_pointer_007ab669d9eb5d1b9ddda134742ecaab, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_function_or_method_var_decl", method_pointer_b2d0fc6da85452168431b9cbd4894473, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_c_context", method_pointer_1e32dbe1e02751698137545f4791a901, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_cxx_context", method_pointer_407c98892d5a53f28fcb74a1dda3a12d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_capture", method_pointer_ec88cda512ce5999a405b9075e0d6a86, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_ice", method_pointer_dde8d2fc2da45e3d80f9d983da67424d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_known_ice", method_pointer_c4a8bb14f93258cc98cddcbc7786a494, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl", method_pointer_cf85a5074a9e5617807da18790a36865, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl_or_parm", method_pointer_551520503b00548abba03afa77309fda, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_nrvo_variable", method_pointer_3c2ecc4f57fb59fe811c170541e32789, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_out_of_line", method_pointer_b434347926425b67aa435d86ff9e3803, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_previous_decl_in_same_block_scope", method_pointer_4dc9edaa712558d691fd23dd899e17a7, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_data_member", method_pointer_c52dabfdd01c5530a12284103c4e1e2e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_local", method_pointer_c9918818670a55a4b8fa2840f2518524, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_usable_in_constant_expressions", method_pointer_c034717308f6509b909f13dfc6b59931, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_arc_pseudo_strong", method_pointer_833b85b9cf4d5f3fa6887807422eecc4, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_cxx_for_range_decl", method_pointer_3027a2976f3952769de6d924990efa1a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_concept", method_pointer_9792281a957e59429d7278b8d5d7493c, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_constexpr", method_pointer_cfd7b1d1b91e5fb9a936afe92f278159, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_described_var_template", method_pointer_4409273b1ca455a39c96379d3a3aec10, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_exception_variable", method_pointer_4e3f47fa7179531d93ae5bd24f7f3098, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_init_capture", method_pointer_47e26d41489655bca87d58b5103182c1, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_nrvo_variable", method_pointer_ba49e70515dd5c41a27b0d860562d962, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_previous_decl_in_same_block_scope", method_pointer_97c1727d258756e9bebb479c49b14b31, "");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof_kind");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("create_deserialized");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}