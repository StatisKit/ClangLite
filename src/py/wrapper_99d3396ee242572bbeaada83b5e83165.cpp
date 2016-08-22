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
    class ::clang::VarDecl  * (*method_pointer_8c7b79b5b3a8508291e11deb7787f15d)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarDecl::CreateDeserialized;
    bool  (::clang::VarDecl::*method_pointer_36876018184b5232b0a9b17910bdea1c)() const = &::clang::VarDecl::checkInitIsICE;
    bool  (*method_pointer_051d2f6f7a88501fbb98571f033b5e4b)(class ::clang::Decl  const *) = ::clang::VarDecl::classof;
    bool  (*method_pointer_cf5f595eb3a05ccf89e4164899e2b0d0)(enum ::clang::Decl::Kind ) = ::clang::VarDecl::classofKind;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_f7dfcaadd8d25acd9f8c6d2ec0bae909)() = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_056d1bba9ac75b5b8135be5141fc3627)() const = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_aa43082d956c5a08916d37abe9b8ec64)() const = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_84052bfc171d57cca2184d3813bb7106)() = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_696ef389e7995e5aaabc99a68b115dc8)() = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_721d60118a6c59ad89fb1afda161de5b)(class ::clang::ASTContext  &) const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_5d12eba167d85fcd92949fad1545daa9)() const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_b097f0a2575e5290ab5a208480f872a6)(class ::clang::ASTContext  &) = &::clang::VarDecl::getDefinition;
    class ::clang::VarTemplateDecl  * (::clang::VarDecl::*method_pointer_a1564d82d1a35fa28004e6bde357561d)() const = &::clang::VarDecl::getDescribedVarTemplate;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_9014cab16dfd53b1ba9c0310e7fee392)() const = &::clang::VarDecl::getInstantiatedFromStaticDataMember;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_8a945f18c5ba5e3795d6ddfadf5da5d4)() = &::clang::VarDecl::getOutOfLineDefinition;
    bool  (::clang::VarDecl::*method_pointer_486d3857b75b59bea30a169f34f6ef9a)() const = &::clang::VarDecl::hasExternalStorage;
    bool  (::clang::VarDecl::*method_pointer_5b36bdd350d7527f8532114d8cd42324)() const = &::clang::VarDecl::hasGlobalStorage;
    bool  (::clang::VarDecl::*method_pointer_2417afd20b7e5af8a7606b7da351502c)() const = &::clang::VarDecl::hasInit;
    bool  (::clang::VarDecl::*method_pointer_08534a734d7d5c5c9cc7b693e35fc2c2)() const = &::clang::VarDecl::hasLocalStorage;
    bool  (::clang::VarDecl::*method_pointer_bc7767f736ef5399818b9367a9a57e80)() const = &::clang::VarDecl::isARCPseudoStrong;
    bool  (::clang::VarDecl::*method_pointer_14a6985b5b6f55699ab8c640f08fb1ec)() const = &::clang::VarDecl::isCXXForRangeDecl;
    bool  (::clang::VarDecl::*method_pointer_4ff3c1f86a19590f9c18dbe6465e72a9)() const = &::clang::VarDecl::isConcept;
    bool  (::clang::VarDecl::*method_pointer_33470097e5bc55439e94511753c367c0)() const = &::clang::VarDecl::isConstexpr;
    bool  (::clang::VarDecl::*method_pointer_c887494b88785417832c51b89c3f3369)() const = &::clang::VarDecl::isDirectInit;
    bool  (::clang::VarDecl::*method_pointer_026c54fcca4c52f8abddc3b1a1efcac3)() const = &::clang::VarDecl::isExceptionVariable;
    bool  (::clang::VarDecl::*method_pointer_0257efe9d23d53e981de80082b2bd252)() const = &::clang::VarDecl::isExternC;
    bool  (::clang::VarDecl::*method_pointer_494e8a7a781b5d6289be471c9d7364b5)() const = &::clang::VarDecl::isFileVarDecl;
    bool  (::clang::VarDecl::*method_pointer_285455d9394b5fb08a44592edae48f61)() const = &::clang::VarDecl::isFunctionOrMethodVarDecl;
    bool  (::clang::VarDecl::*method_pointer_06e8c5769a375b2fbce40e1791b3c45e)() const = &::clang::VarDecl::isInExternCContext;
    bool  (::clang::VarDecl::*method_pointer_084069ed16bf59aa964e61b75be44cc9)() const = &::clang::VarDecl::isInExternCXXContext;
    bool  (::clang::VarDecl::*method_pointer_4f9bfeb4e3f75ed4aec0b0b5f65a90e2)() const = &::clang::VarDecl::isInitCapture;
    bool  (::clang::VarDecl::*method_pointer_12ca5d6dbd4f52029a0f2f16085d03bf)() const = &::clang::VarDecl::isInitICE;
    bool  (::clang::VarDecl::*method_pointer_bb52a82f2d43558e9123e0b1dbc9885e)() const = &::clang::VarDecl::isInitKnownICE;
    bool  (::clang::VarDecl::*method_pointer_26d38e9d95545260902c5052563cb802)() const = &::clang::VarDecl::isLocalVarDecl;
    bool  (::clang::VarDecl::*method_pointer_4d4fccad42d153c5a7e767b524dcc78d)() const = &::clang::VarDecl::isLocalVarDeclOrParm;
    bool  (::clang::VarDecl::*method_pointer_2e0304e34555596db6ed1847e6b8f9ef)() const = &::clang::VarDecl::isNRVOVariable;
    bool  (::clang::VarDecl::*method_pointer_ccf4300075265fd1a3cfb975ea1090c9)() const = &::clang::VarDecl::isOutOfLine;
    bool  (::clang::VarDecl::*method_pointer_4b95f70d24b551e798298b6235a63231)() const = &::clang::VarDecl::isPreviousDeclInSameBlockScope;
    bool  (::clang::VarDecl::*method_pointer_184e34980b9d522d83cb49f27ce24917)() const = &::clang::VarDecl::isStaticDataMember;
    bool  (::clang::VarDecl::*method_pointer_9582221465ee5f6da27573637dc3ffc1)() const = &::clang::VarDecl::isStaticLocal;
    bool  (::clang::VarDecl::*method_pointer_920847be810c5f1391e8df709f76f397)(class ::clang::ASTContext  &) const = &::clang::VarDecl::isUsableInConstantExpressions;
    void  (::clang::VarDecl::*method_pointer_b2b7a4288275593e8fb60809e177955b)(bool ) = &::clang::VarDecl::setARCPseudoStrong;
    void  (::clang::VarDecl::*method_pointer_42291ae2ad9650a38558da877eb137ce)(bool ) = &::clang::VarDecl::setCXXForRangeDecl;
    void  (::clang::VarDecl::*method_pointer_9d6ef649f6055601be7ff337672ab813)(bool ) = &::clang::VarDecl::setConcept;
    void  (::clang::VarDecl::*method_pointer_96a239cbc9f652bc89ba921123fe6278)(bool ) = &::clang::VarDecl::setConstexpr;
    void  (::clang::VarDecl::*method_pointer_1973c30379fe53d68a9a99e4d4fad7de)(class ::clang::VarTemplateDecl  *) = &::clang::VarDecl::setDescribedVarTemplate;
    void  (::clang::VarDecl::*method_pointer_048a1bb8fb8e50a4ba81080e1dcabe1f)(bool ) = &::clang::VarDecl::setExceptionVariable;
    void  (::clang::VarDecl::*method_pointer_934e55fefa8855a0a566c6fe3cde4f64)(bool ) = &::clang::VarDecl::setInitCapture;
    void  (::clang::VarDecl::*method_pointer_7e1a755de7a950c2881518621c041adc)(bool ) = &::clang::VarDecl::setNRVOVariable;
    void  (::clang::VarDecl::*method_pointer_27d23d3b66f3582e80ce404253b4b424)(bool ) = &::clang::VarDecl::setPreviousDeclInSameBlockScope;
    boost::python::class_< class ::clang::VarDecl, autowig::HeldType< class ::clang::VarDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_99d3396ee242572bbeaada83b5e83165("VarDecl", "", boost::python::no_init);
    class_99d3396ee242572bbeaada83b5e83165.def("create_deserialized", method_pointer_8c7b79b5b3a8508291e11deb7787f15d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("check_init_is_ice", method_pointer_36876018184b5232b0a9b17910bdea1c, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof", method_pointer_051d2f6f7a88501fbb98571f033b5e4b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof_kind", method_pointer_cf5f595eb3a05ccf89e4164899e2b0d0, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_f7dfcaadd8d25acd9f8c6d2ec0bae909, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_056d1bba9ac75b5b8135be5141fc3627, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_aa43082d956c5a08916d37abe9b8ec64, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_84052bfc171d57cca2184d3813bb7106, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_696ef389e7995e5aaabc99a68b115dc8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_721d60118a6c59ad89fb1afda161de5b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_5d12eba167d85fcd92949fad1545daa9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_b097f0a2575e5290ab5a208480f872a6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_described_var_template", method_pointer_a1564d82d1a35fa28004e6bde357561d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_instantiated_from_static_data_member", method_pointer_9014cab16dfd53b1ba9c0310e7fee392, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_out_of_line_definition", method_pointer_8a945f18c5ba5e3795d6ddfadf5da5d4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_external_storage", method_pointer_486d3857b75b59bea30a169f34f6ef9a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_global_storage", method_pointer_5b36bdd350d7527f8532114d8cd42324, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_init", method_pointer_2417afd20b7e5af8a7606b7da351502c, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_local_storage", method_pointer_08534a734d7d5c5c9cc7b693e35fc2c2, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_arc_pseudo_strong", method_pointer_bc7767f736ef5399818b9367a9a57e80, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_cxx_for_range_decl", method_pointer_14a6985b5b6f55699ab8c640f08fb1ec, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_concept", method_pointer_4ff3c1f86a19590f9c18dbe6465e72a9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_constexpr", method_pointer_33470097e5bc55439e94511753c367c0, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_direct_init", method_pointer_c887494b88785417832c51b89c3f3369, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_exception_variable", method_pointer_026c54fcca4c52f8abddc3b1a1efcac3, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_extern_c", method_pointer_0257efe9d23d53e981de80082b2bd252, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_file_var_decl", method_pointer_494e8a7a781b5d6289be471c9d7364b5, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_function_or_method_var_decl", method_pointer_285455d9394b5fb08a44592edae48f61, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_c_context", method_pointer_06e8c5769a375b2fbce40e1791b3c45e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_cxx_context", method_pointer_084069ed16bf59aa964e61b75be44cc9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_capture", method_pointer_4f9bfeb4e3f75ed4aec0b0b5f65a90e2, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_ice", method_pointer_12ca5d6dbd4f52029a0f2f16085d03bf, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_known_ice", method_pointer_bb52a82f2d43558e9123e0b1dbc9885e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl", method_pointer_26d38e9d95545260902c5052563cb802, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl_or_parm", method_pointer_4d4fccad42d153c5a7e767b524dcc78d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_nrvo_variable", method_pointer_2e0304e34555596db6ed1847e6b8f9ef, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_out_of_line", method_pointer_ccf4300075265fd1a3cfb975ea1090c9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_previous_decl_in_same_block_scope", method_pointer_4b95f70d24b551e798298b6235a63231, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_data_member", method_pointer_184e34980b9d522d83cb49f27ce24917, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_local", method_pointer_9582221465ee5f6da27573637dc3ffc1, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_usable_in_constant_expressions", method_pointer_920847be810c5f1391e8df709f76f397, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_arc_pseudo_strong", method_pointer_b2b7a4288275593e8fb60809e177955b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_cxx_for_range_decl", method_pointer_42291ae2ad9650a38558da877eb137ce, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_concept", method_pointer_9d6ef649f6055601be7ff337672ab813, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_constexpr", method_pointer_96a239cbc9f652bc89ba921123fe6278, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_described_var_template", method_pointer_1973c30379fe53d68a9a99e4d4fad7de, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_exception_variable", method_pointer_048a1bb8fb8e50a4ba81080e1dcabe1f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_init_capture", method_pointer_934e55fefa8855a0a566c6fe3cde4f64, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_nrvo_variable", method_pointer_7e1a755de7a950c2881518621c041adc, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_previous_decl_in_same_block_scope", method_pointer_27d23d3b66f3582e80ce404253b4b424, "");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof_kind");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("create_deserialized");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}