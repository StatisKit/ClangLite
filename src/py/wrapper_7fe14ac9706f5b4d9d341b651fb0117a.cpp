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
    class ::clang::TagDecl  * (*method_pointer_23c19bf7e0c75ef2b54b59c577839a3e)(class ::clang::DeclContext  const *) = ::clang::TagDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_d5e4f5d0f2ef5797973e26d9774f5589)(class ::clang::TagDecl  const *) = ::clang::TagDecl::castToDeclContext;
    bool  (*method_pointer_24d3d30cd2e1531cbf85ce2c14a25c1d)(class ::clang::Decl  const *) = ::clang::TagDecl::classof;
    bool  (*method_pointer_fa39c2ca3dfe55c0bb31781cfa2d71c2)(enum ::clang::Decl::Kind ) = ::clang::TagDecl::classofKind;
    class ::clang::TagDecl  const * (::clang::TagDecl::*method_pointer_4804ba438ffa5b5490eb0939f61c9968)() const = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_d6e2a3619cb957a0baa1bf558fccf567)() = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_b026e9b237ce567f9d928c3ca1b28796)() const = &::clang::TagDecl::getDefinition;
    unsigned int  (::clang::TagDecl::*method_pointer_d4d74b7456595327b7eebbcdc1bb49e1)() const = &::clang::TagDecl::getNumTemplateParameterLists;
    class ::clang::TypedefNameDecl  * (::clang::TagDecl::*method_pointer_474cb63b35025cc2807fcce199775df1)() const = &::clang::TagDecl::getTypedefNameForAnonDecl;
    bool  (::clang::TagDecl::*method_pointer_f660900951705b24af4affd1d2a5d997)() const = &::clang::TagDecl::hasNameForLinkage;
    bool  (::clang::TagDecl::*method_pointer_05feb71798625975b9a79beea5c99ad9)() const = &::clang::TagDecl::isBeingDefined;
    bool  (::clang::TagDecl::*method_pointer_709e10bace205a3aa86bbe0ed4545da0)() const = &::clang::TagDecl::isClass;
    bool  (::clang::TagDecl::*method_pointer_61f527cc72de5631a878d2982aa31086)() const = &::clang::TagDecl::isCompleteDefinition;
    bool  (::clang::TagDecl::*method_pointer_fc8f12a110a85dc9850ac8bf9fb2ae5d)() const = &::clang::TagDecl::isCompleteDefinitionRequired;
    bool  (::clang::TagDecl::*method_pointer_6ccacb2926695ab9bef0ba16e537d47d)() const = &::clang::TagDecl::isDependentType;
    bool  (::clang::TagDecl::*method_pointer_9a63bcb6c4bb585eba6b0bbe2c41b770)() const = &::clang::TagDecl::isEmbeddedInDeclarator;
    bool  (::clang::TagDecl::*method_pointer_b7d675aee8c152648512320e7c745758)() const = &::clang::TagDecl::isEnum;
    bool  (::clang::TagDecl::*method_pointer_29592da8615956deb124bab29e05c281)() const = &::clang::TagDecl::isFreeStanding;
    bool  (::clang::TagDecl::*method_pointer_bb1383d8e1ff536aa1fa1f27a10b3fbc)() const = &::clang::TagDecl::isInterface;
    bool  (::clang::TagDecl::*method_pointer_29bc8f78df8b54f3b807bef541b26477)() const = &::clang::TagDecl::isStruct;
    bool  (::clang::TagDecl::*method_pointer_4aec4a11a8cd5d39925b51426950051f)() const = &::clang::TagDecl::isThisDeclarationADefinition;
    bool  (::clang::TagDecl::*method_pointer_0a1b010e2a6a5af3a6f8b0b84d58629a)() const = &::clang::TagDecl::isUnion;
    void  (::clang::TagDecl::*method_pointer_b136d6adec4354d7aa1e2f24c2ef2a84)(bool ) = &::clang::TagDecl::setCompleteDefinition;
    void  (::clang::TagDecl::*method_pointer_3ca89443b11053fea0427c27e81fffc5)(bool ) = &::clang::TagDecl::setCompleteDefinitionRequired;
    void  (::clang::TagDecl::*method_pointer_670dbb247f9b566ca8dbc66837a8fa0d)(bool ) = &::clang::TagDecl::setEmbeddedInDeclarator;
    void  (::clang::TagDecl::*method_pointer_213f0587d7ea5504928b79f4617bb4b8)(bool ) = &::clang::TagDecl::setFreeStanding;
    void  (::clang::TagDecl::*method_pointer_14c24ccde8ca54abb2a840b02e803ff1)(class ::clang::TypedefNameDecl  *) = &::clang::TagDecl::setTypedefNameForAnonDecl;
    void  (::clang::TagDecl::*method_pointer_c3cb6d410dc9523a817486d986e2b2c1)() = &::clang::TagDecl::startDefinition;
    boost::python::class_< class ::clang::TagDecl, autowig::HeldType< class ::clang::TagDecl >, boost::python::bases< class ::clang::TypeDecl, class ::clang::DeclContext >, boost::noncopyable > class_7fe14ac9706f5b4d9d341b651fb0117a("TagDecl", "", boost::python::no_init);
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_from_decl_context", method_pointer_23c19bf7e0c75ef2b54b59c577839a3e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_to_decl_context", method_pointer_d5e4f5d0f2ef5797973e26d9774f5589, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof", method_pointer_24d3d30cd2e1531cbf85ce2c14a25c1d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof_kind", method_pointer_fa39c2ca3dfe55c0bb31781cfa2d71c2, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_4804ba438ffa5b5490eb0939f61c9968, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_d6e2a3619cb957a0baa1bf558fccf567, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_definition", method_pointer_b026e9b237ce567f9d928c3ca1b28796, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_num_template_parameter_lists", method_pointer_d4d74b7456595327b7eebbcdc1bb49e1, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_typedef_name_for_anon_decl", method_pointer_474cb63b35025cc2807fcce199775df1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("has_name_for_linkage", method_pointer_f660900951705b24af4affd1d2a5d997, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_being_defined", method_pointer_05feb71798625975b9a79beea5c99ad9, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_class", method_pointer_709e10bace205a3aa86bbe0ed4545da0, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition", method_pointer_61f527cc72de5631a878d2982aa31086, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition_required", method_pointer_fc8f12a110a85dc9850ac8bf9fb2ae5d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_dependent_type", method_pointer_6ccacb2926695ab9bef0ba16e537d47d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_embedded_in_declarator", method_pointer_9a63bcb6c4bb585eba6b0bbe2c41b770, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_enum", method_pointer_b7d675aee8c152648512320e7c745758, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_free_standing", method_pointer_29592da8615956deb124bab29e05c281, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_interface", method_pointer_bb1383d8e1ff536aa1fa1f27a10b3fbc, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_struct", method_pointer_29bc8f78df8b54f3b807bef541b26477, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_this_declaration_a_definition", method_pointer_4aec4a11a8cd5d39925b51426950051f, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_union", method_pointer_0a1b010e2a6a5af3a6f8b0b84d58629a, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition", method_pointer_b136d6adec4354d7aa1e2f24c2ef2a84, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition_required", method_pointer_3ca89443b11053fea0427c27e81fffc5, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_embedded_in_declarator", method_pointer_670dbb247f9b566ca8dbc66837a8fa0d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_free_standing", method_pointer_213f0587d7ea5504928b79f4617bb4b8, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_typedef_name_for_anon_decl", method_pointer_14c24ccde8ca54abb2a840b02e803ff1, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("start_definition", method_pointer_c3cb6d410dc9523a817486d986e2b2c1, "");
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