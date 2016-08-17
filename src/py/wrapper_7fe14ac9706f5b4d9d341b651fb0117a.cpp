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
    bool  (::clang::TagDecl::*method_pointer_6ff944456f725e23a576f65474e9f933)() const = &::clang::TagDecl::isThisDeclarationADefinition;
    bool  (::clang::TagDecl::*method_pointer_342d5e173fea5a188638f590fb2b84d3)() const = &::clang::TagDecl::isStruct;
    class ::clang::TypedefNameDecl  * (::clang::TagDecl::*method_pointer_9761fa294a6b5678b01ab85f695612be)() const = &::clang::TagDecl::getTypedefNameForAnonDecl;
    bool  (::clang::TagDecl::*method_pointer_9ee2da6475fa5c1e94f38226e2a1d088)() const = &::clang::TagDecl::isEmbeddedInDeclarator;
    class ::clang::DeclContext  * (*method_pointer_9f37d5ca038356dba6dfdbbfafc59e96)(class ::clang::TagDecl  const *) = ::clang::TagDecl::castToDeclContext;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_aa2688a270135c5cab3cd2b2debd3c6b)() = &::clang::TagDecl::getCanonicalDecl;
    bool  (::clang::TagDecl::*method_pointer_c73ad3203a2f5738b39ee96aba6c4a8b)() const = &::clang::TagDecl::isUnion;
    class ::clang::TagDecl  const * (::clang::TagDecl::*method_pointer_9d584b4d7e9658d1a169caf491f2804b)() const = &::clang::TagDecl::getCanonicalDecl;
    void  (::clang::TagDecl::*method_pointer_9056ff9966d55418bd6af57aafe496ed)(class ::clang::TypedefNameDecl  *) = &::clang::TagDecl::setTypedefNameForAnonDecl;
    bool  (::clang::TagDecl::*method_pointer_3b80fdecf4e15833b503ecfd4234972e)() const = &::clang::TagDecl::isInterface;
    bool  (*method_pointer_267f4a3ea3fc5a5bb59c924f6e8e5435)(class ::clang::Decl  const *) = ::clang::TagDecl::classof;
    void  (::clang::TagDecl::*method_pointer_3c2c05b4c76157e9a799226407166cc2)() = &::clang::TagDecl::startDefinition;
    bool  (::clang::TagDecl::*method_pointer_342e9f8efe8a57e893f5fc3037617406)() const = &::clang::TagDecl::isEnum;
    bool  (::clang::TagDecl::*method_pointer_c878492e828c5500a8b1508867e19a3e)() const = &::clang::TagDecl::isCompleteDefinition;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_f4af31b0fc605c1faeda86e09943c6e0)() const = &::clang::TagDecl::getDefinition;
    void  (::clang::TagDecl::*method_pointer_0c4e573703f953a48d923fd9cc02f383)(bool ) = &::clang::TagDecl::setEmbeddedInDeclarator;
    bool  (::clang::TagDecl::*method_pointer_3ddefd83acda55e08a21747f9baee869)() const = &::clang::TagDecl::isFreeStanding;
    void  (::clang::TagDecl::*method_pointer_191532cfe9805dc18bd537bd979dfbf4)(bool ) = &::clang::TagDecl::setCompleteDefinitionRequired;
    bool  (::clang::TagDecl::*method_pointer_c278acd232a75b72b8b11dce54bddcfd)() const = &::clang::TagDecl::isClass;
    class ::clang::TagDecl  * (*method_pointer_0a9f1694a42554079b2a18abf218e527)(class ::clang::DeclContext  const *) = ::clang::TagDecl::castFromDeclContext;
    void  (::clang::TagDecl::*method_pointer_d0a407e1ec615fe3bf086fb522a02841)(bool ) = &::clang::TagDecl::setFreeStanding;
    bool  (::clang::TagDecl::*method_pointer_54184ff7b26958d68154bd8a8389771c)() const = &::clang::TagDecl::isDependentType;
    void  (::clang::TagDecl::*method_pointer_ab7a3a14e0ef5110ab17b27446b8b379)(bool ) = &::clang::TagDecl::setCompleteDefinition;
    bool  (::clang::TagDecl::*method_pointer_19e5e1d9829a51a1a08fb52d7ade4e6d)() const = &::clang::TagDecl::isBeingDefined;
    bool  (::clang::TagDecl::*method_pointer_f63f5df326725534b4ef2943e2db9714)() const = &::clang::TagDecl::hasNameForLinkage;
    unsigned int  (::clang::TagDecl::*method_pointer_8ebbf13743225ece962edcac9dc75c60)() const = &::clang::TagDecl::getNumTemplateParameterLists;
    bool  (*method_pointer_387aebb5e8005ead8725cdc6f5630722)(enum ::clang::Decl::Kind ) = ::clang::TagDecl::classofKind;
    bool  (::clang::TagDecl::*method_pointer_4976408b3e995d13a1ff06bb690db8c4)() const = &::clang::TagDecl::isCompleteDefinitionRequired;
    boost::python::class_< class ::clang::TagDecl, autowig::HeldType< class ::clang::TagDecl >, boost::python::bases< class ::clang::TypeDecl, class ::clang::DeclContext >, boost::noncopyable > class_7fe14ac9706f5b4d9d341b651fb0117a("TagDecl", "", boost::python::no_init);
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_this_declaration_a_definition", method_pointer_6ff944456f725e23a576f65474e9f933, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_struct", method_pointer_342d5e173fea5a188638f590fb2b84d3, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_typedef_name_for_anon_decl", method_pointer_9761fa294a6b5678b01ab85f695612be, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_embedded_in_declarator", method_pointer_9ee2da6475fa5c1e94f38226e2a1d088, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_to_decl_context", method_pointer_9f37d5ca038356dba6dfdbbfafc59e96, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_aa2688a270135c5cab3cd2b2debd3c6b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_union", method_pointer_c73ad3203a2f5738b39ee96aba6c4a8b, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_9d584b4d7e9658d1a169caf491f2804b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_typedef_name_for_anon_decl", method_pointer_9056ff9966d55418bd6af57aafe496ed, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_interface", method_pointer_3b80fdecf4e15833b503ecfd4234972e, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof", method_pointer_267f4a3ea3fc5a5bb59c924f6e8e5435, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("start_definition", method_pointer_3c2c05b4c76157e9a799226407166cc2, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_enum", method_pointer_342e9f8efe8a57e893f5fc3037617406, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition", method_pointer_c878492e828c5500a8b1508867e19a3e, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_definition", method_pointer_f4af31b0fc605c1faeda86e09943c6e0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_embedded_in_declarator", method_pointer_0c4e573703f953a48d923fd9cc02f383, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_free_standing", method_pointer_3ddefd83acda55e08a21747f9baee869, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition_required", method_pointer_191532cfe9805dc18bd537bd979dfbf4, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_class", method_pointer_c278acd232a75b72b8b11dce54bddcfd, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_from_decl_context", method_pointer_0a9f1694a42554079b2a18abf218e527, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_free_standing", method_pointer_d0a407e1ec615fe3bf086fb522a02841, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_dependent_type", method_pointer_54184ff7b26958d68154bd8a8389771c, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition", method_pointer_ab7a3a14e0ef5110ab17b27446b8b379, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_being_defined", method_pointer_19e5e1d9829a51a1a08fb52d7ade4e6d, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("has_name_for_linkage", method_pointer_f63f5df326725534b4ef2943e2db9714, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_num_template_parameter_lists", method_pointer_8ebbf13743225ece962edcac9dc75c60, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof_kind", method_pointer_387aebb5e8005ead8725cdc6f5630722, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition_required", method_pointer_4976408b3e995d13a1ff06bb690db8c4, "");
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