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
    class ::clang::TagDecl  * (*method_pointer_ae174408f2bd516bab105fb7619dcdc7)(class ::clang::DeclContext  const *) = ::clang::TagDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_0ef1819c464358af8a4f4cbace820dca)(class ::clang::TagDecl  const *) = ::clang::TagDecl::castToDeclContext;
    bool  (*method_pointer_a28a748d539a5e1987815bac237f7ca2)(class ::clang::Decl  const *) = ::clang::TagDecl::classof;
    bool  (*method_pointer_0a79ea755f085114b530e819cfad20a6)(enum ::clang::Decl::Kind ) = ::clang::TagDecl::classofKind;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_55cd2cf154045c2686719cf4202f7df9)() = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  const * (::clang::TagDecl::*method_pointer_f823f166498350eb92d465bd5b8bc4f6)() const = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_50bc3706d8ed510ca271cac78585e567)() const = &::clang::TagDecl::getDefinition;
    unsigned int  (::clang::TagDecl::*method_pointer_82feb0c31ba7585b906c6dc12f8a6c73)() const = &::clang::TagDecl::getNumTemplateParameterLists;
    class ::clang::TypedefNameDecl  * (::clang::TagDecl::*method_pointer_9fb37eafd73e5da99cd5df0c24c5c244)() const = &::clang::TagDecl::getTypedefNameForAnonDecl;
    bool  (::clang::TagDecl::*method_pointer_a2f0e364cd9f5754923913a5a4338140)() const = &::clang::TagDecl::hasNameForLinkage;
    bool  (::clang::TagDecl::*method_pointer_af0536ae563754238c61c3c5e849dae9)() const = &::clang::TagDecl::isBeingDefined;
    bool  (::clang::TagDecl::*method_pointer_813812a5d5265782869e26501a4bb9d4)() const = &::clang::TagDecl::isClass;
    bool  (::clang::TagDecl::*method_pointer_0a422f4ef1f757b995a1b1ad0a780e3f)() const = &::clang::TagDecl::isCompleteDefinition;
    bool  (::clang::TagDecl::*method_pointer_d0b26c3f332850d388ce6a5b7ce65746)() const = &::clang::TagDecl::isCompleteDefinitionRequired;
    bool  (::clang::TagDecl::*method_pointer_142e58e0a9835cea84313dd394f073da)() const = &::clang::TagDecl::isDependentType;
    bool  (::clang::TagDecl::*method_pointer_13dbc14eedb55461bc5b5a9d95675d05)() const = &::clang::TagDecl::isEmbeddedInDeclarator;
    bool  (::clang::TagDecl::*method_pointer_6fd97eb3f8db5987819018ae318be2c4)() const = &::clang::TagDecl::isEnum;
    bool  (::clang::TagDecl::*method_pointer_42e0e21f57745f90a7d9ac097e726a38)() const = &::clang::TagDecl::isFreeStanding;
    bool  (::clang::TagDecl::*method_pointer_021ea520033c5c06ae9e4e72724aac86)() const = &::clang::TagDecl::isInterface;
    bool  (::clang::TagDecl::*method_pointer_9456f4b4bf255aa1951d42abe4e46945)() const = &::clang::TagDecl::isStruct;
    bool  (::clang::TagDecl::*method_pointer_f4fc9f016bae500396bc01fc349bc954)() const = &::clang::TagDecl::isThisDeclarationADefinition;
    bool  (::clang::TagDecl::*method_pointer_c971e3f8e65f59b38cd4bd6f447e0aff)() const = &::clang::TagDecl::isUnion;
    void  (::clang::TagDecl::*method_pointer_f9f670919d0c5a7eb466bc542721e147)(bool ) = &::clang::TagDecl::setCompleteDefinition;
    void  (::clang::TagDecl::*method_pointer_6635695fe24f5389ba589362dd92e7f4)(bool ) = &::clang::TagDecl::setCompleteDefinitionRequired;
    void  (::clang::TagDecl::*method_pointer_186c1f8a37ea5e649547c9447a17e7ab)(bool ) = &::clang::TagDecl::setEmbeddedInDeclarator;
    void  (::clang::TagDecl::*method_pointer_13cd44acde6d5f34adf176e35400004d)(bool ) = &::clang::TagDecl::setFreeStanding;
    void  (::clang::TagDecl::*method_pointer_42b81a1b18d5537dbd8e758bf47001f6)(class ::clang::TypedefNameDecl  *) = &::clang::TagDecl::setTypedefNameForAnonDecl;
    void  (::clang::TagDecl::*method_pointer_d285c9ff2eef5b938587bb60f6a8fc34)() = &::clang::TagDecl::startDefinition;
    boost::python::class_< class ::clang::TagDecl, autowig::HeldType< class ::clang::TagDecl >, boost::python::bases< class ::clang::TypeDecl, class ::clang::DeclContext >, boost::noncopyable > class_7fe14ac9706f5b4d9d341b651fb0117a("TagDecl", "", boost::python::no_init);
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_from_decl_context", method_pointer_ae174408f2bd516bab105fb7619dcdc7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_to_decl_context", method_pointer_0ef1819c464358af8a4f4cbace820dca, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof", method_pointer_a28a748d539a5e1987815bac237f7ca2, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof_kind", method_pointer_0a79ea755f085114b530e819cfad20a6, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_55cd2cf154045c2686719cf4202f7df9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_f823f166498350eb92d465bd5b8bc4f6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_definition", method_pointer_50bc3706d8ed510ca271cac78585e567, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_num_template_parameter_lists", method_pointer_82feb0c31ba7585b906c6dc12f8a6c73, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_typedef_name_for_anon_decl", method_pointer_9fb37eafd73e5da99cd5df0c24c5c244, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("has_name_for_linkage", method_pointer_a2f0e364cd9f5754923913a5a4338140, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_being_defined", method_pointer_af0536ae563754238c61c3c5e849dae9, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_class", method_pointer_813812a5d5265782869e26501a4bb9d4, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition", method_pointer_0a422f4ef1f757b995a1b1ad0a780e3f, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition_required", method_pointer_d0b26c3f332850d388ce6a5b7ce65746, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_dependent_type", method_pointer_142e58e0a9835cea84313dd394f073da, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_embedded_in_declarator", method_pointer_13dbc14eedb55461bc5b5a9d95675d05, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_enum", method_pointer_6fd97eb3f8db5987819018ae318be2c4, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_free_standing", method_pointer_42e0e21f57745f90a7d9ac097e726a38, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_interface", method_pointer_021ea520033c5c06ae9e4e72724aac86, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_struct", method_pointer_9456f4b4bf255aa1951d42abe4e46945, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_this_declaration_a_definition", method_pointer_f4fc9f016bae500396bc01fc349bc954, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_union", method_pointer_c971e3f8e65f59b38cd4bd6f447e0aff, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition", method_pointer_f9f670919d0c5a7eb466bc542721e147, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition_required", method_pointer_6635695fe24f5389ba589362dd92e7f4, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_embedded_in_declarator", method_pointer_186c1f8a37ea5e649547c9447a17e7ab, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_free_standing", method_pointer_13cd44acde6d5f34adf176e35400004d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_typedef_name_for_anon_decl", method_pointer_42b81a1b18d5537dbd8e758bf47001f6, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("start_definition", method_pointer_d285c9ff2eef5b938587bb60f6a8fc34, "");
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