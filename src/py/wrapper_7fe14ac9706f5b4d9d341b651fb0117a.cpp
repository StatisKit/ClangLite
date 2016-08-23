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
    class ::clang::TagDecl  * (*method_pointer_8815aad2136e58aba38423576830f622)(class ::clang::DeclContext  const *) = ::clang::TagDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_a2455701d5bd50a59336a906fca5a660)(class ::clang::TagDecl  const *) = ::clang::TagDecl::castToDeclContext;
    bool  (*method_pointer_4be0d7fa879453b78be681d1e7878908)(class ::clang::Decl  const *) = ::clang::TagDecl::classof;
    bool  (*method_pointer_1ede2d2440b059579cff88060661adfe)(enum ::clang::Decl::Kind ) = ::clang::TagDecl::classofKind;
    class ::clang::TagDecl  const * (::clang::TagDecl::*method_pointer_cae1ca5be4f75f419030c3b57530acee)() const = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_f578ff70e0805700ba14664a061389d3)() = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_103dc1638bc15fb2aad207c0d37a7e91)() const = &::clang::TagDecl::getDefinition;
    unsigned int  (::clang::TagDecl::*method_pointer_beb84db6c6c550819888fe33d7e7956c)() const = &::clang::TagDecl::getNumTemplateParameterLists;
    class ::clang::TypedefNameDecl  * (::clang::TagDecl::*method_pointer_fda50c444a995ee2b21d13c12b310975)() const = &::clang::TagDecl::getTypedefNameForAnonDecl;
    bool  (::clang::TagDecl::*method_pointer_7bcbb8ca0bc6589ab28e0b61ee9c7e39)() const = &::clang::TagDecl::hasNameForLinkage;
    bool  (::clang::TagDecl::*method_pointer_9438fe2ead8f50028ffe5caed3bb827d)() const = &::clang::TagDecl::isBeingDefined;
    bool  (::clang::TagDecl::*method_pointer_88fd04b937ae59c09d5e81445503568a)() const = &::clang::TagDecl::isClass;
    bool  (::clang::TagDecl::*method_pointer_0387f83f773b5b65b32f49bd0f239118)() const = &::clang::TagDecl::isCompleteDefinition;
    bool  (::clang::TagDecl::*method_pointer_914a01c1e4135ef6b508195935fd8225)() const = &::clang::TagDecl::isCompleteDefinitionRequired;
    bool  (::clang::TagDecl::*method_pointer_949c2f0839ae5d59949b9153b63d0ad8)() const = &::clang::TagDecl::isDependentType;
    bool  (::clang::TagDecl::*method_pointer_527422e479765d349e96cf5b02ec8e40)() const = &::clang::TagDecl::isEmbeddedInDeclarator;
    bool  (::clang::TagDecl::*method_pointer_ac648adfdf3550ba9637420532ef80a0)() const = &::clang::TagDecl::isEnum;
    bool  (::clang::TagDecl::*method_pointer_4a69c556ee8b59d291d37aab8f2231b2)() const = &::clang::TagDecl::isFreeStanding;
    bool  (::clang::TagDecl::*method_pointer_7b2308e7e6e85b6c9ef2622398c564de)() const = &::clang::TagDecl::isInterface;
    bool  (::clang::TagDecl::*method_pointer_b819b88e8fb759f18ea459b7a72fa09a)() const = &::clang::TagDecl::isStruct;
    bool  (::clang::TagDecl::*method_pointer_83feb18e7f1c5260b1869135f2a602ff)() const = &::clang::TagDecl::isThisDeclarationADefinition;
    bool  (::clang::TagDecl::*method_pointer_94c8c563eb62537d911b2fc011f7ef97)() const = &::clang::TagDecl::isUnion;
    void  (::clang::TagDecl::*method_pointer_1667874ac3ab5a26bd149906732914a4)(bool ) = &::clang::TagDecl::setCompleteDefinition;
    void  (::clang::TagDecl::*method_pointer_0f1956aecb0053179051cb59a283b6e6)(bool ) = &::clang::TagDecl::setCompleteDefinitionRequired;
    void  (::clang::TagDecl::*method_pointer_b6b2dfdef5465610895a1f2521e81333)(bool ) = &::clang::TagDecl::setEmbeddedInDeclarator;
    void  (::clang::TagDecl::*method_pointer_0e9b49ea9ae95796b21f1817984dbdba)(bool ) = &::clang::TagDecl::setFreeStanding;
    void  (::clang::TagDecl::*method_pointer_00db5a494337501e9701f03b93928d1d)(class ::clang::TypedefNameDecl  *) = &::clang::TagDecl::setTypedefNameForAnonDecl;
    void  (::clang::TagDecl::*method_pointer_61da2f3772a5551e9e3dbe6a3b50f156)() = &::clang::TagDecl::startDefinition;
    boost::python::class_< class ::clang::TagDecl, autowig::HeldType< class ::clang::TagDecl >, boost::python::bases< class ::clang::TypeDecl, class ::clang::DeclContext >, boost::noncopyable > class_7fe14ac9706f5b4d9d341b651fb0117a("TagDecl", "", boost::python::no_init);
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_from_decl_context", method_pointer_8815aad2136e58aba38423576830f622, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_to_decl_context", method_pointer_a2455701d5bd50a59336a906fca5a660, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof", method_pointer_4be0d7fa879453b78be681d1e7878908, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof_kind", method_pointer_1ede2d2440b059579cff88060661adfe, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_cae1ca5be4f75f419030c3b57530acee, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_f578ff70e0805700ba14664a061389d3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_definition", method_pointer_103dc1638bc15fb2aad207c0d37a7e91, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_num_template_parameter_lists", method_pointer_beb84db6c6c550819888fe33d7e7956c, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_typedef_name_for_anon_decl", method_pointer_fda50c444a995ee2b21d13c12b310975, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("has_name_for_linkage", method_pointer_7bcbb8ca0bc6589ab28e0b61ee9c7e39, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_being_defined", method_pointer_9438fe2ead8f50028ffe5caed3bb827d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_class", method_pointer_88fd04b937ae59c09d5e81445503568a, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition", method_pointer_0387f83f773b5b65b32f49bd0f239118, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition_required", method_pointer_914a01c1e4135ef6b508195935fd8225, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_dependent_type", method_pointer_949c2f0839ae5d59949b9153b63d0ad8, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_embedded_in_declarator", method_pointer_527422e479765d349e96cf5b02ec8e40, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_enum", method_pointer_ac648adfdf3550ba9637420532ef80a0, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_free_standing", method_pointer_4a69c556ee8b59d291d37aab8f2231b2, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_interface", method_pointer_7b2308e7e6e85b6c9ef2622398c564de, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_struct", method_pointer_b819b88e8fb759f18ea459b7a72fa09a, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_this_declaration_a_definition", method_pointer_83feb18e7f1c5260b1869135f2a602ff, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_union", method_pointer_94c8c563eb62537d911b2fc011f7ef97, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition", method_pointer_1667874ac3ab5a26bd149906732914a4, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition_required", method_pointer_0f1956aecb0053179051cb59a283b6e6, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_embedded_in_declarator", method_pointer_b6b2dfdef5465610895a1f2521e81333, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_free_standing", method_pointer_0e9b49ea9ae95796b21f1817984dbdba, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_typedef_name_for_anon_decl", method_pointer_00db5a494337501e9701f03b93928d1d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("start_definition", method_pointer_61da2f3772a5551e9e3dbe6a3b50f156, "");
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