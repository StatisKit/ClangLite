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
    class ::clang::VarTemplateDecl  * (*method_pointer_332447c6ca2952d9ba5744d87a6e862c)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarTemplateDecl::CreateDeserialized;
    void  (::clang::VarTemplateDecl::*method_pointer_e8786baba2915ca3b32a589ddd5f9ebf)() const = &::clang::VarTemplateDecl::LoadLazySpecializations;
    bool  (*method_pointer_2381563950d159bc892611c4c5b440e8)(class ::clang::Decl  const *) = ::clang::VarTemplateDecl::classof;
    bool  (*method_pointer_d022788649d158e3a6375a9c968ce73a)(enum ::clang::Decl::Kind ) = ::clang::VarTemplateDecl::classofKind;
    class ::clang::VarTemplatePartialSpecializationDecl  * (::clang::VarTemplateDecl::*method_pointer_4f22bcfde37350cc99a73b2dc95ef27d)(class ::clang::VarTemplatePartialSpecializationDecl  *) = &::clang::VarTemplateDecl::findPartialSpecInstantiatedFromMember;
    class ::clang::VarTemplateDecl  const * (::clang::VarTemplateDecl::*method_pointer_cbd7959b338e54138a003ba86b6291e5)() const = &::clang::VarTemplateDecl::getCanonicalDecl;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateDecl::*method_pointer_76d7dc68ee155b1e82aaafc8f627d1aa)() = &::clang::VarTemplateDecl::getCanonicalDecl;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateDecl::*method_pointer_50fc53d8eae75b6ebf6db05e124eea5f)() = &::clang::VarTemplateDecl::getDefinition;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateDecl::*method_pointer_e991d76778e25217a0cadf7d21578561)() const = &::clang::VarTemplateDecl::getInstantiatedFromMemberTemplate;
    class ::clang::VarTemplateDecl  const * (::clang::VarTemplateDecl::*method_pointer_d89f1c2443085d07991d40d033c82e20)() const = &::clang::VarTemplateDecl::getMostRecentDecl;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateDecl::*method_pointer_7be8ca25dc6b5b00bebde0a685574076)() = &::clang::VarTemplateDecl::getMostRecentDecl;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateDecl::*method_pointer_10e5c7bd6bb45abaa127179209e1f1b0)() = &::clang::VarTemplateDecl::getPreviousDecl;
    class ::clang::VarTemplateDecl  const * (::clang::VarTemplateDecl::*method_pointer_0763f4a40e0857009645b7bc91385301)() const = &::clang::VarTemplateDecl::getPreviousDecl;
    class ::clang::VarDecl  * (::clang::VarTemplateDecl::*method_pointer_692e9b10149e502b866941c1a569d4a9)() const = &::clang::VarTemplateDecl::getTemplatedDecl;
    bool  (::clang::VarTemplateDecl::*method_pointer_dc07857a0f93536c974d369620f3d44f)() const = &::clang::VarTemplateDecl::isThisDeclarationADefinition;
    boost::python::class_< class ::clang::VarTemplateDecl, autowig::HeldType< class ::clang::VarTemplateDecl >, boost::python::bases< class ::clang::RedeclarableTemplateDecl >, boost::noncopyable > class_a48aa9ea770c53f78dda53d1616fcc09("VarTemplateDecl", "", boost::python::no_init);
    class_a48aa9ea770c53f78dda53d1616fcc09.def("create_deserialized", method_pointer_332447c6ca2952d9ba5744d87a6e862c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("load_lazy_specializations", method_pointer_e8786baba2915ca3b32a589ddd5f9ebf, "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("classof", method_pointer_2381563950d159bc892611c4c5b440e8, "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("classof_kind", method_pointer_d022788649d158e3a6375a9c968ce73a, "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("find_partial_spec_instantiated_from_member", method_pointer_4f22bcfde37350cc99a73b2dc95ef27d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_canonical_decl", method_pointer_cbd7959b338e54138a003ba86b6291e5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_canonical_decl", method_pointer_76d7dc68ee155b1e82aaafc8f627d1aa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_definition", method_pointer_50fc53d8eae75b6ebf6db05e124eea5f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_instantiated_from_member_template", method_pointer_e991d76778e25217a0cadf7d21578561, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_most_recent_decl", method_pointer_d89f1c2443085d07991d40d033c82e20, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_most_recent_decl", method_pointer_7be8ca25dc6b5b00bebde0a685574076, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_previous_decl", method_pointer_10e5c7bd6bb45abaa127179209e1f1b0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_previous_decl", method_pointer_0763f4a40e0857009645b7bc91385301, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_templated_decl", method_pointer_692e9b10149e502b866941c1a569d4a9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("is_this_declaration_a_definition", method_pointer_dc07857a0f93536c974d369620f3d44f, "");
    class_a48aa9ea770c53f78dda53d1616fcc09.staticmethod("classof_kind");
    class_a48aa9ea770c53f78dda53d1616fcc09.staticmethod("create_deserialized");
    class_a48aa9ea770c53f78dda53d1616fcc09.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarTemplateDecl >, autowig::HeldType< class ::clang::RedeclarableTemplateDecl > >();
    }

}