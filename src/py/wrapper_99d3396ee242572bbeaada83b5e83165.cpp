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
    class ::clang::VarDecl  * (*method_pointer_7f86393fc5af5d028572ee782b43297f)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarDecl::CreateDeserialized;
    bool  (::clang::VarDecl::*method_pointer_eb5617e08daa51be81734eb8634f6ad2)() const = &::clang::VarDecl::checkInitIsICE;
    bool  (*method_pointer_cd4dec45d3e75a06819dd4caa63322a9)(class ::clang::Decl  const *) = ::clang::VarDecl::classof;
    bool  (*method_pointer_2544541ca5065cf8948670449f1a4ede)(enum ::clang::Decl::Kind ) = ::clang::VarDecl::classofKind;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_08ad7fb5cb5c59c9bd386db0bcc6e672)() = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_b0c79490f69356e4aa083fdac077af78)() const = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_8df64f534aa75316b71e3ef5f84b76b5)() = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_ba0d46f8ed7a503a9027605c07b8d9af)() const = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_2218481d38635ce4aef8e9e19bd9949d)(class ::clang::ASTContext  &) = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_bcf1bb22264e54bc94ef703e274ae436)() const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_82124fb30d77589dae1f9d7bbd3a86a1)() = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_0af6d3e9bfb558d5abca85cc2d401d77)(class ::clang::ASTContext  &) const = &::clang::VarDecl::getDefinition;
    class ::clang::VarTemplateDecl  * (::clang::VarDecl::*method_pointer_f583eda9ea70593791eeeee33d22431b)() const = &::clang::VarDecl::getDescribedVarTemplate;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_c63ac78e67395b818c34458c31386663)() const = &::clang::VarDecl::getInstantiatedFromStaticDataMember;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_1a0f0a44eff1545199f6552864c2b3b3)() = &::clang::VarDecl::getOutOfLineDefinition;
    bool  (::clang::VarDecl::*method_pointer_78d66740888f5c008e8a11c81788face)() const = &::clang::VarDecl::hasExternalStorage;
    bool  (::clang::VarDecl::*method_pointer_85dddb94994f557d8553da57ed689078)() const = &::clang::VarDecl::hasGlobalStorage;
    bool  (::clang::VarDecl::*method_pointer_b06db30a40a95e2999c78a717cfa4b21)() const = &::clang::VarDecl::hasInit;
    bool  (::clang::VarDecl::*method_pointer_fd1215be99de552181c45f0c4608de32)() const = &::clang::VarDecl::hasLocalStorage;
    bool  (::clang::VarDecl::*method_pointer_17e3a1284c4e5ee68434421c650e219f)() const = &::clang::VarDecl::isARCPseudoStrong;
    bool  (::clang::VarDecl::*method_pointer_f642bab82a985f2299a22ddd0b6cd1d4)() const = &::clang::VarDecl::isCXXForRangeDecl;
    bool  (::clang::VarDecl::*method_pointer_5254eefe53b25c10bfa8ed80f237e6b4)() const = &::clang::VarDecl::isConcept;
    bool  (::clang::VarDecl::*method_pointer_776b12dced9252198a2db96c573393e8)() const = &::clang::VarDecl::isConstexpr;
    bool  (::clang::VarDecl::*method_pointer_937b23c7bb385f2caab5fbd00ff5adf5)() const = &::clang::VarDecl::isDirectInit;
    bool  (::clang::VarDecl::*method_pointer_d4e0abf6d0ca5c2a92145a373becbc88)() const = &::clang::VarDecl::isExceptionVariable;
    bool  (::clang::VarDecl::*method_pointer_1ab9b3962ead5d1a9ba173a5c9498d9d)() const = &::clang::VarDecl::isExternC;
    bool  (::clang::VarDecl::*method_pointer_5c2269ff8dde5dcdb2eff9a5d49c00da)() const = &::clang::VarDecl::isFileVarDecl;
    bool  (::clang::VarDecl::*method_pointer_f048a121ef7d5133acf55e539f047866)() const = &::clang::VarDecl::isFunctionOrMethodVarDecl;
    bool  (::clang::VarDecl::*method_pointer_23f6ede1d64c5196a8fb6c75e76655bf)() const = &::clang::VarDecl::isInExternCContext;
    bool  (::clang::VarDecl::*method_pointer_2b594e78e6d25610beb2b6665df503b7)() const = &::clang::VarDecl::isInExternCXXContext;
    bool  (::clang::VarDecl::*method_pointer_175a9e90c1ca5bb8b5f1694f169d05c7)() const = &::clang::VarDecl::isInitCapture;
    bool  (::clang::VarDecl::*method_pointer_abee2530af9a5026aac419d7a8d32065)() const = &::clang::VarDecl::isInitICE;
    bool  (::clang::VarDecl::*method_pointer_69b77774831956958a86a4fb6e773a82)() const = &::clang::VarDecl::isInitKnownICE;
    bool  (::clang::VarDecl::*method_pointer_534ac5499dbf55f5b65abc6afaf98868)() const = &::clang::VarDecl::isLocalVarDecl;
    bool  (::clang::VarDecl::*method_pointer_dcd5691b8b9e5a9a8c9daaedff86263d)() const = &::clang::VarDecl::isLocalVarDeclOrParm;
    bool  (::clang::VarDecl::*method_pointer_1a7144b259a652cab3befc6ce1579173)() const = &::clang::VarDecl::isNRVOVariable;
    bool  (::clang::VarDecl::*method_pointer_2e1f4a4829c453339afd29d91555801e)() const = &::clang::VarDecl::isOutOfLine;
    bool  (::clang::VarDecl::*method_pointer_5586a291561659e895ddf88871a3a379)() const = &::clang::VarDecl::isPreviousDeclInSameBlockScope;
    bool  (::clang::VarDecl::*method_pointer_e2d70d699e13553a98442eb3c1383ac2)() const = &::clang::VarDecl::isStaticDataMember;
    bool  (::clang::VarDecl::*method_pointer_9ffb3d3aef2657e491b1dd915059cc22)() const = &::clang::VarDecl::isStaticLocal;
    bool  (::clang::VarDecl::*method_pointer_d2ecd7ff560d5803abc98316e1d1c4cc)(class ::clang::ASTContext  &) const = &::clang::VarDecl::isUsableInConstantExpressions;
    void  (::clang::VarDecl::*method_pointer_039c840b880c5f18a5dc63a57981458c)(bool ) = &::clang::VarDecl::setARCPseudoStrong;
    void  (::clang::VarDecl::*method_pointer_d461d355d38552179c54a1d86f44d2f1)(bool ) = &::clang::VarDecl::setCXXForRangeDecl;
    void  (::clang::VarDecl::*method_pointer_c092fd6f09275aecb3baba3ce5a0d929)(bool ) = &::clang::VarDecl::setConcept;
    void  (::clang::VarDecl::*method_pointer_e95e67f2b535583192ff5b1c373b49ec)(bool ) = &::clang::VarDecl::setConstexpr;
    void  (::clang::VarDecl::*method_pointer_42089c85b1a95b82bde6d77038400b91)(class ::clang::VarTemplateDecl  *) = &::clang::VarDecl::setDescribedVarTemplate;
    void  (::clang::VarDecl::*method_pointer_ecb43fcfdcca517cbc57288e3d1c8556)(bool ) = &::clang::VarDecl::setExceptionVariable;
    void  (::clang::VarDecl::*method_pointer_c256e362de0752cda602728a9344aa10)(bool ) = &::clang::VarDecl::setInitCapture;
    void  (::clang::VarDecl::*method_pointer_7d6ad98187c55aeeaab3a17ccdc87f5c)(bool ) = &::clang::VarDecl::setNRVOVariable;
    void  (::clang::VarDecl::*method_pointer_4f86a0446b9255f9852c5ca0cde63fea)(bool ) = &::clang::VarDecl::setPreviousDeclInSameBlockScope;
    boost::python::class_< class ::clang::VarDecl, autowig::HeldType< class ::clang::VarDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_99d3396ee242572bbeaada83b5e83165("VarDecl", "", boost::python::no_init);
    class_99d3396ee242572bbeaada83b5e83165.def("create_deserialized", method_pointer_7f86393fc5af5d028572ee782b43297f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("check_init_is_ice", method_pointer_eb5617e08daa51be81734eb8634f6ad2, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof", method_pointer_cd4dec45d3e75a06819dd4caa63322a9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof_kind", method_pointer_2544541ca5065cf8948670449f1a4ede, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_08ad7fb5cb5c59c9bd386db0bcc6e672, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_b0c79490f69356e4aa083fdac077af78, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_8df64f534aa75316b71e3ef5f84b76b5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_ba0d46f8ed7a503a9027605c07b8d9af, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_2218481d38635ce4aef8e9e19bd9949d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_bcf1bb22264e54bc94ef703e274ae436, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_82124fb30d77589dae1f9d7bbd3a86a1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_0af6d3e9bfb558d5abca85cc2d401d77, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_described_var_template", method_pointer_f583eda9ea70593791eeeee33d22431b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_instantiated_from_static_data_member", method_pointer_c63ac78e67395b818c34458c31386663, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_out_of_line_definition", method_pointer_1a0f0a44eff1545199f6552864c2b3b3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_external_storage", method_pointer_78d66740888f5c008e8a11c81788face, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_global_storage", method_pointer_85dddb94994f557d8553da57ed689078, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_init", method_pointer_b06db30a40a95e2999c78a717cfa4b21, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_local_storage", method_pointer_fd1215be99de552181c45f0c4608de32, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_arc_pseudo_strong", method_pointer_17e3a1284c4e5ee68434421c650e219f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_cxx_for_range_decl", method_pointer_f642bab82a985f2299a22ddd0b6cd1d4, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_concept", method_pointer_5254eefe53b25c10bfa8ed80f237e6b4, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_constexpr", method_pointer_776b12dced9252198a2db96c573393e8, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_direct_init", method_pointer_937b23c7bb385f2caab5fbd00ff5adf5, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_exception_variable", method_pointer_d4e0abf6d0ca5c2a92145a373becbc88, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_extern_c", method_pointer_1ab9b3962ead5d1a9ba173a5c9498d9d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_file_var_decl", method_pointer_5c2269ff8dde5dcdb2eff9a5d49c00da, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_function_or_method_var_decl", method_pointer_f048a121ef7d5133acf55e539f047866, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_c_context", method_pointer_23f6ede1d64c5196a8fb6c75e76655bf, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_cxx_context", method_pointer_2b594e78e6d25610beb2b6665df503b7, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_capture", method_pointer_175a9e90c1ca5bb8b5f1694f169d05c7, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_ice", method_pointer_abee2530af9a5026aac419d7a8d32065, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_known_ice", method_pointer_69b77774831956958a86a4fb6e773a82, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl", method_pointer_534ac5499dbf55f5b65abc6afaf98868, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl_or_parm", method_pointer_dcd5691b8b9e5a9a8c9daaedff86263d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_nrvo_variable", method_pointer_1a7144b259a652cab3befc6ce1579173, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_out_of_line", method_pointer_2e1f4a4829c453339afd29d91555801e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_previous_decl_in_same_block_scope", method_pointer_5586a291561659e895ddf88871a3a379, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_data_member", method_pointer_e2d70d699e13553a98442eb3c1383ac2, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_local", method_pointer_9ffb3d3aef2657e491b1dd915059cc22, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_usable_in_constant_expressions", method_pointer_d2ecd7ff560d5803abc98316e1d1c4cc, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_arc_pseudo_strong", method_pointer_039c840b880c5f18a5dc63a57981458c, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_cxx_for_range_decl", method_pointer_d461d355d38552179c54a1d86f44d2f1, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_concept", method_pointer_c092fd6f09275aecb3baba3ce5a0d929, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_constexpr", method_pointer_e95e67f2b535583192ff5b1c373b49ec, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_described_var_template", method_pointer_42089c85b1a95b82bde6d77038400b91, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_exception_variable", method_pointer_ecb43fcfdcca517cbc57288e3d1c8556, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_init_capture", method_pointer_c256e362de0752cda602728a9344aa10, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_nrvo_variable", method_pointer_7d6ad98187c55aeeaab3a17ccdc87f5c, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_previous_decl_in_same_block_scope", method_pointer_4f86a0446b9255f9852c5ca0cde63fea, "");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof_kind");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("create_deserialized");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}