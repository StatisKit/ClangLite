#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_7fe14ac9706f5b4d9d341b651fb0117a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TagDecl  * (*method_pointer_02913087e1de52019524b6fcb7063886)(class ::clang::DeclContext  const *) = ::clang::TagDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_028184126b3d5b7cbe643cdfcac3877e)(class ::clang::TagDecl  const *) = ::clang::TagDecl::castToDeclContext;
    bool  (*method_pointer_abe7a7defaae5d13a0ce761043d30fc8)(class ::clang::Decl  const *) = ::clang::TagDecl::classof;
    bool  (*method_pointer_5ec6de90813b501190df3048a2600611)(enum ::clang::Decl::Kind ) = ::clang::TagDecl::classofKind;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_0cc416e78d595a3494a8c3e84b848b34)() = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  const * (::clang::TagDecl::*method_pointer_eb0cf17b1aa05a928cbf4d1b6b27ce6a)() const = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_08da61faa6925e748fa099111beea13e)() const = &::clang::TagDecl::getDefinition;
    unsigned int  (::clang::TagDecl::*method_pointer_73be3d9de5365d49bfb4db3ad0f888b2)() const = &::clang::TagDecl::getNumTemplateParameterLists;
    class ::clang::TypedefNameDecl  * (::clang::TagDecl::*method_pointer_66fcbbbe9dc558abb120d5d463246a72)() const = &::clang::TagDecl::getTypedefNameForAnonDecl;
    bool  (::clang::TagDecl::*method_pointer_0c7d59f8ec855bc88dda319cb2638800)() const = &::clang::TagDecl::hasNameForLinkage;
    bool  (::clang::TagDecl::*method_pointer_2d91931d673259d68eff45fe75b38279)() const = &::clang::TagDecl::isBeingDefined;
    bool  (::clang::TagDecl::*method_pointer_138f51dcb9ec545b8a0bda94e8a3fc1e)() const = &::clang::TagDecl::isClass;
    bool  (::clang::TagDecl::*method_pointer_85f13af54607575690ad4b96d156ab51)() const = &::clang::TagDecl::isCompleteDefinition;
    bool  (::clang::TagDecl::*method_pointer_ff714efc110450a8be480c27c81ab956)() const = &::clang::TagDecl::isCompleteDefinitionRequired;
    bool  (::clang::TagDecl::*method_pointer_5eabca1f29295e0d83c9622792c035bc)() const = &::clang::TagDecl::isDependentType;
    bool  (::clang::TagDecl::*method_pointer_82a8647d171c595196f39bd8b9858f3a)() const = &::clang::TagDecl::isEmbeddedInDeclarator;
    bool  (::clang::TagDecl::*method_pointer_bb8ff568ec8b546bb7312194598eeefa)() const = &::clang::TagDecl::isEnum;
    bool  (::clang::TagDecl::*method_pointer_8597e5c9d7f45e058063f63adab20602)() const = &::clang::TagDecl::isFreeStanding;
    bool  (::clang::TagDecl::*method_pointer_346134c2bbdb5fa89d2f2acd6c66cc92)() const = &::clang::TagDecl::isInterface;
    bool  (::clang::TagDecl::*method_pointer_42be243586f459848587058af96be93c)() const = &::clang::TagDecl::isStruct;
    bool  (::clang::TagDecl::*method_pointer_6ccc6c717bc9567bb22a0536ecf95ff8)() const = &::clang::TagDecl::isThisDeclarationADefinition;
    bool  (::clang::TagDecl::*method_pointer_ff0ae5aa271b5a6cb4701ad921c28c7b)() const = &::clang::TagDecl::isUnion;
    void  (::clang::TagDecl::*method_pointer_c4b2fdea926a52fa92358bba9df23faf)(bool ) = &::clang::TagDecl::setCompleteDefinition;
    void  (::clang::TagDecl::*method_pointer_75818c784e59587c8bbe238f77097fde)(bool ) = &::clang::TagDecl::setCompleteDefinitionRequired;
    void  (::clang::TagDecl::*method_pointer_fb3f8c75d31a5d949eea508aaff9ab2f)(bool ) = &::clang::TagDecl::setEmbeddedInDeclarator;
    void  (::clang::TagDecl::*method_pointer_bfef129859165ebc96bf4ad3993dbd3a)(bool ) = &::clang::TagDecl::setFreeStanding;
    void  (::clang::TagDecl::*method_pointer_e768c18a926952b79c494af5882c4888)(class ::clang::TypedefNameDecl  *) = &::clang::TagDecl::setTypedefNameForAnonDecl;
    void  (::clang::TagDecl::*method_pointer_dca7121e1e535a87b79c6d92455f841a)() = &::clang::TagDecl::startDefinition;
    boost::python::class_< class ::clang::TagDecl, autowig::HeldType< class ::clang::TagDecl >, boost::python::bases< class ::clang::TypeDecl, class ::clang::DeclContext >, boost::noncopyable > class_7fe14ac9706f5b4d9d341b651fb0117a("TagDecl", "", boost::python::no_init);
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_from_decl_context", method_pointer_02913087e1de52019524b6fcb7063886, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_to_decl_context", method_pointer_028184126b3d5b7cbe643cdfcac3877e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof", method_pointer_abe7a7defaae5d13a0ce761043d30fc8, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof_kind", method_pointer_5ec6de90813b501190df3048a2600611, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_0cc416e78d595a3494a8c3e84b848b34, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_eb0cf17b1aa05a928cbf4d1b6b27ce6a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_definition", method_pointer_08da61faa6925e748fa099111beea13e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_num_template_parameter_lists", method_pointer_73be3d9de5365d49bfb4db3ad0f888b2, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_typedef_name_for_anon_decl", method_pointer_66fcbbbe9dc558abb120d5d463246a72, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("has_name_for_linkage", method_pointer_0c7d59f8ec855bc88dda319cb2638800, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_being_defined", method_pointer_2d91931d673259d68eff45fe75b38279, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_class", method_pointer_138f51dcb9ec545b8a0bda94e8a3fc1e, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition", method_pointer_85f13af54607575690ad4b96d156ab51, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition_required", method_pointer_ff714efc110450a8be480c27c81ab956, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_dependent_type", method_pointer_5eabca1f29295e0d83c9622792c035bc, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_embedded_in_declarator", method_pointer_82a8647d171c595196f39bd8b9858f3a, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_enum", method_pointer_bb8ff568ec8b546bb7312194598eeefa, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_free_standing", method_pointer_8597e5c9d7f45e058063f63adab20602, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_interface", method_pointer_346134c2bbdb5fa89d2f2acd6c66cc92, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_struct", method_pointer_42be243586f459848587058af96be93c, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_this_declaration_a_definition", method_pointer_6ccc6c717bc9567bb22a0536ecf95ff8, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_union", method_pointer_ff0ae5aa271b5a6cb4701ad921c28c7b, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition", method_pointer_c4b2fdea926a52fa92358bba9df23faf, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition_required", method_pointer_75818c784e59587c8bbe238f77097fde, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_embedded_in_declarator", method_pointer_fb3f8c75d31a5d949eea508aaff9ab2f, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_free_standing", method_pointer_bfef129859165ebc96bf4ad3993dbd3a, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_typedef_name_for_anon_decl", method_pointer_e768c18a926952b79c494af5882c4888, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("start_definition", method_pointer_dca7121e1e535a87b79c6d92455f841a, "");
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