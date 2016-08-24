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
    class ::clang::VarDecl  * (*method_pointer_ff52762a4e1755318c35050f4f158791)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarDecl::CreateDeserialized;
    bool  (::clang::VarDecl::*method_pointer_56a3626361d75f4bba56abffafaa4bb7)() const = &::clang::VarDecl::checkInitIsICE;
    bool  (*method_pointer_639c98bb05745bd7bd9fe4925dc3fc83)(class ::clang::Decl  const *) = ::clang::VarDecl::classof;
    bool  (*method_pointer_f9179422578b586a84fa66b1bbe545de)(enum ::clang::Decl::Kind ) = ::clang::VarDecl::classofKind;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_c94035137d7751b094ba0a3bba76050f)() const = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_98e410d7fcfd5bf5afab44681d1c119b)() = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_adc12062402e5c759639252f8276f92d)() const = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_83d9af3228f752ae84f8c56bef37abb1)() = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_47f2aad964165758964362cfb081c122)() = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_2ae157636ecc5e8ea9716be8bd1e34c5)(class ::clang::ASTContext  &) = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_07c8abe25ce35690ac6c0a41858e1f4d)() const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_eeeae6b75a505e7ea854199282dbca91)(class ::clang::ASTContext  &) const = &::clang::VarDecl::getDefinition;
    class ::clang::VarTemplateDecl  * (::clang::VarDecl::*method_pointer_2fdf717ce3a65939aad62d55109ebe40)() const = &::clang::VarDecl::getDescribedVarTemplate;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_8dc2bfc484975209bd6170cc0f1be049)() const = &::clang::VarDecl::getInstantiatedFromStaticDataMember;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_117080f3229c58a88f37e940239ac8b1)() = &::clang::VarDecl::getOutOfLineDefinition;
    class ::clang::SourceLocation  (::clang::VarDecl::*method_pointer_cd90fff6aa175f6fb4f98443de0b0c5b)() const = &::clang::VarDecl::getPointOfInstantiation;
    bool  (::clang::VarDecl::*method_pointer_5a3055f168c75ecdb8c942f49d407dd0)() const = &::clang::VarDecl::hasExternalStorage;
    bool  (::clang::VarDecl::*method_pointer_d592c73697e45d1990610f34fac5035b)() const = &::clang::VarDecl::hasGlobalStorage;
    bool  (::clang::VarDecl::*method_pointer_089b85f2dc5f5f60a4ecbc4f37abcb20)() const = &::clang::VarDecl::hasInit;
    bool  (::clang::VarDecl::*method_pointer_5a3e2248e63d5179a798af82c8b9d450)() const = &::clang::VarDecl::hasLocalStorage;
    bool  (::clang::VarDecl::*method_pointer_ce7096696ce35ed5b2b088eb200ae38a)() const = &::clang::VarDecl::isARCPseudoStrong;
    bool  (::clang::VarDecl::*method_pointer_80ae3b4a3c0752738b3e4157ed023f40)() const = &::clang::VarDecl::isCXXForRangeDecl;
    bool  (::clang::VarDecl::*method_pointer_54663f1e51e35f239ad045cf2dc30cdd)() const = &::clang::VarDecl::isConcept;
    bool  (::clang::VarDecl::*method_pointer_387f2c1e068956caa9e706f5d364c0d3)() const = &::clang::VarDecl::isConstexpr;
    bool  (::clang::VarDecl::*method_pointer_786152283f205db2802e7737f176c49d)() const = &::clang::VarDecl::isDirectInit;
    bool  (::clang::VarDecl::*method_pointer_152443f0aeab556f82d670d8ffc4ea34)() const = &::clang::VarDecl::isExceptionVariable;
    bool  (::clang::VarDecl::*method_pointer_aa6a965f0c5459e58931bbd0c8958864)() const = &::clang::VarDecl::isExternC;
    bool  (::clang::VarDecl::*method_pointer_dbf68f9f31335e66aab7ad9a73446114)() const = &::clang::VarDecl::isFileVarDecl;
    bool  (::clang::VarDecl::*method_pointer_27cfc2c0118b5a518449b33f5a290b45)() const = &::clang::VarDecl::isFunctionOrMethodVarDecl;
    bool  (::clang::VarDecl::*method_pointer_2e0e0c35063d5182bb2199beb0d37e7b)() const = &::clang::VarDecl::isInExternCContext;
    bool  (::clang::VarDecl::*method_pointer_c9776e6b988d5d02a2b832ac1853a4b5)() const = &::clang::VarDecl::isInExternCXXContext;
    bool  (::clang::VarDecl::*method_pointer_aa9cc38a26225cc79d3ed6404c7643f8)() const = &::clang::VarDecl::isInitCapture;
    bool  (::clang::VarDecl::*method_pointer_861f5af9eef354548ed30b8ebd33f99a)() const = &::clang::VarDecl::isInitICE;
    bool  (::clang::VarDecl::*method_pointer_0610a41c4a4d56ff9f945a16e9ab886b)() const = &::clang::VarDecl::isInitKnownICE;
    bool  (::clang::VarDecl::*method_pointer_7f7078bfe9085d7b97cb5ececbdce1e7)() const = &::clang::VarDecl::isLocalVarDecl;
    bool  (::clang::VarDecl::*method_pointer_70de089bec55560b9af5c8b3c6017c0f)() const = &::clang::VarDecl::isLocalVarDeclOrParm;
    bool  (::clang::VarDecl::*method_pointer_2dcf44952cf159508b874ec4a6c4b4ba)() const = &::clang::VarDecl::isNRVOVariable;
    bool  (::clang::VarDecl::*method_pointer_40b3b6faa01c5b78a9315e4c67c797ef)() const = &::clang::VarDecl::isOutOfLine;
    bool  (::clang::VarDecl::*method_pointer_3990e9de92e2596db2eaa8132a8ccdba)() const = &::clang::VarDecl::isPreviousDeclInSameBlockScope;
    bool  (::clang::VarDecl::*method_pointer_7b76412401ae528aaccb423dd8646cda)() const = &::clang::VarDecl::isStaticDataMember;
    bool  (::clang::VarDecl::*method_pointer_6d5fff32345a57d6b284354d2967430a)() const = &::clang::VarDecl::isStaticLocal;
    bool  (::clang::VarDecl::*method_pointer_c55784678dbf5044bf05a6ba8ca28949)(class ::clang::ASTContext  &) const = &::clang::VarDecl::isUsableInConstantExpressions;
    void  (::clang::VarDecl::*method_pointer_3194c510a670504493a1ca00318b34bd)(bool ) = &::clang::VarDecl::setARCPseudoStrong;
    void  (::clang::VarDecl::*method_pointer_15854f0d56ba5843b9a1091e217a138b)(bool ) = &::clang::VarDecl::setCXXForRangeDecl;
    void  (::clang::VarDecl::*method_pointer_5c0eff576e065b77b93f9e0f4ea85966)(bool ) = &::clang::VarDecl::setConcept;
    void  (::clang::VarDecl::*method_pointer_33c255fb87f659b386e5547961425d7b)(bool ) = &::clang::VarDecl::setConstexpr;
    void  (::clang::VarDecl::*method_pointer_88000b61b8ce517aa7cc3925e3d758f7)(class ::clang::VarTemplateDecl  *) = &::clang::VarDecl::setDescribedVarTemplate;
    void  (::clang::VarDecl::*method_pointer_0e63087cfdf251b8a5e5afecc1c91e3b)(bool ) = &::clang::VarDecl::setExceptionVariable;
    void  (::clang::VarDecl::*method_pointer_8069fa965ed955da84d919f8cf167e3a)(bool ) = &::clang::VarDecl::setInitCapture;
    void  (::clang::VarDecl::*method_pointer_77fe79a2d6ae541aa0a0b6ac5fa48efd)(bool ) = &::clang::VarDecl::setNRVOVariable;
    void  (::clang::VarDecl::*method_pointer_5cea5584917e5abb901cccc65a0c1a8a)(bool ) = &::clang::VarDecl::setPreviousDeclInSameBlockScope;
    boost::python::class_< class ::clang::VarDecl, autowig::HeldType< class ::clang::VarDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_99d3396ee242572bbeaada83b5e83165("VarDecl", "", boost::python::no_init);
    class_99d3396ee242572bbeaada83b5e83165.def("create_deserialized", method_pointer_ff52762a4e1755318c35050f4f158791, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("check_init_is_ice", method_pointer_56a3626361d75f4bba56abffafaa4bb7, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof", method_pointer_639c98bb05745bd7bd9fe4925dc3fc83, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof_kind", method_pointer_f9179422578b586a84fa66b1bbe545de, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_c94035137d7751b094ba0a3bba76050f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_98e410d7fcfd5bf5afab44681d1c119b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_adc12062402e5c759639252f8276f92d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_83d9af3228f752ae84f8c56bef37abb1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_47f2aad964165758964362cfb081c122, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_2ae157636ecc5e8ea9716be8bd1e34c5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_07c8abe25ce35690ac6c0a41858e1f4d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_eeeae6b75a505e7ea854199282dbca91, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_described_var_template", method_pointer_2fdf717ce3a65939aad62d55109ebe40, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_instantiated_from_static_data_member", method_pointer_8dc2bfc484975209bd6170cc0f1be049, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_out_of_line_definition", method_pointer_117080f3229c58a88f37e940239ac8b1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_point_of_instantiation", method_pointer_cd90fff6aa175f6fb4f98443de0b0c5b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_external_storage", method_pointer_5a3055f168c75ecdb8c942f49d407dd0, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_global_storage", method_pointer_d592c73697e45d1990610f34fac5035b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_init", method_pointer_089b85f2dc5f5f60a4ecbc4f37abcb20, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_local_storage", method_pointer_5a3e2248e63d5179a798af82c8b9d450, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_arc_pseudo_strong", method_pointer_ce7096696ce35ed5b2b088eb200ae38a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_cxx_for_range_decl", method_pointer_80ae3b4a3c0752738b3e4157ed023f40, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_concept", method_pointer_54663f1e51e35f239ad045cf2dc30cdd, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_constexpr", method_pointer_387f2c1e068956caa9e706f5d364c0d3, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_direct_init", method_pointer_786152283f205db2802e7737f176c49d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_exception_variable", method_pointer_152443f0aeab556f82d670d8ffc4ea34, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_extern_c", method_pointer_aa6a965f0c5459e58931bbd0c8958864, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_file_var_decl", method_pointer_dbf68f9f31335e66aab7ad9a73446114, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_function_or_method_var_decl", method_pointer_27cfc2c0118b5a518449b33f5a290b45, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_c_context", method_pointer_2e0e0c35063d5182bb2199beb0d37e7b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_cxx_context", method_pointer_c9776e6b988d5d02a2b832ac1853a4b5, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_capture", method_pointer_aa9cc38a26225cc79d3ed6404c7643f8, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_ice", method_pointer_861f5af9eef354548ed30b8ebd33f99a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_known_ice", method_pointer_0610a41c4a4d56ff9f945a16e9ab886b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl", method_pointer_7f7078bfe9085d7b97cb5ececbdce1e7, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl_or_parm", method_pointer_70de089bec55560b9af5c8b3c6017c0f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_nrvo_variable", method_pointer_2dcf44952cf159508b874ec4a6c4b4ba, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_out_of_line", method_pointer_40b3b6faa01c5b78a9315e4c67c797ef, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_previous_decl_in_same_block_scope", method_pointer_3990e9de92e2596db2eaa8132a8ccdba, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_data_member", method_pointer_7b76412401ae528aaccb423dd8646cda, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_local", method_pointer_6d5fff32345a57d6b284354d2967430a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_usable_in_constant_expressions", method_pointer_c55784678dbf5044bf05a6ba8ca28949, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_arc_pseudo_strong", method_pointer_3194c510a670504493a1ca00318b34bd, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_cxx_for_range_decl", method_pointer_15854f0d56ba5843b9a1091e217a138b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_concept", method_pointer_5c0eff576e065b77b93f9e0f4ea85966, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_constexpr", method_pointer_33c255fb87f659b386e5547961425d7b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_described_var_template", method_pointer_88000b61b8ce517aa7cc3925e3d758f7, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_exception_variable", method_pointer_0e63087cfdf251b8a5e5afecc1c91e3b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_init_capture", method_pointer_8069fa965ed955da84d919f8cf167e3a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_nrvo_variable", method_pointer_77fe79a2d6ae541aa0a0b6ac5fa48efd, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_previous_decl_in_same_block_scope", method_pointer_5cea5584917e5abb901cccc65a0c1a8a, "");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof_kind");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("create_deserialized");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}