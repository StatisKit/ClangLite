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
    class ::clang::VarDecl  * (*method_pointer_684470787c4758279ab23f9262d838b4)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarDecl::CreateDeserialized;
    bool  (::clang::VarDecl::*method_pointer_53e00f7e2ada5a1ba063a9388cc0ca31)() const = &::clang::VarDecl::checkInitIsICE;
    bool  (*method_pointer_df9c8db2fbcb5424ac6128dcf1bbb519)(class ::clang::Decl  const *) = ::clang::VarDecl::classof;
    bool  (*method_pointer_968bb728bdcd5152ad274eaab5a83f9d)(enum ::clang::Decl::Kind ) = ::clang::VarDecl::classofKind;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_8e1ec15b3bb456568205346e6cdf2a20)() const = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_d00c8770e616548f9a971fff6bfd6fbd)() = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_65150f559b5a547eb89966c28cec5d6c)() = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_f92180ce1f0f515287852961ac924cde)() const = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_4abdd4a0804258d5ab32476054dcb4c5)(class ::clang::ASTContext  &) = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_d6511f5ffd6354e198bc419c82a5cb71)() const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_366e682fec265326bd0f267febdc55b5)() = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_f8737de1f1db59b486da4526eed2b98b)(class ::clang::ASTContext  &) const = &::clang::VarDecl::getDefinition;
    class ::clang::VarTemplateDecl  * (::clang::VarDecl::*method_pointer_2d3d52c34a775d46bcbb7b43054d577a)() const = &::clang::VarDecl::getDescribedVarTemplate;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_321ce80fc9a0594fbdda3c2323b4345c)() const = &::clang::VarDecl::getInstantiatedFromStaticDataMember;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_d4a93466dc0e5066b586c6d9d804be63)() = &::clang::VarDecl::getOutOfLineDefinition;
    class ::clang::SourceLocation  (::clang::VarDecl::*method_pointer_8e61bac26e945ff0b109a7a46f6a163a)() const = &::clang::VarDecl::getPointOfInstantiation;
    bool  (::clang::VarDecl::*method_pointer_158a714f4693549d99f18971e2095003)() const = &::clang::VarDecl::hasExternalStorage;
    bool  (::clang::VarDecl::*method_pointer_a719787a99005a1ab9d2423fa7159b80)() const = &::clang::VarDecl::hasGlobalStorage;
    bool  (::clang::VarDecl::*method_pointer_55b5e111091757c9ae65c6fb29d39678)() const = &::clang::VarDecl::hasInit;
    bool  (::clang::VarDecl::*method_pointer_2217323b3a90536686debcd0384880d3)() const = &::clang::VarDecl::hasLocalStorage;
    bool  (::clang::VarDecl::*method_pointer_aaf396fbb105591f94197a3a40ba5b06)() const = &::clang::VarDecl::isARCPseudoStrong;
    bool  (::clang::VarDecl::*method_pointer_d0cfe255fe305733a738900189a79f64)() const = &::clang::VarDecl::isCXXForRangeDecl;
    bool  (::clang::VarDecl::*method_pointer_754355e59b0753a586b5f20552f4d7f1)() const = &::clang::VarDecl::isConcept;
    bool  (::clang::VarDecl::*method_pointer_5d9a00d2a9895757b7893eb72e0eec6e)() const = &::clang::VarDecl::isConstexpr;
    bool  (::clang::VarDecl::*method_pointer_1e7402ae722755c09ae8f328756290c8)() const = &::clang::VarDecl::isDirectInit;
    bool  (::clang::VarDecl::*method_pointer_39b246f08651591ba20162b989ff47bf)() const = &::clang::VarDecl::isExceptionVariable;
    bool  (::clang::VarDecl::*method_pointer_ed089ce22e8256f68b25c3ff806bc86d)() const = &::clang::VarDecl::isExternC;
    bool  (::clang::VarDecl::*method_pointer_a5ebf88ef549561f81576346c594d892)() const = &::clang::VarDecl::isFileVarDecl;
    bool  (::clang::VarDecl::*method_pointer_096218df85545be9af3f1a38d32abb9a)() const = &::clang::VarDecl::isFunctionOrMethodVarDecl;
    bool  (::clang::VarDecl::*method_pointer_99aafb5ef5405dc88b982918e8ea05cd)() const = &::clang::VarDecl::isInExternCContext;
    bool  (::clang::VarDecl::*method_pointer_2573dfa97ff55be0b59aeebb64248d17)() const = &::clang::VarDecl::isInExternCXXContext;
    bool  (::clang::VarDecl::*method_pointer_c0df1ec657cc5c0195602fb1631d0cb2)() const = &::clang::VarDecl::isInitCapture;
    bool  (::clang::VarDecl::*method_pointer_1630a37248085f9c9228bb28b827179b)() const = &::clang::VarDecl::isInitICE;
    bool  (::clang::VarDecl::*method_pointer_0a1212efb43951faa31ac94405f81c14)() const = &::clang::VarDecl::isInitKnownICE;
    bool  (::clang::VarDecl::*method_pointer_ebf0a4f485c85ae291f3de3b34a5048a)() const = &::clang::VarDecl::isLocalVarDecl;
    bool  (::clang::VarDecl::*method_pointer_4e162d27e3525d9f99a152c28f3f37ee)() const = &::clang::VarDecl::isLocalVarDeclOrParm;
    bool  (::clang::VarDecl::*method_pointer_c1492f52cb165464a1412cf566fad723)() const = &::clang::VarDecl::isNRVOVariable;
    bool  (::clang::VarDecl::*method_pointer_5a728ef311d5509f953cdf9b4476a60d)() const = &::clang::VarDecl::isOutOfLine;
    bool  (::clang::VarDecl::*method_pointer_844266eb76cd5d9bae84d59f96bdeb84)() const = &::clang::VarDecl::isPreviousDeclInSameBlockScope;
    bool  (::clang::VarDecl::*method_pointer_117f0c6037f35b6d9473152a0b3f85a4)() const = &::clang::VarDecl::isStaticDataMember;
    bool  (::clang::VarDecl::*method_pointer_d7eae4a8b4115c2fabf7a6b206a460a7)() const = &::clang::VarDecl::isStaticLocal;
    bool  (::clang::VarDecl::*method_pointer_dc6efaa1285d54b49b473ea7dffc74c3)(class ::clang::ASTContext  &) const = &::clang::VarDecl::isUsableInConstantExpressions;
    void  (::clang::VarDecl::*method_pointer_0263401c9b0751ae80fe06fdd456f5a9)(bool ) = &::clang::VarDecl::setARCPseudoStrong;
    void  (::clang::VarDecl::*method_pointer_a0dc623c7e5e55219bc92bd2c74d3f42)(bool ) = &::clang::VarDecl::setCXXForRangeDecl;
    void  (::clang::VarDecl::*method_pointer_15e91d53826b5b95864e7042d6615388)(bool ) = &::clang::VarDecl::setConcept;
    void  (::clang::VarDecl::*method_pointer_04f04a1cd8895aeab358aa37f7baeb5f)(bool ) = &::clang::VarDecl::setConstexpr;
    void  (::clang::VarDecl::*method_pointer_3335ba7d48415600a1ebb9871ed70f9d)(class ::clang::VarTemplateDecl  *) = &::clang::VarDecl::setDescribedVarTemplate;
    void  (::clang::VarDecl::*method_pointer_76ef28a64e7d59fa8af1ed65863fa8a3)(bool ) = &::clang::VarDecl::setExceptionVariable;
    void  (::clang::VarDecl::*method_pointer_7a0a7a103d29571385009c191e5fa6b2)(bool ) = &::clang::VarDecl::setInitCapture;
    void  (::clang::VarDecl::*method_pointer_78014706ffa55e7f9dc4f99bb3575ef4)(bool ) = &::clang::VarDecl::setNRVOVariable;
    void  (::clang::VarDecl::*method_pointer_5f71c655856a5248b29778a7d106f55a)(bool ) = &::clang::VarDecl::setPreviousDeclInSameBlockScope;
    boost::python::class_< class ::clang::VarDecl, autowig::HeldType< class ::clang::VarDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_99d3396ee242572bbeaada83b5e83165("VarDecl", "", boost::python::no_init);
    class_99d3396ee242572bbeaada83b5e83165.def("create_deserialized", method_pointer_684470787c4758279ab23f9262d838b4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("check_init_is_ice", method_pointer_53e00f7e2ada5a1ba063a9388cc0ca31, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof", method_pointer_df9c8db2fbcb5424ac6128dcf1bbb519, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof_kind", method_pointer_968bb728bdcd5152ad274eaab5a83f9d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_8e1ec15b3bb456568205346e6cdf2a20, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_d00c8770e616548f9a971fff6bfd6fbd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_65150f559b5a547eb89966c28cec5d6c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_f92180ce1f0f515287852961ac924cde, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_4abdd4a0804258d5ab32476054dcb4c5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_d6511f5ffd6354e198bc419c82a5cb71, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_366e682fec265326bd0f267febdc55b5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_f8737de1f1db59b486da4526eed2b98b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_described_var_template", method_pointer_2d3d52c34a775d46bcbb7b43054d577a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_instantiated_from_static_data_member", method_pointer_321ce80fc9a0594fbdda3c2323b4345c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_out_of_line_definition", method_pointer_d4a93466dc0e5066b586c6d9d804be63, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_point_of_instantiation", method_pointer_8e61bac26e945ff0b109a7a46f6a163a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_external_storage", method_pointer_158a714f4693549d99f18971e2095003, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_global_storage", method_pointer_a719787a99005a1ab9d2423fa7159b80, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_init", method_pointer_55b5e111091757c9ae65c6fb29d39678, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_local_storage", method_pointer_2217323b3a90536686debcd0384880d3, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_arc_pseudo_strong", method_pointer_aaf396fbb105591f94197a3a40ba5b06, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_cxx_for_range_decl", method_pointer_d0cfe255fe305733a738900189a79f64, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_concept", method_pointer_754355e59b0753a586b5f20552f4d7f1, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_constexpr", method_pointer_5d9a00d2a9895757b7893eb72e0eec6e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_direct_init", method_pointer_1e7402ae722755c09ae8f328756290c8, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_exception_variable", method_pointer_39b246f08651591ba20162b989ff47bf, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_extern_c", method_pointer_ed089ce22e8256f68b25c3ff806bc86d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_file_var_decl", method_pointer_a5ebf88ef549561f81576346c594d892, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_function_or_method_var_decl", method_pointer_096218df85545be9af3f1a38d32abb9a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_c_context", method_pointer_99aafb5ef5405dc88b982918e8ea05cd, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_cxx_context", method_pointer_2573dfa97ff55be0b59aeebb64248d17, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_capture", method_pointer_c0df1ec657cc5c0195602fb1631d0cb2, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_ice", method_pointer_1630a37248085f9c9228bb28b827179b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_known_ice", method_pointer_0a1212efb43951faa31ac94405f81c14, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl", method_pointer_ebf0a4f485c85ae291f3de3b34a5048a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl_or_parm", method_pointer_4e162d27e3525d9f99a152c28f3f37ee, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_nrvo_variable", method_pointer_c1492f52cb165464a1412cf566fad723, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_out_of_line", method_pointer_5a728ef311d5509f953cdf9b4476a60d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_previous_decl_in_same_block_scope", method_pointer_844266eb76cd5d9bae84d59f96bdeb84, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_data_member", method_pointer_117f0c6037f35b6d9473152a0b3f85a4, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_local", method_pointer_d7eae4a8b4115c2fabf7a6b206a460a7, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_usable_in_constant_expressions", method_pointer_dc6efaa1285d54b49b473ea7dffc74c3, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_arc_pseudo_strong", method_pointer_0263401c9b0751ae80fe06fdd456f5a9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_cxx_for_range_decl", method_pointer_a0dc623c7e5e55219bc92bd2c74d3f42, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_concept", method_pointer_15e91d53826b5b95864e7042d6615388, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_constexpr", method_pointer_04f04a1cd8895aeab358aa37f7baeb5f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_described_var_template", method_pointer_3335ba7d48415600a1ebb9871ed70f9d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_exception_variable", method_pointer_76ef28a64e7d59fa8af1ed65863fa8a3, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_init_capture", method_pointer_7a0a7a103d29571385009c191e5fa6b2, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_nrvo_variable", method_pointer_78014706ffa55e7f9dc4f99bb3575ef4, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_previous_decl_in_same_block_scope", method_pointer_5f71c655856a5248b29778a7d106f55a, "");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof_kind");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("create_deserialized");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}