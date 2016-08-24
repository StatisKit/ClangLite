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
    class ::clang::VarDecl  * (*method_pointer_bc895e401b0c5ee5975208ecd2d6984e)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarDecl::CreateDeserialized;
    bool  (::clang::VarDecl::*method_pointer_a79480eaf8035de7b6dac1f5f0deb6e8)() const = &::clang::VarDecl::checkInitIsICE;
    bool  (*method_pointer_f849823b96b35173a8140b525aa54d2a)(class ::clang::Decl  const *) = ::clang::VarDecl::classof;
    bool  (*method_pointer_64c5e46933d950bf9af4c12c89cb9f88)(enum ::clang::Decl::Kind ) = ::clang::VarDecl::classofKind;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_55be9b30e75b53d4a9af0f6d7f29a4d3)() = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_c25131520c405a41b324f648919658dd)() const = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_1be4430fe2f9522d89b352fa5fda4961)() const = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_33f43bb4f28557289e909f0f52dcc68c)() = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_a89fdd12f04251fea7edf8a579d5d86f)() const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_8a61ac96729d5682993d67d430475878)(class ::clang::ASTContext  &) = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_0656a5539d485b44826745cb62638536)(class ::clang::ASTContext  &) const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_ef98cccc518c5987912cebbe3bfffeb9)() = &::clang::VarDecl::getDefinition;
    class ::clang::VarTemplateDecl  * (::clang::VarDecl::*method_pointer_ea7d8ec852dd51fba0407f8814f64302)() const = &::clang::VarDecl::getDescribedVarTemplate;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_a95f291f613757a99fc526310f2ad966)() const = &::clang::VarDecl::getInstantiatedFromStaticDataMember;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_61845186b3d553318802a97a348e2a73)() = &::clang::VarDecl::getOutOfLineDefinition;
    class ::clang::SourceLocation  (::clang::VarDecl::*method_pointer_e9716e2f741d522da2cd19d4d8090ac4)() const = &::clang::VarDecl::getPointOfInstantiation;
    bool  (::clang::VarDecl::*method_pointer_c0aed0e98e4f5f57a3e9d9b0b01af49f)() const = &::clang::VarDecl::hasExternalStorage;
    bool  (::clang::VarDecl::*method_pointer_1c52a954f3305f0eaa9c0f0f4aa6688d)() const = &::clang::VarDecl::hasGlobalStorage;
    bool  (::clang::VarDecl::*method_pointer_90702fe4dd1959179e6c0b9064ac023e)() const = &::clang::VarDecl::hasInit;
    bool  (::clang::VarDecl::*method_pointer_1901b64a8bae5e7d91d03ca7b9125f73)() const = &::clang::VarDecl::hasLocalStorage;
    bool  (::clang::VarDecl::*method_pointer_9bd92555c8cb5f6fa702c0e08ffd7082)() const = &::clang::VarDecl::isARCPseudoStrong;
    bool  (::clang::VarDecl::*method_pointer_d8687025935f5d0986a47eecd4e67b26)() const = &::clang::VarDecl::isCXXForRangeDecl;
    bool  (::clang::VarDecl::*method_pointer_72fae85c646c57ba9f08d4ead4777435)() const = &::clang::VarDecl::isConcept;
    bool  (::clang::VarDecl::*method_pointer_cfe964adf6d15dfa86db723197e92870)() const = &::clang::VarDecl::isConstexpr;
    bool  (::clang::VarDecl::*method_pointer_feab51f49c1e56989cec97bff6d1c6d9)() const = &::clang::VarDecl::isDirectInit;
    bool  (::clang::VarDecl::*method_pointer_d5cce7dc07dd576bade7e94f415fd965)() const = &::clang::VarDecl::isExceptionVariable;
    bool  (::clang::VarDecl::*method_pointer_bb4c9382808b578f89a8a1d459c89b6b)() const = &::clang::VarDecl::isExternC;
    bool  (::clang::VarDecl::*method_pointer_75b876d45c285ea4af93373f49da7504)() const = &::clang::VarDecl::isFileVarDecl;
    bool  (::clang::VarDecl::*method_pointer_dfd1726bf5085b91b468ed4f07a3eda3)() const = &::clang::VarDecl::isFunctionOrMethodVarDecl;
    bool  (::clang::VarDecl::*method_pointer_f9a5b73d0ec25c868986a81cde087f92)() const = &::clang::VarDecl::isInExternCContext;
    bool  (::clang::VarDecl::*method_pointer_f5ae16ec1b315150ada0cf906c238de5)() const = &::clang::VarDecl::isInExternCXXContext;
    bool  (::clang::VarDecl::*method_pointer_e8da24a124ff501199c78a2192000eec)() const = &::clang::VarDecl::isInitCapture;
    bool  (::clang::VarDecl::*method_pointer_5a7c05f3af565486a543f74988cd763f)() const = &::clang::VarDecl::isInitICE;
    bool  (::clang::VarDecl::*method_pointer_d40c87452bf95339949d655a102b745a)() const = &::clang::VarDecl::isInitKnownICE;
    bool  (::clang::VarDecl::*method_pointer_740439c5d7e15c5bba396cd220c0a15c)() const = &::clang::VarDecl::isLocalVarDecl;
    bool  (::clang::VarDecl::*method_pointer_3c3c591e3cd65d79b1b1a7de83173221)() const = &::clang::VarDecl::isLocalVarDeclOrParm;
    bool  (::clang::VarDecl::*method_pointer_df8220a5a29b532f8127ede4839cd042)() const = &::clang::VarDecl::isNRVOVariable;
    bool  (::clang::VarDecl::*method_pointer_bcc6db522bd252e8a211f2d4dcd37bba)() const = &::clang::VarDecl::isOutOfLine;
    bool  (::clang::VarDecl::*method_pointer_6c89176bf9295607b301f29dd2205954)() const = &::clang::VarDecl::isPreviousDeclInSameBlockScope;
    bool  (::clang::VarDecl::*method_pointer_caa825ff9b3f58c0980c8faa78c8f14f)() const = &::clang::VarDecl::isStaticDataMember;
    bool  (::clang::VarDecl::*method_pointer_feea28bb6d7259cd8bcd64b25ef18a3f)() const = &::clang::VarDecl::isStaticLocal;
    bool  (::clang::VarDecl::*method_pointer_4f1e22bc2a59556c933e15936b6812d2)(class ::clang::ASTContext  &) const = &::clang::VarDecl::isUsableInConstantExpressions;
    void  (::clang::VarDecl::*method_pointer_6850c74ec07a51f1970afe94d79c62c6)(bool ) = &::clang::VarDecl::setARCPseudoStrong;
    void  (::clang::VarDecl::*method_pointer_75c6a93b99b65786a22657573d644ca7)(bool ) = &::clang::VarDecl::setCXXForRangeDecl;
    void  (::clang::VarDecl::*method_pointer_4f717aeb84b65a39990267feebbc03a7)(bool ) = &::clang::VarDecl::setConcept;
    void  (::clang::VarDecl::*method_pointer_2356a7e6a7ec54868433349762b54240)(bool ) = &::clang::VarDecl::setConstexpr;
    void  (::clang::VarDecl::*method_pointer_a6dcd62e01365d31b1db071ffe4eb4de)(class ::clang::VarTemplateDecl  *) = &::clang::VarDecl::setDescribedVarTemplate;
    void  (::clang::VarDecl::*method_pointer_2e45fdbdbee25f7fba8c240f2cc58a73)(bool ) = &::clang::VarDecl::setExceptionVariable;
    void  (::clang::VarDecl::*method_pointer_6fe122a95ca5542ca754f946313fd5fc)(bool ) = &::clang::VarDecl::setInitCapture;
    void  (::clang::VarDecl::*method_pointer_164363c846045610827c0c362807efb8)(bool ) = &::clang::VarDecl::setNRVOVariable;
    void  (::clang::VarDecl::*method_pointer_95467bae6ce05288a6c97f0fea73ad63)(bool ) = &::clang::VarDecl::setPreviousDeclInSameBlockScope;
    boost::python::class_< class ::clang::VarDecl, autowig::HeldType< class ::clang::VarDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_99d3396ee242572bbeaada83b5e83165("VarDecl", "", boost::python::no_init);
    class_99d3396ee242572bbeaada83b5e83165.def("create_deserialized", method_pointer_bc895e401b0c5ee5975208ecd2d6984e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("check_init_is_ice", method_pointer_a79480eaf8035de7b6dac1f5f0deb6e8, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof", method_pointer_f849823b96b35173a8140b525aa54d2a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof_kind", method_pointer_64c5e46933d950bf9af4c12c89cb9f88, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_55be9b30e75b53d4a9af0f6d7f29a4d3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_c25131520c405a41b324f648919658dd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_1be4430fe2f9522d89b352fa5fda4961, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_33f43bb4f28557289e909f0f52dcc68c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_a89fdd12f04251fea7edf8a579d5d86f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_8a61ac96729d5682993d67d430475878, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_0656a5539d485b44826745cb62638536, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_ef98cccc518c5987912cebbe3bfffeb9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_described_var_template", method_pointer_ea7d8ec852dd51fba0407f8814f64302, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_instantiated_from_static_data_member", method_pointer_a95f291f613757a99fc526310f2ad966, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_out_of_line_definition", method_pointer_61845186b3d553318802a97a348e2a73, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_point_of_instantiation", method_pointer_e9716e2f741d522da2cd19d4d8090ac4, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_external_storage", method_pointer_c0aed0e98e4f5f57a3e9d9b0b01af49f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_global_storage", method_pointer_1c52a954f3305f0eaa9c0f0f4aa6688d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_init", method_pointer_90702fe4dd1959179e6c0b9064ac023e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_local_storage", method_pointer_1901b64a8bae5e7d91d03ca7b9125f73, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_arc_pseudo_strong", method_pointer_9bd92555c8cb5f6fa702c0e08ffd7082, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_cxx_for_range_decl", method_pointer_d8687025935f5d0986a47eecd4e67b26, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_concept", method_pointer_72fae85c646c57ba9f08d4ead4777435, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_constexpr", method_pointer_cfe964adf6d15dfa86db723197e92870, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_direct_init", method_pointer_feab51f49c1e56989cec97bff6d1c6d9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_exception_variable", method_pointer_d5cce7dc07dd576bade7e94f415fd965, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_extern_c", method_pointer_bb4c9382808b578f89a8a1d459c89b6b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_file_var_decl", method_pointer_75b876d45c285ea4af93373f49da7504, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_function_or_method_var_decl", method_pointer_dfd1726bf5085b91b468ed4f07a3eda3, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_c_context", method_pointer_f9a5b73d0ec25c868986a81cde087f92, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_cxx_context", method_pointer_f5ae16ec1b315150ada0cf906c238de5, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_capture", method_pointer_e8da24a124ff501199c78a2192000eec, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_ice", method_pointer_5a7c05f3af565486a543f74988cd763f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_known_ice", method_pointer_d40c87452bf95339949d655a102b745a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl", method_pointer_740439c5d7e15c5bba396cd220c0a15c, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl_or_parm", method_pointer_3c3c591e3cd65d79b1b1a7de83173221, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_nrvo_variable", method_pointer_df8220a5a29b532f8127ede4839cd042, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_out_of_line", method_pointer_bcc6db522bd252e8a211f2d4dcd37bba, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_previous_decl_in_same_block_scope", method_pointer_6c89176bf9295607b301f29dd2205954, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_data_member", method_pointer_caa825ff9b3f58c0980c8faa78c8f14f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_local", method_pointer_feea28bb6d7259cd8bcd64b25ef18a3f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_usable_in_constant_expressions", method_pointer_4f1e22bc2a59556c933e15936b6812d2, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_arc_pseudo_strong", method_pointer_6850c74ec07a51f1970afe94d79c62c6, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_cxx_for_range_decl", method_pointer_75c6a93b99b65786a22657573d644ca7, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_concept", method_pointer_4f717aeb84b65a39990267feebbc03a7, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_constexpr", method_pointer_2356a7e6a7ec54868433349762b54240, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_described_var_template", method_pointer_a6dcd62e01365d31b1db071ffe4eb4de, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_exception_variable", method_pointer_2e45fdbdbee25f7fba8c240f2cc58a73, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_init_capture", method_pointer_6fe122a95ca5542ca754f946313fd5fc, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_nrvo_variable", method_pointer_164363c846045610827c0c362807efb8, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_previous_decl_in_same_block_scope", method_pointer_95467bae6ce05288a6c97f0fea73ad63, "");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof_kind");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("create_deserialized");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}