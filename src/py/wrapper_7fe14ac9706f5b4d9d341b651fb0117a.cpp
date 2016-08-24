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
    class ::clang::TagDecl  * (*method_pointer_f8b53b16a9cd57de97ba64760b0ff2a2)(class ::clang::DeclContext  const *) = ::clang::TagDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_90e939821dc65c999800e97f6d06885b)(class ::clang::TagDecl  const *) = ::clang::TagDecl::castToDeclContext;
    bool  (*method_pointer_b2cdd0909b7b5415a8e42e6b3556b73a)(class ::clang::Decl  const *) = ::clang::TagDecl::classof;
    bool  (*method_pointer_2bf55ef939cd54f5819850d6ec402c36)(enum ::clang::Decl::Kind ) = ::clang::TagDecl::classofKind;
    class ::clang::TagDecl  const * (::clang::TagDecl::*method_pointer_3d43be867069554a8d3b0b82eddcfc23)() const = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_58437ca3cf00529da808be6bd3897b84)() = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_b45ba91db02c5120b3ea7d4d844ac5dc)() const = &::clang::TagDecl::getDefinition;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_c6b1381309ee5df3ae517c6a96a3450f)() const = &::clang::TagDecl::getInnerLocStart;
    class ::llvm::StringRef  (::clang::TagDecl::*method_pointer_84290d54cdcb5659ab8e5e60fad8ce34)() const = &::clang::TagDecl::getKindName;
    unsigned int  (::clang::TagDecl::*method_pointer_1d4128bd41395f3ba1437cc88a93166c)() const = &::clang::TagDecl::getNumTemplateParameterLists;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_74cdb1676dfa55c49f19b5f00974877d)() const = &::clang::TagDecl::getOuterLocStart;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_6f306c53da23556fb4091d1dfada61c4)() const = &::clang::TagDecl::getRBraceLoc;
    class ::clang::TypedefNameDecl  * (::clang::TagDecl::*method_pointer_f0cbbbec1c455171ae8b04a173712bb7)() const = &::clang::TagDecl::getTypedefNameForAnonDecl;
    bool  (::clang::TagDecl::*method_pointer_b073c31758315362835154e86e4e5d80)() const = &::clang::TagDecl::hasNameForLinkage;
    bool  (::clang::TagDecl::*method_pointer_c6fdf099deff5addbe0312006808edad)() const = &::clang::TagDecl::isBeingDefined;
    bool  (::clang::TagDecl::*method_pointer_e7051f10f3045f99bcc8421e9445fb3f)() const = &::clang::TagDecl::isClass;
    bool  (::clang::TagDecl::*method_pointer_86548f2f44e0599fb7e7039202400cfb)() const = &::clang::TagDecl::isCompleteDefinition;
    bool  (::clang::TagDecl::*method_pointer_cace66077ae858118c4ca638ccee67f6)() const = &::clang::TagDecl::isCompleteDefinitionRequired;
    bool  (::clang::TagDecl::*method_pointer_fe22a4d19ff45673b0c59abe91e7cedb)() const = &::clang::TagDecl::isDependentType;
    bool  (::clang::TagDecl::*method_pointer_02617fab3ce853cda0eefb760fd3806c)() const = &::clang::TagDecl::isEmbeddedInDeclarator;
    bool  (::clang::TagDecl::*method_pointer_6d6bc9390e43557386e3b174b4f1f14a)() const = &::clang::TagDecl::isEnum;
    bool  (::clang::TagDecl::*method_pointer_55d7d890c042563288494ea2b14259d7)() const = &::clang::TagDecl::isFreeStanding;
    bool  (::clang::TagDecl::*method_pointer_d4589dab344154d1878dbf286c5aae2d)() const = &::clang::TagDecl::isInterface;
    bool  (::clang::TagDecl::*method_pointer_397ed9cafbd55e6ab52492104f53f6e1)() const = &::clang::TagDecl::isStruct;
    bool  (::clang::TagDecl::*method_pointer_3b7ce5cea0885b339f3bd1768512aa97)() const = &::clang::TagDecl::isThisDeclarationADefinition;
    bool  (::clang::TagDecl::*method_pointer_0cf8c9ad912959c69f6c5be9c85952fa)() const = &::clang::TagDecl::isUnion;
    void  (::clang::TagDecl::*method_pointer_ba8bd2667de752aca7366c411e0318a2)(bool ) = &::clang::TagDecl::setCompleteDefinition;
    void  (::clang::TagDecl::*method_pointer_2eeb3d5312995192a6577072022fec75)(bool ) = &::clang::TagDecl::setCompleteDefinitionRequired;
    void  (::clang::TagDecl::*method_pointer_963479de9c61503ea4c0832748801bc4)(bool ) = &::clang::TagDecl::setEmbeddedInDeclarator;
    void  (::clang::TagDecl::*method_pointer_7436b53f5be7539c88021f1f3dca9bfb)(bool ) = &::clang::TagDecl::setFreeStanding;
    void  (::clang::TagDecl::*method_pointer_bf8231518a0e5e3ab8c4143e0a8cd369)(class ::clang::SourceLocation ) = &::clang::TagDecl::setRBraceLoc;
    void  (::clang::TagDecl::*method_pointer_b584a46aef6e5070b82d94a8599a10e3)(class ::clang::TypedefNameDecl  *) = &::clang::TagDecl::setTypedefNameForAnonDecl;
    void  (::clang::TagDecl::*method_pointer_cc3452742bb25033a5634a07cd98fa89)() = &::clang::TagDecl::startDefinition;
    boost::python::class_< class ::clang::TagDecl, autowig::HeldType< class ::clang::TagDecl >, boost::python::bases< class ::clang::TypeDecl, class ::clang::DeclContext >, boost::noncopyable > class_7fe14ac9706f5b4d9d341b651fb0117a("TagDecl", "", boost::python::no_init);
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_from_decl_context", method_pointer_f8b53b16a9cd57de97ba64760b0ff2a2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_to_decl_context", method_pointer_90e939821dc65c999800e97f6d06885b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof", method_pointer_b2cdd0909b7b5415a8e42e6b3556b73a, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof_kind", method_pointer_2bf55ef939cd54f5819850d6ec402c36, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_3d43be867069554a8d3b0b82eddcfc23, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_58437ca3cf00529da808be6bd3897b84, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_definition", method_pointer_b45ba91db02c5120b3ea7d4d844ac5dc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_inner_loc_start", method_pointer_c6b1381309ee5df3ae517c6a96a3450f, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_kind_name", method_pointer_84290d54cdcb5659ab8e5e60fad8ce34, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_num_template_parameter_lists", method_pointer_1d4128bd41395f3ba1437cc88a93166c, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_outer_loc_start", method_pointer_74cdb1676dfa55c49f19b5f00974877d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_r_brace_loc", method_pointer_6f306c53da23556fb4091d1dfada61c4, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_typedef_name_for_anon_decl", method_pointer_f0cbbbec1c455171ae8b04a173712bb7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("has_name_for_linkage", method_pointer_b073c31758315362835154e86e4e5d80, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_being_defined", method_pointer_c6fdf099deff5addbe0312006808edad, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_class", method_pointer_e7051f10f3045f99bcc8421e9445fb3f, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition", method_pointer_86548f2f44e0599fb7e7039202400cfb, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition_required", method_pointer_cace66077ae858118c4ca638ccee67f6, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_dependent_type", method_pointer_fe22a4d19ff45673b0c59abe91e7cedb, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_embedded_in_declarator", method_pointer_02617fab3ce853cda0eefb760fd3806c, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_enum", method_pointer_6d6bc9390e43557386e3b174b4f1f14a, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_free_standing", method_pointer_55d7d890c042563288494ea2b14259d7, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_interface", method_pointer_d4589dab344154d1878dbf286c5aae2d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_struct", method_pointer_397ed9cafbd55e6ab52492104f53f6e1, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_this_declaration_a_definition", method_pointer_3b7ce5cea0885b339f3bd1768512aa97, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_union", method_pointer_0cf8c9ad912959c69f6c5be9c85952fa, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition", method_pointer_ba8bd2667de752aca7366c411e0318a2, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition_required", method_pointer_2eeb3d5312995192a6577072022fec75, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_embedded_in_declarator", method_pointer_963479de9c61503ea4c0832748801bc4, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_free_standing", method_pointer_7436b53f5be7539c88021f1f3dca9bfb, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_r_brace_loc", method_pointer_bf8231518a0e5e3ab8c4143e0a8cd369, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_typedef_name_for_anon_decl", method_pointer_b584a46aef6e5070b82d94a8599a10e3, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("start_definition", method_pointer_cc3452742bb25033a5634a07cd98fa89, "");
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