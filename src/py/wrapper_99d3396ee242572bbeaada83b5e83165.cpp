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
    class ::clang::VarDecl  * (*method_pointer_894f447412c259a28f70bf8abbb51709)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarDecl::CreateDeserialized;
    bool  (::clang::VarDecl::*method_pointer_a7e70462686f526abb87d1deccf60f97)() const = &::clang::VarDecl::checkInitIsICE;
    bool  (*method_pointer_e3d8702d7c0250d697d8710a1d3a1344)(class ::clang::Decl  const *) = ::clang::VarDecl::classof;
    bool  (*method_pointer_9d140a0b343b5aaa9341ef8a63fe653a)(enum ::clang::Decl::Kind ) = ::clang::VarDecl::classofKind;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_bb45fc8b95145fe1b3316bf921c1756c)() const = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_ef8961757c555797b49a81b5431733e6)() = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_1be8532d0ffb555ea3ec1fc41f5e78ac)() = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_236ba1029bda51e8b37ea6d6f6ca0a56)() const = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_6c3142d2f91f51f98b266004c896740d)(class ::clang::ASTContext  &) const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_9efef939d37b5ade96e367c47d14b591)(class ::clang::ASTContext  &) = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_923474ec57ca58f6a8d2396b7d996868)() = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_b21b63bbb66d56719834272a0fcbc504)() const = &::clang::VarDecl::getDefinition;
    class ::clang::VarTemplateDecl  * (::clang::VarDecl::*method_pointer_24b9d1f512865c94ad96f05ed477d952)() const = &::clang::VarDecl::getDescribedVarTemplate;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_4297aa4b055b5c08989bb05edd5512fb)() const = &::clang::VarDecl::getInstantiatedFromStaticDataMember;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_f027ca9ef1ae50218ef76eb457f7064a)() = &::clang::VarDecl::getOutOfLineDefinition;
    bool  (::clang::VarDecl::*method_pointer_f4eab4cdb44d56d98b29f4086279ce7f)() const = &::clang::VarDecl::hasExternalStorage;
    bool  (::clang::VarDecl::*method_pointer_1d96ddbb299f5c4ea62c8b4c917d6b02)() const = &::clang::VarDecl::hasGlobalStorage;
    bool  (::clang::VarDecl::*method_pointer_045379b143f05d528f8f5866dec6498b)() const = &::clang::VarDecl::hasInit;
    bool  (::clang::VarDecl::*method_pointer_bf30ce10051e531eab95fb23fc479973)() const = &::clang::VarDecl::hasLocalStorage;
    bool  (::clang::VarDecl::*method_pointer_8ca42ece9b5d5ad0a51b609661c302a6)() const = &::clang::VarDecl::isARCPseudoStrong;
    bool  (::clang::VarDecl::*method_pointer_d1c2811452625b7eba3bec8e1f6ea8cb)() const = &::clang::VarDecl::isCXXForRangeDecl;
    bool  (::clang::VarDecl::*method_pointer_64e195bf9c935aab9383959adcc460df)() const = &::clang::VarDecl::isConcept;
    bool  (::clang::VarDecl::*method_pointer_c3b4dfe1225a5c1b9137dd10c94bf1e7)() const = &::clang::VarDecl::isConstexpr;
    bool  (::clang::VarDecl::*method_pointer_8a2f9d29bc2354f68817d62de679d6ee)() const = &::clang::VarDecl::isDirectInit;
    bool  (::clang::VarDecl::*method_pointer_9bcbb52c15b853aba2aba26fe75d5b8d)() const = &::clang::VarDecl::isExceptionVariable;
    bool  (::clang::VarDecl::*method_pointer_c98664e45b71526b9725cb6e0e6a04af)() const = &::clang::VarDecl::isExternC;
    bool  (::clang::VarDecl::*method_pointer_790a094645f35caeb2c114b0555613e5)() const = &::clang::VarDecl::isFileVarDecl;
    bool  (::clang::VarDecl::*method_pointer_9ef74cc6a8835327884869f1737fbd44)() const = &::clang::VarDecl::isFunctionOrMethodVarDecl;
    bool  (::clang::VarDecl::*method_pointer_a148c00368bf57089583aa7881cfca69)() const = &::clang::VarDecl::isInExternCContext;
    bool  (::clang::VarDecl::*method_pointer_33a0ffabff1556c59a6e90cf0048ba10)() const = &::clang::VarDecl::isInExternCXXContext;
    bool  (::clang::VarDecl::*method_pointer_5ad3c02c573d574797d0a42964fab67a)() const = &::clang::VarDecl::isInitCapture;
    bool  (::clang::VarDecl::*method_pointer_0cca7953de1b5e63ada15f5982c79780)() const = &::clang::VarDecl::isInitICE;
    bool  (::clang::VarDecl::*method_pointer_91db6621dbf95bd4808abbca9db5ba8c)() const = &::clang::VarDecl::isInitKnownICE;
    bool  (::clang::VarDecl::*method_pointer_7a498930b0b25580b340f718e4431e84)() const = &::clang::VarDecl::isLocalVarDecl;
    bool  (::clang::VarDecl::*method_pointer_d1b9d722868155aeb7feafd04086ccdc)() const = &::clang::VarDecl::isLocalVarDeclOrParm;
    bool  (::clang::VarDecl::*method_pointer_62ce523b7d9c504a91821de628e49d50)() const = &::clang::VarDecl::isNRVOVariable;
    bool  (::clang::VarDecl::*method_pointer_3b1cdac0a0d75ca9acf454bd8a8e1962)() const = &::clang::VarDecl::isOutOfLine;
    bool  (::clang::VarDecl::*method_pointer_225c15b9a5e2561cb0f7e7f8467655f6)() const = &::clang::VarDecl::isPreviousDeclInSameBlockScope;
    bool  (::clang::VarDecl::*method_pointer_9d830b2d2d0e5f88b78b97a18792c10d)() const = &::clang::VarDecl::isStaticDataMember;
    bool  (::clang::VarDecl::*method_pointer_40cd6bee95eb5e15b3db3c47627c1485)() const = &::clang::VarDecl::isStaticLocal;
    bool  (::clang::VarDecl::*method_pointer_7cee8ab1245d599da849311014c3839e)(class ::clang::ASTContext  &) const = &::clang::VarDecl::isUsableInConstantExpressions;
    void  (::clang::VarDecl::*method_pointer_bd69c1ae6fc15f7c98386cebf0b0af96)(bool ) = &::clang::VarDecl::setARCPseudoStrong;
    void  (::clang::VarDecl::*method_pointer_0f380507d6165a2888f8ce5d0872db7e)(bool ) = &::clang::VarDecl::setCXXForRangeDecl;
    void  (::clang::VarDecl::*method_pointer_4be07d1cf71356e59848237d79f77326)(bool ) = &::clang::VarDecl::setConcept;
    void  (::clang::VarDecl::*method_pointer_5e14fc8a14af50379a9f5b47e4390c68)(bool ) = &::clang::VarDecl::setConstexpr;
    void  (::clang::VarDecl::*method_pointer_217c2da24f70506ea66a30def6835a08)(class ::clang::VarTemplateDecl  *) = &::clang::VarDecl::setDescribedVarTemplate;
    void  (::clang::VarDecl::*method_pointer_4971e31974735314b0c89479c7f99a47)(bool ) = &::clang::VarDecl::setExceptionVariable;
    void  (::clang::VarDecl::*method_pointer_6c71df7e26cf5d3482ea5e46a7241e26)(bool ) = &::clang::VarDecl::setInitCapture;
    void  (::clang::VarDecl::*method_pointer_7bbcf99d444d546780609e6b7453ccea)(bool ) = &::clang::VarDecl::setNRVOVariable;
    void  (::clang::VarDecl::*method_pointer_361f7e6ae561517badef4f2daafb4592)(bool ) = &::clang::VarDecl::setPreviousDeclInSameBlockScope;
    boost::python::class_< class ::clang::VarDecl, autowig::HeldType< class ::clang::VarDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_99d3396ee242572bbeaada83b5e83165("VarDecl", "", boost::python::no_init);
    class_99d3396ee242572bbeaada83b5e83165.def("create_deserialized", method_pointer_894f447412c259a28f70bf8abbb51709, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("check_init_is_ice", method_pointer_a7e70462686f526abb87d1deccf60f97, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof", method_pointer_e3d8702d7c0250d697d8710a1d3a1344, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof_kind", method_pointer_9d140a0b343b5aaa9341ef8a63fe653a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_bb45fc8b95145fe1b3316bf921c1756c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_ef8961757c555797b49a81b5431733e6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_1be8532d0ffb555ea3ec1fc41f5e78ac, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_236ba1029bda51e8b37ea6d6f6ca0a56, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_6c3142d2f91f51f98b266004c896740d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_9efef939d37b5ade96e367c47d14b591, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_923474ec57ca58f6a8d2396b7d996868, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_b21b63bbb66d56719834272a0fcbc504, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_described_var_template", method_pointer_24b9d1f512865c94ad96f05ed477d952, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_instantiated_from_static_data_member", method_pointer_4297aa4b055b5c08989bb05edd5512fb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_out_of_line_definition", method_pointer_f027ca9ef1ae50218ef76eb457f7064a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_external_storage", method_pointer_f4eab4cdb44d56d98b29f4086279ce7f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_global_storage", method_pointer_1d96ddbb299f5c4ea62c8b4c917d6b02, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_init", method_pointer_045379b143f05d528f8f5866dec6498b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_local_storage", method_pointer_bf30ce10051e531eab95fb23fc479973, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_arc_pseudo_strong", method_pointer_8ca42ece9b5d5ad0a51b609661c302a6, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_cxx_for_range_decl", method_pointer_d1c2811452625b7eba3bec8e1f6ea8cb, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_concept", method_pointer_64e195bf9c935aab9383959adcc460df, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_constexpr", method_pointer_c3b4dfe1225a5c1b9137dd10c94bf1e7, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_direct_init", method_pointer_8a2f9d29bc2354f68817d62de679d6ee, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_exception_variable", method_pointer_9bcbb52c15b853aba2aba26fe75d5b8d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_extern_c", method_pointer_c98664e45b71526b9725cb6e0e6a04af, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_file_var_decl", method_pointer_790a094645f35caeb2c114b0555613e5, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_function_or_method_var_decl", method_pointer_9ef74cc6a8835327884869f1737fbd44, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_c_context", method_pointer_a148c00368bf57089583aa7881cfca69, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_cxx_context", method_pointer_33a0ffabff1556c59a6e90cf0048ba10, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_capture", method_pointer_5ad3c02c573d574797d0a42964fab67a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_ice", method_pointer_0cca7953de1b5e63ada15f5982c79780, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_known_ice", method_pointer_91db6621dbf95bd4808abbca9db5ba8c, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl", method_pointer_7a498930b0b25580b340f718e4431e84, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl_or_parm", method_pointer_d1b9d722868155aeb7feafd04086ccdc, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_nrvo_variable", method_pointer_62ce523b7d9c504a91821de628e49d50, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_out_of_line", method_pointer_3b1cdac0a0d75ca9acf454bd8a8e1962, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_previous_decl_in_same_block_scope", method_pointer_225c15b9a5e2561cb0f7e7f8467655f6, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_data_member", method_pointer_9d830b2d2d0e5f88b78b97a18792c10d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_local", method_pointer_40cd6bee95eb5e15b3db3c47627c1485, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_usable_in_constant_expressions", method_pointer_7cee8ab1245d599da849311014c3839e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_arc_pseudo_strong", method_pointer_bd69c1ae6fc15f7c98386cebf0b0af96, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_cxx_for_range_decl", method_pointer_0f380507d6165a2888f8ce5d0872db7e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_concept", method_pointer_4be07d1cf71356e59848237d79f77326, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_constexpr", method_pointer_5e14fc8a14af50379a9f5b47e4390c68, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_described_var_template", method_pointer_217c2da24f70506ea66a30def6835a08, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_exception_variable", method_pointer_4971e31974735314b0c89479c7f99a47, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_init_capture", method_pointer_6c71df7e26cf5d3482ea5e46a7241e26, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_nrvo_variable", method_pointer_7bbcf99d444d546780609e6b7453ccea, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_previous_decl_in_same_block_scope", method_pointer_361f7e6ae561517badef4f2daafb4592, "");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof_kind");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("create_deserialized");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}