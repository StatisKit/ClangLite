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
    class ::clang::TagDecl  * (*method_pointer_700f6b9b84c65487bcf8a6426fae20f9)(class ::clang::DeclContext  const *) = ::clang::TagDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_7ce861f017ce5f14aa10472653005d2d)(class ::clang::TagDecl  const *) = ::clang::TagDecl::castToDeclContext;
    bool  (*method_pointer_798f841773bb5d09a60eef5493a56c0a)(class ::clang::Decl  const *) = ::clang::TagDecl::classof;
    bool  (*method_pointer_bff699b77e575e3bb5847f8a09295d4c)(enum ::clang::Decl::Kind ) = ::clang::TagDecl::classofKind;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_0a2463bfe5ad5f2297b83b8e80bd50aa)() = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  const * (::clang::TagDecl::*method_pointer_2299db3dd28556eb8bc984b2ba38b688)() const = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_734d230a0d2b51db88cf60eb04ffced1)() const = &::clang::TagDecl::getDefinition;
    unsigned int  (::clang::TagDecl::*method_pointer_abc7660b413150ac93edab2dfb197a45)() const = &::clang::TagDecl::getNumTemplateParameterLists;
    class ::clang::TypedefNameDecl  * (::clang::TagDecl::*method_pointer_558c213e7f17564382123e4ed102bf28)() const = &::clang::TagDecl::getTypedefNameForAnonDecl;
    bool  (::clang::TagDecl::*method_pointer_caa1e7fe6d425fa28b411913de1b11ac)() const = &::clang::TagDecl::hasNameForLinkage;
    bool  (::clang::TagDecl::*method_pointer_de96bf9b69b5571d923dd1a2ff092df9)() const = &::clang::TagDecl::isBeingDefined;
    bool  (::clang::TagDecl::*method_pointer_3d394ed19385521b8e0d40480e2c9263)() const = &::clang::TagDecl::isClass;
    bool  (::clang::TagDecl::*method_pointer_f69c58c5c51c54d18c63e7817290af1d)() const = &::clang::TagDecl::isCompleteDefinition;
    bool  (::clang::TagDecl::*method_pointer_2aff0cf210ae5e67a0a1035ba24ce31a)() const = &::clang::TagDecl::isCompleteDefinitionRequired;
    bool  (::clang::TagDecl::*method_pointer_74ed515f509a5793961acc48e0f8ddb9)() const = &::clang::TagDecl::isDependentType;
    bool  (::clang::TagDecl::*method_pointer_59ba4262a2785300b55d573164cfc6a1)() const = &::clang::TagDecl::isEmbeddedInDeclarator;
    bool  (::clang::TagDecl::*method_pointer_1117cc3f72e754cab4b286aead0a52fe)() const = &::clang::TagDecl::isEnum;
    bool  (::clang::TagDecl::*method_pointer_192d2a7b07ed5436afad8d8c99dd9e38)() const = &::clang::TagDecl::isFreeStanding;
    bool  (::clang::TagDecl::*method_pointer_3e6136b87a395b34adfc1dfb51591f27)() const = &::clang::TagDecl::isInterface;
    bool  (::clang::TagDecl::*method_pointer_413449b6e06b5d2a82e8fa4ec769496d)() const = &::clang::TagDecl::isStruct;
    bool  (::clang::TagDecl::*method_pointer_11d605f98f885432890a4f592e5e2bd4)() const = &::clang::TagDecl::isThisDeclarationADefinition;
    bool  (::clang::TagDecl::*method_pointer_d2beb55e9dfe59efa694a80ac00ea83b)() const = &::clang::TagDecl::isUnion;
    void  (::clang::TagDecl::*method_pointer_b86a60d1327850d9ae28374a7e9e6201)(bool ) = &::clang::TagDecl::setCompleteDefinition;
    void  (::clang::TagDecl::*method_pointer_88c69fdbdd5d50c6b063dcd9f09a6e20)(bool ) = &::clang::TagDecl::setCompleteDefinitionRequired;
    void  (::clang::TagDecl::*method_pointer_72e5724a75c855ae9c8e86e810fe8287)(bool ) = &::clang::TagDecl::setEmbeddedInDeclarator;
    void  (::clang::TagDecl::*method_pointer_af4626c16ddd5427b76b65e01fbfa3a3)(bool ) = &::clang::TagDecl::setFreeStanding;
    void  (::clang::TagDecl::*method_pointer_7814b2dd4dbf52ed9e88532bcbd360d8)(class ::clang::TypedefNameDecl  *) = &::clang::TagDecl::setTypedefNameForAnonDecl;
    void  (::clang::TagDecl::*method_pointer_d6b2484b6bc353fe8a32acc0599cf754)() = &::clang::TagDecl::startDefinition;
    boost::python::class_< class ::clang::TagDecl, autowig::HeldType< class ::clang::TagDecl >, boost::python::bases< class ::clang::TypeDecl, class ::clang::DeclContext >, boost::noncopyable > class_7fe14ac9706f5b4d9d341b651fb0117a("TagDecl", "", boost::python::no_init);
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_from_decl_context", method_pointer_700f6b9b84c65487bcf8a6426fae20f9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_to_decl_context", method_pointer_7ce861f017ce5f14aa10472653005d2d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof", method_pointer_798f841773bb5d09a60eef5493a56c0a, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof_kind", method_pointer_bff699b77e575e3bb5847f8a09295d4c, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_0a2463bfe5ad5f2297b83b8e80bd50aa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_2299db3dd28556eb8bc984b2ba38b688, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_definition", method_pointer_734d230a0d2b51db88cf60eb04ffced1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_num_template_parameter_lists", method_pointer_abc7660b413150ac93edab2dfb197a45, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_typedef_name_for_anon_decl", method_pointer_558c213e7f17564382123e4ed102bf28, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("has_name_for_linkage", method_pointer_caa1e7fe6d425fa28b411913de1b11ac, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_being_defined", method_pointer_de96bf9b69b5571d923dd1a2ff092df9, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_class", method_pointer_3d394ed19385521b8e0d40480e2c9263, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition", method_pointer_f69c58c5c51c54d18c63e7817290af1d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition_required", method_pointer_2aff0cf210ae5e67a0a1035ba24ce31a, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_dependent_type", method_pointer_74ed515f509a5793961acc48e0f8ddb9, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_embedded_in_declarator", method_pointer_59ba4262a2785300b55d573164cfc6a1, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_enum", method_pointer_1117cc3f72e754cab4b286aead0a52fe, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_free_standing", method_pointer_192d2a7b07ed5436afad8d8c99dd9e38, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_interface", method_pointer_3e6136b87a395b34adfc1dfb51591f27, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_struct", method_pointer_413449b6e06b5d2a82e8fa4ec769496d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_this_declaration_a_definition", method_pointer_11d605f98f885432890a4f592e5e2bd4, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_union", method_pointer_d2beb55e9dfe59efa694a80ac00ea83b, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition", method_pointer_b86a60d1327850d9ae28374a7e9e6201, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition_required", method_pointer_88c69fdbdd5d50c6b063dcd9f09a6e20, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_embedded_in_declarator", method_pointer_72e5724a75c855ae9c8e86e810fe8287, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_free_standing", method_pointer_af4626c16ddd5427b76b65e01fbfa3a3, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_typedef_name_for_anon_decl", method_pointer_7814b2dd4dbf52ed9e88532bcbd360d8, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("start_definition", method_pointer_d6b2484b6bc353fe8a32acc0599cf754, "");
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