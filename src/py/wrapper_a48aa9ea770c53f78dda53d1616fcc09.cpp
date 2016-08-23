#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_a48aa9ea770c53f78dda53d1616fcc09()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::VarTemplateDecl  * (*method_pointer_c764b90c2e135cab87920d16e4dda921)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarTemplateDecl::CreateDeserialized;
    void  (::clang::VarTemplateDecl::*method_pointer_df5b62214fdb5f65b156596ac321839f)() const = &::clang::VarTemplateDecl::LoadLazySpecializations;
    bool  (*method_pointer_739c2205523e5d54926ece985da36ce5)(class ::clang::Decl  const *) = ::clang::VarTemplateDecl::classof;
    bool  (*method_pointer_448656d89242585a9ac1d4fba4a1bb9e)(enum ::clang::Decl::Kind ) = ::clang::VarTemplateDecl::classofKind;
    class ::clang::VarTemplatePartialSpecializationDecl  * (::clang::VarTemplateDecl::*method_pointer_19db93e0e0a1566ab01c4463b29f237c)(class ::clang::VarTemplatePartialSpecializationDecl  *) = &::clang::VarTemplateDecl::findPartialSpecInstantiatedFromMember;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateDecl::*method_pointer_5a9c8638d7ff5e45a92c241f0302b3da)() = &::clang::VarTemplateDecl::getCanonicalDecl;
    class ::clang::VarTemplateDecl  const * (::clang::VarTemplateDecl::*method_pointer_0bb814a2450756109c5a03c325b7f31b)() const = &::clang::VarTemplateDecl::getCanonicalDecl;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateDecl::*method_pointer_d4dc73be9eeb59a1a2f7ef564b362b6b)() = &::clang::VarTemplateDecl::getDefinition;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateDecl::*method_pointer_64475529a7cc540585d75602431ecba9)() const = &::clang::VarTemplateDecl::getInstantiatedFromMemberTemplate;
    class ::clang::VarTemplateDecl  const * (::clang::VarTemplateDecl::*method_pointer_9b765df8624e5617b7f4910220d656e0)() const = &::clang::VarTemplateDecl::getMostRecentDecl;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateDecl::*method_pointer_a242df19dda95ba18199f461d69dfdb0)() = &::clang::VarTemplateDecl::getMostRecentDecl;
    class ::clang::VarTemplateDecl  const * (::clang::VarTemplateDecl::*method_pointer_20e05fd4025a505281fdfc2869c6f7c2)() const = &::clang::VarTemplateDecl::getPreviousDecl;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateDecl::*method_pointer_b6082f9585445ae4b6eddec91c3c8308)() = &::clang::VarTemplateDecl::getPreviousDecl;
    class ::clang::VarDecl  * (::clang::VarTemplateDecl::*method_pointer_f1d7a02247af51a5a97eb75923819552)() const = &::clang::VarTemplateDecl::getTemplatedDecl;
    bool  (::clang::VarTemplateDecl::*method_pointer_c886636899625286b7f145fcf838906e)() const = &::clang::VarTemplateDecl::isThisDeclarationADefinition;
    boost::python::class_< class ::clang::VarTemplateDecl, autowig::HeldType< class ::clang::VarTemplateDecl >, boost::python::bases< class ::clang::RedeclarableTemplateDecl >, boost::noncopyable > class_a48aa9ea770c53f78dda53d1616fcc09("VarTemplateDecl", "", boost::python::no_init);
    class_a48aa9ea770c53f78dda53d1616fcc09.def("create_deserialized", method_pointer_c764b90c2e135cab87920d16e4dda921, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("load_lazy_specializations", method_pointer_df5b62214fdb5f65b156596ac321839f, "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("classof", method_pointer_739c2205523e5d54926ece985da36ce5, "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("classof_kind", method_pointer_448656d89242585a9ac1d4fba4a1bb9e, "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("find_partial_spec_instantiated_from_member", method_pointer_19db93e0e0a1566ab01c4463b29f237c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_canonical_decl", method_pointer_5a9c8638d7ff5e45a92c241f0302b3da, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_canonical_decl", method_pointer_0bb814a2450756109c5a03c325b7f31b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_definition", method_pointer_d4dc73be9eeb59a1a2f7ef564b362b6b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_instantiated_from_member_template", method_pointer_64475529a7cc540585d75602431ecba9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_most_recent_decl", method_pointer_9b765df8624e5617b7f4910220d656e0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_most_recent_decl", method_pointer_a242df19dda95ba18199f461d69dfdb0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_previous_decl", method_pointer_20e05fd4025a505281fdfc2869c6f7c2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_previous_decl", method_pointer_b6082f9585445ae4b6eddec91c3c8308, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_templated_decl", method_pointer_f1d7a02247af51a5a97eb75923819552, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("is_this_declaration_a_definition", method_pointer_c886636899625286b7f145fcf838906e, "");
    class_a48aa9ea770c53f78dda53d1616fcc09.staticmethod("classof_kind");
    class_a48aa9ea770c53f78dda53d1616fcc09.staticmethod("create_deserialized");
    class_a48aa9ea770c53f78dda53d1616fcc09.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarTemplateDecl >, autowig::HeldType< class ::clang::RedeclarableTemplateDecl > >();
    }

}