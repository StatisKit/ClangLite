#include "_clanglite.h"

void  (::clang::FunctionTemplateDecl::*method_pointer_07e658462c875c48a75cf9c1fe151a87)()const= &::clang::FunctionTemplateDecl::LoadLazySpecializations;
class ::clang::FunctionDecl * (::clang::FunctionTemplateDecl::*method_pointer_8b97df53407b512bb7ae6d8038314a0b)()const= &::clang::FunctionTemplateDecl::getTemplatedDecl;
bool  (::clang::FunctionTemplateDecl::*method_pointer_741f0e28617353cc9cab5887153792f7)()const= &::clang::FunctionTemplateDecl::isThisDeclarationADefinition;
class ::clang::FunctionTemplateDecl * (::clang::FunctionTemplateDecl::*method_pointer_1e69ff3aa9ea587a8991aa70d447c8a0)()= &::clang::FunctionTemplateDecl::getCanonicalDecl;
class ::clang::FunctionTemplateDecl const * (::clang::FunctionTemplateDecl::*method_pointer_7a8d1a99c0b75186b999aa13fb702162)()const= &::clang::FunctionTemplateDecl::getCanonicalDecl;
class ::clang::FunctionTemplateDecl * (::clang::FunctionTemplateDecl::*method_pointer_6447bed6e7f75a93b3237a5937ce1361)()= &::clang::FunctionTemplateDecl::getPreviousDecl;
class ::clang::FunctionTemplateDecl const * (::clang::FunctionTemplateDecl::*method_pointer_b6cb4f42097a5ee6a79912493be9f6d6)()const= &::clang::FunctionTemplateDecl::getPreviousDecl;
class ::clang::FunctionTemplateDecl * (::clang::FunctionTemplateDecl::*method_pointer_c831a976e0995c66bda3f276fa7bfde9)()= &::clang::FunctionTemplateDecl::getMostRecentDecl;
class ::clang::FunctionTemplateDecl const * (::clang::FunctionTemplateDecl::*method_pointer_f6dc8290c58a55e3bb72dc50a8436b91)()const= &::clang::FunctionTemplateDecl::getMostRecentDecl;
class ::clang::FunctionTemplateDecl * (::clang::FunctionTemplateDecl::*method_pointer_d9c33e789b66576290fc99749a1d9db2)()const= &::clang::FunctionTemplateDecl::getInstantiatedFromMemberTemplate;
class ::clang::FunctionTemplateDecl * (*method_pointer_1aa0bf8c011d52918b3086f3b387fbfc)(class ::clang::ASTContext &, unsigned int )= ::clang::FunctionTemplateDecl::CreateDeserialized;
bool  (*method_pointer_ec8e2de8b65d5585bf38a81b41501d30)(class ::clang::Decl const *)= ::clang::FunctionTemplateDecl::classof;
bool  (*method_pointer_75074d7c261e514fad79157b259a6074)(enum ::clang::Decl::Kind )= ::clang::FunctionTemplateDecl::classofKind;


void wrapper_170cacd8da615406967b5b7d712829ee(pybind11::module& module)
{

    pybind11::class_<class ::clang::FunctionTemplateDecl, autowig::HolderType< class ::clang::FunctionTemplateDecl >::Type, class ::clang::RedeclarableTemplateDecl > class_170cacd8da615406967b5b7d712829ee(module, "FunctionTemplateDecl", "");
    class_170cacd8da615406967b5b7d712829ee.def("load_lazy_specializations", method_pointer_07e658462c875c48a75cf9c1fe151a87, "Load any lazily-loaded specializations from the external source.\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_170cacd8da615406967b5b7d712829ee.def("get_templated_decl", method_pointer_8b97df53407b512bb7ae6d8038314a0b, pybind11::return_value_policy::reference_internal, ":Return Type:\n    :cpp:class:`::clang::FunctionDecl`\n\n");
    class_170cacd8da615406967b5b7d712829ee.def("is_this_declaration_a_definition", method_pointer_741f0e28617353cc9cab5887153792f7, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_170cacd8da615406967b5b7d712829ee.def("get_canonical_decl", method_pointer_1e69ff3aa9ea587a8991aa70d447c8a0, pybind11::return_value_policy::reference_internal, "");
    class_170cacd8da615406967b5b7d712829ee.def("get_canonical_decl", method_pointer_7a8d1a99c0b75186b999aa13fb702162, pybind11::return_value_policy::reference_internal, "");
    class_170cacd8da615406967b5b7d712829ee.def("get_previous_decl", method_pointer_6447bed6e7f75a93b3237a5937ce1361, pybind11::return_value_policy::reference_internal, "Retrieve the previous declaration of this function template, or NULL if\nno such declaration exists.\n\n:Return Type:\n    :cpp:class:`::clang::FunctionTemplateDecl`\n\n");
    class_170cacd8da615406967b5b7d712829ee.def("get_previous_decl", method_pointer_b6cb4f42097a5ee6a79912493be9f6d6, pybind11::return_value_policy::reference_internal, "Retrieve the previous declaration of this function template, or NULL if\nno such declaration exists.\n\n:Return Type:\n    :cpp:class:`::clang::FunctionTemplateDecl`\n\n");
    class_170cacd8da615406967b5b7d712829ee.def("get_most_recent_decl", method_pointer_c831a976e0995c66bda3f276fa7bfde9, pybind11::return_value_policy::reference_internal, "");
    class_170cacd8da615406967b5b7d712829ee.def("get_most_recent_decl", method_pointer_f6dc8290c58a55e3bb72dc50a8436b91, pybind11::return_value_policy::reference_internal, "");
    class_170cacd8da615406967b5b7d712829ee.def("get_instantiated_from_member_template", method_pointer_d9c33e789b66576290fc99749a1d9db2, pybind11::return_value_policy::reference_internal, "");
    class_170cacd8da615406967b5b7d712829ee.def_static("create_deserialized", method_pointer_1aa0bf8c011d52918b3086f3b387fbfc, pybind11::return_value_policy::reference_internal, "Create an empty function template node.\n\n:Parameters:\n  - `C` (:cpp:class:`::clang::ASTContext`) - Undocumented\n  - `ID` (:cpp:any:`unsigned` int) - Undocumented\n\n:Return Type:\n    :cpp:class:`::clang::FunctionTemplateDecl`\n\n");
    class_170cacd8da615406967b5b7d712829ee.def_static("classof", method_pointer_ec8e2de8b65d5585bf38a81b41501d30, "");
    class_170cacd8da615406967b5b7d712829ee.def_static("classof_kind", method_pointer_75074d7c261e514fad79157b259a6074, "");

}