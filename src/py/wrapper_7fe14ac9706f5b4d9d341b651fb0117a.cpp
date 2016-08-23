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
    class ::clang::TagDecl  * (*method_pointer_7001572b90155bf3bc4c5945298b4b93)(class ::clang::DeclContext  const *) = ::clang::TagDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_497fddd7d20e51a9a389a893f85bd3c7)(class ::clang::TagDecl  const *) = ::clang::TagDecl::castToDeclContext;
    bool  (*method_pointer_0c218504e5425c6cb48ff9dec1d30f5e)(class ::clang::Decl  const *) = ::clang::TagDecl::classof;
    bool  (*method_pointer_fab24a108da35e279b84224556e92039)(enum ::clang::Decl::Kind ) = ::clang::TagDecl::classofKind;
    class ::clang::TagDecl  const * (::clang::TagDecl::*method_pointer_6ae45e50ce01564691a14a7a90fd4757)() const = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_1be6f4ca906a529482ffbfb550080026)() = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_d85e95c42b64565db76682372d832da2)() const = &::clang::TagDecl::getDefinition;
    unsigned int  (::clang::TagDecl::*method_pointer_47a62dfb98365192bff1cccc7b9a1ae2)() const = &::clang::TagDecl::getNumTemplateParameterLists;
    class ::clang::TypedefNameDecl  * (::clang::TagDecl::*method_pointer_871fd6c1f4805930bd45156640f07db5)() const = &::clang::TagDecl::getTypedefNameForAnonDecl;
    bool  (::clang::TagDecl::*method_pointer_5aea9db650e551a68e966917400e74ce)() const = &::clang::TagDecl::hasNameForLinkage;
    bool  (::clang::TagDecl::*method_pointer_d73766c8ca465da9bf6e76c730a23195)() const = &::clang::TagDecl::isBeingDefined;
    bool  (::clang::TagDecl::*method_pointer_22dd699cf0cc5ee3b26019edb7034d30)() const = &::clang::TagDecl::isClass;
    bool  (::clang::TagDecl::*method_pointer_2f1b67007ece5e9d812e1406e5a05e2f)() const = &::clang::TagDecl::isCompleteDefinition;
    bool  (::clang::TagDecl::*method_pointer_c50158909f87599ebcabd88dc8689114)() const = &::clang::TagDecl::isCompleteDefinitionRequired;
    bool  (::clang::TagDecl::*method_pointer_cb23d2571cfd5521b27f10674220754a)() const = &::clang::TagDecl::isDependentType;
    bool  (::clang::TagDecl::*method_pointer_7d8f53c596f359a6b7fd54cc1f13deac)() const = &::clang::TagDecl::isEmbeddedInDeclarator;
    bool  (::clang::TagDecl::*method_pointer_7561f1aecc3a568383eb43a8b7434fb6)() const = &::clang::TagDecl::isEnum;
    bool  (::clang::TagDecl::*method_pointer_fb12a29d634b5a4db7c07cc61041116e)() const = &::clang::TagDecl::isFreeStanding;
    bool  (::clang::TagDecl::*method_pointer_a60636c187bb5c0999420e704f929398)() const = &::clang::TagDecl::isInterface;
    bool  (::clang::TagDecl::*method_pointer_df5d60694cc25966b111be0aa1485936)() const = &::clang::TagDecl::isStruct;
    bool  (::clang::TagDecl::*method_pointer_30b3f0fab24f5066ab82f84ba72d20e9)() const = &::clang::TagDecl::isThisDeclarationADefinition;
    bool  (::clang::TagDecl::*method_pointer_93afd6eccf655962a68fa516c9b65b6c)() const = &::clang::TagDecl::isUnion;
    void  (::clang::TagDecl::*method_pointer_33ad37510bbe5299a191520a3a6b9855)(bool ) = &::clang::TagDecl::setCompleteDefinition;
    void  (::clang::TagDecl::*method_pointer_709d5ca763a95904a98146f50c8fd8ed)(bool ) = &::clang::TagDecl::setCompleteDefinitionRequired;
    void  (::clang::TagDecl::*method_pointer_efeaa7041a465a15b8daa7e998bf2d4c)(bool ) = &::clang::TagDecl::setEmbeddedInDeclarator;
    void  (::clang::TagDecl::*method_pointer_a7380cb7cada5b939670c0efdb7e4b58)(bool ) = &::clang::TagDecl::setFreeStanding;
    void  (::clang::TagDecl::*method_pointer_2a78e0a201735c078b026eca68a26b3d)(class ::clang::TypedefNameDecl  *) = &::clang::TagDecl::setTypedefNameForAnonDecl;
    void  (::clang::TagDecl::*method_pointer_dfe7e77d144a511a9992d987e2faad22)() = &::clang::TagDecl::startDefinition;
    boost::python::class_< class ::clang::TagDecl, autowig::HeldType< class ::clang::TagDecl >, boost::python::bases< class ::clang::TypeDecl, class ::clang::DeclContext >, boost::noncopyable > class_7fe14ac9706f5b4d9d341b651fb0117a("TagDecl", "", boost::python::no_init);
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_from_decl_context", method_pointer_7001572b90155bf3bc4c5945298b4b93, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_to_decl_context", method_pointer_497fddd7d20e51a9a389a893f85bd3c7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof", method_pointer_0c218504e5425c6cb48ff9dec1d30f5e, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof_kind", method_pointer_fab24a108da35e279b84224556e92039, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_6ae45e50ce01564691a14a7a90fd4757, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_1be6f4ca906a529482ffbfb550080026, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_definition", method_pointer_d85e95c42b64565db76682372d832da2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_num_template_parameter_lists", method_pointer_47a62dfb98365192bff1cccc7b9a1ae2, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_typedef_name_for_anon_decl", method_pointer_871fd6c1f4805930bd45156640f07db5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("has_name_for_linkage", method_pointer_5aea9db650e551a68e966917400e74ce, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_being_defined", method_pointer_d73766c8ca465da9bf6e76c730a23195, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_class", method_pointer_22dd699cf0cc5ee3b26019edb7034d30, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition", method_pointer_2f1b67007ece5e9d812e1406e5a05e2f, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition_required", method_pointer_c50158909f87599ebcabd88dc8689114, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_dependent_type", method_pointer_cb23d2571cfd5521b27f10674220754a, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_embedded_in_declarator", method_pointer_7d8f53c596f359a6b7fd54cc1f13deac, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_enum", method_pointer_7561f1aecc3a568383eb43a8b7434fb6, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_free_standing", method_pointer_fb12a29d634b5a4db7c07cc61041116e, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_interface", method_pointer_a60636c187bb5c0999420e704f929398, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_struct", method_pointer_df5d60694cc25966b111be0aa1485936, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_this_declaration_a_definition", method_pointer_30b3f0fab24f5066ab82f84ba72d20e9, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_union", method_pointer_93afd6eccf655962a68fa516c9b65b6c, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition", method_pointer_33ad37510bbe5299a191520a3a6b9855, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition_required", method_pointer_709d5ca763a95904a98146f50c8fd8ed, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_embedded_in_declarator", method_pointer_efeaa7041a465a15b8daa7e998bf2d4c, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_free_standing", method_pointer_a7380cb7cada5b939670c0efdb7e4b58, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_typedef_name_for_anon_decl", method_pointer_2a78e0a201735c078b026eca68a26b3d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("start_definition", method_pointer_dfe7e77d144a511a9992d987e2faad22, "");
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