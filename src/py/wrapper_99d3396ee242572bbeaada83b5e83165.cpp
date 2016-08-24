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
    class ::clang::VarDecl  * (*method_pointer_6ff114f1b8e85ff396b5f80c667a3197)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarDecl::CreateDeserialized;
    bool  (::clang::VarDecl::*method_pointer_f260ce6dc1f75edc83c2624cc5817a75)() const = &::clang::VarDecl::checkInitIsICE;
    bool  (*method_pointer_a2409ab7fb4f5101861f1dd5ea6eecb5)(class ::clang::Decl  const *) = ::clang::VarDecl::classof;
    bool  (*method_pointer_1be7e84b85965ca5b0338e70c1ea875f)(enum ::clang::Decl::Kind ) = ::clang::VarDecl::classofKind;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_63bb5a01237b5e358879e1fad20be081)() = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_6c25f885f080523596f16b0f76df0d1c)() const = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_41820074cb3e58bda30ed1b2c7017105)() = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_440e4da29a6f509e999fcfa3a69e7b6f)() const = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_8f8ff968e2bf506499347bb49fc615a3)() const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_69cb5699adf558a39d5f42e536035b65)(class ::clang::ASTContext  &) const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_a57de38df6a45731936f30c2e0dd33a6)(class ::clang::ASTContext  &) = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_b8c0dc421b7650e38347681c77a5647d)() = &::clang::VarDecl::getDefinition;
    class ::clang::VarTemplateDecl  * (::clang::VarDecl::*method_pointer_7375139443ad51ffaf68c6c06eb951f5)() const = &::clang::VarDecl::getDescribedVarTemplate;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_5dea13f13b6f505ea45a8cec933014c5)() const = &::clang::VarDecl::getInstantiatedFromStaticDataMember;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_f62ab94ed4935b7ba2c7cc764db15afe)() = &::clang::VarDecl::getOutOfLineDefinition;
    class ::clang::SourceLocation  (::clang::VarDecl::*method_pointer_668b27ae22455cfaac591934856d80d2)() const = &::clang::VarDecl::getPointOfInstantiation;
    bool  (::clang::VarDecl::*method_pointer_1903b0653c3c50cb9cfb0c1abd28ccb6)() const = &::clang::VarDecl::hasExternalStorage;
    bool  (::clang::VarDecl::*method_pointer_272f33c2566f51fb9b9a6aa1963ff207)() const = &::clang::VarDecl::hasGlobalStorage;
    bool  (::clang::VarDecl::*method_pointer_3b61638a55745d22a7697e9570564cf4)() const = &::clang::VarDecl::hasInit;
    bool  (::clang::VarDecl::*method_pointer_8fa721eaf274589aa496a5dce0f7a5e0)() const = &::clang::VarDecl::hasLocalStorage;
    bool  (::clang::VarDecl::*method_pointer_81cbe129dcda5a9d9edc8850a050000d)() const = &::clang::VarDecl::isARCPseudoStrong;
    bool  (::clang::VarDecl::*method_pointer_4c616338a69a5707a2b13ce10e2e2325)() const = &::clang::VarDecl::isCXXForRangeDecl;
    bool  (::clang::VarDecl::*method_pointer_383960db52925579b9fefdd9ce4d4b7d)() const = &::clang::VarDecl::isConcept;
    bool  (::clang::VarDecl::*method_pointer_d36a40dd4382586db82eaf08c459e48e)() const = &::clang::VarDecl::isConstexpr;
    bool  (::clang::VarDecl::*method_pointer_78a59f7db69d54418061181f34742fda)() const = &::clang::VarDecl::isDirectInit;
    bool  (::clang::VarDecl::*method_pointer_cea371982aa457d3b25258fa20ab5d9a)() const = &::clang::VarDecl::isExceptionVariable;
    bool  (::clang::VarDecl::*method_pointer_1c49ce196dfc54edb023f31e69052a45)() const = &::clang::VarDecl::isExternC;
    bool  (::clang::VarDecl::*method_pointer_ce0a6c0f7fee5918af33e57cc3a04da4)() const = &::clang::VarDecl::isFileVarDecl;
    bool  (::clang::VarDecl::*method_pointer_42f97c7399a15f4f85175192a9e7c0a7)() const = &::clang::VarDecl::isFunctionOrMethodVarDecl;
    bool  (::clang::VarDecl::*method_pointer_02016bbf9c6c57f9834f3c24d97ab624)() const = &::clang::VarDecl::isInExternCContext;
    bool  (::clang::VarDecl::*method_pointer_26f0b725a98c57ea84ea3cb6982f6a70)() const = &::clang::VarDecl::isInExternCXXContext;
    bool  (::clang::VarDecl::*method_pointer_4161aad5c7f35deb81c66e69b7f8f3ab)() const = &::clang::VarDecl::isInitCapture;
    bool  (::clang::VarDecl::*method_pointer_5d6e2860abad5ee997a007c78c2ba401)() const = &::clang::VarDecl::isInitICE;
    bool  (::clang::VarDecl::*method_pointer_f49685ba984e5ce2af5ad6502da67e86)() const = &::clang::VarDecl::isInitKnownICE;
    bool  (::clang::VarDecl::*method_pointer_208d6acf51405e7f836ea7c7edc41a2e)() const = &::clang::VarDecl::isLocalVarDecl;
    bool  (::clang::VarDecl::*method_pointer_b7c16fd2c2fa50fe804afa5b1b2e5142)() const = &::clang::VarDecl::isLocalVarDeclOrParm;
    bool  (::clang::VarDecl::*method_pointer_a3078b8c3f3e5fc89c6920e4aeca9526)() const = &::clang::VarDecl::isNRVOVariable;
    bool  (::clang::VarDecl::*method_pointer_e095f4bc9b6b5ff880b0dbd5eb94ee59)() const = &::clang::VarDecl::isOutOfLine;
    bool  (::clang::VarDecl::*method_pointer_7daf2591da4a5913b0e33a2541eb48bf)() const = &::clang::VarDecl::isPreviousDeclInSameBlockScope;
    bool  (::clang::VarDecl::*method_pointer_bd26357c511f5558a43e1ac884cd43b6)() const = &::clang::VarDecl::isStaticDataMember;
    bool  (::clang::VarDecl::*method_pointer_206031c7dac659d3a47c7564799a1ef4)() const = &::clang::VarDecl::isStaticLocal;
    bool  (::clang::VarDecl::*method_pointer_0fa62390f9ff55f2ac9f7d418f2ff5d5)(class ::clang::ASTContext  &) const = &::clang::VarDecl::isUsableInConstantExpressions;
    void  (::clang::VarDecl::*method_pointer_ae74691b7e9d599e82060a5edebce083)(bool ) = &::clang::VarDecl::setARCPseudoStrong;
    void  (::clang::VarDecl::*method_pointer_3f9e5eb3a30d508bb562c2be8a941575)(bool ) = &::clang::VarDecl::setCXXForRangeDecl;
    void  (::clang::VarDecl::*method_pointer_dd6a42bc966c52ed936dd21bf3a2f5a1)(bool ) = &::clang::VarDecl::setConcept;
    void  (::clang::VarDecl::*method_pointer_cceb5dec76f1579dbf4ace03d63d9bd5)(bool ) = &::clang::VarDecl::setConstexpr;
    void  (::clang::VarDecl::*method_pointer_a643f768fa145bb6a25265b864ec1928)(class ::clang::VarTemplateDecl  *) = &::clang::VarDecl::setDescribedVarTemplate;
    void  (::clang::VarDecl::*method_pointer_f044e33b2e295258a0e5ec118fd42f38)(bool ) = &::clang::VarDecl::setExceptionVariable;
    void  (::clang::VarDecl::*method_pointer_ca21a8da3740505faa0b6c71948f552e)(bool ) = &::clang::VarDecl::setInitCapture;
    void  (::clang::VarDecl::*method_pointer_705ef245158e58af90b1d8a53fb93c68)(bool ) = &::clang::VarDecl::setNRVOVariable;
    void  (::clang::VarDecl::*method_pointer_94d7de02c2565934835c636a2312c19e)(bool ) = &::clang::VarDecl::setPreviousDeclInSameBlockScope;
    boost::python::class_< class ::clang::VarDecl, autowig::HeldType< class ::clang::VarDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_99d3396ee242572bbeaada83b5e83165("VarDecl", "", boost::python::no_init);
    class_99d3396ee242572bbeaada83b5e83165.def("create_deserialized", method_pointer_6ff114f1b8e85ff396b5f80c667a3197, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("check_init_is_ice", method_pointer_f260ce6dc1f75edc83c2624cc5817a75, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof", method_pointer_a2409ab7fb4f5101861f1dd5ea6eecb5, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof_kind", method_pointer_1be7e84b85965ca5b0338e70c1ea875f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_63bb5a01237b5e358879e1fad20be081, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_6c25f885f080523596f16b0f76df0d1c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_41820074cb3e58bda30ed1b2c7017105, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_440e4da29a6f509e999fcfa3a69e7b6f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_8f8ff968e2bf506499347bb49fc615a3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_69cb5699adf558a39d5f42e536035b65, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_a57de38df6a45731936f30c2e0dd33a6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_b8c0dc421b7650e38347681c77a5647d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_described_var_template", method_pointer_7375139443ad51ffaf68c6c06eb951f5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_instantiated_from_static_data_member", method_pointer_5dea13f13b6f505ea45a8cec933014c5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_out_of_line_definition", method_pointer_f62ab94ed4935b7ba2c7cc764db15afe, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_point_of_instantiation", method_pointer_668b27ae22455cfaac591934856d80d2, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_external_storage", method_pointer_1903b0653c3c50cb9cfb0c1abd28ccb6, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_global_storage", method_pointer_272f33c2566f51fb9b9a6aa1963ff207, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_init", method_pointer_3b61638a55745d22a7697e9570564cf4, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_local_storage", method_pointer_8fa721eaf274589aa496a5dce0f7a5e0, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_arc_pseudo_strong", method_pointer_81cbe129dcda5a9d9edc8850a050000d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_cxx_for_range_decl", method_pointer_4c616338a69a5707a2b13ce10e2e2325, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_concept", method_pointer_383960db52925579b9fefdd9ce4d4b7d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_constexpr", method_pointer_d36a40dd4382586db82eaf08c459e48e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_direct_init", method_pointer_78a59f7db69d54418061181f34742fda, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_exception_variable", method_pointer_cea371982aa457d3b25258fa20ab5d9a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_extern_c", method_pointer_1c49ce196dfc54edb023f31e69052a45, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_file_var_decl", method_pointer_ce0a6c0f7fee5918af33e57cc3a04da4, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_function_or_method_var_decl", method_pointer_42f97c7399a15f4f85175192a9e7c0a7, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_c_context", method_pointer_02016bbf9c6c57f9834f3c24d97ab624, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_cxx_context", method_pointer_26f0b725a98c57ea84ea3cb6982f6a70, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_capture", method_pointer_4161aad5c7f35deb81c66e69b7f8f3ab, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_ice", method_pointer_5d6e2860abad5ee997a007c78c2ba401, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_known_ice", method_pointer_f49685ba984e5ce2af5ad6502da67e86, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl", method_pointer_208d6acf51405e7f836ea7c7edc41a2e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl_or_parm", method_pointer_b7c16fd2c2fa50fe804afa5b1b2e5142, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_nrvo_variable", method_pointer_a3078b8c3f3e5fc89c6920e4aeca9526, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_out_of_line", method_pointer_e095f4bc9b6b5ff880b0dbd5eb94ee59, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_previous_decl_in_same_block_scope", method_pointer_7daf2591da4a5913b0e33a2541eb48bf, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_data_member", method_pointer_bd26357c511f5558a43e1ac884cd43b6, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_local", method_pointer_206031c7dac659d3a47c7564799a1ef4, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_usable_in_constant_expressions", method_pointer_0fa62390f9ff55f2ac9f7d418f2ff5d5, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_arc_pseudo_strong", method_pointer_ae74691b7e9d599e82060a5edebce083, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_cxx_for_range_decl", method_pointer_3f9e5eb3a30d508bb562c2be8a941575, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_concept", method_pointer_dd6a42bc966c52ed936dd21bf3a2f5a1, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_constexpr", method_pointer_cceb5dec76f1579dbf4ace03d63d9bd5, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_described_var_template", method_pointer_a643f768fa145bb6a25265b864ec1928, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_exception_variable", method_pointer_f044e33b2e295258a0e5ec118fd42f38, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_init_capture", method_pointer_ca21a8da3740505faa0b6c71948f552e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_nrvo_variable", method_pointer_705ef245158e58af90b1d8a53fb93c68, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_previous_decl_in_same_block_scope", method_pointer_94d7de02c2565934835c636a2312c19e, "");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof_kind");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("create_deserialized");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}