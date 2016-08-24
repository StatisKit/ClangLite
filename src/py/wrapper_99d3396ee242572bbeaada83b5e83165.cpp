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
    class ::clang::VarDecl  * (*method_pointer_221a0b73f4af5de89c4fda5d62a5297e)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarDecl::CreateDeserialized;
    bool  (::clang::VarDecl::*method_pointer_b2ae47203f87521a9ded41e3dad674eb)() const = &::clang::VarDecl::checkInitIsICE;
    bool  (*method_pointer_5663fa38dc9c5b83975bfd249ab715a2)(class ::clang::Decl  const *) = ::clang::VarDecl::classof;
    bool  (*method_pointer_7ce8085b1eb25e51aef62ab3ffea0eca)(enum ::clang::Decl::Kind ) = ::clang::VarDecl::classofKind;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_f47708c2f719518b907d5f94380ce031)() const = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_b7015a1a7d7b55f3808b63cca9d6fece)() = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_a50cb863158f570e820060967ed45822)() const = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_93ad5b32ef4e56cea7de13076b0c7ab3)() = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_2035f9c7a7c657bfaf2c04901ff395f8)(class ::clang::ASTContext  &) const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_12b1a10022cc5f4e907be2dff46fcb14)() = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_19a274b05deb52c085f75a24abd314cb)(class ::clang::ASTContext  &) = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_a2fff7025c5150fdb17efe3e9715b0e3)() const = &::clang::VarDecl::getDefinition;
    class ::clang::VarTemplateDecl  * (::clang::VarDecl::*method_pointer_a833758f8ce45e148cb559fc670bb7ea)() const = &::clang::VarDecl::getDescribedVarTemplate;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_3f47f06e4fed5359a6bc7c365cefae42)() const = &::clang::VarDecl::getInstantiatedFromStaticDataMember;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_39150c083de75933bfdf9b51ea2e5e46)() = &::clang::VarDecl::getOutOfLineDefinition;
    class ::clang::SourceLocation  (::clang::VarDecl::*method_pointer_9cc8342eb4e857ea960f0bc9240cb023)() const = &::clang::VarDecl::getPointOfInstantiation;
    bool  (::clang::VarDecl::*method_pointer_67c8c75a3a8052bbab68a281c7fa684b)() const = &::clang::VarDecl::hasExternalStorage;
    bool  (::clang::VarDecl::*method_pointer_435dbba3d58c5f5a80ba8ff883476495)() const = &::clang::VarDecl::hasGlobalStorage;
    bool  (::clang::VarDecl::*method_pointer_4b79351b0d325f42935457868326ccce)() const = &::clang::VarDecl::hasInit;
    bool  (::clang::VarDecl::*method_pointer_340b4d0ac0c45b7b929fdd316ba00a9a)() const = &::clang::VarDecl::hasLocalStorage;
    bool  (::clang::VarDecl::*method_pointer_aaf7c72ff6225f6d8b5781b934557a62)() const = &::clang::VarDecl::isARCPseudoStrong;
    bool  (::clang::VarDecl::*method_pointer_20a46d4d083a5a4f9ff3d38dc473e070)() const = &::clang::VarDecl::isCXXForRangeDecl;
    bool  (::clang::VarDecl::*method_pointer_29380013fc595351ae541652d0de8805)() const = &::clang::VarDecl::isConcept;
    bool  (::clang::VarDecl::*method_pointer_148fb57e03405250943a924fa84d8601)() const = &::clang::VarDecl::isConstexpr;
    bool  (::clang::VarDecl::*method_pointer_65bb9310655d501db23429e0e1961b06)() const = &::clang::VarDecl::isDirectInit;
    bool  (::clang::VarDecl::*method_pointer_833762769e695100a486a70d631e57fb)() const = &::clang::VarDecl::isExceptionVariable;
    bool  (::clang::VarDecl::*method_pointer_05261dd46487538aa73a615be7adfcf8)() const = &::clang::VarDecl::isExternC;
    bool  (::clang::VarDecl::*method_pointer_a65c72e49f20507ab9d3b14f4e3e8aee)() const = &::clang::VarDecl::isFileVarDecl;
    bool  (::clang::VarDecl::*method_pointer_ae802b1cb8945c61855f2813429a6d6f)() const = &::clang::VarDecl::isFunctionOrMethodVarDecl;
    bool  (::clang::VarDecl::*method_pointer_f83104ad033659419019c1436f59d537)() const = &::clang::VarDecl::isInExternCContext;
    bool  (::clang::VarDecl::*method_pointer_22fba66339da51e99fe1d6d6e013af7a)() const = &::clang::VarDecl::isInExternCXXContext;
    bool  (::clang::VarDecl::*method_pointer_f60b3495aa355424ba237d982e7ca467)() const = &::clang::VarDecl::isInitCapture;
    bool  (::clang::VarDecl::*method_pointer_ad5846ef063a5ec992e33b94196c872d)() const = &::clang::VarDecl::isInitICE;
    bool  (::clang::VarDecl::*method_pointer_36fa1b59875e525e9099e64dc64104d3)() const = &::clang::VarDecl::isInitKnownICE;
    bool  (::clang::VarDecl::*method_pointer_1adceb275513523caf36454ad769683d)() const = &::clang::VarDecl::isLocalVarDecl;
    bool  (::clang::VarDecl::*method_pointer_4ab0e844aaa3549faf6f85d7e1ac4ba8)() const = &::clang::VarDecl::isLocalVarDeclOrParm;
    bool  (::clang::VarDecl::*method_pointer_348a4a8c133557d3833563578128b320)() const = &::clang::VarDecl::isNRVOVariable;
    bool  (::clang::VarDecl::*method_pointer_2284f1aa1c1f54e4a280f5669949a1bb)() const = &::clang::VarDecl::isOutOfLine;
    bool  (::clang::VarDecl::*method_pointer_4a91a1acfe6056f3b923da1eb18bb829)() const = &::clang::VarDecl::isPreviousDeclInSameBlockScope;
    bool  (::clang::VarDecl::*method_pointer_64da3b6818245756a6b90ac75feb3d2f)() const = &::clang::VarDecl::isStaticDataMember;
    bool  (::clang::VarDecl::*method_pointer_6073274378ab58f4b5e5055ff833f45b)() const = &::clang::VarDecl::isStaticLocal;
    bool  (::clang::VarDecl::*method_pointer_b6af9b0425995a9ab3bf18c0f2bea17d)(class ::clang::ASTContext  &) const = &::clang::VarDecl::isUsableInConstantExpressions;
    void  (::clang::VarDecl::*method_pointer_140c9b802ad457eaae90e00ec516f49e)(bool ) = &::clang::VarDecl::setARCPseudoStrong;
    void  (::clang::VarDecl::*method_pointer_ad8d947cdeda56a29f9c332c8bfaecc0)(bool ) = &::clang::VarDecl::setCXXForRangeDecl;
    void  (::clang::VarDecl::*method_pointer_c9f04311006e56a9ac88b212a049cc13)(bool ) = &::clang::VarDecl::setConcept;
    void  (::clang::VarDecl::*method_pointer_8816fcc61b0b58dbaa8cd1c69e13b098)(bool ) = &::clang::VarDecl::setConstexpr;
    void  (::clang::VarDecl::*method_pointer_6eb114d824a753e2b2b87da089f0825a)(class ::clang::VarTemplateDecl  *) = &::clang::VarDecl::setDescribedVarTemplate;
    void  (::clang::VarDecl::*method_pointer_4ce7b189afc250ecab137eb26d80fdbe)(bool ) = &::clang::VarDecl::setExceptionVariable;
    void  (::clang::VarDecl::*method_pointer_e7db1dec4ddb5007a58ccd95ce01ba7e)(bool ) = &::clang::VarDecl::setInitCapture;
    void  (::clang::VarDecl::*method_pointer_f4e51e908dc852d489ecbf5ae0d404b5)(bool ) = &::clang::VarDecl::setNRVOVariable;
    void  (::clang::VarDecl::*method_pointer_90625cb451345858addee010067bb60c)(bool ) = &::clang::VarDecl::setPreviousDeclInSameBlockScope;
    boost::python::class_< class ::clang::VarDecl, autowig::HeldType< class ::clang::VarDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_99d3396ee242572bbeaada83b5e83165("VarDecl", "", boost::python::no_init);
    class_99d3396ee242572bbeaada83b5e83165.def("create_deserialized", method_pointer_221a0b73f4af5de89c4fda5d62a5297e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("check_init_is_ice", method_pointer_b2ae47203f87521a9ded41e3dad674eb, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof", method_pointer_5663fa38dc9c5b83975bfd249ab715a2, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof_kind", method_pointer_7ce8085b1eb25e51aef62ab3ffea0eca, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_f47708c2f719518b907d5f94380ce031, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_b7015a1a7d7b55f3808b63cca9d6fece, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_a50cb863158f570e820060967ed45822, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_93ad5b32ef4e56cea7de13076b0c7ab3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_2035f9c7a7c657bfaf2c04901ff395f8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_12b1a10022cc5f4e907be2dff46fcb14, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_19a274b05deb52c085f75a24abd314cb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_a2fff7025c5150fdb17efe3e9715b0e3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_described_var_template", method_pointer_a833758f8ce45e148cb559fc670bb7ea, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_instantiated_from_static_data_member", method_pointer_3f47f06e4fed5359a6bc7c365cefae42, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_out_of_line_definition", method_pointer_39150c083de75933bfdf9b51ea2e5e46, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_point_of_instantiation", method_pointer_9cc8342eb4e857ea960f0bc9240cb023, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_external_storage", method_pointer_67c8c75a3a8052bbab68a281c7fa684b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_global_storage", method_pointer_435dbba3d58c5f5a80ba8ff883476495, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_init", method_pointer_4b79351b0d325f42935457868326ccce, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_local_storage", method_pointer_340b4d0ac0c45b7b929fdd316ba00a9a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_arc_pseudo_strong", method_pointer_aaf7c72ff6225f6d8b5781b934557a62, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_cxx_for_range_decl", method_pointer_20a46d4d083a5a4f9ff3d38dc473e070, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_concept", method_pointer_29380013fc595351ae541652d0de8805, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_constexpr", method_pointer_148fb57e03405250943a924fa84d8601, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_direct_init", method_pointer_65bb9310655d501db23429e0e1961b06, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_exception_variable", method_pointer_833762769e695100a486a70d631e57fb, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_extern_c", method_pointer_05261dd46487538aa73a615be7adfcf8, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_file_var_decl", method_pointer_a65c72e49f20507ab9d3b14f4e3e8aee, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_function_or_method_var_decl", method_pointer_ae802b1cb8945c61855f2813429a6d6f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_c_context", method_pointer_f83104ad033659419019c1436f59d537, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_cxx_context", method_pointer_22fba66339da51e99fe1d6d6e013af7a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_capture", method_pointer_f60b3495aa355424ba237d982e7ca467, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_ice", method_pointer_ad5846ef063a5ec992e33b94196c872d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_known_ice", method_pointer_36fa1b59875e525e9099e64dc64104d3, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl", method_pointer_1adceb275513523caf36454ad769683d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl_or_parm", method_pointer_4ab0e844aaa3549faf6f85d7e1ac4ba8, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_nrvo_variable", method_pointer_348a4a8c133557d3833563578128b320, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_out_of_line", method_pointer_2284f1aa1c1f54e4a280f5669949a1bb, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_previous_decl_in_same_block_scope", method_pointer_4a91a1acfe6056f3b923da1eb18bb829, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_data_member", method_pointer_64da3b6818245756a6b90ac75feb3d2f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_local", method_pointer_6073274378ab58f4b5e5055ff833f45b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_usable_in_constant_expressions", method_pointer_b6af9b0425995a9ab3bf18c0f2bea17d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_arc_pseudo_strong", method_pointer_140c9b802ad457eaae90e00ec516f49e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_cxx_for_range_decl", method_pointer_ad8d947cdeda56a29f9c332c8bfaecc0, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_concept", method_pointer_c9f04311006e56a9ac88b212a049cc13, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_constexpr", method_pointer_8816fcc61b0b58dbaa8cd1c69e13b098, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_described_var_template", method_pointer_6eb114d824a753e2b2b87da089f0825a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_exception_variable", method_pointer_4ce7b189afc250ecab137eb26d80fdbe, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_init_capture", method_pointer_e7db1dec4ddb5007a58ccd95ce01ba7e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_nrvo_variable", method_pointer_f4e51e908dc852d489ecbf5ae0d404b5, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_previous_decl_in_same_block_scope", method_pointer_90625cb451345858addee010067bb60c, "");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof_kind");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("create_deserialized");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}