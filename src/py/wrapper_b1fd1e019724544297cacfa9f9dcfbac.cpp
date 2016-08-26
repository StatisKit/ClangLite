#include "_clanglite.h"


namespace autowig
{
}


void wrapper_b1fd1e019724544297cacfa9f9dcfbac()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::NonTypeTemplateParmDecl  * (*method_pointer_316868ee1ab2550c96dc180b0aa76238)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::NonTypeTemplateParmDecl::CreateDeserialized;
    class ::clang::NonTypeTemplateParmDecl  * (*method_pointer_e9c27ca9e29358ef88443d4bbadb9a2a)(class ::clang::ASTContext  &, unsigned int ) = ::clang::NonTypeTemplateParmDecl::CreateDeserialized;
    bool  (*method_pointer_96c3fa948e545ce5a2ef9e24a76ac154)(class ::clang::Decl  const *) = ::clang::NonTypeTemplateParmDecl::classof;
    bool  (*method_pointer_526fdb774a37546791ad935c9673e632)(enum ::clang::Decl::Kind ) = ::clang::NonTypeTemplateParmDecl::classofKind;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_0219d98a362d5ad78959a1485c0280f1)() const = &::clang::NonTypeTemplateParmDecl::defaultArgumentWasInherited;
    class ::clang::SourceLocation  (::clang::NonTypeTemplateParmDecl::*method_pointer_d03fda7e68ea574abe9c300bec077f46)() const = &::clang::NonTypeTemplateParmDecl::getDefaultArgumentLoc;
    class ::clang::QualType  (::clang::NonTypeTemplateParmDecl::*method_pointer_937969977e2e5b0bb613c15da4ac23e6)(unsigned int ) const = &::clang::NonTypeTemplateParmDecl::getExpansionType;
    unsigned int  (::clang::NonTypeTemplateParmDecl::*method_pointer_020de3d7b86d53a1a458fdc6ef804e73)() const = &::clang::NonTypeTemplateParmDecl::getNumExpansionTypes;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_7ba44429116153a895aeb0a2115bf349)() const = &::clang::NonTypeTemplateParmDecl::hasDefaultArgument;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_26450f6e5c795bc2b951f4e21eb33ef0)() const = &::clang::NonTypeTemplateParmDecl::isExpandedParameterPack;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_646bf5131d09506aba31285638bd79b5)() const = &::clang::NonTypeTemplateParmDecl::isPackExpansion;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_c262e28ea0685a1a99b27d161b011666)() const = &::clang::NonTypeTemplateParmDecl::isParameterPack;
    void  (::clang::NonTypeTemplateParmDecl::*method_pointer_22676637cf4658e98ccce1f502fc6b82)() = &::clang::NonTypeTemplateParmDecl::removeDefaultArgument;
    boost::python::class_< class ::clang::NonTypeTemplateParmDecl, autowig::HeldType< class ::clang::NonTypeTemplateParmDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_b1fd1e019724544297cacfa9f9dcfbac("NonTypeTemplateParmDecl", "", boost::python::no_init);
    class_b1fd1e019724544297cacfa9f9dcfbac.def("create_deserialized", method_pointer_316868ee1ab2550c96dc180b0aa76238, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("create_deserialized", method_pointer_e9c27ca9e29358ef88443d4bbadb9a2a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("classof", method_pointer_96c3fa948e545ce5a2ef9e24a76ac154, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("classof_kind", method_pointer_526fdb774a37546791ad935c9673e632, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("default_argument_was_inherited", method_pointer_0219d98a362d5ad78959a1485c0280f1, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("get_default_argument_loc", method_pointer_d03fda7e68ea574abe9c300bec077f46, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("get_expansion_type", method_pointer_937969977e2e5b0bb613c15da4ac23e6, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("get_num_expansion_types", method_pointer_020de3d7b86d53a1a458fdc6ef804e73, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("has_default_argument", method_pointer_7ba44429116153a895aeb0a2115bf349, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("is_expanded_parameter_pack", method_pointer_26450f6e5c795bc2b951f4e21eb33ef0, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("is_pack_expansion", method_pointer_646bf5131d09506aba31285638bd79b5, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("is_parameter_pack", method_pointer_c262e28ea0685a1a99b27d161b011666, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("remove_default_argument", method_pointer_22676637cf4658e98ccce1f502fc6b82, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.staticmethod("classof_kind");
    class_b1fd1e019724544297cacfa9f9dcfbac.staticmethod("create_deserialized");
    class_b1fd1e019724544297cacfa9f9dcfbac.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::NonTypeTemplateParmDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::NonTypeTemplateParmDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}