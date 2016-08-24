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
    class ::clang::TagDecl  * (*method_pointer_65bbbe3c1d585d89b4f09284abd8c76e)(class ::clang::DeclContext  const *) = ::clang::TagDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_b03b7fcd002c5c219c7bf0c2d89e1af3)(class ::clang::TagDecl  const *) = ::clang::TagDecl::castToDeclContext;
    bool  (*method_pointer_3c8359def90852058db30fd118cf7baf)(class ::clang::Decl  const *) = ::clang::TagDecl::classof;
    bool  (*method_pointer_7ba342b0ccd15f67a341d9601d899437)(enum ::clang::Decl::Kind ) = ::clang::TagDecl::classofKind;
    class ::clang::TagDecl  const * (::clang::TagDecl::*method_pointer_53bdad3c9aa25444bb8dceccbaf2c6bf)() const = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_a27c774529c65f37b716990f48d42341)() = &::clang::TagDecl::getCanonicalDecl;
    class ::clang::TagDecl  * (::clang::TagDecl::*method_pointer_33a085c630f659faa10093b5ebb181fb)() const = &::clang::TagDecl::getDefinition;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_c04c348a512e515994891655883f8994)() const = &::clang::TagDecl::getInnerLocStart;
    class ::llvm::StringRef  (::clang::TagDecl::*method_pointer_c10d7e3e661c5918bb077fd01430aa01)() const = &::clang::TagDecl::getKindName;
    unsigned int  (::clang::TagDecl::*method_pointer_6eaf2c7832a150a882577e6f08e31121)() const = &::clang::TagDecl::getNumTemplateParameterLists;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_6fe728f4e77f56d0999bcd8c0950874b)() const = &::clang::TagDecl::getOuterLocStart;
    class ::clang::SourceLocation  (::clang::TagDecl::*method_pointer_eae6c4f6a61651208e8e285108587c5a)() const = &::clang::TagDecl::getRBraceLoc;
    class ::clang::TypedefNameDecl  * (::clang::TagDecl::*method_pointer_004250d1d0285d6c98394bf78981c859)() const = &::clang::TagDecl::getTypedefNameForAnonDecl;
    bool  (::clang::TagDecl::*method_pointer_93061c45053158cc88a3bd97ef974787)() const = &::clang::TagDecl::hasNameForLinkage;
    bool  (::clang::TagDecl::*method_pointer_65bc1e636e4b53988961b2ebed34dfcf)() const = &::clang::TagDecl::isBeingDefined;
    bool  (::clang::TagDecl::*method_pointer_d4c2210d553550c0aa414c4645863b0e)() const = &::clang::TagDecl::isClass;
    bool  (::clang::TagDecl::*method_pointer_b63b4aa2d02b5e8b9c0efa9562076eb6)() const = &::clang::TagDecl::isCompleteDefinition;
    bool  (::clang::TagDecl::*method_pointer_286e39cddf71521dad70b414e7abe4f4)() const = &::clang::TagDecl::isCompleteDefinitionRequired;
    bool  (::clang::TagDecl::*method_pointer_e199e36c1e465023a7e8f68ee1a24208)() const = &::clang::TagDecl::isDependentType;
    bool  (::clang::TagDecl::*method_pointer_43fc290e3e8953cda543f45709fb2fad)() const = &::clang::TagDecl::isEmbeddedInDeclarator;
    bool  (::clang::TagDecl::*method_pointer_4a3b54ba68715d609f239ff1f34f8967)() const = &::clang::TagDecl::isEnum;
    bool  (::clang::TagDecl::*method_pointer_edad9e5121ce562f907d147cbc13e4f7)() const = &::clang::TagDecl::isFreeStanding;
    bool  (::clang::TagDecl::*method_pointer_cf942cf81f4b55b988917b79d64e618e)() const = &::clang::TagDecl::isInterface;
    bool  (::clang::TagDecl::*method_pointer_7c5be960575453779d1d39c72e066d1e)() const = &::clang::TagDecl::isStruct;
    bool  (::clang::TagDecl::*method_pointer_954cffb28a76561c82f83b773bf7a8c5)() const = &::clang::TagDecl::isThisDeclarationADefinition;
    bool  (::clang::TagDecl::*method_pointer_420bd2f9505d5796b34b275f35962049)() const = &::clang::TagDecl::isUnion;
    void  (::clang::TagDecl::*method_pointer_0f1f032a25f35f92a80db127dedd473a)(bool ) = &::clang::TagDecl::setCompleteDefinition;
    void  (::clang::TagDecl::*method_pointer_e6e7475344855db4a3d212f97242924e)(bool ) = &::clang::TagDecl::setCompleteDefinitionRequired;
    void  (::clang::TagDecl::*method_pointer_05b380a009c158b7871b195c8f58e344)(bool ) = &::clang::TagDecl::setEmbeddedInDeclarator;
    void  (::clang::TagDecl::*method_pointer_c46846a14e4f59548511de41a55902d2)(bool ) = &::clang::TagDecl::setFreeStanding;
    void  (::clang::TagDecl::*method_pointer_f77782edfa225d85b0c46c6a5c196cad)(class ::clang::SourceLocation ) = &::clang::TagDecl::setRBraceLoc;
    void  (::clang::TagDecl::*method_pointer_b352b1b74fb55fd1a1a2c6b15b865df5)(class ::clang::TypedefNameDecl  *) = &::clang::TagDecl::setTypedefNameForAnonDecl;
    void  (::clang::TagDecl::*method_pointer_ceb28b901ca25e9cb851ca6d27f2fa6c)() = &::clang::TagDecl::startDefinition;
    boost::python::class_< class ::clang::TagDecl, autowig::HeldType< class ::clang::TagDecl >, boost::python::bases< class ::clang::TypeDecl, class ::clang::DeclContext >, boost::noncopyable > class_7fe14ac9706f5b4d9d341b651fb0117a("TagDecl", "", boost::python::no_init);
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_from_decl_context", method_pointer_65bbbe3c1d585d89b4f09284abd8c76e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("cast_to_decl_context", method_pointer_b03b7fcd002c5c219c7bf0c2d89e1af3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof", method_pointer_3c8359def90852058db30fd118cf7baf, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("classof_kind", method_pointer_7ba342b0ccd15f67a341d9601d899437, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_53bdad3c9aa25444bb8dceccbaf2c6bf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_canonical_decl", method_pointer_a27c774529c65f37b716990f48d42341, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_definition", method_pointer_33a085c630f659faa10093b5ebb181fb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_inner_loc_start", method_pointer_c04c348a512e515994891655883f8994, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_kind_name", method_pointer_c10d7e3e661c5918bb077fd01430aa01, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_num_template_parameter_lists", method_pointer_6eaf2c7832a150a882577e6f08e31121, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_outer_loc_start", method_pointer_6fe728f4e77f56d0999bcd8c0950874b, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_r_brace_loc", method_pointer_eae6c4f6a61651208e8e285108587c5a, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("get_typedef_name_for_anon_decl", method_pointer_004250d1d0285d6c98394bf78981c859, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("has_name_for_linkage", method_pointer_93061c45053158cc88a3bd97ef974787, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_being_defined", method_pointer_65bc1e636e4b53988961b2ebed34dfcf, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_class", method_pointer_d4c2210d553550c0aa414c4645863b0e, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition", method_pointer_b63b4aa2d02b5e8b9c0efa9562076eb6, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_complete_definition_required", method_pointer_286e39cddf71521dad70b414e7abe4f4, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_dependent_type", method_pointer_e199e36c1e465023a7e8f68ee1a24208, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_embedded_in_declarator", method_pointer_43fc290e3e8953cda543f45709fb2fad, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_enum", method_pointer_4a3b54ba68715d609f239ff1f34f8967, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_free_standing", method_pointer_edad9e5121ce562f907d147cbc13e4f7, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_interface", method_pointer_cf942cf81f4b55b988917b79d64e618e, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_struct", method_pointer_7c5be960575453779d1d39c72e066d1e, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_this_declaration_a_definition", method_pointer_954cffb28a76561c82f83b773bf7a8c5, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("is_union", method_pointer_420bd2f9505d5796b34b275f35962049, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition", method_pointer_0f1f032a25f35f92a80db127dedd473a, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_complete_definition_required", method_pointer_e6e7475344855db4a3d212f97242924e, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_embedded_in_declarator", method_pointer_05b380a009c158b7871b195c8f58e344, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_free_standing", method_pointer_c46846a14e4f59548511de41a55902d2, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_r_brace_loc", method_pointer_f77782edfa225d85b0c46c6a5c196cad, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("set_typedef_name_for_anon_decl", method_pointer_b352b1b74fb55fd1a1a2c6b15b865df5, "");
    class_7fe14ac9706f5b4d9d341b651fb0117a.def("start_definition", method_pointer_ceb28b901ca25e9cb851ca6d27f2fa6c, "");
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