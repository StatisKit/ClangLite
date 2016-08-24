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
    class ::clang::VarDecl  * (*method_pointer_ffa5378a743e5af19bab049517e45340)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarDecl::CreateDeserialized;
    bool  (::clang::VarDecl::*method_pointer_3a445b47cb495b2399d17417fa9d9fdf)() const = &::clang::VarDecl::checkInitIsICE;
    bool  (*method_pointer_8d4a9372b07e567b8482fe29d61e409d)(class ::clang::Decl  const *) = ::clang::VarDecl::classof;
    bool  (*method_pointer_1e8b096d20995e9491c538398f975d43)(enum ::clang::Decl::Kind ) = ::clang::VarDecl::classofKind;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_b915716562465319811fb54a5129ed12)() const = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_0056854a486a5cd780dc6da19e62435e)() = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_d5d28e01a99355ff8e07904dcd2dfcdd)() = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_764eba4e04a45d4ea27f3f3e66107fb0)() const = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_42250f7fa88a57fd854d62283e9bbff6)(class ::clang::ASTContext  &) = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_05773bc400835e42bd24e1b3adcd5dc2)() const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_8978ba57e1475bbf91f4e9629dd7d166)(class ::clang::ASTContext  &) const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_0e274c63cedc5c47879d27549c393f84)() = &::clang::VarDecl::getDefinition;
    class ::clang::VarTemplateDecl  * (::clang::VarDecl::*method_pointer_234a4dcca3a15951bc5741a7a2af16e0)() const = &::clang::VarDecl::getDescribedVarTemplate;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_a6c7cec720a150f3a0f8922b500e9c4e)() const = &::clang::VarDecl::getInstantiatedFromStaticDataMember;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_555439c1eb045dd38a19824b1bb73e86)() = &::clang::VarDecl::getOutOfLineDefinition;
    class ::clang::SourceLocation  (::clang::VarDecl::*method_pointer_cf4665780ddd5d60af7de82915969d45)() const = &::clang::VarDecl::getPointOfInstantiation;
    bool  (::clang::VarDecl::*method_pointer_cfc9978ce60c55d99045115ee9156a22)() const = &::clang::VarDecl::hasExternalStorage;
    bool  (::clang::VarDecl::*method_pointer_940f936a7b415eedbb62af0c9eb29166)() const = &::clang::VarDecl::hasGlobalStorage;
    bool  (::clang::VarDecl::*method_pointer_898a20d71b7a55fb9a1cc992ef7758ae)() const = &::clang::VarDecl::hasInit;
    bool  (::clang::VarDecl::*method_pointer_b70a751c0764560f82e0ccd036cc533e)() const = &::clang::VarDecl::hasLocalStorage;
    bool  (::clang::VarDecl::*method_pointer_f8bcca3842f058d6bd19eb183e6dcb51)() const = &::clang::VarDecl::isARCPseudoStrong;
    bool  (::clang::VarDecl::*method_pointer_f86536cd07c55661a4c09a2f31f0add3)() const = &::clang::VarDecl::isCXXForRangeDecl;
    bool  (::clang::VarDecl::*method_pointer_074a501d2a7e57f9a9ec8fe8841a6233)() const = &::clang::VarDecl::isConcept;
    bool  (::clang::VarDecl::*method_pointer_6906e507820e5568890717bbdf168d0a)() const = &::clang::VarDecl::isConstexpr;
    bool  (::clang::VarDecl::*method_pointer_9979a13d9018530baf6a7f47de0dbc61)() const = &::clang::VarDecl::isDirectInit;
    bool  (::clang::VarDecl::*method_pointer_30c013ee5d365f1abe39f1c2091ee71c)() const = &::clang::VarDecl::isExceptionVariable;
    bool  (::clang::VarDecl::*method_pointer_874efc8e9f775baf86207dcfbbcb3274)() const = &::clang::VarDecl::isExternC;
    bool  (::clang::VarDecl::*method_pointer_2b108f3011f1568e9fcf56c9b005f289)() const = &::clang::VarDecl::isFileVarDecl;
    bool  (::clang::VarDecl::*method_pointer_b43199ca2d755da7b12a75b0259f1148)() const = &::clang::VarDecl::isFunctionOrMethodVarDecl;
    bool  (::clang::VarDecl::*method_pointer_dd7c82a4aed25dc38ad647c7555b9d4d)() const = &::clang::VarDecl::isInExternCContext;
    bool  (::clang::VarDecl::*method_pointer_70c94c815f8f5a4487b8fd54cd09ecff)() const = &::clang::VarDecl::isInExternCXXContext;
    bool  (::clang::VarDecl::*method_pointer_391266ec24e25db78ab3a80cd1873b79)() const = &::clang::VarDecl::isInitCapture;
    bool  (::clang::VarDecl::*method_pointer_8f4e3bc5903158769ea264e8714407bf)() const = &::clang::VarDecl::isInitICE;
    bool  (::clang::VarDecl::*method_pointer_1f30eb209daa5caea4d31fb1b4125578)() const = &::clang::VarDecl::isInitKnownICE;
    bool  (::clang::VarDecl::*method_pointer_8e1b98d0befe5b69b403433ad0e7b8d2)() const = &::clang::VarDecl::isLocalVarDecl;
    bool  (::clang::VarDecl::*method_pointer_37e1773e6f1a5c16bd48d72c4d4c0e66)() const = &::clang::VarDecl::isLocalVarDeclOrParm;
    bool  (::clang::VarDecl::*method_pointer_9b51460f7ac0526e92a9ce6f916aca1e)() const = &::clang::VarDecl::isNRVOVariable;
    bool  (::clang::VarDecl::*method_pointer_cfc4a11abff055859bf6e2b0326934fe)() const = &::clang::VarDecl::isOutOfLine;
    bool  (::clang::VarDecl::*method_pointer_e73f28e92d055e3d91c9c486f5d9dd35)() const = &::clang::VarDecl::isPreviousDeclInSameBlockScope;
    bool  (::clang::VarDecl::*method_pointer_1928edbdd503567ead4e484071a42567)() const = &::clang::VarDecl::isStaticDataMember;
    bool  (::clang::VarDecl::*method_pointer_1190fa332b4d584fa22f4f329333208d)() const = &::clang::VarDecl::isStaticLocal;
    bool  (::clang::VarDecl::*method_pointer_c411166f67225d4ea431687c04785d3e)(class ::clang::ASTContext  &) const = &::clang::VarDecl::isUsableInConstantExpressions;
    void  (::clang::VarDecl::*method_pointer_c6d218efaeb254bd8254581b5ca76707)(bool ) = &::clang::VarDecl::setARCPseudoStrong;
    void  (::clang::VarDecl::*method_pointer_70904715da545f6d994a6e2acd711b15)(bool ) = &::clang::VarDecl::setCXXForRangeDecl;
    void  (::clang::VarDecl::*method_pointer_e35c09ca7d095f76a23008f118a9a484)(bool ) = &::clang::VarDecl::setConcept;
    void  (::clang::VarDecl::*method_pointer_97d148def6d2590daaf95c1602089029)(bool ) = &::clang::VarDecl::setConstexpr;
    void  (::clang::VarDecl::*method_pointer_9525a4072a7a5b12bdf95de4e1a0a4d0)(class ::clang::VarTemplateDecl  *) = &::clang::VarDecl::setDescribedVarTemplate;
    void  (::clang::VarDecl::*method_pointer_a5b23fb4b30551b08d55a667992c8d58)(bool ) = &::clang::VarDecl::setExceptionVariable;
    void  (::clang::VarDecl::*method_pointer_81e048cfcc2f57d2bd0f26ad586a91ed)(bool ) = &::clang::VarDecl::setInitCapture;
    void  (::clang::VarDecl::*method_pointer_5f2a6314967e571ebd0a678c02f51b50)(bool ) = &::clang::VarDecl::setNRVOVariable;
    void  (::clang::VarDecl::*method_pointer_4af89d550fc858df9ae2acd28916ac81)(bool ) = &::clang::VarDecl::setPreviousDeclInSameBlockScope;
    boost::python::class_< class ::clang::VarDecl, autowig::HeldType< class ::clang::VarDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_99d3396ee242572bbeaada83b5e83165("VarDecl", "", boost::python::no_init);
    class_99d3396ee242572bbeaada83b5e83165.def("create_deserialized", method_pointer_ffa5378a743e5af19bab049517e45340, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("check_init_is_ice", method_pointer_3a445b47cb495b2399d17417fa9d9fdf, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof", method_pointer_8d4a9372b07e567b8482fe29d61e409d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof_kind", method_pointer_1e8b096d20995e9491c538398f975d43, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_b915716562465319811fb54a5129ed12, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_0056854a486a5cd780dc6da19e62435e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_d5d28e01a99355ff8e07904dcd2dfcdd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_764eba4e04a45d4ea27f3f3e66107fb0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_42250f7fa88a57fd854d62283e9bbff6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_05773bc400835e42bd24e1b3adcd5dc2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_8978ba57e1475bbf91f4e9629dd7d166, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_0e274c63cedc5c47879d27549c393f84, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_described_var_template", method_pointer_234a4dcca3a15951bc5741a7a2af16e0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_instantiated_from_static_data_member", method_pointer_a6c7cec720a150f3a0f8922b500e9c4e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_out_of_line_definition", method_pointer_555439c1eb045dd38a19824b1bb73e86, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_point_of_instantiation", method_pointer_cf4665780ddd5d60af7de82915969d45, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_external_storage", method_pointer_cfc9978ce60c55d99045115ee9156a22, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_global_storage", method_pointer_940f936a7b415eedbb62af0c9eb29166, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_init", method_pointer_898a20d71b7a55fb9a1cc992ef7758ae, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_local_storage", method_pointer_b70a751c0764560f82e0ccd036cc533e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_arc_pseudo_strong", method_pointer_f8bcca3842f058d6bd19eb183e6dcb51, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_cxx_for_range_decl", method_pointer_f86536cd07c55661a4c09a2f31f0add3, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_concept", method_pointer_074a501d2a7e57f9a9ec8fe8841a6233, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_constexpr", method_pointer_6906e507820e5568890717bbdf168d0a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_direct_init", method_pointer_9979a13d9018530baf6a7f47de0dbc61, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_exception_variable", method_pointer_30c013ee5d365f1abe39f1c2091ee71c, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_extern_c", method_pointer_874efc8e9f775baf86207dcfbbcb3274, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_file_var_decl", method_pointer_2b108f3011f1568e9fcf56c9b005f289, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_function_or_method_var_decl", method_pointer_b43199ca2d755da7b12a75b0259f1148, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_c_context", method_pointer_dd7c82a4aed25dc38ad647c7555b9d4d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_cxx_context", method_pointer_70c94c815f8f5a4487b8fd54cd09ecff, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_capture", method_pointer_391266ec24e25db78ab3a80cd1873b79, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_ice", method_pointer_8f4e3bc5903158769ea264e8714407bf, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_known_ice", method_pointer_1f30eb209daa5caea4d31fb1b4125578, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl", method_pointer_8e1b98d0befe5b69b403433ad0e7b8d2, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl_or_parm", method_pointer_37e1773e6f1a5c16bd48d72c4d4c0e66, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_nrvo_variable", method_pointer_9b51460f7ac0526e92a9ce6f916aca1e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_out_of_line", method_pointer_cfc4a11abff055859bf6e2b0326934fe, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_previous_decl_in_same_block_scope", method_pointer_e73f28e92d055e3d91c9c486f5d9dd35, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_data_member", method_pointer_1928edbdd503567ead4e484071a42567, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_local", method_pointer_1190fa332b4d584fa22f4f329333208d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_usable_in_constant_expressions", method_pointer_c411166f67225d4ea431687c04785d3e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_arc_pseudo_strong", method_pointer_c6d218efaeb254bd8254581b5ca76707, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_cxx_for_range_decl", method_pointer_70904715da545f6d994a6e2acd711b15, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_concept", method_pointer_e35c09ca7d095f76a23008f118a9a484, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_constexpr", method_pointer_97d148def6d2590daaf95c1602089029, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_described_var_template", method_pointer_9525a4072a7a5b12bdf95de4e1a0a4d0, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_exception_variable", method_pointer_a5b23fb4b30551b08d55a667992c8d58, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_init_capture", method_pointer_81e048cfcc2f57d2bd0f26ad586a91ed, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_nrvo_variable", method_pointer_5f2a6314967e571ebd0a678c02f51b50, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_previous_decl_in_same_block_scope", method_pointer_4af89d550fc858df9ae2acd28916ac81, "");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof_kind");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("create_deserialized");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}