#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_a48aa9ea770c53f78dda53d1616fcc09()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_ece74580725a54ea9a6efafa4ecc61db)(class ::clang::Decl  const *) = ::clang::VarTemplateDecl::classof;
    class ::clang::VarTemplateDecl  const * (::clang::VarTemplateDecl::*method_pointer_05f9cc86da0c5ecc9c12ba346f175521)() const = &::clang::VarTemplateDecl::getPreviousDecl;
    class ::clang::VarTemplateDecl  const * (::clang::VarTemplateDecl::*method_pointer_dee9b5b057185d07abe1d7205b1d034f)() const = &::clang::VarTemplateDecl::getMostRecentDecl;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateDecl::*method_pointer_28363d84359b59f58ebbed7b844cda61)() = &::clang::VarTemplateDecl::getPreviousDecl;
    bool  (::clang::VarTemplateDecl::*method_pointer_801fd73b2b5e5cf1b32a7275b9248037)() const = &::clang::VarTemplateDecl::isThisDeclarationADefinition;
    class ::clang::VarDecl  * (::clang::VarTemplateDecl::*method_pointer_e08010ec7faf538080fcb84f84a50318)() const = &::clang::VarTemplateDecl::getTemplatedDecl;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateDecl::*method_pointer_bdcf1d2ed67052ea8468cf9b3cc7158f)() const = &::clang::VarTemplateDecl::getInstantiatedFromMemberTemplate;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateDecl::*method_pointer_c971efca48625b3c9126496f4e26f36e)() = &::clang::VarTemplateDecl::getCanonicalDecl;
    void  (::clang::VarTemplateDecl::*method_pointer_633fb6609ea15428a432a28e00ffd750)() const = &::clang::VarTemplateDecl::LoadLazySpecializations;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateDecl::*method_pointer_394133e1d8585cbfacebfaef3a8444bd)() = &::clang::VarTemplateDecl::getDefinition;
    class ::clang::VarTemplateDecl  const * (::clang::VarTemplateDecl::*method_pointer_12545ff9a6dc53ffa0f623698072bfdb)() const = &::clang::VarTemplateDecl::getCanonicalDecl;
    class ::clang::VarTemplateDecl  * (*method_pointer_6713ed5442385fe5ba840edc4a2e4c33)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarTemplateDecl::CreateDeserialized;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateDecl::*method_pointer_409910301a3d5836872438b165d4fecb)() = &::clang::VarTemplateDecl::getMostRecentDecl;
    bool  (*method_pointer_1c0e0d4e72a458ffa4e224ff92063ab3)(enum ::clang::Decl::Kind ) = ::clang::VarTemplateDecl::classofKind;
    class ::clang::VarTemplatePartialSpecializationDecl  * (::clang::VarTemplateDecl::*method_pointer_5a194c048a775003aca8e08fc43b7b4f)(class ::clang::VarTemplatePartialSpecializationDecl  *) = &::clang::VarTemplateDecl::findPartialSpecInstantiatedFromMember;
    boost::python::class_< class ::clang::VarTemplateDecl, autowig::HeldType< class ::clang::VarTemplateDecl >, boost::python::bases< class ::clang::RedeclarableTemplateDecl >, boost::noncopyable > class_a48aa9ea770c53f78dda53d1616fcc09("VarTemplateDecl", "", boost::python::no_init);
    class_a48aa9ea770c53f78dda53d1616fcc09.def("classof", method_pointer_ece74580725a54ea9a6efafa4ecc61db, "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_previous_decl", method_pointer_05f9cc86da0c5ecc9c12ba346f175521, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_most_recent_decl", method_pointer_dee9b5b057185d07abe1d7205b1d034f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_previous_decl", method_pointer_28363d84359b59f58ebbed7b844cda61, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("is_this_declaration_a_definition", method_pointer_801fd73b2b5e5cf1b32a7275b9248037, "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_templated_decl", method_pointer_e08010ec7faf538080fcb84f84a50318, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_instantiated_from_member_template", method_pointer_bdcf1d2ed67052ea8468cf9b3cc7158f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_canonical_decl", method_pointer_c971efca48625b3c9126496f4e26f36e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("load_lazy_specializations", method_pointer_633fb6609ea15428a432a28e00ffd750, "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_definition", method_pointer_394133e1d8585cbfacebfaef3a8444bd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_canonical_decl", method_pointer_12545ff9a6dc53ffa0f623698072bfdb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("create_deserialized", method_pointer_6713ed5442385fe5ba840edc4a2e4c33, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_most_recent_decl", method_pointer_409910301a3d5836872438b165d4fecb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("classof_kind", method_pointer_1c0e0d4e72a458ffa4e224ff92063ab3, "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("find_partial_spec_instantiated_from_member", method_pointer_5a194c048a775003aca8e08fc43b7b4f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.staticmethod("classof_kind");
    class_a48aa9ea770c53f78dda53d1616fcc09.staticmethod("create_deserialized");
    class_a48aa9ea770c53f78dda53d1616fcc09.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarTemplateDecl >, autowig::HeldType< class ::clang::RedeclarableTemplateDecl > >();
    }

}