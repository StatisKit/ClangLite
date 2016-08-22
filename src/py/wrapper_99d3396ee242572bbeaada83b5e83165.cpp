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
    class ::clang::VarDecl  * (*method_pointer_668565448ce8516dae160fa654a6c468)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarDecl::CreateDeserialized;
    bool  (::clang::VarDecl::*method_pointer_8cc3085f4814535baf284a93b892b315)() const = &::clang::VarDecl::checkInitIsICE;
    bool  (*method_pointer_8c60d8e1a2175df39cd35be97abce039)(class ::clang::Decl  const *) = ::clang::VarDecl::classof;
    bool  (*method_pointer_75d5db3a596b5a9bb125e58b0607b9b9)(enum ::clang::Decl::Kind ) = ::clang::VarDecl::classofKind;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_5427da94b25a5d67be46cb00ee22043e)() const = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_2c4d6cac6c255fca9f2570be9bc6252b)() = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_edc41a78974b5561b39563de8910af8b)() = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_5669eac1ae4b5ef79af782b3b0ac7d8c)() const = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_c9ac4a2242df5a738effa8aa30fd8c1c)() const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_92e82380510c5b3e9c33dcdf747261e2)(class ::clang::ASTContext  &) = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_b187d3d8c0ba53bc870e494358fd0ad3)(class ::clang::ASTContext  &) const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_55e3af722f785932ac5076fa6e1d633e)() = &::clang::VarDecl::getDefinition;
    class ::clang::VarTemplateDecl  * (::clang::VarDecl::*method_pointer_2679347bbe15558dad60daf41359f35f)() const = &::clang::VarDecl::getDescribedVarTemplate;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_e2840c59107654848de157ca5f7bae73)() const = &::clang::VarDecl::getInstantiatedFromStaticDataMember;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_8d320806538354e4af4650c7e7d3baf7)() = &::clang::VarDecl::getOutOfLineDefinition;
    bool  (::clang::VarDecl::*method_pointer_6aa10866cfa65260abc3b2d38557ad71)() const = &::clang::VarDecl::hasExternalStorage;
    bool  (::clang::VarDecl::*method_pointer_2eefa472350f52469e08ad96f358dce3)() const = &::clang::VarDecl::hasGlobalStorage;
    bool  (::clang::VarDecl::*method_pointer_6ce6d5f4b69450f9bf8090b4e5196d76)() const = &::clang::VarDecl::hasInit;
    bool  (::clang::VarDecl::*method_pointer_7e36f361f10655e2916629babf95b75b)() const = &::clang::VarDecl::hasLocalStorage;
    bool  (::clang::VarDecl::*method_pointer_73b3d0a39f3e5853b5040281f07c2bca)() const = &::clang::VarDecl::isARCPseudoStrong;
    bool  (::clang::VarDecl::*method_pointer_5d2c678d26b35541a5b0dbfedc893254)() const = &::clang::VarDecl::isCXXForRangeDecl;
    bool  (::clang::VarDecl::*method_pointer_1f13a432a5745805bd00af0fd8e89d63)() const = &::clang::VarDecl::isConcept;
    bool  (::clang::VarDecl::*method_pointer_fb3f3dae3ef6585aa4145b9108939ed5)() const = &::clang::VarDecl::isConstexpr;
    bool  (::clang::VarDecl::*method_pointer_ca8f91d6a6f95da5b3099465a27e995e)() const = &::clang::VarDecl::isDirectInit;
    bool  (::clang::VarDecl::*method_pointer_df42d2056913583bb289f59544288551)() const = &::clang::VarDecl::isExceptionVariable;
    bool  (::clang::VarDecl::*method_pointer_c0b56f3a152e58d7bd12c3815d8548e1)() const = &::clang::VarDecl::isExternC;
    bool  (::clang::VarDecl::*method_pointer_95ac2142e5915853982b808b73a6b18e)() const = &::clang::VarDecl::isFileVarDecl;
    bool  (::clang::VarDecl::*method_pointer_1e1d196b7cec5a45b2d1104d5e614ac9)() const = &::clang::VarDecl::isFunctionOrMethodVarDecl;
    bool  (::clang::VarDecl::*method_pointer_858fa7e1c81252d48e7d1d201ef830dc)() const = &::clang::VarDecl::isInExternCContext;
    bool  (::clang::VarDecl::*method_pointer_e0ffca09ea0f563bb6a01248d4899942)() const = &::clang::VarDecl::isInExternCXXContext;
    bool  (::clang::VarDecl::*method_pointer_cf9c8abd866653389c05e138d36c0dd7)() const = &::clang::VarDecl::isInitCapture;
    bool  (::clang::VarDecl::*method_pointer_77d97d65c03952fdafd1203505f883f0)() const = &::clang::VarDecl::isInitICE;
    bool  (::clang::VarDecl::*method_pointer_f6f9a34c8d9c53d18d12b657b7a4d0af)() const = &::clang::VarDecl::isInitKnownICE;
    bool  (::clang::VarDecl::*method_pointer_ef6b41b155975933b44343cb1b937b6c)() const = &::clang::VarDecl::isLocalVarDecl;
    bool  (::clang::VarDecl::*method_pointer_3a41cb7e80715ee580ddfefa34dce64e)() const = &::clang::VarDecl::isLocalVarDeclOrParm;
    bool  (::clang::VarDecl::*method_pointer_fd85a4727ea759e9add79d99f9002d8a)() const = &::clang::VarDecl::isNRVOVariable;
    bool  (::clang::VarDecl::*method_pointer_57e3ad571f425c6dbfac2dccf689b485)() const = &::clang::VarDecl::isOutOfLine;
    bool  (::clang::VarDecl::*method_pointer_e6460c06d9c35c02801e6f335bff5dc1)() const = &::clang::VarDecl::isPreviousDeclInSameBlockScope;
    bool  (::clang::VarDecl::*method_pointer_74bdd15edfcd52409a683b0b68913a8c)() const = &::clang::VarDecl::isStaticDataMember;
    bool  (::clang::VarDecl::*method_pointer_51759d14d3df5d678b6b6f44bb3c416e)() const = &::clang::VarDecl::isStaticLocal;
    bool  (::clang::VarDecl::*method_pointer_272151189a925438a0be15839b6ab1b1)(class ::clang::ASTContext  &) const = &::clang::VarDecl::isUsableInConstantExpressions;
    void  (::clang::VarDecl::*method_pointer_ca4efd63ee5d50f68f7c5235870764db)(bool ) = &::clang::VarDecl::setARCPseudoStrong;
    void  (::clang::VarDecl::*method_pointer_54f557cbcfa65d3aad32faf237760118)(bool ) = &::clang::VarDecl::setCXXForRangeDecl;
    void  (::clang::VarDecl::*method_pointer_4794eeebaf705c55b96a21044388d1e0)(bool ) = &::clang::VarDecl::setConcept;
    void  (::clang::VarDecl::*method_pointer_20222eb0697255fab75acec7ac9c656e)(bool ) = &::clang::VarDecl::setConstexpr;
    void  (::clang::VarDecl::*method_pointer_17f3140230d954f386ad1f7e49d705a4)(class ::clang::VarTemplateDecl  *) = &::clang::VarDecl::setDescribedVarTemplate;
    void  (::clang::VarDecl::*method_pointer_956634da94a054bba9303bf9061db041)(bool ) = &::clang::VarDecl::setExceptionVariable;
    void  (::clang::VarDecl::*method_pointer_0d04b0804ae656a1bb8aec597d740cec)(bool ) = &::clang::VarDecl::setInitCapture;
    void  (::clang::VarDecl::*method_pointer_28e1ec7181335e56933c3742cef09379)(bool ) = &::clang::VarDecl::setNRVOVariable;
    void  (::clang::VarDecl::*method_pointer_cb7ae30197d35e668e1e614f96893d49)(bool ) = &::clang::VarDecl::setPreviousDeclInSameBlockScope;
    boost::python::class_< class ::clang::VarDecl, autowig::HeldType< class ::clang::VarDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_99d3396ee242572bbeaada83b5e83165("VarDecl", "", boost::python::no_init);
    class_99d3396ee242572bbeaada83b5e83165.def("create_deserialized", method_pointer_668565448ce8516dae160fa654a6c468, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("check_init_is_ice", method_pointer_8cc3085f4814535baf284a93b892b315, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof", method_pointer_8c60d8e1a2175df39cd35be97abce039, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof_kind", method_pointer_75d5db3a596b5a9bb125e58b0607b9b9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_5427da94b25a5d67be46cb00ee22043e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_2c4d6cac6c255fca9f2570be9bc6252b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_edc41a78974b5561b39563de8910af8b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_5669eac1ae4b5ef79af782b3b0ac7d8c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_c9ac4a2242df5a738effa8aa30fd8c1c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_92e82380510c5b3e9c33dcdf747261e2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_b187d3d8c0ba53bc870e494358fd0ad3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_55e3af722f785932ac5076fa6e1d633e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_described_var_template", method_pointer_2679347bbe15558dad60daf41359f35f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_instantiated_from_static_data_member", method_pointer_e2840c59107654848de157ca5f7bae73, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_out_of_line_definition", method_pointer_8d320806538354e4af4650c7e7d3baf7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_external_storage", method_pointer_6aa10866cfa65260abc3b2d38557ad71, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_global_storage", method_pointer_2eefa472350f52469e08ad96f358dce3, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_init", method_pointer_6ce6d5f4b69450f9bf8090b4e5196d76, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_local_storage", method_pointer_7e36f361f10655e2916629babf95b75b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_arc_pseudo_strong", method_pointer_73b3d0a39f3e5853b5040281f07c2bca, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_cxx_for_range_decl", method_pointer_5d2c678d26b35541a5b0dbfedc893254, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_concept", method_pointer_1f13a432a5745805bd00af0fd8e89d63, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_constexpr", method_pointer_fb3f3dae3ef6585aa4145b9108939ed5, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_direct_init", method_pointer_ca8f91d6a6f95da5b3099465a27e995e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_exception_variable", method_pointer_df42d2056913583bb289f59544288551, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_extern_c", method_pointer_c0b56f3a152e58d7bd12c3815d8548e1, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_file_var_decl", method_pointer_95ac2142e5915853982b808b73a6b18e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_function_or_method_var_decl", method_pointer_1e1d196b7cec5a45b2d1104d5e614ac9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_c_context", method_pointer_858fa7e1c81252d48e7d1d201ef830dc, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_cxx_context", method_pointer_e0ffca09ea0f563bb6a01248d4899942, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_capture", method_pointer_cf9c8abd866653389c05e138d36c0dd7, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_ice", method_pointer_77d97d65c03952fdafd1203505f883f0, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_known_ice", method_pointer_f6f9a34c8d9c53d18d12b657b7a4d0af, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl", method_pointer_ef6b41b155975933b44343cb1b937b6c, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl_or_parm", method_pointer_3a41cb7e80715ee580ddfefa34dce64e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_nrvo_variable", method_pointer_fd85a4727ea759e9add79d99f9002d8a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_out_of_line", method_pointer_57e3ad571f425c6dbfac2dccf689b485, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_previous_decl_in_same_block_scope", method_pointer_e6460c06d9c35c02801e6f335bff5dc1, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_data_member", method_pointer_74bdd15edfcd52409a683b0b68913a8c, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_local", method_pointer_51759d14d3df5d678b6b6f44bb3c416e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_usable_in_constant_expressions", method_pointer_272151189a925438a0be15839b6ab1b1, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_arc_pseudo_strong", method_pointer_ca4efd63ee5d50f68f7c5235870764db, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_cxx_for_range_decl", method_pointer_54f557cbcfa65d3aad32faf237760118, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_concept", method_pointer_4794eeebaf705c55b96a21044388d1e0, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_constexpr", method_pointer_20222eb0697255fab75acec7ac9c656e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_described_var_template", method_pointer_17f3140230d954f386ad1f7e49d705a4, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_exception_variable", method_pointer_956634da94a054bba9303bf9061db041, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_init_capture", method_pointer_0d04b0804ae656a1bb8aec597d740cec, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_nrvo_variable", method_pointer_28e1ec7181335e56933c3742cef09379, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_previous_decl_in_same_block_scope", method_pointer_cb7ae30197d35e668e1e614f96893d49, "");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof_kind");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("create_deserialized");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}