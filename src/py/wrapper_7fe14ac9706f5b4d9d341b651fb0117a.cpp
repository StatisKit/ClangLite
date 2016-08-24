#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_7fe14ac9706f5b4d9d341b651fb0117a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TagDecl  * (*method_pointer_7ff9cf9a45b4521a8127344c3069c107)(class ::clang::DeclContext  const *) = ::clang::TagDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_80b0a7b23e54515b91a38164461a5d35)(class ::clang::TagDecl  const *) = ::clang::TagDecl::castToDeclContext;
    bool  (*method_pointer_f83bf079772755729e34c8e8f0436489)(class ::clang::Decl  const *) = ::clang::TagDecl::classof;
    bool  (*method_pointer_3b4602c00f075c9997070257e746b37e)(enum ::clang::Decl::Kind ) = ::clang::TagDecl::classofKind;
    class ::clang::TagDecl  const * (::clang::TagDecl::*method_pointer_b3681e5b10fe556abd9ae00afcb4b1c5)() const = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_74c50f4f472a5cfeb53d743acf4a9920)() = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_7f644be59a4c5e39b5dd90931156d44b)() const = &::clang::TagDecl::getDefinition;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_92eb8851df375026a139eb6d73109fc1)() const = &::clang::TagDecl::getInnerLocStart;
    class ::llvm::StringRef  (::clang::TagDecl::*method_pointer_e7a2620f0a04567680ff90de2249e18b)() const = &::clang::TagDecl::getKindName;
    unsigned int  (::clang::TagDecl::*method_pointer_6f131ab6f54f504fbb470c71f82bf79c)() const = &::clang::TagDecl::getNumTemplateParameterLists;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_b9c101846e3c525d85ffd9d00f5ec8d5)() const = &::clang::TagDecl::getOuterLocStart;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_c34282bf5802505c92e03025efe13365)() const = &::clang::TagDecl::getRBraceLoc;
    class ::clang::TypedefNameDecl  * (::clang::TagDecl::*method_pointer_799d50d241dd5259be57413f5566980a)() const = &::clang::TagDecl::getTypedefNameForAnonDecl;
    bool  (::clang::TagDecl::*method_pointer_f0f420f02d9d5c7e809325491744c6dc)() const = &::clang::TagDecl::hasNameForLinkage;
    bool  (::clang::TagDecl::*method_pointer_3bd66666c3205a159c2e4560265d7eb9)() const = &::clang::TagDecl::isBeingDefined;
    bool  (::clang::TagDecl::*method_pointer_83a3e2ce6f1a55fca02c42b9ff1d5a46)() const = &::clang::TagDecl::isClass;
    bool  (::clang::TagDecl::*method_pointer_3752072ee4255ae8832a67fc8f0c807e)() const = &::clang::TagDecl::isCompleteDefinition;
    bool  (::clang::TagDecl::*method_pointer_c7a2cf9b8a5558f5a9b061ccdcc6f74b)() const = &::clang::TagDecl::isCompleteDefinitionRequired;
    bool  (::clang::TagDecl::*method_pointer_dc14b46b7bb2588b879916bfa60ff332)() const = &::clang::TagDecl::isDependentType;
    bool  (::clang::TagDecl::*method_pointer_71453b5c00165e2eb00400461a4aa9d3)() const = &::clang::TagDecl::isEmbeddedInDeclarator;
    bool  (::clang::TagDecl::*method_pointer_a45f6ca4b6655bf6998dda005e337a39)() const = &::clang::TagDecl::isEnum;
    bool  (::clang::TagDecl::*method_pointer_2c841c851da354e683431f3dd5c612d8)() const = &::clang::TagDecl::isFreeStanding;
    bool  (::clang::TagDecl::*method_pointer_59157fb33db85a5386297f47d6caa2bf)() const = &::clang::TagDecl::isInterface;
    bool  (::clang::TagDecl::*method_pointer_d8994f4a238e505d95a2215e5d9b1392)() const = &::clang::TagDecl::isStruct;
    bool  (::clang::TagDecl::*method_pointer_279e8daacd3f54f78df252c8301e8bf8)() const = &::clang::TagDecl::isThisDeclarationADefinition;
    bool  (::clang::TagDecl::*method_pointer_0bdd372a29f35a079559cfd1358139d6)() const = &::clang::TagDecl::isUnion;
    void  (::clang::TagDecl::*method_pointer_074184cb05f050caa27a356b89f60c91)(bool ) = &::clang::TagDecl::setCompleteDefinition;
    void  (::clang::TagDecl::*method_pointer_9ce2631cc1dd5ef09ae6d75c86e3007c)(bool ) = &::clang::TagDecl::setCompleteDefinitionRequired;
    void  (::clang::TagDecl::*method_pointer_5c0c4dd3a3bd51f09c32054c6417b17b)(bool ) = &::clang::TagDecl::setEmbeddedInDeclarator;
    void  (::clang::TagDecl::*method_pointer_f65d7430c81b52cabe43b685e8cd020d)(bool ) = &::clang::TagDecl::setFreeStanding;
    void  (::clang::TagDecl::*method_pointer_326847c4a634554ca4b8bf905b5536e6)(class ::clang::SourceLocation ) = &::clang::TagDecl::setRBraceLoc;
    void  (::clang::TagDecl::*method_pointer_10b5655fbb58534fa9e906cd2c5f37d5)(class ::clang::TypedefNameDecl  *) = &::clang::TagDecl::setTypedefNameForAnonDecl;
    void  (::clang::TagDecl::*method_pointer_b031999f0fdb5ea4abfc2655b19baac3)() = &::clang::TagDecl::startDefinition;
    boost::python::class_< class ::clang::TagDecl, autowig::HeldType< class ::clang::TagDecl >, boost::python::bases< class ::clang::TypeDecl, class ::clang::DeclContext >, boost::noncopyable > class_7fe14ac9706f5b4d9d341b651fb0117a("TagDecl", "", boost::python::no_init);
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_from_decl_context", method_pointer_7ff9cf9a45b4521a8127344c3069c107, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_to_decl_context", method_pointer_80b0a7b23e54515b91a38164461a5d35, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof", method_pointer_f83bf079772755729e34c8e8f0436489, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof_kind", method_pointer_3b4602c00f075c9997070257e746b37e, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_b3681e5b10fe556abd9ae00afcb4b1c5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_74c50f4f472a5cfeb53d743acf4a9920, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_definition", method_pointer_7f644be59a4c5e39b5dd90931156d44b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_inner_loc_start", method_pointer_92eb8851df375026a139eb6d73109fc1, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_kind_name", method_pointer_e7a2620f0a04567680ff90de2249e18b, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_num_template_parameter_lists", method_pointer_6f131ab6f54f504fbb470c71f82bf79c, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_outer_loc_start", method_pointer_b9c101846e3c525d85ffd9d00f5ec8d5, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_r_brace_loc", method_pointer_c34282bf5802505c92e03025efe13365, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_typedef_name_for_anon_decl", method_pointer_799d50d241dd5259be57413f5566980a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("has_name_for_linkage", method_pointer_f0f420f02d9d5c7e809325491744c6dc, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_being_defined", method_pointer_3bd66666c3205a159c2e4560265d7eb9, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_class", method_pointer_83a3e2ce6f1a55fca02c42b9ff1d5a46, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition", method_pointer_3752072ee4255ae8832a67fc8f0c807e, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition_required", method_pointer_c7a2cf9b8a5558f5a9b061ccdcc6f74b, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_dependent_type", method_pointer_dc14b46b7bb2588b879916bfa60ff332, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_embedded_in_declarator", method_pointer_71453b5c00165e2eb00400461a4aa9d3, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_enum", method_pointer_a45f6ca4b6655bf6998dda005e337a39, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_free_standing", method_pointer_2c841c851da354e683431f3dd5c612d8, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_interface", method_pointer_59157fb33db85a5386297f47d6caa2bf, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_struct", method_pointer_d8994f4a238e505d95a2215e5d9b1392, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_this_declaration_a_definition", method_pointer_279e8daacd3f54f78df252c8301e8bf8, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_union", method_pointer_0bdd372a29f35a079559cfd1358139d6, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition", method_pointer_074184cb05f050caa27a356b89f60c91, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition_required", method_pointer_9ce2631cc1dd5ef09ae6d75c86e3007c, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_embedded_in_declarator", method_pointer_5c0c4dd3a3bd51f09c32054c6417b17b, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_free_standing", method_pointer_f65d7430c81b52cabe43b685e8cd020d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_r_brace_loc", method_pointer_326847c4a634554ca4b8bf905b5536e6, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_typedef_name_for_anon_decl", method_pointer_10b5655fbb58534fa9e906cd2c5f37d5, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("start_definition", method_pointer_b031999f0fdb5ea4abfc2655b19baac3, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.staticmethod("classof_kind");
    class_7fe14ac9706f5b4d9d341b651fb0117a.staticmethod("classof");
    class_7fe14ac9706f5b4d9d341b651fb0117a.staticmethod("cast_from_decl_context");
    class_7fe14ac9706f5b4d9d341b651fb0117a.staticmethod("cast_to_decl_context");

    if(std::is_class< autowig::HeldType< class ::clang::TagDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TagDecl >, autowig::HeldType< class ::clang::TypeDecl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TagDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}