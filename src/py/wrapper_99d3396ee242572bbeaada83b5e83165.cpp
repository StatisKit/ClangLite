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
    void  (::clang::VarDecl::*method_pointer_f7d9a7299fc85fb986afb4e45107ce31)(bool ) = &::clang::VarDecl::setARCPseudoStrong;
    bool  (::clang::VarDecl::*method_pointer_8b48335079c65f88b64134ca982cdc4d)() const = &::clang::VarDecl::isNRVOVariable;
    bool  (::clang::VarDecl::*method_pointer_39d99b0d4a025709b64539cc10b6d2d9)() const = &::clang::VarDecl::isInExternCContext;
    bool  (::clang::VarDecl::*method_pointer_faed5504857551b8950e472694568037)() const = &::clang::VarDecl::hasExternalStorage;
    bool  (::clang::VarDecl::*method_pointer_f085e222b7e05d23bd4fa09cba390122)() const = &::clang::VarDecl::hasLocalStorage;
    bool  (::clang::VarDecl::*method_pointer_79c538cd520951948a5c19d55b3613a8)(class ::clang::ASTContext  &) const = &::clang::VarDecl::isUsableInConstantExpressions;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_5ec6c52942e058a78701f6328dd67471)(class ::clang::ASTContext  &) = &::clang::VarDecl::getDefinition;
    void  (::clang::VarDecl::*method_pointer_62cbc366c7c15a16b2534d894404d7e4)(bool ) = &::clang::VarDecl::setPreviousDeclInSameBlockScope;
    bool  (::clang::VarDecl::*method_pointer_6a83f744906a547ab32312802afa2590)() const = &::clang::VarDecl::isLocalVarDecl;
    bool  (*method_pointer_22d4cc235c9b5128bdd609ed63c72d2d)(enum ::clang::Decl::Kind ) = ::clang::VarDecl::classofKind;
    bool  (::clang::VarDecl::*method_pointer_a46b4c2f932051389e1e78e6bb54a74a)() const = &::clang::VarDecl::isFileVarDecl;
    bool  (::clang::VarDecl::*method_pointer_aeee4641d82d53dc93127df69f2b1d6e)() const = &::clang::VarDecl::isStaticDataMember;
    bool  (::clang::VarDecl::*method_pointer_f3c4ae60c6c55b8290313049c32c7248)() const = &::clang::VarDecl::isPreviousDeclInSameBlockScope;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_0bb79cd27d9555798393891fe9796ff7)() = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_7dce999b91075600a21106e35fa92837)() const = &::clang::VarDecl::getInstantiatedFromStaticDataMember;
    void  (::clang::VarDecl::*method_pointer_34c7c7a53c9c5bb5abc81aa1fc298b68)(bool ) = &::clang::VarDecl::setConstexpr;
    bool  (::clang::VarDecl::*method_pointer_610c284517fd5cdca193e52a479740a3)() const = &::clang::VarDecl::isInitCapture;
    bool  (::clang::VarDecl::*method_pointer_0ba85960763a54c28938a986edffdda5)() const = &::clang::VarDecl::hasInit;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_c78cc59080675abd89cc15c729fff6d7)() = &::clang::VarDecl::getOutOfLineDefinition;
    void  (::clang::VarDecl::*method_pointer_fbc5ca8f6624501e8f11d554a519b663)(bool ) = &::clang::VarDecl::setCXXForRangeDecl;
    class ::clang::VarTemplateDecl  * (::clang::VarDecl::*method_pointer_94ac8bd61e6e5b66b37f0c6d46d5e7b7)() const = &::clang::VarDecl::getDescribedVarTemplate;
    bool  (::clang::VarDecl::*method_pointer_3b8f519b12a456188557f2305b1197d5)() const = &::clang::VarDecl::isInitKnownICE;
    bool  (::clang::VarDecl::*method_pointer_fce630925f7b5f259a2f7f941da156a2)() const = &::clang::VarDecl::isDirectInit;
    bool  (::clang::VarDecl::*method_pointer_6ab803a894ef5cb1aad16498214ddcfd)() const = &::clang::VarDecl::isExceptionVariable;
    void  (::clang::VarDecl::*method_pointer_88fe7b55d81d583388e1a7ca4d6af301)(class ::clang::VarTemplateDecl  *) = &::clang::VarDecl::setDescribedVarTemplate;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_3cf0db7773fb5a67be01f31b12891838)() const = &::clang::VarDecl::getCanonicalDecl;
    bool  (::clang::VarDecl::*method_pointer_5b98f97b44095cdf862d636a283d7ddd)() const = &::clang::VarDecl::isInitICE;
    bool  (::clang::VarDecl::*method_pointer_3519909627b051a2ae5d0bc8f3cea734)() const = &::clang::VarDecl::isConstexpr;
    bool  (::clang::VarDecl::*method_pointer_babb6bb639465b7284fdf54e5b293a2b)() const = &::clang::VarDecl::isConcept;
    bool  (::clang::VarDecl::*method_pointer_830e18e959a15260985f212e5f177f00)() const = &::clang::VarDecl::isOutOfLine;
    bool  (*method_pointer_55cd8847ab8a5f3198b6a58f40c35940)(class ::clang::Decl  const *) = ::clang::VarDecl::classof;
    bool  (::clang::VarDecl::*method_pointer_a785e9c094b75221a71692e90114228f)() const = &::clang::VarDecl::isFunctionOrMethodVarDecl;
    bool  (::clang::VarDecl::*method_pointer_02df7e9a5fc8524d829db1f5b743490e)() const = &::clang::VarDecl::hasGlobalStorage;
    bool  (::clang::VarDecl::*method_pointer_6f35cff719fb53e28268837b93fd9f9a)() const = &::clang::VarDecl::isInExternCXXContext;
    bool  (::clang::VarDecl::*method_pointer_b50ef51a479d51388a13cace05a7566e)() const = &::clang::VarDecl::isCXXForRangeDecl;
    bool  (::clang::VarDecl::*method_pointer_54255458b6ff5108a5e3de422448d6c8)() const = &::clang::VarDecl::checkInitIsICE;
    bool  (::clang::VarDecl::*method_pointer_6162eda2075c5cffb2f9f72b92e12b84)() const = &::clang::VarDecl::isLocalVarDeclOrParm;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_b211e5acde995dab8f8c157889329bc5)() = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  * (*method_pointer_2be2c53e0f7550cf99ba966f875e5a9c)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarDecl::CreateDeserialized;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_aa7be9448ac75590b0b2bfeadafbb1ee)(class ::clang::ASTContext  &) const = &::clang::VarDecl::getDefinition;
    bool  (::clang::VarDecl::*method_pointer_8ddcbed4bf775a85b3e8fcbb258ae9e5)() const = &::clang::VarDecl::isARCPseudoStrong;
    void  (::clang::VarDecl::*method_pointer_94c6c626476b5434a7b7692306088822)(bool ) = &::clang::VarDecl::setConcept;
    bool  (::clang::VarDecl::*method_pointer_6f6a9d0c84c3541cb5204dcc1fe2e608)() const = &::clang::VarDecl::isExternC;
    bool  (::clang::VarDecl::*method_pointer_ec757c2c8f535bd6948431dbd6972f9d)() const = &::clang::VarDecl::isStaticLocal;
    void  (::clang::VarDecl::*method_pointer_507f0b584fc555d6a2dc109d7c5d3016)(bool ) = &::clang::VarDecl::setNRVOVariable;
    void  (::clang::VarDecl::*method_pointer_9e789ca345a45b0a803104f6526c45bc)(bool ) = &::clang::VarDecl::setExceptionVariable;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_e638e3cfc3cb5a448bcdb27833693f2b)() const = &::clang::VarDecl::getActingDefinition;
    void  (::clang::VarDecl::*method_pointer_184eb99a53785cd2bee8f580ae77f128)(bool ) = &::clang::VarDecl::setInitCapture;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_18fe29bd2830598a8f953c1930326e81)() = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_90f6eb5b414b58de93d7bbc187f76083)() const = &::clang::VarDecl::getDefinition;
    boost::python::class_< class ::clang::VarDecl, autowig::HeldType< class ::clang::VarDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_99d3396ee242572bbeaada83b5e83165("VarDecl", "", boost::python::no_init);
    class_99d3396ee242572bbeaada83b5e83165.def("set_arc_pseudo_strong", method_pointer_f7d9a7299fc85fb986afb4e45107ce31, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_nrvo_variable", method_pointer_8b48335079c65f88b64134ca982cdc4d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_c_context", method_pointer_39d99b0d4a025709b64539cc10b6d2d9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_external_storage", method_pointer_faed5504857551b8950e472694568037, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_local_storage", method_pointer_f085e222b7e05d23bd4fa09cba390122, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_usable_in_constant_expressions", method_pointer_79c538cd520951948a5c19d55b3613a8, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_5ec6c52942e058a78701f6328dd67471, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_previous_decl_in_same_block_scope", method_pointer_62cbc366c7c15a16b2534d894404d7e4, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl", method_pointer_6a83f744906a547ab32312802afa2590, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof_kind", method_pointer_22d4cc235c9b5128bdd609ed63c72d2d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_file_var_decl", method_pointer_a46b4c2f932051389e1e78e6bb54a74a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_data_member", method_pointer_aeee4641d82d53dc93127df69f2b1d6e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_previous_decl_in_same_block_scope", method_pointer_f3c4ae60c6c55b8290313049c32c7248, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_0bb79cd27d9555798393891fe9796ff7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_instantiated_from_static_data_member", method_pointer_7dce999b91075600a21106e35fa92837, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_constexpr", method_pointer_34c7c7a53c9c5bb5abc81aa1fc298b68, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_capture", method_pointer_610c284517fd5cdca193e52a479740a3, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_init", method_pointer_0ba85960763a54c28938a986edffdda5, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_out_of_line_definition", method_pointer_c78cc59080675abd89cc15c729fff6d7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_cxx_for_range_decl", method_pointer_fbc5ca8f6624501e8f11d554a519b663, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_described_var_template", method_pointer_94ac8bd61e6e5b66b37f0c6d46d5e7b7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_known_ice", method_pointer_3b8f519b12a456188557f2305b1197d5, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_direct_init", method_pointer_fce630925f7b5f259a2f7f941da156a2, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_exception_variable", method_pointer_6ab803a894ef5cb1aad16498214ddcfd, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_described_var_template", method_pointer_88fe7b55d81d583388e1a7ca4d6af301, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_3cf0db7773fb5a67be01f31b12891838, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_ice", method_pointer_5b98f97b44095cdf862d636a283d7ddd, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_constexpr", method_pointer_3519909627b051a2ae5d0bc8f3cea734, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_concept", method_pointer_babb6bb639465b7284fdf54e5b293a2b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_out_of_line", method_pointer_830e18e959a15260985f212e5f177f00, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof", method_pointer_55cd8847ab8a5f3198b6a58f40c35940, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_function_or_method_var_decl", method_pointer_a785e9c094b75221a71692e90114228f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_global_storage", method_pointer_02df7e9a5fc8524d829db1f5b743490e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_cxx_context", method_pointer_6f35cff719fb53e28268837b93fd9f9a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_cxx_for_range_decl", method_pointer_b50ef51a479d51388a13cace05a7566e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("check_init_is_ice", method_pointer_54255458b6ff5108a5e3de422448d6c8, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl_or_parm", method_pointer_6162eda2075c5cffb2f9f72b92e12b84, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_b211e5acde995dab8f8c157889329bc5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("create_deserialized", method_pointer_2be2c53e0f7550cf99ba966f875e5a9c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_aa7be9448ac75590b0b2bfeadafbb1ee, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_arc_pseudo_strong", method_pointer_8ddcbed4bf775a85b3e8fcbb258ae9e5, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_concept", method_pointer_94c6c626476b5434a7b7692306088822, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_extern_c", method_pointer_6f6a9d0c84c3541cb5204dcc1fe2e608, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_local", method_pointer_ec757c2c8f535bd6948431dbd6972f9d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_nrvo_variable", method_pointer_507f0b584fc555d6a2dc109d7c5d3016, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_exception_variable", method_pointer_9e789ca345a45b0a803104f6526c45bc, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_e638e3cfc3cb5a448bcdb27833693f2b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_init_capture", method_pointer_184eb99a53785cd2bee8f580ae77f128, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_18fe29bd2830598a8f953c1930326e81, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_90f6eb5b414b58de93d7bbc187f76083, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof_kind");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("create_deserialized");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}