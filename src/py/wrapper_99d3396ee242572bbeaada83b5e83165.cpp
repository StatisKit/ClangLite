/**********************************************************************************/
/*                                                                                */
/* PyClangLite: Python bindings for Clang                                         */
/*                                                                                */
/* Homepage: http://pyclanglite.readthedocs.io/                                   */
/*                                                                                */
/* Copyright (c) 2016 Pierre Fernique                                             */
/*                                                                                */
/* This software is distributed under the CeCILL-C license. You should have       */
/* received a copy of the legalcode along with this work. If not, see             */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/* File authors: Pierre Fernique <pfernique@gmail.com> (36)                       */
/*                                                                                */
/**********************************************************************************/

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
    class ::clang::VarDecl  * (*method_pointer_4f564a4b0246571db269d91594d4bceb)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarDecl::CreateDeserialized;
    bool  (::clang::VarDecl::*method_pointer_d9dc7a6eb4295a7693fcd6dd596c27d3)() const = &::clang::VarDecl::checkInitIsICE;
    bool  (*method_pointer_7495a6230db65f86aca7c37e92bc50b4)(class ::clang::Decl  const *) = ::clang::VarDecl::classof;
    bool  (*method_pointer_209f2b95f74f57ef98eeddec7cd6b4e2)(enum ::clang::Decl::Kind ) = ::clang::VarDecl::classofKind;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_a6447d792b9052ed996e44bfe4a591a1)() const = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_8d7f05053aa65e91b49aeee588acdef8)() = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_12601530317d53db951fed1552a66ee8)() const = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_e2e9b4659d8b573abde8f077b34dd56c)() = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_5891fa5bc3be5ad8950561c2ce6713de)() const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_3159435f5f3c50a6bcc0b6605058cb97)(class ::clang::ASTContext  &) = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_9e5f111c9fbc578098c3580d8a17f518)() = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_77c7cde7522d52ecb35f5b07cd030c72)(class ::clang::ASTContext  &) const = &::clang::VarDecl::getDefinition;
    class ::clang::VarTemplateDecl  * (::clang::VarDecl::*method_pointer_ef435efadba857989de25e3fe7d401e7)() const = &::clang::VarDecl::getDescribedVarTemplate;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_4c27261877f257b1b85d7c22ea606bb7)() const = &::clang::VarDecl::getInstantiatedFromStaticDataMember;
    //class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_156c5d31ac525a3fa1359b2570eb3f3f)() = &::clang::VarDecl::getOutOfLineDefinition;
    class ::clang::SourceLocation  (::clang::VarDecl::*method_pointer_c5e69400c70857c3a8cf3e92a9071854)() const = &::clang::VarDecl::getPointOfInstantiation;
    bool  (::clang::VarDecl::*method_pointer_c4f1cc4e82795c8b9bd8f91dd6b75e33)() const = &::clang::VarDecl::hasExternalStorage;
    bool  (::clang::VarDecl::*method_pointer_edae0114f44854a4b047e7963480702a)() const = &::clang::VarDecl::hasGlobalStorage;
    bool  (::clang::VarDecl::*method_pointer_cbb3ad0fead157a980ab32a0d464d8bb)() const = &::clang::VarDecl::hasInit;
    bool  (::clang::VarDecl::*method_pointer_1fb95c683b7459cab7676dd9254a57a0)() const = &::clang::VarDecl::hasLocalStorage;
    bool  (::clang::VarDecl::*method_pointer_b7ae578eae1f558a950314b51866ec18)() const = &::clang::VarDecl::isARCPseudoStrong;
    bool  (::clang::VarDecl::*method_pointer_f071048605a4564fa78ef89c1361e43e)() const = &::clang::VarDecl::isCXXForRangeDecl;
    //bool  (::clang::VarDecl::*method_pointer_b8c5d2e9a5cf51808f46db3da59b67cd)() const = &::clang::VarDecl::isConcept;
    bool  (::clang::VarDecl::*method_pointer_82daba4fd1805ccf859d5347f3b6930f)() const = &::clang::VarDecl::isConstexpr;
    bool  (::clang::VarDecl::*method_pointer_8640a363c6ae58f29edd764afff9b46f)() const = &::clang::VarDecl::isDirectInit;
    bool  (::clang::VarDecl::*method_pointer_5d41fc9b3b995818bbcc7f78a411005c)() const = &::clang::VarDecl::isExceptionVariable;
    bool  (::clang::VarDecl::*method_pointer_da7163f64a4e533db612759c7a1e79ba)() const = &::clang::VarDecl::isExternC;
    bool  (::clang::VarDecl::*method_pointer_668b9d6e29cf56c7861b64ed23928fc8)() const = &::clang::VarDecl::isFileVarDecl;
    bool  (::clang::VarDecl::*method_pointer_861d82f3d28f50d888891520134e54b8)() const = &::clang::VarDecl::isFunctionOrMethodVarDecl;
    bool  (::clang::VarDecl::*method_pointer_5d3ef55757ee5200b0e6f6f91b6ee533)() const = &::clang::VarDecl::isInExternCContext;
    bool  (::clang::VarDecl::*method_pointer_84397bd4c4ad5aa29601e60e90ce0e77)() const = &::clang::VarDecl::isInExternCXXContext;
    bool  (::clang::VarDecl::*method_pointer_159466d021d05355a00b8077a8db29c9)() const = &::clang::VarDecl::isInitCapture;
    bool  (::clang::VarDecl::*method_pointer_693fbf51dd355d2189ed53075e754c4b)() const = &::clang::VarDecl::isInitICE;
    bool  (::clang::VarDecl::*method_pointer_489b5e6c66cc511cb94d5ed98909b0e5)() const = &::clang::VarDecl::isInitKnownICE;
    bool  (::clang::VarDecl::*method_pointer_bef5de77b7d256b881581895f03ffb87)() const = &::clang::VarDecl::isLocalVarDecl;
    bool  (::clang::VarDecl::*method_pointer_476d2df87acd5204adf2afe83351a724)() const = &::clang::VarDecl::isLocalVarDeclOrParm;
    bool  (::clang::VarDecl::*method_pointer_6b730adde3245a3e99cd9452dc2d2c84)() const = &::clang::VarDecl::isNRVOVariable;
    bool  (::clang::VarDecl::*method_pointer_5a3d9b9ce2095b3180b0c2481808dc6b)() const = &::clang::VarDecl::isOutOfLine;
    bool  (::clang::VarDecl::*method_pointer_3f7e4598a7785ee5aadd2ab7ab3103ad)() const = &::clang::VarDecl::isPreviousDeclInSameBlockScope;
    bool  (::clang::VarDecl::*method_pointer_b442968f563159bb9f8ae6ba9be9f160)() const = &::clang::VarDecl::isStaticDataMember;
    bool  (::clang::VarDecl::*method_pointer_8e9491da989f5b238a06b950c7a194af)() const = &::clang::VarDecl::isStaticLocal;
    bool  (::clang::VarDecl::*method_pointer_f78bb98032f4571cb8e2b909885627f4)(class ::clang::ASTContext  &) const = &::clang::VarDecl::isUsableInConstantExpressions;
    void  (::clang::VarDecl::*method_pointer_f01c462bbf7652298bc047f2f2492b55)(bool ) = &::clang::VarDecl::setARCPseudoStrong;
    void  (::clang::VarDecl::*method_pointer_728d7b151a36507b846db85a56f72c7a)(bool ) = &::clang::VarDecl::setCXXForRangeDecl;
    //void  (::clang::VarDecl::*method_pointer_980a476897e15b639bde1d4e2892aaf0)(bool ) = &::clang::VarDecl::setConcept;
    void  (::clang::VarDecl::*method_pointer_00b779c78d58587e81e661c52a858832)(bool ) = &::clang::VarDecl::setConstexpr;
    void  (::clang::VarDecl::*method_pointer_7c902077157f5488997ce0381d4b548f)(class ::clang::VarTemplateDecl  *) = &::clang::VarDecl::setDescribedVarTemplate;
    void  (::clang::VarDecl::*method_pointer_8140f84d80c150439662ace4d64f8220)(bool ) = &::clang::VarDecl::setExceptionVariable;
    void  (::clang::VarDecl::*method_pointer_71e950a6f5d4569cac0d32ecb93916f9)(bool ) = &::clang::VarDecl::setInitCapture;
    void  (::clang::VarDecl::*method_pointer_87845e898c9d563f9bd4abea5e8dc2f9)(bool ) = &::clang::VarDecl::setNRVOVariable;
    void  (::clang::VarDecl::*method_pointer_5275433328ae5631a02cd18519fb6ac5)(bool ) = &::clang::VarDecl::setPreviousDeclInSameBlockScope;
    boost::python::class_< class ::clang::VarDecl, autowig::HeldType< class ::clang::VarDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_99d3396ee242572bbeaada83b5e83165("VarDecl", "", boost::python::no_init);
    class_99d3396ee242572bbeaada83b5e83165.def("create_deserialized", method_pointer_4f564a4b0246571db269d91594d4bceb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("check_init_is_ice", method_pointer_d9dc7a6eb4295a7693fcd6dd596c27d3, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof", method_pointer_7495a6230db65f86aca7c37e92bc50b4, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof_kind", method_pointer_209f2b95f74f57ef98eeddec7cd6b4e2, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_a6447d792b9052ed996e44bfe4a591a1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_8d7f05053aa65e91b49aeee588acdef8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_12601530317d53db951fed1552a66ee8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_e2e9b4659d8b573abde8f077b34dd56c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_5891fa5bc3be5ad8950561c2ce6713de, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_3159435f5f3c50a6bcc0b6605058cb97, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_9e5f111c9fbc578098c3580d8a17f518, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_77c7cde7522d52ecb35f5b07cd030c72, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_described_var_template", method_pointer_ef435efadba857989de25e3fe7d401e7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_instantiated_from_static_data_member", method_pointer_4c27261877f257b1b85d7c22ea606bb7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    //class_99d3396ee242572bbeaada83b5e83165.def("get_out_of_line_definition", method_pointer_156c5d31ac525a3fa1359b2570eb3f3f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_point_of_instantiation", method_pointer_c5e69400c70857c3a8cf3e92a9071854, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_external_storage", method_pointer_c4f1cc4e82795c8b9bd8f91dd6b75e33, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_global_storage", method_pointer_edae0114f44854a4b047e7963480702a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_init", method_pointer_cbb3ad0fead157a980ab32a0d464d8bb, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_local_storage", method_pointer_1fb95c683b7459cab7676dd9254a57a0, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_arc_pseudo_strong", method_pointer_b7ae578eae1f558a950314b51866ec18, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_cxx_for_range_decl", method_pointer_f071048605a4564fa78ef89c1361e43e, "");
    //class_99d3396ee242572bbeaada83b5e83165.def("is_concept", method_pointer_b8c5d2e9a5cf51808f46db3da59b67cd, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_constexpr", method_pointer_82daba4fd1805ccf859d5347f3b6930f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_direct_init", method_pointer_8640a363c6ae58f29edd764afff9b46f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_exception_variable", method_pointer_5d41fc9b3b995818bbcc7f78a411005c, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_extern_c", method_pointer_da7163f64a4e533db612759c7a1e79ba, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_file_var_decl", method_pointer_668b9d6e29cf56c7861b64ed23928fc8, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_function_or_method_var_decl", method_pointer_861d82f3d28f50d888891520134e54b8, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_c_context", method_pointer_5d3ef55757ee5200b0e6f6f91b6ee533, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_cxx_context", method_pointer_84397bd4c4ad5aa29601e60e90ce0e77, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_capture", method_pointer_159466d021d05355a00b8077a8db29c9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_ice", method_pointer_693fbf51dd355d2189ed53075e754c4b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_known_ice", method_pointer_489b5e6c66cc511cb94d5ed98909b0e5, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl", method_pointer_bef5de77b7d256b881581895f03ffb87, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl_or_parm", method_pointer_476d2df87acd5204adf2afe83351a724, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_nrvo_variable", method_pointer_6b730adde3245a3e99cd9452dc2d2c84, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_out_of_line", method_pointer_5a3d9b9ce2095b3180b0c2481808dc6b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_previous_decl_in_same_block_scope", method_pointer_3f7e4598a7785ee5aadd2ab7ab3103ad, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_data_member", method_pointer_b442968f563159bb9f8ae6ba9be9f160, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_local", method_pointer_8e9491da989f5b238a06b950c7a194af, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_usable_in_constant_expressions", method_pointer_f78bb98032f4571cb8e2b909885627f4, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_arc_pseudo_strong", method_pointer_f01c462bbf7652298bc047f2f2492b55, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_cxx_for_range_decl", method_pointer_728d7b151a36507b846db85a56f72c7a, "");
    //class_99d3396ee242572bbeaada83b5e83165.def("set_concept", method_pointer_980a476897e15b639bde1d4e2892aaf0, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_constexpr", method_pointer_00b779c78d58587e81e661c52a858832, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_described_var_template", method_pointer_7c902077157f5488997ce0381d4b548f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_exception_variable", method_pointer_8140f84d80c150439662ace4d64f8220, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_init_capture", method_pointer_71e950a6f5d4569cac0d32ecb93916f9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_nrvo_variable", method_pointer_87845e898c9d563f9bd4abea5e8dc2f9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_previous_decl_in_same_block_scope", method_pointer_5275433328ae5631a02cd18519fb6ac5, "");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof_kind");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("create_deserialized");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}