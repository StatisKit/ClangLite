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
    class ::clang::TagDecl  * (*method_pointer_00ceef85cc0256f1946dbc72f8733bb7)(class ::clang::DeclContext  const *) = ::clang::TagDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_2bb769041d7c5901932ab9c4f5922c76)(class ::clang::TagDecl  const *) = ::clang::TagDecl::castToDeclContext;
    bool  (*method_pointer_72f7d692281351248496948e9030e02b)(class ::clang::Decl  const *) = ::clang::TagDecl::classof;
    bool  (*method_pointer_9b3c5d900fd857ad8cb6858efeade280)(enum ::clang::Decl::Kind ) = ::clang::TagDecl::classofKind;
    class ::clang::TagDecl  const * (::clang::TagDecl::*method_pointer_f483f372000258168f31ca692339f483)() const = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_cddeb7b9f1ff5db9920397314bd53f80)() = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_0a6d779bf188586088eebb6d0dcd14b8)() const = &::clang::TagDecl::getDefinition;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_5282ea5eb6695127996d4020a3641217)() const = &::clang::TagDecl::getInnerLocStart;
    class ::llvm::StringRef  (::clang::TagDecl::*method_pointer_d540ec283ada5dbd83dc69c1f9bdf90b)() const = &::clang::TagDecl::getKindName;
    unsigned int  (::clang::TagDecl::*method_pointer_26e1de5d67c2586dab221eb0008a3987)() const = &::clang::TagDecl::getNumTemplateParameterLists;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_dc6bca83434957eea2d3f0ea11e20202)() const = &::clang::TagDecl::getOuterLocStart;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_7b127e6abd775cba915a624811aa89d8)() const = &::clang::TagDecl::getRBraceLoc;
    class ::clang::TypedefNameDecl  * (::clang::TagDecl::*method_pointer_733f3933843a50db9421462474239997)() const = &::clang::TagDecl::getTypedefNameForAnonDecl;
    bool  (::clang::TagDecl::*method_pointer_b608ebcc21295c05826c9237b1658d36)() const = &::clang::TagDecl::hasNameForLinkage;
    bool  (::clang::TagDecl::*method_pointer_f91cfb88bfad5dcc92fc094c52e36add)() const = &::clang::TagDecl::isBeingDefined;
    bool  (::clang::TagDecl::*method_pointer_9f660b4aeb78543f8c5d1406bc436d87)() const = &::clang::TagDecl::isClass;
    bool  (::clang::TagDecl::*method_pointer_edeb0f3c1162581d850d66e045044a7f)() const = &::clang::TagDecl::isCompleteDefinition;
    bool  (::clang::TagDecl::*method_pointer_39e46e41f0e8549ba3db2674f4ee1134)() const = &::clang::TagDecl::isCompleteDefinitionRequired;
    bool  (::clang::TagDecl::*method_pointer_8560c8da2018525295244bf94d275bdd)() const = &::clang::TagDecl::isDependentType;
    bool  (::clang::TagDecl::*method_pointer_ebca5fd4371052cbb447fe52f1c4e891)() const = &::clang::TagDecl::isEmbeddedInDeclarator;
    bool  (::clang::TagDecl::*method_pointer_913aeeee98e159e29c324d86866c0394)() const = &::clang::TagDecl::isEnum;
    bool  (::clang::TagDecl::*method_pointer_3dee5d09156e53cb99b5ed8b13d45dbf)() const = &::clang::TagDecl::isFreeStanding;
    bool  (::clang::TagDecl::*method_pointer_4a2981d6cba853608abc3a0f011b8f8e)() const = &::clang::TagDecl::isInterface;
    bool  (::clang::TagDecl::*method_pointer_a785a2cc348f5d2a90961a39fbfa5681)() const = &::clang::TagDecl::isStruct;
    bool  (::clang::TagDecl::*method_pointer_45a38ddb9ced5575af3d73e7966b1631)() const = &::clang::TagDecl::isThisDeclarationADefinition;
    bool  (::clang::TagDecl::*method_pointer_83f96c481ac85335b804d81cde7e17d1)() const = &::clang::TagDecl::isUnion;
    void  (::clang::TagDecl::*method_pointer_21f1e26be72b5083b3c1b3117cf87561)(bool ) = &::clang::TagDecl::setCompleteDefinition;
    void  (::clang::TagDecl::*method_pointer_12dfe92cb20551f0b6a086ba141fcf0c)(bool ) = &::clang::TagDecl::setCompleteDefinitionRequired;
    void  (::clang::TagDecl::*method_pointer_49068d8a3d7654388f8dbfa0a9ce1c05)(bool ) = &::clang::TagDecl::setEmbeddedInDeclarator;
    void  (::clang::TagDecl::*method_pointer_9bd6cfee24ea5f0dac14c81fed10e9ba)(bool ) = &::clang::TagDecl::setFreeStanding;
    void  (::clang::TagDecl::*method_pointer_8e3fc643a69e59568c51dfccb5663c52)(class ::clang::SourceLocation ) = &::clang::TagDecl::setRBraceLoc;
    void  (::clang::TagDecl::*method_pointer_d4cce98e5f985ee2b08ffd1f241c5a69)(class ::clang::TypedefNameDecl  *) = &::clang::TagDecl::setTypedefNameForAnonDecl;
    void  (::clang::TagDecl::*method_pointer_594521ed1ee15db2a95799e092d33f60)() = &::clang::TagDecl::startDefinition;
    boost::python::class_< class ::clang::TagDecl, autowig::HeldType< class ::clang::TagDecl >, boost::python::bases< class ::clang::TypeDecl, class ::clang::DeclContext >, boost::noncopyable > class_7fe14ac9706f5b4d9d341b651fb0117a("TagDecl", "", boost::python::no_init);
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_from_decl_context", method_pointer_00ceef85cc0256f1946dbc72f8733bb7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_to_decl_context", method_pointer_2bb769041d7c5901932ab9c4f5922c76, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof", method_pointer_72f7d692281351248496948e9030e02b, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof_kind", method_pointer_9b3c5d900fd857ad8cb6858efeade280, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_f483f372000258168f31ca692339f483, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_cddeb7b9f1ff5db9920397314bd53f80, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_definition", method_pointer_0a6d779bf188586088eebb6d0dcd14b8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_inner_loc_start", method_pointer_5282ea5eb6695127996d4020a3641217, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_kind_name", method_pointer_d540ec283ada5dbd83dc69c1f9bdf90b, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_num_template_parameter_lists", method_pointer_26e1de5d67c2586dab221eb0008a3987, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_outer_loc_start", method_pointer_dc6bca83434957eea2d3f0ea11e20202, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_r_brace_loc", method_pointer_7b127e6abd775cba915a624811aa89d8, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_typedef_name_for_anon_decl", method_pointer_733f3933843a50db9421462474239997, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("has_name_for_linkage", method_pointer_b608ebcc21295c05826c9237b1658d36, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_being_defined", method_pointer_f91cfb88bfad5dcc92fc094c52e36add, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_class", method_pointer_9f660b4aeb78543f8c5d1406bc436d87, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition", method_pointer_edeb0f3c1162581d850d66e045044a7f, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition_required", method_pointer_39e46e41f0e8549ba3db2674f4ee1134, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_dependent_type", method_pointer_8560c8da2018525295244bf94d275bdd, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_embedded_in_declarator", method_pointer_ebca5fd4371052cbb447fe52f1c4e891, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_enum", method_pointer_913aeeee98e159e29c324d86866c0394, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_free_standing", method_pointer_3dee5d09156e53cb99b5ed8b13d45dbf, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_interface", method_pointer_4a2981d6cba853608abc3a0f011b8f8e, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_struct", method_pointer_a785a2cc348f5d2a90961a39fbfa5681, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_this_declaration_a_definition", method_pointer_45a38ddb9ced5575af3d73e7966b1631, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_union", method_pointer_83f96c481ac85335b804d81cde7e17d1, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition", method_pointer_21f1e26be72b5083b3c1b3117cf87561, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition_required", method_pointer_12dfe92cb20551f0b6a086ba141fcf0c, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_embedded_in_declarator", method_pointer_49068d8a3d7654388f8dbfa0a9ce1c05, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_free_standing", method_pointer_9bd6cfee24ea5f0dac14c81fed10e9ba, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_r_brace_loc", method_pointer_8e3fc643a69e59568c51dfccb5663c52, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_typedef_name_for_anon_decl", method_pointer_d4cce98e5f985ee2b08ffd1f241c5a69, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("start_definition", method_pointer_594521ed1ee15db2a95799e092d33f60, "");
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