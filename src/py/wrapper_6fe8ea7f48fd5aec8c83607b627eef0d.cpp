#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_6fe8ea7f48fd5aec8c83607b627eef0d()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_27df5829e0b75f50a5b6070f67c94312)() const = &::clang::ObjCInterfaceDecl::isArcWeakrefUnavailable;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_bf8354a96d2b5c02a5b5f191f633af3a)() = &::clang::ObjCInterfaceDecl::startDefinition;
    class ::clang::ObjCObjectType  const * (::clang::ObjCInterfaceDecl::*method_pointer_59f0b7b83c535cd6ac8809e9b262dcd3)() const = &::clang::ObjCInterfaceDecl::getSuperClassType;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_6e4caec99ac35507acc5b679b12883f8)() const = &::clang::ObjCInterfaceDecl::getSuperClass;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_49a0a8f82435535ca2cc1125ca9bd60c)(class ::clang::ObjCCategoryDecl  *) = &::clang::ObjCInterfaceDecl::setCategoryListRaw;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCInterfaceDecl::*method_pointer_e0cf2212121f5aa4b0d931ff3b61c270)() const = &::clang::ObjCInterfaceDecl::isObjCRequiresPropertyDefs;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_a9e820ad1cbc56c49447218053cb85ce)(class ::clang::ObjCProtocolDecl  *, bool , bool ) = &::clang::ObjCInterfaceDecl::ClassImplementsProtocol;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_9a3b7dc3fb085fda961ad9c59d346cf4)() const = &::clang::ObjCInterfaceDecl::declaresOrInheritsDesignatedInitializers;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_fac4c65c40325950a61795ee73c94712)(class ::clang::ObjCIvarDecl  *) = &::clang::ObjCInterfaceDecl::setIvarList;
    unsigned int  (::clang::ObjCInterfaceDecl::*method_pointer_75f7507a4d7c5027912276fbb4e37972)() const = &::clang::ObjCInterfaceDecl::ivar_size;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_f18fb52ce6b555699d4b21eb55cb15d2)() const = &::clang::ObjCInterfaceDecl::visible_extensions_empty;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_86d37b6e448c5770818bf29273a0290d)(class ::clang::ObjCInterfaceDecl  const *) const = &::clang::ObjCInterfaceDecl::isSuperClassOf;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_8f8eee33a2df51d58399bd1875e9f584)() const = &::clang::ObjCInterfaceDecl::isImplicitInterfaceDecl;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_9149e444aec751c39f1d61de6e39216a)() = &::clang::ObjCInterfaceDecl::setHasDesignatedInitializers;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_059a65d869a4532693560ec740637b66)() = &::clang::ObjCInterfaceDecl::setExternallyCompleted;
    class ::clang::ObjCCategoryDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_a80914c74b1355d18c4198a0b62dce99)() const = &::clang::ObjCInterfaceDecl::getCategoryListRaw;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_747a770989165d8ca95d2317cb2669de)() const = &::clang::ObjCInterfaceDecl::known_categories_empty;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_d4d99fce7229530b96c420ba7902aa43)() const = &::clang::ObjCInterfaceDecl::ivar_empty;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_2952cccceb4d56d49a55ddff6aa6219d)() const = &::clang::ObjCInterfaceDecl::hasDesignatedInitializers;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCInterfaceDecl::*method_pointer_7819d332615d56019812a5fee6c28e4b)() const = &::clang::ObjCInterfaceDecl::getCanonicalDecl;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_3a8317386dae56d0830c0ce1bec38572)() = &::clang::ObjCInterfaceDecl::getCanonicalDecl;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_325111d666f15275a45aebe159d91077)() const = &::clang::ObjCInterfaceDecl::known_extensions_empty;
    bool  (*method_pointer_5f2032f129ce53679db480faa8e99312)(enum ::clang::Decl::Kind ) = ::clang::ObjCInterfaceDecl::classofKind;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCInterfaceDecl::*method_pointer_8209fbe6e1bf5865a346e488193eeea9)() const = &::clang::ObjCInterfaceDecl::getDefinition;
    class ::clang::Type  const * (::clang::ObjCInterfaceDecl::*method_pointer_481f75c3d92b5d129d5ba93046e59767)() const = &::clang::ObjCInterfaceDecl::getTypeForDecl;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_096cd43fb1c359079e35921876fb4e8f)() const = &::clang::ObjCInterfaceDecl::hasDefinition;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_a554c118f39f53678b17fdea7e853ed6)() const = &::clang::ObjCInterfaceDecl::isThisDeclarationADefinition;
    bool  (::clang::ObjCInterfaceDecl::*method_pointer_26f2675945f35ad3bb6f4012de4fa2ed)() const = &::clang::ObjCInterfaceDecl::visible_categories_empty;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_0a8df875c73651e1808d037500a7f2e9)(class ::clang::ObjCImplementationDecl  *) = &::clang::ObjCInterfaceDecl::setImplementation;
    bool  (*method_pointer_6a7a7ba3e1b85b58877481258dde9527)(class ::clang::Decl  const *) = ::clang::ObjCInterfaceDecl::classof;
    class ::clang::ObjCImplementationDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_2c53a13f2338560b904b7cd1ce5ae163)() const = &::clang::ObjCInterfaceDecl::getImplementation;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCInterfaceDecl::*method_pointer_636c9b200dbc5f5cae4366f76efc59cf)() = &::clang::ObjCInterfaceDecl::getDefinition;
    void  (::clang::ObjCInterfaceDecl::*method_pointer_0d76401873595a09ae45b7b3b73af11b)(class ::clang::Type  const *) const = &::clang::ObjCInterfaceDecl::setTypeForDecl;
    boost::python::class_< class ::clang::ObjCInterfaceDecl, autowig::HeldType< class ::clang::ObjCInterfaceDecl >, boost::python::bases< class ::clang::ObjCContainerDecl >, boost::noncopyable > class_6fe8ea7f48fd5aec8c83607b627eef0d("ObjCInterfaceDecl", "", boost::python::no_init);
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_arc_weakref_unavailable", method_pointer_27df5829e0b75f50a5b6070f67c94312, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("start_definition", method_pointer_bf8354a96d2b5c02a5b5f191f633af3a, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_super_class_type", method_pointer_59f0b7b83c535cd6ac8809e9b262dcd3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_super_class", method_pointer_6e4caec99ac35507acc5b679b12883f8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_category_list_raw", method_pointer_49a0a8f82435535ca2cc1125ca9bd60c, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_obj_c_requires_property_defs", method_pointer_e0cf2212121f5aa4b0d931ff3b61c270, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("class_implements_protocol", method_pointer_a9e820ad1cbc56c49447218053cb85ce, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("declares_or_inherits_designated_initializers", method_pointer_9a3b7dc3fb085fda961ad9c59d346cf4, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_ivar_list", method_pointer_fac4c65c40325950a61795ee73c94712, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("ivar_size", method_pointer_75f7507a4d7c5027912276fbb4e37972, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("visible_extensions_empty", method_pointer_f18fb52ce6b555699d4b21eb55cb15d2, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_super_class_of", method_pointer_86d37b6e448c5770818bf29273a0290d, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_implicit_interface_decl", method_pointer_8f8eee33a2df51d58399bd1875e9f584, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_has_designated_initializers", method_pointer_9149e444aec751c39f1d61de6e39216a, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_externally_completed", method_pointer_059a65d869a4532693560ec740637b66, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_category_list_raw", method_pointer_a80914c74b1355d18c4198a0b62dce99, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("known_categories_empty", method_pointer_747a770989165d8ca95d2317cb2669de, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("ivar_empty", method_pointer_d4d99fce7229530b96c420ba7902aa43, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("has_designated_initializers", method_pointer_2952cccceb4d56d49a55ddff6aa6219d, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_canonical_decl", method_pointer_7819d332615d56019812a5fee6c28e4b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_canonical_decl", method_pointer_3a8317386dae56d0830c0ce1bec38572, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("known_extensions_empty", method_pointer_325111d666f15275a45aebe159d91077, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("classof_kind", method_pointer_5f2032f129ce53679db480faa8e99312, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_definition", method_pointer_8209fbe6e1bf5865a346e488193eeea9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_type_for_decl", method_pointer_481f75c3d92b5d129d5ba93046e59767, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("has_definition", method_pointer_096cd43fb1c359079e35921876fb4e8f, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("is_this_declaration_a_definition", method_pointer_a554c118f39f53678b17fdea7e853ed6, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("visible_categories_empty", method_pointer_26f2675945f35ad3bb6f4012de4fa2ed, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_implementation", method_pointer_0a8df875c73651e1808d037500a7f2e9, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("classof", method_pointer_6a7a7ba3e1b85b58877481258dde9527, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_implementation", method_pointer_2c53a13f2338560b904b7cd1ce5ae163, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("get_definition", method_pointer_636c9b200dbc5f5cae4366f76efc59cf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.def("set_type_for_decl", method_pointer_0d76401873595a09ae45b7b3b73af11b, "");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.staticmethod("classof_kind");
    class_6fe8ea7f48fd5aec8c83607b627eef0d.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCInterfaceDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCInterfaceDecl >, autowig::HeldType< class ::clang::ObjCContainerDecl > >();
    }

}