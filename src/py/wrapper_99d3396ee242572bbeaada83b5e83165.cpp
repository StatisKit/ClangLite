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
    class ::clang::VarDecl  * (*method_pointer_dd878c14babc5911a311f458c951311b)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarDecl::CreateDeserialized;
    bool  (::clang::VarDecl::*method_pointer_a2f6d2000d85566381770cbdea980aa4)() const = &::clang::VarDecl::checkInitIsICE;
    bool  (*method_pointer_f8d78804befc5b4f9d58908a5c4beac9)(class ::clang::Decl  const *) = ::clang::VarDecl::classof;
    bool  (*method_pointer_b660c7800b115e0fadaf680f76af7817)(enum ::clang::Decl::Kind ) = ::clang::VarDecl::classofKind;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_6e2494445d545e3fae075c8151cc22ad)() const = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_0c480a0bb0b75514ada30c38e5a9cc0a)() = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_3a06cefb7d355107abae9ec1dd0fb713)() = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_782d215337965c16b6f27cfa636fe73c)() const = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_8ff472ab311b5877900306b2a70dc3e6)() = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_306af672c2045aa6885d68aeeb576c1e)() const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_a82f20878fd7546e9aa4fc0867750adb)(class ::clang::ASTContext  &) = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_63031e03af0e557fb4da4c0460174f16)(class ::clang::ASTContext  &) const = &::clang::VarDecl::getDefinition;
    class ::clang::VarTemplateDecl  * (::clang::VarDecl::*method_pointer_8a2bc1a1517d5ebea4d8486376b75fe6)() const = &::clang::VarDecl::getDescribedVarTemplate;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_fdbc1170806259fa845f5cbd68b3adbd)() const = &::clang::VarDecl::getInstantiatedFromStaticDataMember;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_ffe3e0e2937b5f7da9b72813b522a760)() = &::clang::VarDecl::getOutOfLineDefinition;
    class ::clang::SourceLocation  (::clang::VarDecl::*method_pointer_d39fe9ef709b5e928de68657b8da6646)() const = &::clang::VarDecl::getPointOfInstantiation;
    bool  (::clang::VarDecl::*method_pointer_f974d69b7d6b5b54b580b78234d15e44)() const = &::clang::VarDecl::hasExternalStorage;
    bool  (::clang::VarDecl::*method_pointer_46cf622759e65d57abc80ab39bb95110)() const = &::clang::VarDecl::hasGlobalStorage;
    bool  (::clang::VarDecl::*method_pointer_0495e962bc4f50bf849dcb6b4eb61400)() const = &::clang::VarDecl::hasInit;
    bool  (::clang::VarDecl::*method_pointer_2f4187d9e01255d0b9bc867547811adf)() const = &::clang::VarDecl::hasLocalStorage;
    bool  (::clang::VarDecl::*method_pointer_9348d6a9b97c5ce0b4d441a0efbd9002)() const = &::clang::VarDecl::isARCPseudoStrong;
    bool  (::clang::VarDecl::*method_pointer_4f7de6e0681350529636da13a2274d85)() const = &::clang::VarDecl::isCXXForRangeDecl;
    bool  (::clang::VarDecl::*method_pointer_f42fa6048c36583fbe8190c46e8d2221)() const = &::clang::VarDecl::isConcept;
    bool  (::clang::VarDecl::*method_pointer_a2d11d805fcc571aa63198747d31a7a9)() const = &::clang::VarDecl::isConstexpr;
    bool  (::clang::VarDecl::*method_pointer_902c5143c42957409de3a4c0bc1c78a3)() const = &::clang::VarDecl::isDirectInit;
    bool  (::clang::VarDecl::*method_pointer_d6fd0ae2355753cda52f55c3bc2459f9)() const = &::clang::VarDecl::isExceptionVariable;
    bool  (::clang::VarDecl::*method_pointer_a547a88dc4695e3095b1bf40708e3e91)() const = &::clang::VarDecl::isExternC;
    bool  (::clang::VarDecl::*method_pointer_3961d2554cc75de2856c7246ccdca9a9)() const = &::clang::VarDecl::isFileVarDecl;
    bool  (::clang::VarDecl::*method_pointer_03614da1644155d1a88a79d736439b94)() const = &::clang::VarDecl::isFunctionOrMethodVarDecl;
    bool  (::clang::VarDecl::*method_pointer_1fe6069dc865531190df24a65bd1d314)() const = &::clang::VarDecl::isInExternCContext;
    bool  (::clang::VarDecl::*method_pointer_077cf42210445afbbb5533453618a0f8)() const = &::clang::VarDecl::isInExternCXXContext;
    bool  (::clang::VarDecl::*method_pointer_b4323de0166f54ad8cde39b3333e1908)() const = &::clang::VarDecl::isInitCapture;
    bool  (::clang::VarDecl::*method_pointer_d914f693d56e52578f97976246b84b5d)() const = &::clang::VarDecl::isInitICE;
    bool  (::clang::VarDecl::*method_pointer_7893d892fb7c5108a32a162ae1c5b86f)() const = &::clang::VarDecl::isInitKnownICE;
    bool  (::clang::VarDecl::*method_pointer_f4aa1403ccac58629358954718a3e569)() const = &::clang::VarDecl::isLocalVarDecl;
    bool  (::clang::VarDecl::*method_pointer_9a2c98d745595f6a8da988ce6cdec8da)() const = &::clang::VarDecl::isLocalVarDeclOrParm;
    bool  (::clang::VarDecl::*method_pointer_e6fe8a309e325ef985b01562dcd6111b)() const = &::clang::VarDecl::isNRVOVariable;
    bool  (::clang::VarDecl::*method_pointer_656304985e995c16b0d896e797ad90a7)() const = &::clang::VarDecl::isOutOfLine;
    bool  (::clang::VarDecl::*method_pointer_19cc283d84495ab0816118872c4298be)() const = &::clang::VarDecl::isPreviousDeclInSameBlockScope;
    bool  (::clang::VarDecl::*method_pointer_fdd144ec40eb5c078eec47c3706fa8dd)() const = &::clang::VarDecl::isStaticDataMember;
    bool  (::clang::VarDecl::*method_pointer_4324c8bf94a15a06a82c00250edf941c)() const = &::clang::VarDecl::isStaticLocal;
    bool  (::clang::VarDecl::*method_pointer_6faf74efbf845c85b17aebfc678e2167)(class ::clang::ASTContext  &) const = &::clang::VarDecl::isUsableInConstantExpressions;
    void  (::clang::VarDecl::*method_pointer_a97ce96e81945f32a26b03cef01a670e)(bool ) = &::clang::VarDecl::setARCPseudoStrong;
    void  (::clang::VarDecl::*method_pointer_d4c9fea4c46c50fbb5775cb938eaadef)(bool ) = &::clang::VarDecl::setCXXForRangeDecl;
    void  (::clang::VarDecl::*method_pointer_0153b83dcf675dbab01fc750f5459115)(bool ) = &::clang::VarDecl::setConcept;
    void  (::clang::VarDecl::*method_pointer_e6bf9d0911155a52b0fdc5cd1626aecf)(bool ) = &::clang::VarDecl::setConstexpr;
    void  (::clang::VarDecl::*method_pointer_e3db82ba8c245ca8a947bde635b0bba6)(class ::clang::VarTemplateDecl  *) = &::clang::VarDecl::setDescribedVarTemplate;
    void  (::clang::VarDecl::*method_pointer_5d4daa8ce6085c8e82b322747f4c4936)(bool ) = &::clang::VarDecl::setExceptionVariable;
    void  (::clang::VarDecl::*method_pointer_2714513a36395f28b0b9aceb39f77c0f)(bool ) = &::clang::VarDecl::setInitCapture;
    void  (::clang::VarDecl::*method_pointer_0212cdcecfba5a32848cf4fbb03c4eed)(bool ) = &::clang::VarDecl::setNRVOVariable;
    void  (::clang::VarDecl::*method_pointer_c4e84eb8809a5ba2839d814ee7c6de5e)(bool ) = &::clang::VarDecl::setPreviousDeclInSameBlockScope;
    boost::python::class_< class ::clang::VarDecl, autowig::HeldType< class ::clang::VarDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_99d3396ee242572bbeaada83b5e83165("VarDecl", "", boost::python::no_init);
    class_99d3396ee242572bbeaada83b5e83165.def("create_deserialized", method_pointer_dd878c14babc5911a311f458c951311b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("check_init_is_ice", method_pointer_a2f6d2000d85566381770cbdea980aa4, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof", method_pointer_f8d78804befc5b4f9d58908a5c4beac9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof_kind", method_pointer_b660c7800b115e0fadaf680f76af7817, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_6e2494445d545e3fae075c8151cc22ad, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_0c480a0bb0b75514ada30c38e5a9cc0a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_3a06cefb7d355107abae9ec1dd0fb713, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_782d215337965c16b6f27cfa636fe73c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_8ff472ab311b5877900306b2a70dc3e6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_306af672c2045aa6885d68aeeb576c1e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_a82f20878fd7546e9aa4fc0867750adb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_63031e03af0e557fb4da4c0460174f16, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_described_var_template", method_pointer_8a2bc1a1517d5ebea4d8486376b75fe6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_instantiated_from_static_data_member", method_pointer_fdbc1170806259fa845f5cbd68b3adbd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_out_of_line_definition", method_pointer_ffe3e0e2937b5f7da9b72813b522a760, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_point_of_instantiation", method_pointer_d39fe9ef709b5e928de68657b8da6646, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_external_storage", method_pointer_f974d69b7d6b5b54b580b78234d15e44, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_global_storage", method_pointer_46cf622759e65d57abc80ab39bb95110, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_init", method_pointer_0495e962bc4f50bf849dcb6b4eb61400, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_local_storage", method_pointer_2f4187d9e01255d0b9bc867547811adf, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_arc_pseudo_strong", method_pointer_9348d6a9b97c5ce0b4d441a0efbd9002, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_cxx_for_range_decl", method_pointer_4f7de6e0681350529636da13a2274d85, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_concept", method_pointer_f42fa6048c36583fbe8190c46e8d2221, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_constexpr", method_pointer_a2d11d805fcc571aa63198747d31a7a9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_direct_init", method_pointer_902c5143c42957409de3a4c0bc1c78a3, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_exception_variable", method_pointer_d6fd0ae2355753cda52f55c3bc2459f9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_extern_c", method_pointer_a547a88dc4695e3095b1bf40708e3e91, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_file_var_decl", method_pointer_3961d2554cc75de2856c7246ccdca9a9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_function_or_method_var_decl", method_pointer_03614da1644155d1a88a79d736439b94, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_c_context", method_pointer_1fe6069dc865531190df24a65bd1d314, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_cxx_context", method_pointer_077cf42210445afbbb5533453618a0f8, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_capture", method_pointer_b4323de0166f54ad8cde39b3333e1908, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_ice", method_pointer_d914f693d56e52578f97976246b84b5d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_known_ice", method_pointer_7893d892fb7c5108a32a162ae1c5b86f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl", method_pointer_f4aa1403ccac58629358954718a3e569, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl_or_parm", method_pointer_9a2c98d745595f6a8da988ce6cdec8da, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_nrvo_variable", method_pointer_e6fe8a309e325ef985b01562dcd6111b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_out_of_line", method_pointer_656304985e995c16b0d896e797ad90a7, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_previous_decl_in_same_block_scope", method_pointer_19cc283d84495ab0816118872c4298be, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_data_member", method_pointer_fdd144ec40eb5c078eec47c3706fa8dd, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_local", method_pointer_4324c8bf94a15a06a82c00250edf941c, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_usable_in_constant_expressions", method_pointer_6faf74efbf845c85b17aebfc678e2167, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_arc_pseudo_strong", method_pointer_a97ce96e81945f32a26b03cef01a670e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_cxx_for_range_decl", method_pointer_d4c9fea4c46c50fbb5775cb938eaadef, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_concept", method_pointer_0153b83dcf675dbab01fc750f5459115, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_constexpr", method_pointer_e6bf9d0911155a52b0fdc5cd1626aecf, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_described_var_template", method_pointer_e3db82ba8c245ca8a947bde635b0bba6, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_exception_variable", method_pointer_5d4daa8ce6085c8e82b322747f4c4936, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_init_capture", method_pointer_2714513a36395f28b0b9aceb39f77c0f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_nrvo_variable", method_pointer_0212cdcecfba5a32848cf4fbb03c4eed, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_previous_decl_in_same_block_scope", method_pointer_c4e84eb8809a5ba2839d814ee7c6de5e, "");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof_kind");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("create_deserialized");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}