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
    class ::clang::TagDecl  * (*method_pointer_e2f49660a203503481df718cd99faf84)(class ::clang::DeclContext  const *) = ::clang::TagDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_93c24e1ab3da519f917a5601d0a7cb18)(class ::clang::TagDecl  const *) = ::clang::TagDecl::castToDeclContext;
    bool  (*method_pointer_25fdb98e107b5997b7793d338b353ace)(class ::clang::Decl  const *) = ::clang::TagDecl::classof;
    bool  (*method_pointer_a5cededf26265c33a64ce01e3b51f62b)(enum ::clang::Decl::Kind ) = ::clang::TagDecl::classofKind;
    class ::clang::TagDecl  const * (::clang::TagDecl::*method_pointer_3d1929414af3528db54c30bdb2412f9d)() const = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_6d01a2f13ae755e491acb2295fb8e36e)() = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_516fde039bf2536e96e9c820feaf0dff)() const = &::clang::TagDecl::getDefinition;
    unsigned int  (::clang::TagDecl::*method_pointer_f956761eed3d57cba963bf26e7820244)() const = &::clang::TagDecl::getNumTemplateParameterLists;
    class ::clang::TypedefNameDecl  * (::clang::TagDecl::*method_pointer_dbae526641305528a313320ac4fff519)() const = &::clang::TagDecl::getTypedefNameForAnonDecl;
    bool  (::clang::TagDecl::*method_pointer_4ac345db9a5b518bbb4c65f8b2a92a53)() const = &::clang::TagDecl::hasNameForLinkage;
    bool  (::clang::TagDecl::*method_pointer_d1a3958e1d83512eae17c97ecde1d241)() const = &::clang::TagDecl::isBeingDefined;
    bool  (::clang::TagDecl::*method_pointer_6b4f2f6af3f253d28b8c31d52514db3c)() const = &::clang::TagDecl::isClass;
    bool  (::clang::TagDecl::*method_pointer_b740261ab0885c1aaca62066722d9e27)() const = &::clang::TagDecl::isCompleteDefinition;
    bool  (::clang::TagDecl::*method_pointer_36b6ef53464e50dc9b8e83d1eef8efc4)() const = &::clang::TagDecl::isCompleteDefinitionRequired;
    bool  (::clang::TagDecl::*method_pointer_2a85370755685f60ba39081ad8021466)() const = &::clang::TagDecl::isDependentType;
    bool  (::clang::TagDecl::*method_pointer_bc99e5b88c525204a7cd085a2e691ba4)() const = &::clang::TagDecl::isEmbeddedInDeclarator;
    bool  (::clang::TagDecl::*method_pointer_ac8d940d7c8c5791aec008f63ffb9fb4)() const = &::clang::TagDecl::isEnum;
    bool  (::clang::TagDecl::*method_pointer_f39a6a1bccd853c0b4d563043f106ee0)() const = &::clang::TagDecl::isFreeStanding;
    bool  (::clang::TagDecl::*method_pointer_0f9e3f20a8bb528cbf050198f937a2a9)() const = &::clang::TagDecl::isInterface;
    bool  (::clang::TagDecl::*method_pointer_3543d04112de525bbbc45e553b3e6d45)() const = &::clang::TagDecl::isStruct;
    bool  (::clang::TagDecl::*method_pointer_ce2f207ecaf55abb8d5f51701ae6a699)() const = &::clang::TagDecl::isThisDeclarationADefinition;
    bool  (::clang::TagDecl::*method_pointer_cf0fd26311a2515fa289067c8894b8af)() const = &::clang::TagDecl::isUnion;
    void  (::clang::TagDecl::*method_pointer_c4fd647064685083ab1ec5d5ba8a64c3)(bool ) = &::clang::TagDecl::setCompleteDefinition;
    void  (::clang::TagDecl::*method_pointer_bf446f1a4be15643b16987f24ceb183b)(bool ) = &::clang::TagDecl::setCompleteDefinitionRequired;
    void  (::clang::TagDecl::*method_pointer_c90860ab4b865803a13ec97bd92ae5b5)(bool ) = &::clang::TagDecl::setEmbeddedInDeclarator;
    void  (::clang::TagDecl::*method_pointer_06221c56b2815d21904c75ca80f30743)(bool ) = &::clang::TagDecl::setFreeStanding;
    void  (::clang::TagDecl::*method_pointer_af96053621075c0091f63e4e0f6c884e)(class ::clang::TypedefNameDecl  *) = &::clang::TagDecl::setTypedefNameForAnonDecl;
    void  (::clang::TagDecl::*method_pointer_c0d3706e97e456dfa779f906d42b1f25)() = &::clang::TagDecl::startDefinition;
    boost::python::class_< class ::clang::TagDecl, autowig::HeldType< class ::clang::TagDecl >, boost::python::bases< class ::clang::TypeDecl, class ::clang::DeclContext >, boost::noncopyable > class_7fe14ac9706f5b4d9d341b651fb0117a("TagDecl", "", boost::python::no_init);
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_from_decl_context", method_pointer_e2f49660a203503481df718cd99faf84, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_to_decl_context", method_pointer_93c24e1ab3da519f917a5601d0a7cb18, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof", method_pointer_25fdb98e107b5997b7793d338b353ace, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof_kind", method_pointer_a5cededf26265c33a64ce01e3b51f62b, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_3d1929414af3528db54c30bdb2412f9d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_6d01a2f13ae755e491acb2295fb8e36e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_definition", method_pointer_516fde039bf2536e96e9c820feaf0dff, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_num_template_parameter_lists", method_pointer_f956761eed3d57cba963bf26e7820244, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_typedef_name_for_anon_decl", method_pointer_dbae526641305528a313320ac4fff519, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("has_name_for_linkage", method_pointer_4ac345db9a5b518bbb4c65f8b2a92a53, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_being_defined", method_pointer_d1a3958e1d83512eae17c97ecde1d241, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_class", method_pointer_6b4f2f6af3f253d28b8c31d52514db3c, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition", method_pointer_b740261ab0885c1aaca62066722d9e27, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition_required", method_pointer_36b6ef53464e50dc9b8e83d1eef8efc4, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_dependent_type", method_pointer_2a85370755685f60ba39081ad8021466, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_embedded_in_declarator", method_pointer_bc99e5b88c525204a7cd085a2e691ba4, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_enum", method_pointer_ac8d940d7c8c5791aec008f63ffb9fb4, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_free_standing", method_pointer_f39a6a1bccd853c0b4d563043f106ee0, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_interface", method_pointer_0f9e3f20a8bb528cbf050198f937a2a9, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_struct", method_pointer_3543d04112de525bbbc45e553b3e6d45, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_this_declaration_a_definition", method_pointer_ce2f207ecaf55abb8d5f51701ae6a699, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_union", method_pointer_cf0fd26311a2515fa289067c8894b8af, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition", method_pointer_c4fd647064685083ab1ec5d5ba8a64c3, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition_required", method_pointer_bf446f1a4be15643b16987f24ceb183b, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_embedded_in_declarator", method_pointer_c90860ab4b865803a13ec97bd92ae5b5, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_free_standing", method_pointer_06221c56b2815d21904c75ca80f30743, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_typedef_name_for_anon_decl", method_pointer_af96053621075c0091f63e4e0f6c884e, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("start_definition", method_pointer_c0d3706e97e456dfa779f906d42b1f25, "");
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