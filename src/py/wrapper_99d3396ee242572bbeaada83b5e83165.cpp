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
    class ::clang::VarDecl  * (*method_pointer_9b4c94d7f5b855f3b8950e9b05324cb6)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarDecl::CreateDeserialized;
    bool  (::clang::VarDecl::*method_pointer_76225ef5ef2359ebbfeb373727353dd2)() const = &::clang::VarDecl::checkInitIsICE;
    bool  (*method_pointer_833a8cf6a9e35d5795c7de314e763f77)(class ::clang::Decl  const *) = ::clang::VarDecl::classof;
    bool  (*method_pointer_1e17f9a6f5dd54298c452bf31202b781)(enum ::clang::Decl::Kind ) = ::clang::VarDecl::classofKind;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_2a3249860f745cbb874b57eeb38dd974)() = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_1ecf8290fc085ec89208b5f8be0a10bb)() const = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_9daa03e28c1856c79f82d647f1537611)() const = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_640c0a8f4f955dbb826ef618e351e8d6)() = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_5ca3293276465db2b912d58b26b85841)() = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_b27a54df9c115517a7ac7de42c98da0e)() const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_025dc4b6caef5da4ab15e36b09906b3d)(class ::clang::ASTContext  &) const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_6d545df9186b55bc858bf5b56bbcc717)(class ::clang::ASTContext  &) = &::clang::VarDecl::getDefinition;
    class ::clang::VarTemplateDecl  * (::clang::VarDecl::*method_pointer_41cfd74555d85190b8be27eef234d75d)() const = &::clang::VarDecl::getDescribedVarTemplate;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_802994aa688b56ecba2155b241957383)() const = &::clang::VarDecl::getInstantiatedFromStaticDataMember;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_7ad8bb456e8d58698714ebc26f4be739)() = &::clang::VarDecl::getOutOfLineDefinition;
    bool  (::clang::VarDecl::*method_pointer_b377ba18308b59b8a72f86e23b1ca518)() const = &::clang::VarDecl::hasExternalStorage;
    bool  (::clang::VarDecl::*method_pointer_6f5b9906c49a5dfcbb08655d4e5c5778)() const = &::clang::VarDecl::hasGlobalStorage;
    bool  (::clang::VarDecl::*method_pointer_adc0394faa295f61bdae772224594322)() const = &::clang::VarDecl::hasInit;
    bool  (::clang::VarDecl::*method_pointer_1cf61cad15355ff9a24dc88faa2776c0)() const = &::clang::VarDecl::hasLocalStorage;
    bool  (::clang::VarDecl::*method_pointer_ce8a1fae84585e3fa754ddad4b5132b9)() const = &::clang::VarDecl::isARCPseudoStrong;
    bool  (::clang::VarDecl::*method_pointer_76e8348f571f5ce7b70c322264c776e9)() const = &::clang::VarDecl::isCXXForRangeDecl;
    bool  (::clang::VarDecl::*method_pointer_73aa0551cf5d5e55a6105c301ea2587f)() const = &::clang::VarDecl::isConcept;
    bool  (::clang::VarDecl::*method_pointer_89fb8aa881d5503489b1379827000355)() const = &::clang::VarDecl::isConstexpr;
    bool  (::clang::VarDecl::*method_pointer_2a1354c01921544b9848ea12f93d04d7)() const = &::clang::VarDecl::isDirectInit;
    bool  (::clang::VarDecl::*method_pointer_39904903ca2c53ef934fdf0c1475287b)() const = &::clang::VarDecl::isExceptionVariable;
    bool  (::clang::VarDecl::*method_pointer_12ba08b5737e54548aca6e3cce551cfc)() const = &::clang::VarDecl::isExternC;
    bool  (::clang::VarDecl::*method_pointer_5733053f44f0520dbbb25f76e0bdb306)() const = &::clang::VarDecl::isFileVarDecl;
    bool  (::clang::VarDecl::*method_pointer_3c5795d4d43f5b65b70f7cbd071ac302)() const = &::clang::VarDecl::isFunctionOrMethodVarDecl;
    bool  (::clang::VarDecl::*method_pointer_0298f2124d095c8c85009dd293a56562)() const = &::clang::VarDecl::isInExternCContext;
    bool  (::clang::VarDecl::*method_pointer_b255d3b5f4795714afc354a67fbba86b)() const = &::clang::VarDecl::isInExternCXXContext;
    bool  (::clang::VarDecl::*method_pointer_6b3184bc397c51c7a20492b1fbf8dbc8)() const = &::clang::VarDecl::isInitCapture;
    bool  (::clang::VarDecl::*method_pointer_84527b2fabc15c7a82b7de0103d60941)() const = &::clang::VarDecl::isInitICE;
    bool  (::clang::VarDecl::*method_pointer_a78f2ae1570056ab89513cc6f61931f0)() const = &::clang::VarDecl::isInitKnownICE;
    bool  (::clang::VarDecl::*method_pointer_87b9984971b9585298bb82de412eb6b3)() const = &::clang::VarDecl::isLocalVarDecl;
    bool  (::clang::VarDecl::*method_pointer_8ff3b7a7a1ae5db6a249d838dc01f8e6)() const = &::clang::VarDecl::isLocalVarDeclOrParm;
    bool  (::clang::VarDecl::*method_pointer_063e2347cda15ad1a02dc6e0946039f0)() const = &::clang::VarDecl::isNRVOVariable;
    bool  (::clang::VarDecl::*method_pointer_13b7ff2d43845f579fd22ceb81403125)() const = &::clang::VarDecl::isOutOfLine;
    bool  (::clang::VarDecl::*method_pointer_579d07a523ee511f857a5b81724d4e13)() const = &::clang::VarDecl::isPreviousDeclInSameBlockScope;
    bool  (::clang::VarDecl::*method_pointer_ca78234a8bea511285668258eba7b12b)() const = &::clang::VarDecl::isStaticDataMember;
    bool  (::clang::VarDecl::*method_pointer_df9fdbfd27745cf7afef62dccfcd9593)() const = &::clang::VarDecl::isStaticLocal;
    bool  (::clang::VarDecl::*method_pointer_32a5336df24e501293c2189b67ee42cf)(class ::clang::ASTContext  &) const = &::clang::VarDecl::isUsableInConstantExpressions;
    void  (::clang::VarDecl::*method_pointer_f54fc967570f591b9744aeaf0c8aa956)(bool ) = &::clang::VarDecl::setARCPseudoStrong;
    void  (::clang::VarDecl::*method_pointer_0e60c5a0fd555772b32bc45b82f129b8)(bool ) = &::clang::VarDecl::setCXXForRangeDecl;
    void  (::clang::VarDecl::*method_pointer_76551876558855fe8f6ba16477211ef3)(bool ) = &::clang::VarDecl::setConcept;
    void  (::clang::VarDecl::*method_pointer_e7e934a02a5051c485bfd5b70632f6eb)(bool ) = &::clang::VarDecl::setConstexpr;
    void  (::clang::VarDecl::*method_pointer_91f425c2f4895bd1bb9b2cfa451b20bd)(class ::clang::VarTemplateDecl  *) = &::clang::VarDecl::setDescribedVarTemplate;
    void  (::clang::VarDecl::*method_pointer_313bcb306fa65b3b837acc0cdecb4b5f)(bool ) = &::clang::VarDecl::setExceptionVariable;
    void  (::clang::VarDecl::*method_pointer_dcb8f43306bd5a9a927b0a5cf0952183)(bool ) = &::clang::VarDecl::setInitCapture;
    void  (::clang::VarDecl::*method_pointer_deeb0f57340959dc9ac2e5be096f8c7e)(bool ) = &::clang::VarDecl::setNRVOVariable;
    void  (::clang::VarDecl::*method_pointer_0e52e0c1fde350ffa24876930ccda727)(bool ) = &::clang::VarDecl::setPreviousDeclInSameBlockScope;
    boost::python::class_< class ::clang::VarDecl, autowig::HeldType< class ::clang::VarDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_99d3396ee242572bbeaada83b5e83165("VarDecl", "", boost::python::no_init);
    class_99d3396ee242572bbeaada83b5e83165.def("create_deserialized", method_pointer_9b4c94d7f5b855f3b8950e9b05324cb6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("check_init_is_ice", method_pointer_76225ef5ef2359ebbfeb373727353dd2, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof", method_pointer_833a8cf6a9e35d5795c7de314e763f77, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof_kind", method_pointer_1e17f9a6f5dd54298c452bf31202b781, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_2a3249860f745cbb874b57eeb38dd974, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_1ecf8290fc085ec89208b5f8be0a10bb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_9daa03e28c1856c79f82d647f1537611, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_640c0a8f4f955dbb826ef618e351e8d6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_5ca3293276465db2b912d58b26b85841, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_b27a54df9c115517a7ac7de42c98da0e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_025dc4b6caef5da4ab15e36b09906b3d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_6d545df9186b55bc858bf5b56bbcc717, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_described_var_template", method_pointer_41cfd74555d85190b8be27eef234d75d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_instantiated_from_static_data_member", method_pointer_802994aa688b56ecba2155b241957383, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_out_of_line_definition", method_pointer_7ad8bb456e8d58698714ebc26f4be739, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_external_storage", method_pointer_b377ba18308b59b8a72f86e23b1ca518, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_global_storage", method_pointer_6f5b9906c49a5dfcbb08655d4e5c5778, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_init", method_pointer_adc0394faa295f61bdae772224594322, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_local_storage", method_pointer_1cf61cad15355ff9a24dc88faa2776c0, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_arc_pseudo_strong", method_pointer_ce8a1fae84585e3fa754ddad4b5132b9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_cxx_for_range_decl", method_pointer_76e8348f571f5ce7b70c322264c776e9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_concept", method_pointer_73aa0551cf5d5e55a6105c301ea2587f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_constexpr", method_pointer_89fb8aa881d5503489b1379827000355, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_direct_init", method_pointer_2a1354c01921544b9848ea12f93d04d7, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_exception_variable", method_pointer_39904903ca2c53ef934fdf0c1475287b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_extern_c", method_pointer_12ba08b5737e54548aca6e3cce551cfc, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_file_var_decl", method_pointer_5733053f44f0520dbbb25f76e0bdb306, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_function_or_method_var_decl", method_pointer_3c5795d4d43f5b65b70f7cbd071ac302, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_c_context", method_pointer_0298f2124d095c8c85009dd293a56562, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_cxx_context", method_pointer_b255d3b5f4795714afc354a67fbba86b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_capture", method_pointer_6b3184bc397c51c7a20492b1fbf8dbc8, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_ice", method_pointer_84527b2fabc15c7a82b7de0103d60941, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_known_ice", method_pointer_a78f2ae1570056ab89513cc6f61931f0, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl", method_pointer_87b9984971b9585298bb82de412eb6b3, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl_or_parm", method_pointer_8ff3b7a7a1ae5db6a249d838dc01f8e6, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_nrvo_variable", method_pointer_063e2347cda15ad1a02dc6e0946039f0, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_out_of_line", method_pointer_13b7ff2d43845f579fd22ceb81403125, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_previous_decl_in_same_block_scope", method_pointer_579d07a523ee511f857a5b81724d4e13, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_data_member", method_pointer_ca78234a8bea511285668258eba7b12b, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_local", method_pointer_df9fdbfd27745cf7afef62dccfcd9593, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_usable_in_constant_expressions", method_pointer_32a5336df24e501293c2189b67ee42cf, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_arc_pseudo_strong", method_pointer_f54fc967570f591b9744aeaf0c8aa956, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_cxx_for_range_decl", method_pointer_0e60c5a0fd555772b32bc45b82f129b8, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_concept", method_pointer_76551876558855fe8f6ba16477211ef3, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_constexpr", method_pointer_e7e934a02a5051c485bfd5b70632f6eb, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_described_var_template", method_pointer_91f425c2f4895bd1bb9b2cfa451b20bd, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_exception_variable", method_pointer_313bcb306fa65b3b837acc0cdecb4b5f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_init_capture", method_pointer_dcb8f43306bd5a9a927b0a5cf0952183, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_nrvo_variable", method_pointer_deeb0f57340959dc9ac2e5be096f8c7e, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_previous_decl_in_same_block_scope", method_pointer_0e52e0c1fde350ffa24876930ccda727, "");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof_kind");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("create_deserialized");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}