#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_6fe8ea7f48fd5aec8c83607b627eef0d()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_961c2b31bf655071a681fae08c421624)(class ::clang::ObjCProtocolDecl  *, bool , bool ) = &::clang::ObjCInterfaceDecl::ClassImplementsProtocol;
    bool  (*method_pointer_44caa7b7caa253819e1f5c113ed2ef30)(class ::clang::Decl  const *) = ::clang::ObjCInterfaceDecl::classof;
    bool  (*method_pointer_ef4fe15c26575e9a9e2d30b7598cb52d)(enum ::clang::Decl::Kind ) = ::clang::ObjCInterfaceDecl::classofKind;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_a5092fc1c5b55eab8c0a08b99e41023d)() const = &::clang::ObjCInterfaceDecl::declaresOrInheritsDesignatedInitializers;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCInterfaceDecl::*method_pointer_9e1edb067aea53ca9f6fe18becc296e7)() const = &::clang::ObjCInterfaceDecl::getCanonicalDecl;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_24e4ffda93bb5aee940640e93a0142e4)() = &::clang::ObjCInterfaceDecl::getCanonicalDecl;
    class ::clang::ObjCCategoryDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_f4d2ff5429a15a229fe20f7457f9d6f8)() const = &::clang::ObjCInterfaceDecl::getCategoryListRaw;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCInterfaceDecl::*method_pointer_ff4bb1221abe5bb1a19fd6f3ff1dc6e9)() const = &::clang::ObjCInterfaceDecl::getDefinition;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_ae19e7a7b3c95baebeee130696a482f4)() = &::clang::ObjCInterfaceDecl::getDefinition;
    class ::clang::SourceLocation  (::clang::ObjCInterfaceDecl::*method_pointer_ba2f0471043f57b5a532b9f804bf360b)() const = &::clang::ObjCInterfaceDecl::getEndOfDefinitionLoc;
    class ::clang::ObjCImplementationDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_1996467d584e56f98ab02780f4916278)() const = &::clang::ObjCInterfaceDecl::getImplementation;
    class ::llvm::StringRef  (::clang::ObjCInterfaceDecl::*method_pointer_22202f947b5154a5be90fc62012f4878)() const = &::clang::ObjCInterfaceDecl::getObjCRuntimeNameAsString;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_c1a8a8beb9095973b7e4c69cef2aebd2)() const = &::clang::ObjCInterfaceDecl::getSuperClass;
    class ::clang::SourceLocation  (::clang::ObjCInterfaceDecl::*method_pointer_afda7fb2b5ea5dfab85ea706bc8fdbcf)() const = &::clang::ObjCInterfaceDecl::getSuperClassLoc;
    class ::clang::ObjCObjectType  const * (::clang::ObjCInterfaceDecl::*method_pointer_1bdf9c473f2e54e1a8bf2a82f57f0439)() const = &::clang::ObjCInterfaceDecl::getSuperClassType;
    class ::clang::Type  const * (::clang::ObjCInterfaceDecl::*method_pointer_5f673ff77e7b576f87d7ef88b86a3c39)() const = &::clang::ObjCInterfaceDecl::getTypeForDecl;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_ef6d92d16a2f528bb9753345c43cf83a)() const = &::clang::ObjCInterfaceDecl::hasDefinition;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_8507bc0ce0fc5cfa8c8f22901f5591eb)() const = &::clang::ObjCInterfaceDecl::hasDesignatedInitializers;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_ec23d8890fde5ae5b6e5ebdfc47e1ded)() const = &::clang::ObjCInterfaceDecl::isArcWeakrefUnavailable;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_529246c860b654a2b1a8b60dfe9e23d7)() const = &::clang::ObjCInterfaceDecl::isImplicitInterfaceDecl;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCInterfaceDecl::*method_pointer_46dfc9a95b03551e8bb94a48dac949ff)() const = &::clang::ObjCInterfaceDecl::isObjCRequiresPropertyDefs;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_203944f1484a51aa8c88d74a38b75b21)(class ::clang::ObjCInterfaceDecl  const *) const = &::clang::ObjCInterfaceDecl::isSuperClassOf;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_011635af057457c58a3c287cdec5edcd)() const = &::clang::ObjCInterfaceDecl::isThisDeclarationADefinition;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_def8a0353cc957ea94c09ca4eeb51e7c)() const = &::clang::ObjCInterfaceDecl::ivar_empty;
    unsigned int  (::clang::ObjCInterfaceDecl::*method_pointer_f4271d7ee168567aa4bc30d83712758d)() const = &::clang::ObjCInterfaceDecl::ivar_size;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_c2003306226b5f06abf53f68d271be5c)() const = &::clang::ObjCInterfaceDecl::known_categories_empty;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_f1c1b0df17f754d6933136e586dab2ff)() const = &::clang::ObjCInterfaceDecl::known_extensions_empty;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_b77c6e285fd953ae98c6989766d481b2)(class ::clang::ObjCCategoryDecl  *) = &::clang::ObjCInterfaceDecl::setCategoryListRaw;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_6eb6ad5b90a45e83aef6292e3acc42c7)(class ::clang::SourceLocation ) = &::clang::ObjCInterfaceDecl::setEndOfDefinitionLoc;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_98cc374f39805a9caa8f70040ce74e55)() = &::clang::ObjCInterfaceDecl::setExternallyCompleted;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_8cbbad4ae8e356c49a27be8607e858c8)() = &::clang::ObjCInterfaceDecl::setHasDesignatedInitializers;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_9f8bde6a42b45ddab8b3df90b8ae3741)(class ::clang::ObjCImplementationDecl  *) = &::clang::ObjCInterfaceDecl::setImplementation;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_6705d83964805372bbfe23ac7a5212fa)(class ::clang::ObjCIvarDecl  *) = &::clang::ObjCInterfaceDecl::setIvarList;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_230c027a7ae65e0d8c9dc0912855bdc9)(class ::clang::Type  const *) const = &::clang::ObjCInterfaceDecl::setTypeForDecl;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_63f80bb470035448b0e5af93113402c5)() = &::clang::ObjCInterfaceDecl::startDefinition;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_7aaa82d37f2f5488b859343c8f535df2)() const = &::clang::ObjCInterfaceDecl::visible_categories_empty;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_b9e2b92d956b56ed9eb1fcfea3df03ca)() const = &::clang::ObjCInterfaceDecl::visible_extensions_empty;
    boost::python::class_< class ::clang::ObjCInterfaceDecl, autowig::HeldType< class ::clang::ObjCInterfaceDecl >, boost::python::bases< class ::clang::ObjCContainerDecl >, boost::noncopyable > class_6fe8ea7f48fd5aec8c83607b627eef0d("ObjCInterfaceDecl", "", boost::python::no_init);
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("class_implements_protocol", method_pointer_961c2b31bf655071a681fae08c421624, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("classof", method_pointer_44caa7b7caa253819e1f5c113ed2ef30, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("classof_kind", method_pointer_ef4fe15c26575e9a9e2d30b7598cb52d, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("declares_or_inherits_designated_initializers", method_pointer_a5092fc1c5b55eab8c0a08b99e41023d, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_canonical_decl", method_pointer_9e1edb067aea53ca9f6fe18becc296e7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_canonical_decl", method_pointer_24e4ffda93bb5aee940640e93a0142e4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_category_list_raw", method_pointer_f4d2ff5429a15a229fe20f7457f9d6f8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_definition", method_pointer_ff4bb1221abe5bb1a19fd6f3ff1dc6e9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_definition", method_pointer_ae19e7a7b3c95baebeee130696a482f4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_end_of_definition_loc", method_pointer_ba2f0471043f57b5a532b9f804bf360b, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_implementation", method_pointer_1996467d584e56f98ab02780f4916278, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_obj_c_runtime_name_as_string", method_pointer_22202f947b5154a5be90fc62012f4878, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_super_class", method_pointer_c1a8a8beb9095973b7e4c69cef2aebd2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_super_class_loc", method_pointer_afda7fb2b5ea5dfab85ea706bc8fdbcf, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_super_class_type", method_pointer_1bdf9c473f2e54e1a8bf2a82f57f0439, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_type_for_decl", method_pointer_5f673ff77e7b576f87d7ef88b86a3c39, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("has_definition", method_pointer_ef6d92d16a2f528bb9753345c43cf83a, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("has_designated_initializers", method_pointer_8507bc0ce0fc5cfa8c8f22901f5591eb, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_arc_weakref_unavailable", method_pointer_ec23d8890fde5ae5b6e5ebdfc47e1ded, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_implicit_interface_decl", method_pointer_529246c860b654a2b1a8b60dfe9e23d7, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_obj_c_requires_property_defs", method_pointer_46dfc9a95b03551e8bb94a48dac949ff, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_super_class_of", method_pointer_203944f1484a51aa8c88d74a38b75b21, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_this_declaration_a_definition", method_pointer_011635af057457c58a3c287cdec5edcd, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("ivar_empty", method_pointer_def8a0353cc957ea94c09ca4eeb51e7c, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("ivar_size", method_pointer_f4271d7ee168567aa4bc30d83712758d, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("known_categories_empty", method_pointer_c2003306226b5f06abf53f68d271be5c, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("known_extensions_empty", method_pointer_f1c1b0df17f754d6933136e586dab2ff, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_category_list_raw", method_pointer_b77c6e285fd953ae98c6989766d481b2, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_end_of_definition_loc", method_pointer_6eb6ad5b90a45e83aef6292e3acc42c7, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_externally_completed", method_pointer_98cc374f39805a9caa8f70040ce74e55, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_has_designated_initializers", method_pointer_8cbbad4ae8e356c49a27be8607e858c8, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_implementation", method_pointer_9f8bde6a42b45ddab8b3df90b8ae3741, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_ivar_list", method_pointer_6705d83964805372bbfe23ac7a5212fa, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_type_for_decl", method_pointer_230c027a7ae65e0d8c9dc0912855bdc9, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("start_definition", method_pointer_63f80bb470035448b0e5af93113402c5, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("visible_categories_empty", method_pointer_7aaa82d37f2f5488b859343c8f535df2, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("visible_extensions_empty", method_pointer_b9e2b92d956b56ed9eb1fcfea3df03ca, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.staticmethod("classof_kind");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCInterfaceDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCInterfaceDecl >, autowig::HeldType< class ::clang::ObjCContainerDecl > >();
    }

}