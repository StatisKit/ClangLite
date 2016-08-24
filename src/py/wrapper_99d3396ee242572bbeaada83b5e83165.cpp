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
    class ::clang::VarDecl  * (*method_pointer_701cd3f91ae959dfa873d938205a991f)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarDecl::CreateDeserialized;
    bool  (::clang::VarDecl::*method_pointer_d0568e189d1b5304801410c94aa16e38)() const = &::clang::VarDecl::checkInitIsICE;
    bool  (*method_pointer_4d63437efcb55a999593ceaa39c20361)(class ::clang::Decl  const *) = ::clang::VarDecl::classof;
    bool  (*method_pointer_6f3d096def3851b2afdf4e6b083022c3)(enum ::clang::Decl::Kind ) = ::clang::VarDecl::classofKind;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_0846c47baf265be7af9a5ec443dabebc)() const = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_86b293379fa555cea3bca0b1e2800edd)() = &::clang::VarDecl::getActingDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_b41509b5164755539ba11d6b8c9f36ea)() const = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_88a91633043b5d2ea9299b3f74798b2e)() = &::clang::VarDecl::getCanonicalDecl;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_3ca7fa68265953609a30c3dc383e9582)(class ::clang::ASTContext  &) = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_66b27484c31657f08ddf45f9e3e9a510)(class ::clang::ASTContext  &) const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  const * (::clang::VarDecl::*method_pointer_cb06a741527250a39e8349e92e19b7f4)() const = &::clang::VarDecl::getDefinition;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_3784f978eef758c886a41f144858ed41)() = &::clang::VarDecl::getDefinition;
    class ::clang::VarTemplateDecl  * (::clang::VarDecl::*method_pointer_5be5402fbcf45984ab551626ada393d6)() const = &::clang::VarDecl::getDescribedVarTemplate;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_4d7f47a5ca235256a9603752a5683369)() const = &::clang::VarDecl::getInstantiatedFromStaticDataMember;
    class ::clang::VarDecl  * (::clang::VarDecl::*method_pointer_8e9bcdfd8778501e86b1056c57c7b735)() = &::clang::VarDecl::getOutOfLineDefinition;
    class ::clang::SourceLocation  (::clang::VarDecl::*method_pointer_690008106f9a55fba0ed909d722ce661)() const = &::clang::VarDecl::getPointOfInstantiation;
    bool  (::clang::VarDecl::*method_pointer_fbccd767c8eb5383b546e55f57653cff)() const = &::clang::VarDecl::hasExternalStorage;
    bool  (::clang::VarDecl::*method_pointer_5d93b3e43af1563db40b20aca4d2f0bf)() const = &::clang::VarDecl::hasGlobalStorage;
    bool  (::clang::VarDecl::*method_pointer_caa105e9df9e53749cd7b4e9575d1c83)() const = &::clang::VarDecl::hasInit;
    bool  (::clang::VarDecl::*method_pointer_13a122a16bce5e3d8d31d55d45baebd0)() const = &::clang::VarDecl::hasLocalStorage;
    bool  (::clang::VarDecl::*method_pointer_635efbbc05d55a798a1865768717efe7)() const = &::clang::VarDecl::isARCPseudoStrong;
    bool  (::clang::VarDecl::*method_pointer_e0a030ade9f95ef9a5fd6f7acb186b86)() const = &::clang::VarDecl::isCXXForRangeDecl;
    bool  (::clang::VarDecl::*method_pointer_c4d801866fa75e65b1b7fc874a936299)() const = &::clang::VarDecl::isConcept;
    bool  (::clang::VarDecl::*method_pointer_5db5700270c55e619fdc46d4c813e4c1)() const = &::clang::VarDecl::isConstexpr;
    bool  (::clang::VarDecl::*method_pointer_1d195439ef995cf096782ad7cf7a554c)() const = &::clang::VarDecl::isDirectInit;
    bool  (::clang::VarDecl::*method_pointer_3a9ee720d2e956d0936aa0177ae83076)() const = &::clang::VarDecl::isExceptionVariable;
    bool  (::clang::VarDecl::*method_pointer_6189e59bf2ba5b258bd2b45052c78b3d)() const = &::clang::VarDecl::isExternC;
    bool  (::clang::VarDecl::*method_pointer_f58067515a2653f389e23ff67265dca3)() const = &::clang::VarDecl::isFileVarDecl;
    bool  (::clang::VarDecl::*method_pointer_2a9c38ec153557e99acdcf5562d1fecb)() const = &::clang::VarDecl::isFunctionOrMethodVarDecl;
    bool  (::clang::VarDecl::*method_pointer_d3c6e174d9b954709f215155e5ff83d7)() const = &::clang::VarDecl::isInExternCContext;
    bool  (::clang::VarDecl::*method_pointer_4ba83fd34d6655edb58b8fc849ef41c0)() const = &::clang::VarDecl::isInExternCXXContext;
    bool  (::clang::VarDecl::*method_pointer_7d8dd30f97e251278b7113a725f2d6c7)() const = &::clang::VarDecl::isInitCapture;
    bool  (::clang::VarDecl::*method_pointer_d27e9a09a4cb59caaf534d533b9bb6a4)() const = &::clang::VarDecl::isInitICE;
    bool  (::clang::VarDecl::*method_pointer_6fa7a45b4dc558e4bc9a98de22791c5a)() const = &::clang::VarDecl::isInitKnownICE;
    bool  (::clang::VarDecl::*method_pointer_8caf76cb2ac05363a076e58e570fde79)() const = &::clang::VarDecl::isLocalVarDecl;
    bool  (::clang::VarDecl::*method_pointer_16fa56e16c4f5f55b70f0c1bf755eed8)() const = &::clang::VarDecl::isLocalVarDeclOrParm;
    bool  (::clang::VarDecl::*method_pointer_02777e1062805bd5bdbca10aa16eab15)() const = &::clang::VarDecl::isNRVOVariable;
    bool  (::clang::VarDecl::*method_pointer_e973114b81005b22a0f764c75bf2dcb1)() const = &::clang::VarDecl::isOutOfLine;
    bool  (::clang::VarDecl::*method_pointer_bf55905b2f4d59fcb59474e0eeb16caa)() const = &::clang::VarDecl::isPreviousDeclInSameBlockScope;
    bool  (::clang::VarDecl::*method_pointer_ba3b6ac5af1859ae87c98b0bdf749762)() const = &::clang::VarDecl::isStaticDataMember;
    bool  (::clang::VarDecl::*method_pointer_963d463262315679813643ac75e64b9f)() const = &::clang::VarDecl::isStaticLocal;
    bool  (::clang::VarDecl::*method_pointer_f24972cc731d5fcb9fb7497fa67d6057)(class ::clang::ASTContext  &) const = &::clang::VarDecl::isUsableInConstantExpressions;
    void  (::clang::VarDecl::*method_pointer_536f915fed785028a4dc45df138e6211)(bool ) = &::clang::VarDecl::setARCPseudoStrong;
    void  (::clang::VarDecl::*method_pointer_85508126e3c555ef824e5afb9250d0e9)(bool ) = &::clang::VarDecl::setCXXForRangeDecl;
    void  (::clang::VarDecl::*method_pointer_a47efdda39295ae2ac2d426600b728d2)(bool ) = &::clang::VarDecl::setConcept;
    void  (::clang::VarDecl::*method_pointer_e39d1e2600b656aa89bf258e2b917494)(bool ) = &::clang::VarDecl::setConstexpr;
    void  (::clang::VarDecl::*method_pointer_a55dbefb55ae5b4391099d20b11f8593)(class ::clang::VarTemplateDecl  *) = &::clang::VarDecl::setDescribedVarTemplate;
    void  (::clang::VarDecl::*method_pointer_42f08a17e2f65f27a22ba1869cb87a8a)(bool ) = &::clang::VarDecl::setExceptionVariable;
    void  (::clang::VarDecl::*method_pointer_625a83e9ed1657c18804e8dad11c51f3)(bool ) = &::clang::VarDecl::setInitCapture;
    void  (::clang::VarDecl::*method_pointer_35b7bbf631225ec382c56bf6d58d02d3)(bool ) = &::clang::VarDecl::setNRVOVariable;
    void  (::clang::VarDecl::*method_pointer_bb83b87f408f5ba395ebc6df01be4dba)(bool ) = &::clang::VarDecl::setPreviousDeclInSameBlockScope;
    boost::python::class_< class ::clang::VarDecl, autowig::HeldType< class ::clang::VarDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_99d3396ee242572bbeaada83b5e83165("VarDecl", "", boost::python::no_init);
    class_99d3396ee242572bbeaada83b5e83165.def("create_deserialized", method_pointer_701cd3f91ae959dfa873d938205a991f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("check_init_is_ice", method_pointer_d0568e189d1b5304801410c94aa16e38, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof", method_pointer_4d63437efcb55a999593ceaa39c20361, "");
    class_99d3396ee242572bbeaada83b5e83165.def("classof_kind", method_pointer_6f3d096def3851b2afdf4e6b083022c3, "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_0846c47baf265be7af9a5ec443dabebc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_acting_definition", method_pointer_86b293379fa555cea3bca0b1e2800edd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_b41509b5164755539ba11d6b8c9f36ea, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_canonical_decl", method_pointer_88a91633043b5d2ea9299b3f74798b2e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_3ca7fa68265953609a30c3dc383e9582, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_66b27484c31657f08ddf45f9e3e9a510, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_cb06a741527250a39e8349e92e19b7f4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_definition", method_pointer_3784f978eef758c886a41f144858ed41, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_described_var_template", method_pointer_5be5402fbcf45984ab551626ada393d6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_instantiated_from_static_data_member", method_pointer_4d7f47a5ca235256a9603752a5683369, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_out_of_line_definition", method_pointer_8e9bcdfd8778501e86b1056c57c7b735, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_99d3396ee242572bbeaada83b5e83165.def("get_point_of_instantiation", method_pointer_690008106f9a55fba0ed909d722ce661, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_external_storage", method_pointer_fbccd767c8eb5383b546e55f57653cff, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_global_storage", method_pointer_5d93b3e43af1563db40b20aca4d2f0bf, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_init", method_pointer_caa105e9df9e53749cd7b4e9575d1c83, "");
    class_99d3396ee242572bbeaada83b5e83165.def("has_local_storage", method_pointer_13a122a16bce5e3d8d31d55d45baebd0, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_arc_pseudo_strong", method_pointer_635efbbc05d55a798a1865768717efe7, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_cxx_for_range_decl", method_pointer_e0a030ade9f95ef9a5fd6f7acb186b86, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_concept", method_pointer_c4d801866fa75e65b1b7fc874a936299, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_constexpr", method_pointer_5db5700270c55e619fdc46d4c813e4c1, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_direct_init", method_pointer_1d195439ef995cf096782ad7cf7a554c, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_exception_variable", method_pointer_3a9ee720d2e956d0936aa0177ae83076, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_extern_c", method_pointer_6189e59bf2ba5b258bd2b45052c78b3d, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_file_var_decl", method_pointer_f58067515a2653f389e23ff67265dca3, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_function_or_method_var_decl", method_pointer_2a9c38ec153557e99acdcf5562d1fecb, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_c_context", method_pointer_d3c6e174d9b954709f215155e5ff83d7, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_in_extern_cxx_context", method_pointer_4ba83fd34d6655edb58b8fc849ef41c0, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_capture", method_pointer_7d8dd30f97e251278b7113a725f2d6c7, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_ice", method_pointer_d27e9a09a4cb59caaf534d533b9bb6a4, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_init_known_ice", method_pointer_6fa7a45b4dc558e4bc9a98de22791c5a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl", method_pointer_8caf76cb2ac05363a076e58e570fde79, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_local_var_decl_or_parm", method_pointer_16fa56e16c4f5f55b70f0c1bf755eed8, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_nrvo_variable", method_pointer_02777e1062805bd5bdbca10aa16eab15, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_out_of_line", method_pointer_e973114b81005b22a0f764c75bf2dcb1, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_previous_decl_in_same_block_scope", method_pointer_bf55905b2f4d59fcb59474e0eeb16caa, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_data_member", method_pointer_ba3b6ac5af1859ae87c98b0bdf749762, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_static_local", method_pointer_963d463262315679813643ac75e64b9f, "");
    class_99d3396ee242572bbeaada83b5e83165.def("is_usable_in_constant_expressions", method_pointer_f24972cc731d5fcb9fb7497fa67d6057, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_arc_pseudo_strong", method_pointer_536f915fed785028a4dc45df138e6211, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_cxx_for_range_decl", method_pointer_85508126e3c555ef824e5afb9250d0e9, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_concept", method_pointer_a47efdda39295ae2ac2d426600b728d2, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_constexpr", method_pointer_e39d1e2600b656aa89bf258e2b917494, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_described_var_template", method_pointer_a55dbefb55ae5b4391099d20b11f8593, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_exception_variable", method_pointer_42f08a17e2f65f27a22ba1869cb87a8a, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_init_capture", method_pointer_625a83e9ed1657c18804e8dad11c51f3, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_nrvo_variable", method_pointer_35b7bbf631225ec382c56bf6d58d02d3, "");
    class_99d3396ee242572bbeaada83b5e83165.def("set_previous_decl_in_same_block_scope", method_pointer_bb83b87f408f5ba395ebc6df01be4dba, "");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof_kind");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("create_deserialized");
    class_99d3396ee242572bbeaada83b5e83165.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}