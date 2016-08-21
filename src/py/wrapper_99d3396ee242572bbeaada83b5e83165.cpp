#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_99d3396ee242572bbeaada83b5e83165()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::VarDecl  * (*method_pointer_4cb1fafb918a521b812e73d4d904c361)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarDecl::CreateDeserialized;
    bool  (::clang::VarDecl::*method_pointer_51e94a51e6055f92959e519193ce172f)() const = &::clang::VarDecl::checkInitIsICE;
    bool  (*method_pointer_9a99a0c581c559258c2818126854b8b6)(class ::clang::Decl  const *) = ::clang::VarDecl::classof;
    bool  (*method_pointer_080a624449d1589f9fafbdeab19147ca)(enum ::clang::Decl::Kind ) = ::clang::VarDecl::classofKind;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_77b2dc88c9045998804872c53fa85770)() const = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_a32b64cdec7a5377b156e5c5ce636e98)() = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_f06813a537cc5a4e8ddcd3927b89f5bf)() = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_ad701ce3f9b155cf86724c3c1144bec1)() const = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_d28a2a67080e54db8a8ff1048df6955f)() = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_acc979ad57bb5a6984161d4f2590404d)(class ::clang::ASTContext  &) const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_35b4cca4d7c35535ba37945f90f22f7e)(class ::clang::ASTContext  &) = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_da01522fc08651ae91929c517c470adb)() const = &::clang::VarDecl::getDefinition;
    class ::clang::VarTemplateDecl  * (::clang::VarDecl::*method_pointer_cb0acb87c9d753d1b1de2e2cf1a36de2)() const = &::clang::VarDecl::getDescribedVarTemplate;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_103e4bfeb8bd526cb499f76f21ea32e1)() const = &::clang::VarDecl::getInstantiatedFromStaticDataMember;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_fd551b00e4235061a4be204bbf4c06be)() = &::clang::VarDecl::getOutOfLineDefinition;
    bool  (::clang::VarDecl::*method_pointer_6046ed554a3b583d9556b3442b256ebf)() const = &::clang::VarDecl::hasExternalStorage;
    bool  (::clang::VarDecl::*method_pointer_6c5151f1e72e57dca36479f7c1c4d6ff)() const = &::clang::VarDecl::hasGlobalStorage;
    bool  (::clang::VarDecl::*method_pointer_1949eca503d359eb8ab6249e9cd206f6)() const = &::clang::VarDecl::hasInit;
    bool  (::clang::VarDecl::*method_pointer_6c02ba3eea3254569c842bef1136b103)() const = &::clang::VarDecl::hasLocalStorage;
    bool  (::clang::VarDecl::*method_pointer_415a6ec8895251c09edde1cef9546c8b)() const = &::clang::VarDecl::isARCPseudoStrong;
    bool  (::clang::VarDecl::*method_pointer_97f35580b96d5fcbb2179e100dbf5cfb)() const = &::clang::VarDecl::isCXXForRangeDecl;
    bool  (::clang::VarDecl::*method_pointer_3004e37f2c925bb5b1984b836c9c75f4)() const = &::clang::VarDecl::isConcept;
    bool  (::clang::VarDecl::*method_pointer_50b81b238d1754eeb9764df64a2601a4)() const = &::clang::VarDecl::isConstexpr;
    bool  (::clang::VarDecl::*method_pointer_d037c48537ed5548974e0f7c109bfa18)() const = &::clang::VarDecl::isDirectInit;
    bool  (::clang::VarDecl::*method_pointer_20a9bf7a748e527d9829df7786d5e17e)() const = &::clang::VarDecl::isExceptionVariable;
    bool  (::clang::VarDecl::*method_pointer_e8946fb9c8b255228e7259899a3beb1d)() const = &::clang::VarDecl::isExternC;
    bool  (::clang::VarDecl::*method_pointer_edc591b43c205ebebe503e9b8bc48ab4)() const = &::clang::VarDecl::isFileVarDecl;
    bool  (::clang::VarDecl::*method_pointer_25fcef4e7e685046bd12eb2dfc835932)() const = &::clang::VarDecl::isFunctionOrMethodVarDecl;
    bool  (::clang::VarDecl::*method_pointer_163c3a997fbd5eb1892f87ab45cb0dc5)() const = &::clang::VarDecl::isInExternCContext;
    bool  (::clang::VarDecl::*method_pointer_eee360639fd95f6bbee08b2edc9d21c5)() const = &::clang::VarDecl::isInExternCXXContext;
    bool  (::clang::VarDecl::*method_pointer_1c1cccbed4d25856a1e59053960ab960)() const = &::clang::VarDecl::isInitCapture;
    bool  (::clang::VarDecl::*method_pointer_cc5bf89240b15d758a71090f419c51c9)() const = &::clang::VarDecl::isInitICE;
    bool  (::clang::VarDecl::*method_pointer_075b65755489535cbcc12580525c317a)() const = &::clang::VarDecl::isInitKnownICE;
    bool  (::clang::VarDecl::*method_pointer_75610c8bc37d5f889743ddf1e398ad8d)() const = &::clang::VarDecl::isLocalVarDecl;
    bool  (::clang::VarDecl::*method_pointer_49ac50d9b0025775869f3ed8f1b068c4)() const = &::clang::VarDecl::isLocalVarDeclOrParm;
    bool  (::clang::VarDecl::*method_pointer_e28bf02363905961b22243524b3b71c9)() const = &::clang::VarDecl::isNRVOVariable;
    bool  (::clang::VarDecl::*method_pointer_4bb6bf132dca5dd9bf061689e2b973e3)() const = &::clang::VarDecl::isOutOfLine;
    bool  (::clang::VarDecl::*method_pointer_fb6728391e9755a194691c71fe3b76d6)() const = &::clang::VarDecl::isPreviousDeclInSameBlockScope;
    bool  (::clang::VarDecl::*method_pointer_f835779620545ebab0baf4213bd46ecf)() const = &::clang::VarDecl::isStaticDataMember;
    bool  (::clang::VarDecl::*method_pointer_abfb2be03e535a86911e27ca070a896a)() const = &::clang::VarDecl::isStaticLocal;
    bool  (::clang::VarDecl::*method_pointer_5690f9c4dc6a579cb2f7ac6ff237d238)(class ::clang::ASTContext  &) const = &::clang::VarDecl::isUsableInConstantExpressions;
    void  (::clang::VarDecl::*method_pointer_7aabdfcf7a0c57159b611e544be3aa9b)(bool ) = &::clang::VarDecl::setARCPseudoStrong;
    void  (::clang::VarDecl::*method_pointer_f8b64aa22a9e5a508c5ec2a1d0efa4ac)(bool ) = &::clang::VarDecl::setCXXForRangeDecl;
    void  (::clang::VarDecl::*method_pointer_7f8c7e7112055b46979fdad41b3e8ae3)(bool ) = &::clang::VarDecl::setConcept;
    void  (::clang::VarDecl::*method_pointer_bd54a16a75905c72ae405bf3baef1fa8)(bool ) = &::clang::VarDecl::setConstexpr;
    void  (::clang::VarDecl::*method_pointer_9bb423a88b3a540a9fa01152dff3fe71)(class ::clang::VarTemplateDecl  *) = &::clang::VarDecl::setDescribedVarTemplate;
    void  (::clang::VarDecl::*method_pointer_831efd1cbfd6524693771276863a28f2)(bool ) = &::clang::VarDecl::setExceptionVariable;
    void  (::clang::VarDecl::*method_pointer_a99402ef0f015d4eb721f7d01ac09bfb)(bool ) = &::clang::VarDecl::setInitCapture;
    void  (::clang::VarDecl::*method_pointer_45a4fd460b935fbfac388efc9ab7e885)(bool ) = &::clang::VarDecl::setNRVOVariable;
    void  (::clang::VarDecl::*method_pointer_5c6886e2107b5903b099835ad2218513)(bool ) = &::clang::VarDecl::setPreviousDeclInSameBlockScope;
    boost::python::class_< class ::clang::VarDecl, autowig::HeldType< class ::clang::VarDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_99d3396ee242572bbeaada83b5e83165("VarDecl", "", boost::python::no_init);
    class_99d3396ee242572bbeaada83b5e83165.def("create_deserialized", method_pointer_4cb1fafb918a521b812e73d4d904c361, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("check_init_is_ice", method_pointer_51e94a51e6055f92959e519193ce172f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof", method_pointer_9a99a0c581c559258c2818126854b8b6, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof_kind", method_pointer_080a624449d1589f9fafbdeab19147ca, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_77b2dc88c9045998804872c53fa85770, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_a32b64cdec7a5377b156e5c5ce636e98, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_f06813a537cc5a4e8ddcd3927b89f5bf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_ad701ce3f9b155cf86724c3c1144bec1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_d28a2a67080e54db8a8ff1048df6955f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_acc979ad57bb5a6984161d4f2590404d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_35b4cca4d7c35535ba37945f90f22f7e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_da01522fc08651ae91929c517c470adb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_described_var_template", method_pointer_cb0acb87c9d753d1b1de2e2cf1a36de2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_instantiated_from_static_data_member", method_pointer_103e4bfeb8bd526cb499f76f21ea32e1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_out_of_line_definition", method_pointer_fd551b00e4235061a4be204bbf4c06be, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_external_storage", method_pointer_6046ed554a3b583d9556b3442b256ebf, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_global_storage", method_pointer_6c5151f1e72e57dca36479f7c1c4d6ff, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_init", method_pointer_1949eca503d359eb8ab6249e9cd206f6, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_local_storage", method_pointer_6c02ba3eea3254569c842bef1136b103, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_arc_pseudo_strong", method_pointer_415a6ec8895251c09edde1cef9546c8b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_cxx_for_range_decl", method_pointer_97f35580b96d5fcbb2179e100dbf5cfb, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_concept", method_pointer_3004e37f2c925bb5b1984b836c9c75f4, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_constexpr", method_pointer_50b81b238d1754eeb9764df64a2601a4, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_direct_init", method_pointer_d037c48537ed5548974e0f7c109bfa18, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_exception_variable", method_pointer_20a9bf7a748e527d9829df7786d5e17e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_extern_c", method_pointer_e8946fb9c8b255228e7259899a3beb1d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_file_var_decl", method_pointer_edc591b43c205ebebe503e9b8bc48ab4, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_function_or_method_var_decl", method_pointer_25fcef4e7e685046bd12eb2dfc835932, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_c_context", method_pointer_163c3a997fbd5eb1892f87ab45cb0dc5, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_cxx_context", method_pointer_eee360639fd95f6bbee08b2edc9d21c5, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_capture", method_pointer_1c1cccbed4d25856a1e59053960ab960, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_ice", method_pointer_cc5bf89240b15d758a71090f419c51c9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_known_ice", method_pointer_075b65755489535cbcc12580525c317a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl", method_pointer_75610c8bc37d5f889743ddf1e398ad8d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl_or_parm", method_pointer_49ac50d9b0025775869f3ed8f1b068c4, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_nrvo_variable", method_pointer_e28bf02363905961b22243524b3b71c9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_out_of_line", method_pointer_4bb6bf132dca5dd9bf061689e2b973e3, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_previous_decl_in_same_block_scope", method_pointer_fb6728391e9755a194691c71fe3b76d6, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_data_member", method_pointer_f835779620545ebab0baf4213bd46ecf, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_local", method_pointer_abfb2be03e535a86911e27ca070a896a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_usable_in_constant_expressions", method_pointer_5690f9c4dc6a579cb2f7ac6ff237d238, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_arc_pseudo_strong", method_pointer_7aabdfcf7a0c57159b611e544be3aa9b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_cxx_for_range_decl", method_pointer_f8b64aa22a9e5a508c5ec2a1d0efa4ac, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_concept", method_pointer_7f8c7e7112055b46979fdad41b3e8ae3, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_constexpr", method_pointer_bd54a16a75905c72ae405bf3baef1fa8, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_described_var_template", method_pointer_9bb423a88b3a540a9fa01152dff3fe71, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_exception_variable", method_pointer_831efd1cbfd6524693771276863a28f2, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_init_capture", method_pointer_a99402ef0f015d4eb721f7d01ac09bfb, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_nrvo_variable", method_pointer_45a4fd460b935fbfac388efc9ab7e885, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_previous_decl_in_same_block_scope", method_pointer_5c6886e2107b5903b099835ad2218513, "");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof_kind");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("create_deserialized");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}