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
    class ::clang::VarTemplateDecl  * (*method_pointer_897d663c345c56e8bc73772a1841f765)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarTemplateDecl::CreateDeserialized;
    void  (::clang::VarTemplateDecl::*method_pointer_2c7e6f1576805e28993ef49fb0c16c5c)() const = &::clang::VarTemplateDecl::LoadLazySpecializations;
    bool  (*method_pointer_f0c661826d82514f914e71d8a898ed58)(class ::clang::Decl  const *) = ::clang::VarTemplateDecl::classof;
    bool  (*method_pointer_ecc759783903594e9d8a65b7fcd00519)(enum ::clang::Decl::Kind ) = ::clang::VarTemplateDecl::classofKind;
    class ::clang::VarTemplatePartialSpecializationDecl  * (::clang::VarTemplateDecl::*method_pointer_95cfab21da42561cb699f7e196c635ec)(class ::clang::VarTemplatePartialSpecializationDecl  *) = &::clang::VarTemplateDecl::findPartialSpecInstantiatedFromMember;
    class ::clang::VarTemplateDecl  const * (::clang::VarTemplateDecl::*method_pointer_d296b27eeb3c5b56b0064ffbae465847)() const = &::clang::VarTemplateDecl::getCanonicalDecl;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateDecl::*method_pointer_b0d099a4e4c2594494a241345c7fe174)() = &::clang::VarTemplateDecl::getCanonicalDecl;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateDecl::*method_pointer_826ab2519f1f50bd9e2bb8e71d4ce038)() = &::clang::VarTemplateDecl::getDefinition;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateDecl::*method_pointer_dbfd8b111cf95d8fbe13064c498dcc2c)() const = &::clang::VarTemplateDecl::getInstantiatedFromMemberTemplate;
    class ::clang::VarTemplateDecl  const * (::clang::VarTemplateDecl::*method_pointer_c2f04d7590145fe095c01f1acc78a6ac)() const = &::clang::VarTemplateDecl::getMostRecentDecl;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateDecl::*method_pointer_f7510118bbe052dda97b102c34d24f5a)() = &::clang::VarTemplateDecl::getMostRecentDecl;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateDecl::*method_pointer_f11a38f0092b54c3a640b9768ecfd068)() = &::clang::VarTemplateDecl::getPreviousDecl;
    class ::clang::VarTemplateDecl  const * (::clang::VarTemplateDecl::*method_pointer_e27e85c4e61b51929b7d3ebb77896a77)() const = &::clang::VarTemplateDecl::getPreviousDecl;
    class ::clang::VarDecl  * (::clang::VarTemplateDecl::*method_pointer_6987b2e049f155409bca4d3d2db2e05f)() const = &::clang::VarTemplateDecl::getTemplatedDecl;
    bool  (::clang::VarTemplateDecl::*method_pointer_c2171f72284a5023880ab985af3cbc93)() const = &::clang::VarTemplateDecl::isThisDeclarationADefinition;
    boost::python::class_< class ::clang::VarTemplateDecl, autowig::HeldType< class ::clang::VarTemplateDecl >, boost::python::bases< class ::clang::RedeclarableTemplateDecl >, boost::noncopyable > class_a48aa9ea770c53f78dda53d1616fcc09("VarTemplateDecl", "", boost::python::no_init);
    class_a48aa9ea770c53f78dda53d1616fcc09.def("create_deserialized", method_pointer_897d663c345c56e8bc73772a1841f765, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("load_lazy_specializations", method_pointer_2c7e6f1576805e28993ef49fb0c16c5c, "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("classof", method_pointer_f0c661826d82514f914e71d8a898ed58, "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("classof_kind", method_pointer_ecc759783903594e9d8a65b7fcd00519, "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("find_partial_spec_instantiated_from_member", method_pointer_95cfab21da42561cb699f7e196c635ec, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_canonical_decl", method_pointer_d296b27eeb3c5b56b0064ffbae465847, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_canonical_decl", method_pointer_b0d099a4e4c2594494a241345c7fe174, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_definition", method_pointer_826ab2519f1f50bd9e2bb8e71d4ce038, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_instantiated_from_member_template", method_pointer_dbfd8b111cf95d8fbe13064c498dcc2c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_most_recent_decl", method_pointer_c2f04d7590145fe095c01f1acc78a6ac, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_most_recent_decl", method_pointer_f7510118bbe052dda97b102c34d24f5a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_previous_decl", method_pointer_f11a38f0092b54c3a640b9768ecfd068, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_previous_decl", method_pointer_e27e85c4e61b51929b7d3ebb77896a77, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_templated_decl", method_pointer_6987b2e049f155409bca4d3d2db2e05f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("is_this_declaration_a_definition", method_pointer_c2171f72284a5023880ab985af3cbc93, "");
    class_a48aa9ea770c53f78dda53d1616fcc09.staticmethod("classof_kind");
    class_a48aa9ea770c53f78dda53d1616fcc09.staticmethod("create_deserialized");
    class_a48aa9ea770c53f78dda53d1616fcc09.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarTemplateDecl >, autowig::HeldType< class ::clang::RedeclarableTemplateDecl > >();
    }

}