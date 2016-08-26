#include "_clanglite.h"


namespace autowig
{
}


void wrapper_a48aa9ea770c53f78dda53d1616fcc09()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::VarTemplateDecl  * (*method_pointer_eb28cc9279a8552e89fa02851628e65d)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarTemplateDecl::CreateDeserialized;
    void  (::clang::VarTemplateDecl::*method_pointer_2cf6585f34c65f258b7050d9c6e9c266)() const = &::clang::VarTemplateDecl::LoadLazySpecializations;
    bool  (*method_pointer_42bd9360afef55e992275e43ab24368c)(class ::clang::Decl  const *) = ::clang::VarTemplateDecl::classof;
    bool  (*method_pointer_56bba5b75f625485a747ad0e995bf499)(enum ::clang::Decl::Kind ) = ::clang::VarTemplateDecl::classofKind;
    class ::clang::VarTemplatePartialSpecializationDecl  * (::clang::VarTemplateDecl::*method_pointer_19661d5420635e9f86ce44a5e5be8436)(class ::clang::VarTemplatePartialSpecializationDecl  *) = &::clang::VarTemplateDecl::findPartialSpecInstantiatedFromMember;
    class ::clang::VarTemplateDecl  const * (::clang::VarTemplateDecl::*method_pointer_b264b541619f5b4487a450a59c497b3d)() const = &::clang::VarTemplateDecl::getCanonicalDecl;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateDecl::*method_pointer_3f66d8c728fd549cbd06e0203fd8a9d3)() = &::clang::VarTemplateDecl::getCanonicalDecl;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateDecl::*method_pointer_54cefdeb1dfe5f1981709480eecfe8d6)() = &::clang::VarTemplateDecl::getDefinition;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateDecl::*method_pointer_0d83c5b317c55696bcb2820552cfc03e)() const = &::clang::VarTemplateDecl::getInstantiatedFromMemberTemplate;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateDecl::*method_pointer_d863dfff5ec155e9a12b5c2f719b5c61)() = &::clang::VarTemplateDecl::getMostRecentDecl;
    class ::clang::VarTemplateDecl  const * (::clang::VarTemplateDecl::*method_pointer_7ed32a0bc12356708a767b158d8fae03)() const = &::clang::VarTemplateDecl::getMostRecentDecl;
    class ::clang::VarTemplateDecl  const * (::clang::VarTemplateDecl::*method_pointer_a9fdbe09a38557edaf4f011d40cf22a5)() const = &::clang::VarTemplateDecl::getPreviousDecl;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateDecl::*method_pointer_2f4e969330215bb69999255e1d7ad066)() = &::clang::VarTemplateDecl::getPreviousDecl;
    class ::clang::VarDecl  * (::clang::VarTemplateDecl::*method_pointer_7ccb2be322c6551da75fb644fd177b4b)() const = &::clang::VarTemplateDecl::getTemplatedDecl;
    bool  (::clang::VarTemplateDecl::*method_pointer_616b119f43805ab7bed1726f24918c8a)() const = &::clang::VarTemplateDecl::isThisDeclarationADefinition;
    boost::python::class_< class ::clang::VarTemplateDecl, autowig::HeldType< class ::clang::VarTemplateDecl >, boost::python::bases< class ::clang::RedeclarableTemplateDecl >, boost::noncopyable > class_a48aa9ea770c53f78dda53d1616fcc09("VarTemplateDecl", "", boost::python::no_init);
    class_a48aa9ea770c53f78dda53d1616fcc09.def("create_deserialized", method_pointer_eb28cc9279a8552e89fa02851628e65d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("load_lazy_specializations", method_pointer_2cf6585f34c65f258b7050d9c6e9c266, "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("classof", method_pointer_42bd9360afef55e992275e43ab24368c, "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("classof_kind", method_pointer_56bba5b75f625485a747ad0e995bf499, "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("find_partial_spec_instantiated_from_member", method_pointer_19661d5420635e9f86ce44a5e5be8436, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_canonical_decl", method_pointer_b264b541619f5b4487a450a59c497b3d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_canonical_decl", method_pointer_3f66d8c728fd549cbd06e0203fd8a9d3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_definition", method_pointer_54cefdeb1dfe5f1981709480eecfe8d6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_instantiated_from_member_template", method_pointer_0d83c5b317c55696bcb2820552cfc03e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_most_recent_decl", method_pointer_d863dfff5ec155e9a12b5c2f719b5c61, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_most_recent_decl", method_pointer_7ed32a0bc12356708a767b158d8fae03, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_previous_decl", method_pointer_a9fdbe09a38557edaf4f011d40cf22a5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_previous_decl", method_pointer_2f4e969330215bb69999255e1d7ad066, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_templated_decl", method_pointer_7ccb2be322c6551da75fb644fd177b4b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("is_this_declaration_a_definition", method_pointer_616b119f43805ab7bed1726f24918c8a, "");
    class_a48aa9ea770c53f78dda53d1616fcc09.staticmethod("classof_kind");
    class_a48aa9ea770c53f78dda53d1616fcc09.staticmethod("create_deserialized");
    class_a48aa9ea770c53f78dda53d1616fcc09.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarTemplateDecl >, autowig::HeldType< class ::clang::RedeclarableTemplateDecl > >();
    }

}