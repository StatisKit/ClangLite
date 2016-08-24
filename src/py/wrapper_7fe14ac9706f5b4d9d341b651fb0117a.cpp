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
    class ::clang::TagDecl  * (*method_pointer_25f1e9a642af5499b6c97d33b8abb08a)(class ::clang::DeclContext  const *) = ::clang::TagDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_30ff4a57fcfe5d679306a9368442d85c)(class ::clang::TagDecl  const *) = ::clang::TagDecl::castToDeclContext;
    bool  (*method_pointer_7c0101274a005903bdf6cd88a7fbbd6c)(class ::clang::Decl  const *) = ::clang::TagDecl::classof;
    bool  (*method_pointer_e14f537657ec59df8ea4c40a494b68f7)(enum ::clang::Decl::Kind ) = ::clang::TagDecl::classofKind;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_5391b1678dc450b6b37e903a69511d27)() = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  const * (::clang::TagDecl::*method_pointer_582c242e5e0e5d3ba333a7671cdc666a)() const = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_93f84c875baa5887827531be1a8ea5ac)() const = &::clang::TagDecl::getDefinition;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_8d665d9fbce55d5ab88e2df989e8b73e)() const = &::clang::TagDecl::getInnerLocStart;
    class ::llvm::StringRef  (::clang::TagDecl::*method_pointer_8993cf09a76858e9944d856912468d09)() const = &::clang::TagDecl::getKindName;
    unsigned int  (::clang::TagDecl::*method_pointer_49ca3224f07256409dc04b1d6a7cb89d)() const = &::clang::TagDecl::getNumTemplateParameterLists;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_b876995a74795fbca31391c4c1ee3faf)() const = &::clang::TagDecl::getOuterLocStart;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_b5ae7664a03d52d0a401ed32ac2c014e)() const = &::clang::TagDecl::getRBraceLoc;
    class ::clang::TypedefNameDecl  * (::clang::TagDecl::*method_pointer_36023ab18dd15f9cb16b21a170a2def7)() const = &::clang::TagDecl::getTypedefNameForAnonDecl;
    bool  (::clang::TagDecl::*method_pointer_ae00492d2a31574ebe86db7824e4e906)() const = &::clang::TagDecl::hasNameForLinkage;
    bool  (::clang::TagDecl::*method_pointer_eabab884047c509db8949e62a9577e7c)() const = &::clang::TagDecl::isBeingDefined;
    bool  (::clang::TagDecl::*method_pointer_87a26e58281c597e94cad0a5bf565445)() const = &::clang::TagDecl::isClass;
    bool  (::clang::TagDecl::*method_pointer_ffbfe6be98fb58979e720734229c6396)() const = &::clang::TagDecl::isCompleteDefinition;
    bool  (::clang::TagDecl::*method_pointer_f2a488d2d2da5723ae6b52190bc1ddf0)() const = &::clang::TagDecl::isCompleteDefinitionRequired;
    bool  (::clang::TagDecl::*method_pointer_8fa6f23e64ad5e62ab7e00f096bc89c2)() const = &::clang::TagDecl::isDependentType;
    bool  (::clang::TagDecl::*method_pointer_d019fa3e7e4a5f759a15fc0787813808)() const = &::clang::TagDecl::isEmbeddedInDeclarator;
    bool  (::clang::TagDecl::*method_pointer_13b0cf588b9252a19c3dd26f6cbdb526)() const = &::clang::TagDecl::isEnum;
    bool  (::clang::TagDecl::*method_pointer_8c5d62a205655db68a6e054bfdb55359)() const = &::clang::TagDecl::isFreeStanding;
    bool  (::clang::TagDecl::*method_pointer_62cea258cdb15e97bddecba0538b984a)() const = &::clang::TagDecl::isInterface;
    bool  (::clang::TagDecl::*method_pointer_033ff14365415108af22508115fa6e0d)() const = &::clang::TagDecl::isStruct;
    bool  (::clang::TagDecl::*method_pointer_55b47e9fece851efbc23955c3d5cbd1e)() const = &::clang::TagDecl::isThisDeclarationADefinition;
    bool  (::clang::TagDecl::*method_pointer_5b0aa2aa7aa7501cbad9086f29e1cab6)() const = &::clang::TagDecl::isUnion;
    void  (::clang::TagDecl::*method_pointer_2d09fabc74d758c985cea2be3c223628)(bool ) = &::clang::TagDecl::setCompleteDefinition;
    void  (::clang::TagDecl::*method_pointer_75c1331e9585516ba926e885cab666a9)(bool ) = &::clang::TagDecl::setCompleteDefinitionRequired;
    void  (::clang::TagDecl::*method_pointer_ae6f935db9c55804a3d96bc7da00c7fa)(bool ) = &::clang::TagDecl::setEmbeddedInDeclarator;
    void  (::clang::TagDecl::*method_pointer_d097a2e85db65e00a4f9d7a6982806f7)(bool ) = &::clang::TagDecl::setFreeStanding;
    void  (::clang::TagDecl::*method_pointer_2aaad254efac5235abc709041cfeb666)(class ::clang::SourceLocation ) = &::clang::TagDecl::setRBraceLoc;
    void  (::clang::TagDecl::*method_pointer_0c183d547ebe565f8ca98f25dac47901)(class ::clang::TypedefNameDecl  *) = &::clang::TagDecl::setTypedefNameForAnonDecl;
    void  (::clang::TagDecl::*method_pointer_3de8739a02d456d29c545d0b2be7e540)() = &::clang::TagDecl::startDefinition;
    boost::python::class_< class ::clang::TagDecl, autowig::HeldType< class ::clang::TagDecl >, boost::python::bases< class ::clang::TypeDecl, class ::clang::DeclContext >, boost::noncopyable > class_7fe14ac9706f5b4d9d341b651fb0117a("TagDecl", "", boost::python::no_init);
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_from_decl_context", method_pointer_25f1e9a642af5499b6c97d33b8abb08a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_to_decl_context", method_pointer_30ff4a57fcfe5d679306a9368442d85c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof", method_pointer_7c0101274a005903bdf6cd88a7fbbd6c, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof_kind", method_pointer_e14f537657ec59df8ea4c40a494b68f7, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_5391b1678dc450b6b37e903a69511d27, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_582c242e5e0e5d3ba333a7671cdc666a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_definition", method_pointer_93f84c875baa5887827531be1a8ea5ac, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_inner_loc_start", method_pointer_8d665d9fbce55d5ab88e2df989e8b73e, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_kind_name", method_pointer_8993cf09a76858e9944d856912468d09, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_num_template_parameter_lists", method_pointer_49ca3224f07256409dc04b1d6a7cb89d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_outer_loc_start", method_pointer_b876995a74795fbca31391c4c1ee3faf, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_r_brace_loc", method_pointer_b5ae7664a03d52d0a401ed32ac2c014e, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_typedef_name_for_anon_decl", method_pointer_36023ab18dd15f9cb16b21a170a2def7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("has_name_for_linkage", method_pointer_ae00492d2a31574ebe86db7824e4e906, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_being_defined", method_pointer_eabab884047c509db8949e62a9577e7c, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_class", method_pointer_87a26e58281c597e94cad0a5bf565445, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition", method_pointer_ffbfe6be98fb58979e720734229c6396, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition_required", method_pointer_f2a488d2d2da5723ae6b52190bc1ddf0, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_dependent_type", method_pointer_8fa6f23e64ad5e62ab7e00f096bc89c2, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_embedded_in_declarator", method_pointer_d019fa3e7e4a5f759a15fc0787813808, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_enum", method_pointer_13b0cf588b9252a19c3dd26f6cbdb526, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_free_standing", method_pointer_8c5d62a205655db68a6e054bfdb55359, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_interface", method_pointer_62cea258cdb15e97bddecba0538b984a, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_struct", method_pointer_033ff14365415108af22508115fa6e0d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_this_declaration_a_definition", method_pointer_55b47e9fece851efbc23955c3d5cbd1e, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_union", method_pointer_5b0aa2aa7aa7501cbad9086f29e1cab6, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition", method_pointer_2d09fabc74d758c985cea2be3c223628, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition_required", method_pointer_75c1331e9585516ba926e885cab666a9, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_embedded_in_declarator", method_pointer_ae6f935db9c55804a3d96bc7da00c7fa, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_free_standing", method_pointer_d097a2e85db65e00a4f9d7a6982806f7, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_r_brace_loc", method_pointer_2aaad254efac5235abc709041cfeb666, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_typedef_name_for_anon_decl", method_pointer_0c183d547ebe565f8ca98f25dac47901, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("start_definition", method_pointer_3de8739a02d456d29c545d0b2be7e540, "");
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