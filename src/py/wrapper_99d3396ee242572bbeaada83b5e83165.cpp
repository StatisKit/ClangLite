#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::VarDecl const volatile * get_pointer<class ::clang::VarDecl const volatile >(class ::clang::VarDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_99d3396ee242572bbeaada83b5e83165()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::VarDecl * (*method_pointer_ac51e5e24e13528d940b9808ad62a034)(class ::clang::ASTContext &, unsigned int ) = ::clang::VarDecl::CreateDeserialized;
    bool  (::clang::VarDecl::*method_pointer_800523f75f6d5fdc9861f864f7790fd0)() const = &::clang::VarDecl::hasLocalStorage;
    bool  (::clang::VarDecl::*method_pointer_fb10808ec730557eb40cf2bccb92ddd3)() const = &::clang::VarDecl::isStaticLocal;
    bool  (::clang::VarDecl::*method_pointer_9dd66f0f60e952b88651753da9b4f495)() const = &::clang::VarDecl::hasExternalStorage;
    bool  (::clang::VarDecl::*method_pointer_2a3e78afb05453fdb04a9ec9aa5a286e)() const = &::clang::VarDecl::hasGlobalStorage;
    bool  (::clang::VarDecl::*method_pointer_5e55bafe38855fce8e092e10392b0f0f)() const = &::clang::VarDecl::isExternC;
    bool  (::clang::VarDecl::*method_pointer_ceb2eb5815775361a2626d5db9107a68)() const = &::clang::VarDecl::isInExternCContext;
    bool  (::clang::VarDecl::*method_pointer_bf9a24866bba53cdb6f823dbe212f7cd)() const = &::clang::VarDecl::isInExternCXXContext;
    bool  (::clang::VarDecl::*method_pointer_bfaa420507935865a78a83dd02c52ca8)() const = &::clang::VarDecl::isLocalVarDecl;
    bool  (::clang::VarDecl::*method_pointer_3ab1387819d45e0fb2b6607bcc6d623a)() const = &::clang::VarDecl::isLocalVarDeclOrParm;
    bool  (::clang::VarDecl::*method_pointer_f14992a3482b55ef9b016afa0a3f2a52)() const = &::clang::VarDecl::isFunctionOrMethodVarDecl;
    bool  (::clang::VarDecl::*method_pointer_cd4c5601d412523a84b24e11f43423e4)() const = &::clang::VarDecl::isStaticDataMember;
    class ::clang::VarDecl * (::clang::VarDecl::*method_pointer_f260795216305ff2a615522ffc686b11)() = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl const * (::clang::VarDecl::*method_pointer_614e7a45eaec51b3981b4cbb76926fc9)() const = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl * (::clang::VarDecl::*method_pointer_b18e7d314fb05545a6fdcf4e4380aa33)() = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl const * (::clang::VarDecl::*method_pointer_0e72a8334de45f3694991321fb87122e)() const = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl * (::clang::VarDecl::*method_pointer_d5059f9c025859f6a1e9084678087a15)(class ::clang::ASTContext &) = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl const * (::clang::VarDecl::*method_pointer_b3036af34e815270983abf41eed9154f)(class ::clang::ASTContext &) const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl * (::clang::VarDecl::*method_pointer_0fd9ceffd6b75e0096ac58ae15d4c470)() = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl const * (::clang::VarDecl::*method_pointer_e1bfeb2262b45a3790fd3bd9cb2e84fb)() const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl * (::clang::VarDecl::*method_pointer_a67a5cded9bd586ba6266d3fa9bf957b)() = &::clang::VarDecl::getOutOfLineDefinition;
    bool  (::clang::VarDecl::*method_pointer_93083acb86f05b94899f58d919aee001)() const = &::clang::VarDecl::isFileVarDecl;
    bool  (::clang::VarDecl::*method_pointer_1f3353596c1d5f4a98bb44136167c1bc)() const = &::clang::VarDecl::hasInit;
    bool  (::clang::VarDecl::*method_pointer_603006d62f545743990ce61779b1cc10)(class ::clang::ASTContext &) const = &::clang::VarDecl::isUsableInConstantExpressions;
    bool  (::clang::VarDecl::*method_pointer_dce7a3f12f2f5d42bbd392abba1a811a)() const = &::clang::VarDecl::isInitKnownICE;
    bool  (::clang::VarDecl::*method_pointer_0cea563bbb1158a8921f90363e6f8b86)() const = &::clang::VarDecl::isInitICE;
    bool  (::clang::VarDecl::*method_pointer_facbf9d78a6a567c952aba2cf02c3354)() const = &::clang::VarDecl::checkInitIsICE;
    bool  (::clang::VarDecl::*method_pointer_ad01e850310c521f933a3488fb6d12f0)() const = &::clang::VarDecl::isDirectInit;
    bool  (::clang::VarDecl::*method_pointer_4ae33e16f75958feaa2211d4485eb521)() const = &::clang::VarDecl::isExceptionVariable;
    void  (::clang::VarDecl::*method_pointer_049e044e047558718d66d13a7b7d0212)(bool ) = &::clang::VarDecl::setExceptionVariable;
    bool  (::clang::VarDecl::*method_pointer_d5a8d53495b4573a91ab566c973395c8)() const = &::clang::VarDecl::isNRVOVariable;
    void  (::clang::VarDecl::*method_pointer_a5dead2a15ca501f9db302b822503220)(bool ) = &::clang::VarDecl::setNRVOVariable;
    bool  (::clang::VarDecl::*method_pointer_ffa39d0aead7574a84de4e68e61c2b2f)() const = &::clang::VarDecl::isCXXForRangeDecl;
    void  (::clang::VarDecl::*method_pointer_08430ec03fb954889a54c1341e5d7c1d)(bool ) = &::clang::VarDecl::setCXXForRangeDecl;
    bool  (::clang::VarDecl::*method_pointer_49d53c171a2b52d1a9a4c877cb527bbb)() const = &::clang::VarDecl::isARCPseudoStrong;
    void  (::clang::VarDecl::*method_pointer_d0b5a2c9f2d2575f92f9992bb0456dd9)(bool ) = &::clang::VarDecl::setARCPseudoStrong;
    bool  (::clang::VarDecl::*method_pointer_0ef978bd878e5a5186ac1be86559064e)() const = &::clang::VarDecl::isConstexpr;
    void  (::clang::VarDecl::*method_pointer_8633cae0729d5cea89a155e90202cf43)(bool ) = &::clang::VarDecl::setConstexpr;
    bool  (::clang::VarDecl::*method_pointer_9703887a35f35924b15c903f12f42b7b)() const = &::clang::VarDecl::isConcept;
    void  (::clang::VarDecl::*method_pointer_d6ae0dd8f6175b9783f9f177b42e92f2)(bool ) = &::clang::VarDecl::setConcept;
    bool  (::clang::VarDecl::*method_pointer_2d74caf642df54309ebbbade8c6589d8)() const = &::clang::VarDecl::isInitCapture;
    void  (::clang::VarDecl::*method_pointer_8627ec74b53558ff986da9f4a267e3e1)(bool ) = &::clang::VarDecl::setInitCapture;
    bool  (::clang::VarDecl::*method_pointer_c50b9e6c038153e1b28b190da62b654b)() const = &::clang::VarDecl::isPreviousDeclInSameBlockScope;
    void  (::clang::VarDecl::*method_pointer_1b0873275f9e500fa8f6c483a18328f6)(bool ) = &::clang::VarDecl::setPreviousDeclInSameBlockScope;
    class ::clang::VarDecl * (::clang::VarDecl::*method_pointer_4f0729409b075174b34f5a5e76f7817e)() const = &::clang::VarDecl::getInstantiatedFromStaticDataMember;
    class ::clang::SourceLocation  (::clang::VarDecl::*method_pointer_728a69acfc6c539c8cbc19fcd3ecad54)() const = &::clang::VarDecl::getPointOfInstantiation;
    class ::clang::VarTemplateDecl * (::clang::VarDecl::*method_pointer_2c4e894fc0ec5ea1b9f34df0d2a7a830)() const = &::clang::VarDecl::getDescribedVarTemplate;
    void  (::clang::VarDecl::*method_pointer_80a2949922b7527dbfa4ed56ef8ee155)(class ::clang::VarTemplateDecl *) = &::clang::VarDecl::setDescribedVarTemplate;
    bool  (*method_pointer_2bb7b63f440a5487b5abac0e072d15b6)(class ::clang::Decl const *) = ::clang::VarDecl::classof;
    bool  (*method_pointer_cb9ee02e541f552cae20ad3610e565da)(enum ::clang::Decl::Kind ) = ::clang::VarDecl::classofKind;
    boost::python::class_< class ::clang::VarDecl, autowig::Held< class ::clang::VarDecl >::Type, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_99d3396ee242572bbeaada83b5e83165("VarDecl", "", boost::python::no_init);
    class_99d3396ee242572bbeaada83b5e83165.def("create_deserialized", method_pointer_ac51e5e24e13528d940b9808ad62a034, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_local_storage", method_pointer_800523f75f6d5fdc9861f864f7790fd0, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_local", method_pointer_fb10808ec730557eb40cf2bccb92ddd3, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_99d3396ee242572bbeaada83b5e83165.def("has_external_storage", method_pointer_9dd66f0f60e952b88651753da9b4f495, "Returns true if a variable has extern or **private\\_extern** storage.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_99d3396ee242572bbeaada83b5e83165.def("has_global_storage", method_pointer_2a3e78afb05453fdb04a9ec9aa5a286e, "Returns true for all variables that do not have local storage.\n\nThis includes all global variables as well as static variables declared\nwithin a function.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_99d3396ee242572bbeaada83b5e83165.def("is_extern_c", method_pointer_5e55bafe38855fce8e092e10392b0f0f, "Determines whether this variable is a variable with external, C linkage.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_c_context", method_pointer_ceb2eb5815775361a2626d5db9107a68, "Determines whether this variable's context is, or is nested within, a\nC++ extern 'C' linkage spec.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_cxx_context", method_pointer_bf9a24866bba53cdb6f823dbe212f7cd, "Determines whether this variable's context is, or is nested within, a\nC++ extern 'C++' linkage spec.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl", method_pointer_bfaa420507935865a78a83dd02c52ca8, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl_or_parm", method_pointer_3ab1387819d45e0fb2b6607bcc6d623a, "Similar to isLocalVarDecl but also includes parameters.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_99d3396ee242572bbeaada83b5e83165.def("is_function_or_method_var_decl", method_pointer_f14992a3482b55ef9b016afa0a3f2a52, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_data_member", method_pointer_cd4c5601d412523a84b24e11f43423e4, "Determines whether this is a static data member.\n\nThis will only be true in C++, and applies to, e.g., the variable 'x'\nin:\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_f260795216305ff2a615522ffc686b11, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_614e7a45eaec51b3981b4cbb76926fc9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_b18e7d314fb05545a6fdcf4e4380aa33, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Get the tentative definition that acts as the real definition in a TU.\nReturns null if there is a proper definition available.\n\n:Return Type:\n    :py:class:`clanglite.clang.VarDecl`\n\n");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_0e72a8334de45f3694991321fb87122e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_d5059f9c025859f6a1e9084678087a15, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Get the real (not just tentative) definition for this declaration.\n\n:Parameter:\n    `` (:py:class:`clanglite.clang.ASTContext`) - Undocumented\n\n:Return Type:\n    :py:class:`clanglite.clang.VarDecl`\n\n");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_b3036af34e815270983abf41eed9154f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_0fd9ceffd6b75e0096ac58ae15d4c470, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_e1bfeb2262b45a3790fd3bd9cb2e84fb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_out_of_line_definition", method_pointer_a67a5cded9bd586ba6266d3fa9bf957b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "If this is a static data member, find its out-of-line definition.\n\n:Return Type:\n    :py:class:`clanglite.clang.VarDecl`\n\n");
    class_99d3396ee242572bbeaada83b5e83165.def("is_file_var_decl", method_pointer_93083acb86f05b94899f58d919aee001, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_99d3396ee242572bbeaada83b5e83165.def("has_init", method_pointer_1f3353596c1d5f4a98bb44136167c1bc, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_usable_in_constant_expressions", method_pointer_603006d62f545743990ce61779b1cc10, "Determine whether this variable's value can be used in a constant\nexpression, according to the relevant language standard. This only\nchecks properties of the declaration, and does not check whether the\ninitializer is in fact a constant expression.\n\n:Parameter:\n    `C` (:py:class:`clanglite.clang.ASTContext`) - Undocumented\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_known_ice", method_pointer_dce7a3f12f2f5d42bbd392abba1a811a, "Determines whether it is already known whether the initializer is an\nintegral constant expression or not.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_ice", method_pointer_0cea563bbb1158a8921f90363e6f8b86, "Determines whether the initializer is an integral constant expression,\nor in C++11, whether the initializer is a constant expression.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_99d3396ee242572bbeaada83b5e83165.def("check_init_is_ice", method_pointer_facbf9d78a6a567c952aba2cf02c3354, "Determine whether the value of the initializer attached to this\ndeclaration is an integral constant expression.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_99d3396ee242572bbeaada83b5e83165.def("is_direct_init", method_pointer_ad01e850310c521f933a3488fb6d12f0, "Whether the initializer is a direct-initializer (list or call).\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_99d3396ee242572bbeaada83b5e83165.def("is_exception_variable", method_pointer_4ae33e16f75958feaa2211d4485eb521, "Determine whether this variable is the exception variable in a C++ catch\nstatememt or an Objective-C @catch statement.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_99d3396ee242572bbeaada83b5e83165.def("set_exception_variable", method_pointer_049e044e047558718d66d13a7b7d0212, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_nrvo_variable", method_pointer_d5a8d53495b4573a91ab566c973395c8, "Determine whether this local variable can be used with the named return\nvalue optimization (NRVO).\n\nThe named return value optimization (NRVO) works by marking certain\nnon-volatile local variables of class type as NRVO objects. These locals\ncan be allocated within the return slot of their containing function, in\nwhich case there is no need to copy the object to the return slot when\nreturning from the function. Within the function body, each return that\nreturns the NRVO object will have this variable as its NRVO candidate.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_99d3396ee242572bbeaada83b5e83165.def("set_nrvo_variable", method_pointer_a5dead2a15ca501f9db302b822503220, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_cxx_for_range_decl", method_pointer_ffa39d0aead7574a84de4e68e61c2b2f, "Determine whether this variable is the for-range-declaration in a C++0x\nfor-range statement.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_99d3396ee242572bbeaada83b5e83165.def("set_cxx_for_range_decl", method_pointer_08430ec03fb954889a54c1341e5d7c1d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_arc_pseudo_strong", method_pointer_49d53c171a2b52d1a9a4c877cb527bbb, "Determine whether this variable is an ARC pseudo-\\_\\_strong variable. A\npseudo-\\_\\_strong variable has a \\_\\_strong-qualified type but does not\nactually retain the object written into it. Generally such variables are\nalso 'const' for safety.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_99d3396ee242572bbeaada83b5e83165.def("set_arc_pseudo_strong", method_pointer_d0b5a2c9f2d2575f92f9992bb0456dd9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_constexpr", method_pointer_0ef978bd878e5a5186ac1be86559064e, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_99d3396ee242572bbeaada83b5e83165.def("set_constexpr", method_pointer_8633cae0729d5cea89a155e90202cf43, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_concept", method_pointer_9703887a35f35924b15c903f12f42b7b, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_99d3396ee242572bbeaada83b5e83165.def("set_concept", method_pointer_d6ae0dd8f6175b9783f9f177b42e92f2, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_capture", method_pointer_2d74caf642df54309ebbbade8c6589d8, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_99d3396ee242572bbeaada83b5e83165.def("set_init_capture", method_pointer_8627ec74b53558ff986da9f4a267e3e1, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_previous_decl_in_same_block_scope", method_pointer_c50b9e6c038153e1b28b190da62b654b, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_99d3396ee242572bbeaada83b5e83165.def("set_previous_decl_in_same_block_scope", method_pointer_1b0873275f9e500fa8f6c483a18328f6, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_instantiated_from_static_data_member", method_pointer_4f0729409b075174b34f5a5e76f7817e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "If this variable is an instantiated static data member of a class\ntemplate specialization, returns the templated static data member from\nwhich it was instantiated.\n\n:Return Type:\n    :py:class:`clanglite.clang.VarDecl`\n\n");
    class_99d3396ee242572bbeaada83b5e83165.def("get_point_of_instantiation", method_pointer_728a69acfc6c539c8cbc19fcd3ecad54, "If this variable is an instantiation of a variable template or a static\ndata member of a class template, determine its point of instantiation.\n\n:Return Type:\n    :py:class:`clanglite.clang.SourceLocation`\n\n");
    class_99d3396ee242572bbeaada83b5e83165.def("get_described_var_template", method_pointer_2c4e894fc0ec5ea1b9f34df0d2a7a830, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieves the variable template that is described by this variable\ndeclaration.\n\nEvery variable template is represented as a VarTemplateDecl and a\nVarDecl. The former contains template properties (such as the template\nparameter lists) while the latter contains the actual description of the\ntemplate's contents. VarTemplateDecl::getTemplatedDecl() retrieves the\nVarDecl that from a VarTemplateDecl, while getDescribedVarTemplate()\nretrieves the VarTemplateDecl from a VarDecl.\n\n:Return Type:\n    :py:class:`clanglite.clang.VarTemplateDecl`\n\n");
    class_99d3396ee242572bbeaada83b5e83165.def("set_described_var_template", method_pointer_80a2949922b7527dbfa4ed56ef8ee155, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof", method_pointer_2bb7b63f440a5487b5abac0e072d15b6, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof_kind", method_pointer_cb9ee02e541f552cae20ad3610e565da, "");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof_kind");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("create_deserialized");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof");

    if(autowig::Held< class ::clang::VarDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::VarDecl >::Type, autowig::Held< class ::clang::DeclaratorDecl >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::VarDecl >::Type, boost::python::objects::make_ptr_instance< class ::clang::VarDecl, boost::python::objects::pointer_holder< autowig::Held< class ::clang::VarDecl >::Type, class ::clang::VarDecl > > >();
    }

}