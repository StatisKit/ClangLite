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
    class ::clang::VarDecl  * (*method_pointer_f2512118596e5714a62edba7cb2adcbe)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarDecl::CreateDeserialized;
    bool  (::clang::VarDecl::*method_pointer_5ba41c1e40b8505eabbc3c66be3885dc)() const = &::clang::VarDecl::checkInitIsICE;
    bool  (*method_pointer_7ab4cab701e9576c966f1adc4459ef2e)(class ::clang::Decl  const *) = ::clang::VarDecl::classof;
    bool  (*method_pointer_fb636dc3b3305029a946e3b8bed657e2)(enum ::clang::Decl::Kind ) = ::clang::VarDecl::classofKind;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_76b0a19cdd6a56fa8ee69e05619cefb3)() = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_384b96899f475f638b804ad179108817)() const = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_8956bded554551a8b590e459ef8c7422)() = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_f35e60f8a3a05959a2f2cff4961cae99)() const = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_391817bcbeaf5ffaa10a929dcd0296de)(class ::clang::ASTContext  &) const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_2a39f7f1afcb5f15bb0000029d0ac5c8)() = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_d66606357cef5b1d890460ce69e98774)(class ::clang::ASTContext  &) = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_06f158c1ef125b0f964c68caca1874f9)() const = &::clang::VarDecl::getDefinition;
    class ::clang::VarTemplateDecl  * (::clang::VarDecl::*method_pointer_b240b0f26370527c9aeb88e4458ec634)() const = &::clang::VarDecl::getDescribedVarTemplate;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_86bc4552087a5eabbde374021c378b33)() const = &::clang::VarDecl::getInstantiatedFromStaticDataMember;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_04427bb61cce574cb9e715935bd264ff)() = &::clang::VarDecl::getOutOfLineDefinition;
    class ::clang::SourceLocation  (::clang::VarDecl::*method_pointer_ee6a10a2aae55aaf91852bdc0eaa4946)() const = &::clang::VarDecl::getPointOfInstantiation;
    bool  (::clang::VarDecl::*method_pointer_aa20ebb6f2a35603a0f445b7b9249c1a)() const = &::clang::VarDecl::hasExternalStorage;
    bool  (::clang::VarDecl::*method_pointer_fedaaaec198a5e7bbac8e076959e596a)() const = &::clang::VarDecl::hasGlobalStorage;
    bool  (::clang::VarDecl::*method_pointer_65554b58901e5f56b45130e0624ea308)() const = &::clang::VarDecl::hasInit;
    bool  (::clang::VarDecl::*method_pointer_2ee6d65a9ac75069a20ba75fc7ba6921)() const = &::clang::VarDecl::hasLocalStorage;
    bool  (::clang::VarDecl::*method_pointer_ff81c64c85ea54d89907a0c4ac85a8df)() const = &::clang::VarDecl::isARCPseudoStrong;
    bool  (::clang::VarDecl::*method_pointer_99e40e798c2a58668c02f7cd52bfb5f5)() const = &::clang::VarDecl::isCXXForRangeDecl;
    bool  (::clang::VarDecl::*method_pointer_5fc7b8f59138570f9e195ba116eb70a5)() const = &::clang::VarDecl::isConcept;
    bool  (::clang::VarDecl::*method_pointer_e13a8f5ccf1d548bad775257c27f15a2)() const = &::clang::VarDecl::isConstexpr;
    bool  (::clang::VarDecl::*method_pointer_9df10e0941e758cd92116d638072fa37)() const = &::clang::VarDecl::isDirectInit;
    bool  (::clang::VarDecl::*method_pointer_995db167cd765786a006a926df0b1ee7)() const = &::clang::VarDecl::isExceptionVariable;
    bool  (::clang::VarDecl::*method_pointer_ab7f6b65441c58cfa6d5bbe10026fc8d)() const = &::clang::VarDecl::isExternC;
    bool  (::clang::VarDecl::*method_pointer_e35eb0dd213c5ecea34c7dc3c44e532d)() const = &::clang::VarDecl::isFileVarDecl;
    bool  (::clang::VarDecl::*method_pointer_ce87cedefa5b510d82b75a520abbe969)() const = &::clang::VarDecl::isFunctionOrMethodVarDecl;
    bool  (::clang::VarDecl::*method_pointer_1bd00715172c5734868202967148e0d1)() const = &::clang::VarDecl::isInExternCContext;
    bool  (::clang::VarDecl::*method_pointer_aa3ae34d70565447bbd93ded586035d2)() const = &::clang::VarDecl::isInExternCXXContext;
    bool  (::clang::VarDecl::*method_pointer_ef4f5b395b305e4593176c3caaa45f05)() const = &::clang::VarDecl::isInitCapture;
    bool  (::clang::VarDecl::*method_pointer_ea992f7b3b635aaaadbd886096f6008d)() const = &::clang::VarDecl::isInitICE;
    bool  (::clang::VarDecl::*method_pointer_1e386ebd3678585a8a00f6e3ad6df8e1)() const = &::clang::VarDecl::isInitKnownICE;
    bool  (::clang::VarDecl::*method_pointer_b492270fcf6a5cc3b1fde2749af2d454)() const = &::clang::VarDecl::isLocalVarDecl;
    bool  (::clang::VarDecl::*method_pointer_36bde51c47ff531ca58bb23d958f8830)() const = &::clang::VarDecl::isLocalVarDeclOrParm;
    bool  (::clang::VarDecl::*method_pointer_ae4ccb9ed9fb5d6bb2d02b7ccd41b039)() const = &::clang::VarDecl::isNRVOVariable;
    bool  (::clang::VarDecl::*method_pointer_a2b17f894549548f8af8aceccb70d826)() const = &::clang::VarDecl::isOutOfLine;
    bool  (::clang::VarDecl::*method_pointer_d9701e72cb9e59f9809529dfe6af5534)() const = &::clang::VarDecl::isPreviousDeclInSameBlockScope;
    bool  (::clang::VarDecl::*method_pointer_84644bc03e455e8eb0a80bc6811cb2e4)() const = &::clang::VarDecl::isStaticDataMember;
    bool  (::clang::VarDecl::*method_pointer_d03533f8184d575a968be61c5cc732d4)() const = &::clang::VarDecl::isStaticLocal;
    bool  (::clang::VarDecl::*method_pointer_095ba4df28c754e698b614395fb1b462)(class ::clang::ASTContext  &) const = &::clang::VarDecl::isUsableInConstantExpressions;
    void  (::clang::VarDecl::*method_pointer_729550c4165159b589d0c21cbbd5210a)(bool ) = &::clang::VarDecl::setARCPseudoStrong;
    void  (::clang::VarDecl::*method_pointer_df07f4ced80b558791d016d99640cc42)(bool ) = &::clang::VarDecl::setCXXForRangeDecl;
    void  (::clang::VarDecl::*method_pointer_3aaebeed181b5e008a656868d161fd48)(bool ) = &::clang::VarDecl::setConcept;
    void  (::clang::VarDecl::*method_pointer_9685c13d1d7c5699bde06d118aac4295)(bool ) = &::clang::VarDecl::setConstexpr;
    void  (::clang::VarDecl::*method_pointer_96c701e928ef518e8ff5dedc171f5223)(class ::clang::VarTemplateDecl  *) = &::clang::VarDecl::setDescribedVarTemplate;
    void  (::clang::VarDecl::*method_pointer_6d4a395d024f5e4b942f6322ef977f63)(bool ) = &::clang::VarDecl::setExceptionVariable;
    void  (::clang::VarDecl::*method_pointer_c49e4927ed605425bc52b43221c888ee)(bool ) = &::clang::VarDecl::setInitCapture;
    void  (::clang::VarDecl::*method_pointer_dfb47a5a58175c3f91d18ee9690a1ba3)(bool ) = &::clang::VarDecl::setNRVOVariable;
    void  (::clang::VarDecl::*method_pointer_77516cdeca7453528f2d757b108e22ed)(bool ) = &::clang::VarDecl::setPreviousDeclInSameBlockScope;
    boost::python::class_< class ::clang::VarDecl, autowig::HeldType< class ::clang::VarDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_99d3396ee242572bbeaada83b5e83165("VarDecl", "", boost::python::no_init);
    class_99d3396ee242572bbeaada83b5e83165.def("create_deserialized", method_pointer_f2512118596e5714a62edba7cb2adcbe, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("check_init_is_ice", method_pointer_5ba41c1e40b8505eabbc3c66be3885dc, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof", method_pointer_7ab4cab701e9576c966f1adc4459ef2e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof_kind", method_pointer_fb636dc3b3305029a946e3b8bed657e2, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_76b0a19cdd6a56fa8ee69e05619cefb3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_384b96899f475f638b804ad179108817, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_8956bded554551a8b590e459ef8c7422, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_f35e60f8a3a05959a2f2cff4961cae99, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_391817bcbeaf5ffaa10a929dcd0296de, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_2a39f7f1afcb5f15bb0000029d0ac5c8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_d66606357cef5b1d890460ce69e98774, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_06f158c1ef125b0f964c68caca1874f9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_described_var_template", method_pointer_b240b0f26370527c9aeb88e4458ec634, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_instantiated_from_static_data_member", method_pointer_86bc4552087a5eabbde374021c378b33, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_out_of_line_definition", method_pointer_04427bb61cce574cb9e715935bd264ff, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_point_of_instantiation", method_pointer_ee6a10a2aae55aaf91852bdc0eaa4946, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_external_storage", method_pointer_aa20ebb6f2a35603a0f445b7b9249c1a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_global_storage", method_pointer_fedaaaec198a5e7bbac8e076959e596a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_init", method_pointer_65554b58901e5f56b45130e0624ea308, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_local_storage", method_pointer_2ee6d65a9ac75069a20ba75fc7ba6921, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_arc_pseudo_strong", method_pointer_ff81c64c85ea54d89907a0c4ac85a8df, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_cxx_for_range_decl", method_pointer_99e40e798c2a58668c02f7cd52bfb5f5, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_concept", method_pointer_5fc7b8f59138570f9e195ba116eb70a5, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_constexpr", method_pointer_e13a8f5ccf1d548bad775257c27f15a2, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_direct_init", method_pointer_9df10e0941e758cd92116d638072fa37, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_exception_variable", method_pointer_995db167cd765786a006a926df0b1ee7, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_extern_c", method_pointer_ab7f6b65441c58cfa6d5bbe10026fc8d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_file_var_decl", method_pointer_e35eb0dd213c5ecea34c7dc3c44e532d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_function_or_method_var_decl", method_pointer_ce87cedefa5b510d82b75a520abbe969, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_c_context", method_pointer_1bd00715172c5734868202967148e0d1, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_cxx_context", method_pointer_aa3ae34d70565447bbd93ded586035d2, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_capture", method_pointer_ef4f5b395b305e4593176c3caaa45f05, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_ice", method_pointer_ea992f7b3b635aaaadbd886096f6008d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_known_ice", method_pointer_1e386ebd3678585a8a00f6e3ad6df8e1, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl", method_pointer_b492270fcf6a5cc3b1fde2749af2d454, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl_or_parm", method_pointer_36bde51c47ff531ca58bb23d958f8830, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_nrvo_variable", method_pointer_ae4ccb9ed9fb5d6bb2d02b7ccd41b039, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_out_of_line", method_pointer_a2b17f894549548f8af8aceccb70d826, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_previous_decl_in_same_block_scope", method_pointer_d9701e72cb9e59f9809529dfe6af5534, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_data_member", method_pointer_84644bc03e455e8eb0a80bc6811cb2e4, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_local", method_pointer_d03533f8184d575a968be61c5cc732d4, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_usable_in_constant_expressions", method_pointer_095ba4df28c754e698b614395fb1b462, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_arc_pseudo_strong", method_pointer_729550c4165159b589d0c21cbbd5210a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_cxx_for_range_decl", method_pointer_df07f4ced80b558791d016d99640cc42, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_concept", method_pointer_3aaebeed181b5e008a656868d161fd48, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_constexpr", method_pointer_9685c13d1d7c5699bde06d118aac4295, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_described_var_template", method_pointer_96c701e928ef518e8ff5dedc171f5223, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_exception_variable", method_pointer_6d4a395d024f5e4b942f6322ef977f63, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_init_capture", method_pointer_c49e4927ed605425bc52b43221c888ee, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_nrvo_variable", method_pointer_dfb47a5a58175c3f91d18ee9690a1ba3, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_previous_decl_in_same_block_scope", method_pointer_77516cdeca7453528f2d757b108e22ed, "");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof_kind");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("create_deserialized");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}