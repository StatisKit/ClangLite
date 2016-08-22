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
    class ::clang::VarDecl  * (*method_pointer_44073c17c0205e75bacfbba30730d443)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarDecl::CreateDeserialized;
    bool  (::clang::VarDecl::*method_pointer_c2030d5fc69359daabe64a03f264a90a)() const = &::clang::VarDecl::checkInitIsICE;
    bool  (*method_pointer_6dd6ecc0f17153b694250c6cdbd8cd81)(class ::clang::Decl  const *) = ::clang::VarDecl::classof;
    bool  (*method_pointer_b4cb84d06816530fa63a098628dbc8fd)(enum ::clang::Decl::Kind ) = ::clang::VarDecl::classofKind;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_40bde60285ba5b4d82914f285deb679b)() const = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_d1f48bebfa545362b0e7fbd101c571eb)() = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_4cf9532de480548c9492135938fc7f5b)() = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_7329b689333753029698f058ce864967)() const = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_2467571d014258719d121e1ac55a1138)(class ::clang::ASTContext  &) const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_fc3a1bb708a65f71b7c1fc186780889c)() const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_86daa1646d655a1aa6a97f6376e49588)() = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_b9db170c00fe5724bab88fb25cd37cdb)(class ::clang::ASTContext  &) = &::clang::VarDecl::getDefinition;
    class ::clang::VarTemplateDecl  * (::clang::VarDecl::*method_pointer_bfdd5c3c7d3a5892952d2f8ba23f42c1)() const = &::clang::VarDecl::getDescribedVarTemplate;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_ba9387c1dab65becaf02232fe9a7be5f)() const = &::clang::VarDecl::getInstantiatedFromStaticDataMember;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_e55391a34fb95f7e9313cebacc1a1eee)() = &::clang::VarDecl::getOutOfLineDefinition;
    bool  (::clang::VarDecl::*method_pointer_45af477fb60e5455afcdb0c33893fa9e)() const = &::clang::VarDecl::hasExternalStorage;
    bool  (::clang::VarDecl::*method_pointer_4fb5d0b21dc95dd3a79e3c4ace2cbf9f)() const = &::clang::VarDecl::hasGlobalStorage;
    bool  (::clang::VarDecl::*method_pointer_09552cd4f3095591a18d7284d588da27)() const = &::clang::VarDecl::hasInit;
    bool  (::clang::VarDecl::*method_pointer_3224ee894dc75165b7adff6a714e36b2)() const = &::clang::VarDecl::hasLocalStorage;
    bool  (::clang::VarDecl::*method_pointer_b600c2d2a40257b7904bc92b98dc9ef5)() const = &::clang::VarDecl::isARCPseudoStrong;
    bool  (::clang::VarDecl::*method_pointer_a6bbc7613fc25f24a9e39fcf38873149)() const = &::clang::VarDecl::isCXXForRangeDecl;
    bool  (::clang::VarDecl::*method_pointer_39113a2b07d55c838ec318a5a907aa96)() const = &::clang::VarDecl::isConcept;
    bool  (::clang::VarDecl::*method_pointer_ad4da76dcc235f4985bfbe92810f0ef2)() const = &::clang::VarDecl::isConstexpr;
    bool  (::clang::VarDecl::*method_pointer_55d1b06eaf5356f3adbe48507f262552)() const = &::clang::VarDecl::isDirectInit;
    bool  (::clang::VarDecl::*method_pointer_53dcba1825c2534b84f5fafc6d8a9e0d)() const = &::clang::VarDecl::isExceptionVariable;
    bool  (::clang::VarDecl::*method_pointer_e3c129951b8658feb56bf872874f65ec)() const = &::clang::VarDecl::isExternC;
    bool  (::clang::VarDecl::*method_pointer_4bae3a7d10f157ec995f4222e0c7f99c)() const = &::clang::VarDecl::isFileVarDecl;
    bool  (::clang::VarDecl::*method_pointer_36e8de6cee2c5471956dcf82b21af4ac)() const = &::clang::VarDecl::isFunctionOrMethodVarDecl;
    bool  (::clang::VarDecl::*method_pointer_47672aba7d0258178f651af61ed885e1)() const = &::clang::VarDecl::isInExternCContext;
    bool  (::clang::VarDecl::*method_pointer_233b0cb463f35f1bb4ce2d9a8244f94f)() const = &::clang::VarDecl::isInExternCXXContext;
    bool  (::clang::VarDecl::*method_pointer_174384973a2e550c9785fc9e695cbc45)() const = &::clang::VarDecl::isInitCapture;
    bool  (::clang::VarDecl::*method_pointer_bfb923c77b2b5301ab04de95b2c5dda1)() const = &::clang::VarDecl::isInitICE;
    bool  (::clang::VarDecl::*method_pointer_fc924ec4c43d5ee6bf3c1375f7e64573)() const = &::clang::VarDecl::isInitKnownICE;
    bool  (::clang::VarDecl::*method_pointer_3ff1f373350f52dfbb304eeb26b3e9b2)() const = &::clang::VarDecl::isLocalVarDecl;
    bool  (::clang::VarDecl::*method_pointer_e2eeffee775c523185f35d1939638cf8)() const = &::clang::VarDecl::isLocalVarDeclOrParm;
    bool  (::clang::VarDecl::*method_pointer_7b8e7395a0b15bd8a5148bb390e22278)() const = &::clang::VarDecl::isNRVOVariable;
    bool  (::clang::VarDecl::*method_pointer_8e7e289b1e635030be319584da6bb276)() const = &::clang::VarDecl::isOutOfLine;
    bool  (::clang::VarDecl::*method_pointer_c7cadbd1d51d55cc92f1361f36a2dbf6)() const = &::clang::VarDecl::isPreviousDeclInSameBlockScope;
    bool  (::clang::VarDecl::*method_pointer_0b663185851b5e5b8fdedf1570098d61)() const = &::clang::VarDecl::isStaticDataMember;
    bool  (::clang::VarDecl::*method_pointer_2d14b309b78a5c48a4ff601ebb8bad2a)() const = &::clang::VarDecl::isStaticLocal;
    bool  (::clang::VarDecl::*method_pointer_6512b9b94f2d54c7b7f9afe493e3069b)(class ::clang::ASTContext  &) const = &::clang::VarDecl::isUsableInConstantExpressions;
    void  (::clang::VarDecl::*method_pointer_c300285497ef5514a6458ec96a7108bc)(bool ) = &::clang::VarDecl::setARCPseudoStrong;
    void  (::clang::VarDecl::*method_pointer_bad0432d262e5fd0ace0b08c89958052)(bool ) = &::clang::VarDecl::setCXXForRangeDecl;
    void  (::clang::VarDecl::*method_pointer_dc15b284dd84571baacad17e07d24d72)(bool ) = &::clang::VarDecl::setConcept;
    void  (::clang::VarDecl::*method_pointer_82358b1c9fa755518bec2b0750456e57)(bool ) = &::clang::VarDecl::setConstexpr;
    void  (::clang::VarDecl::*method_pointer_980e6b13e80b57b98deaf253e8e9ff9b)(class ::clang::VarTemplateDecl  *) = &::clang::VarDecl::setDescribedVarTemplate;
    void  (::clang::VarDecl::*method_pointer_d349c6e54c4751debfdab0ec774d591f)(bool ) = &::clang::VarDecl::setExceptionVariable;
    void  (::clang::VarDecl::*method_pointer_50c6e5886a9450b9ba8e4eaed1feab2e)(bool ) = &::clang::VarDecl::setInitCapture;
    void  (::clang::VarDecl::*method_pointer_d953c9d86bc85b80b0562e4ba6873cba)(bool ) = &::clang::VarDecl::setNRVOVariable;
    void  (::clang::VarDecl::*method_pointer_6ed6ce192fa65b0c8cced90494d2ede8)(bool ) = &::clang::VarDecl::setPreviousDeclInSameBlockScope;
    boost::python::class_< class ::clang::VarDecl, autowig::HeldType< class ::clang::VarDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_99d3396ee242572bbeaada83b5e83165("VarDecl", "", boost::python::no_init);
    class_99d3396ee242572bbeaada83b5e83165.def("create_deserialized", method_pointer_44073c17c0205e75bacfbba30730d443, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("check_init_is_ice", method_pointer_c2030d5fc69359daabe64a03f264a90a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof", method_pointer_6dd6ecc0f17153b694250c6cdbd8cd81, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof_kind", method_pointer_b4cb84d06816530fa63a098628dbc8fd, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_40bde60285ba5b4d82914f285deb679b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_d1f48bebfa545362b0e7fbd101c571eb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_4cf9532de480548c9492135938fc7f5b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_7329b689333753029698f058ce864967, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_2467571d014258719d121e1ac55a1138, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_fc3a1bb708a65f71b7c1fc186780889c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_86daa1646d655a1aa6a97f6376e49588, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_b9db170c00fe5724bab88fb25cd37cdb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_described_var_template", method_pointer_bfdd5c3c7d3a5892952d2f8ba23f42c1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_instantiated_from_static_data_member", method_pointer_ba9387c1dab65becaf02232fe9a7be5f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_out_of_line_definition", method_pointer_e55391a34fb95f7e9313cebacc1a1eee, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_external_storage", method_pointer_45af477fb60e5455afcdb0c33893fa9e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_global_storage", method_pointer_4fb5d0b21dc95dd3a79e3c4ace2cbf9f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_init", method_pointer_09552cd4f3095591a18d7284d588da27, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_local_storage", method_pointer_3224ee894dc75165b7adff6a714e36b2, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_arc_pseudo_strong", method_pointer_b600c2d2a40257b7904bc92b98dc9ef5, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_cxx_for_range_decl", method_pointer_a6bbc7613fc25f24a9e39fcf38873149, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_concept", method_pointer_39113a2b07d55c838ec318a5a907aa96, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_constexpr", method_pointer_ad4da76dcc235f4985bfbe92810f0ef2, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_direct_init", method_pointer_55d1b06eaf5356f3adbe48507f262552, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_exception_variable", method_pointer_53dcba1825c2534b84f5fafc6d8a9e0d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_extern_c", method_pointer_e3c129951b8658feb56bf872874f65ec, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_file_var_decl", method_pointer_4bae3a7d10f157ec995f4222e0c7f99c, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_function_or_method_var_decl", method_pointer_36e8de6cee2c5471956dcf82b21af4ac, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_c_context", method_pointer_47672aba7d0258178f651af61ed885e1, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_cxx_context", method_pointer_233b0cb463f35f1bb4ce2d9a8244f94f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_capture", method_pointer_174384973a2e550c9785fc9e695cbc45, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_ice", method_pointer_bfb923c77b2b5301ab04de95b2c5dda1, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_known_ice", method_pointer_fc924ec4c43d5ee6bf3c1375f7e64573, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl", method_pointer_3ff1f373350f52dfbb304eeb26b3e9b2, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl_or_parm", method_pointer_e2eeffee775c523185f35d1939638cf8, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_nrvo_variable", method_pointer_7b8e7395a0b15bd8a5148bb390e22278, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_out_of_line", method_pointer_8e7e289b1e635030be319584da6bb276, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_previous_decl_in_same_block_scope", method_pointer_c7cadbd1d51d55cc92f1361f36a2dbf6, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_data_member", method_pointer_0b663185851b5e5b8fdedf1570098d61, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_local", method_pointer_2d14b309b78a5c48a4ff601ebb8bad2a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_usable_in_constant_expressions", method_pointer_6512b9b94f2d54c7b7f9afe493e3069b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_arc_pseudo_strong", method_pointer_c300285497ef5514a6458ec96a7108bc, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_cxx_for_range_decl", method_pointer_bad0432d262e5fd0ace0b08c89958052, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_concept", method_pointer_dc15b284dd84571baacad17e07d24d72, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_constexpr", method_pointer_82358b1c9fa755518bec2b0750456e57, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_described_var_template", method_pointer_980e6b13e80b57b98deaf253e8e9ff9b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_exception_variable", method_pointer_d349c6e54c4751debfdab0ec774d591f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_init_capture", method_pointer_50c6e5886a9450b9ba8e4eaed1feab2e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_nrvo_variable", method_pointer_d953c9d86bc85b80b0562e4ba6873cba, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_previous_decl_in_same_block_scope", method_pointer_6ed6ce192fa65b0c8cced90494d2ede8, "");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof_kind");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("create_deserialized");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}