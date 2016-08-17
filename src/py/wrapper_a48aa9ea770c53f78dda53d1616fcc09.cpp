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
    class ::clang::VarTemplateDecl  const * (::clang::VarTemplateDecl::*method_pointer_b37a499153555688b1662740ce76052b)() const = &::clang::VarTemplateDecl::getMostRecentDecl;
    class ::clang::VarTemplateDecl  const * (::clang::VarTemplateDecl::*method_pointer_e5a3103896c85e6b859f0f2bb27690f5)() const = &::clang::VarTemplateDecl::getPreviousDecl;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateDecl::*method_pointer_d11a515cf1d25683b21acee4a80ae41d)() = &::clang::VarTemplateDecl::getPreviousDecl;
    class ::clang::VarTemplateDecl  * (*method_pointer_5d099d154f47550aa87637b6296f5602)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarTemplateDecl::CreateDeserialized;
    void  (::clang::VarTemplateDecl::*method_pointer_0d4c44f7403e5db8b4ed18306e6d2aaa)() const = &::clang::VarTemplateDecl::LoadLazySpecializations;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateDecl::*method_pointer_c1b6a5198ecc5fda9e6640dbbba5a2d2)() const = &::clang::VarTemplateDecl::getInstantiatedFromMemberTemplate;
    class ::clang::VarTemplateDecl  const * (::clang::VarTemplateDecl::*method_pointer_4bcec70d2af557b58bcd55673324d7d1)() const = &::clang::VarTemplateDecl::getCanonicalDecl;
    bool  (::clang::VarTemplateDecl::*method_pointer_1822df437c7e59ed9366d3e269a86a37)() const = &::clang::VarTemplateDecl::isThisDeclarationADefinition;
    bool  (*method_pointer_a43a367d358b56a894067e5b85b964ae)(enum ::clang::Decl::Kind ) = ::clang::VarTemplateDecl::classofKind;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateDecl::*method_pointer_15a299ca03d15bfaa2578b62105f3425)() = &::clang::VarTemplateDecl::getMostRecentDecl;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateDecl::*method_pointer_5f08d79f5f4258b6b269bcf0ab572f27)() = &::clang::VarTemplateDecl::getCanonicalDecl;
    class ::clang::VarTemplatePartialSpecializationDecl  * (::clang::VarTemplateDecl::*method_pointer_45dce81521da52deacc5d4b9de4a1eea)(class ::clang::VarTemplatePartialSpecializationDecl  *) = &::clang::VarTemplateDecl::findPartialSpecInstantiatedFromMember;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateDecl::*method_pointer_334b80133c8451bcaea60d633fb7c72c)() = &::clang::VarTemplateDecl::getDefinition;
    bool  (*method_pointer_427eab82a523567a8e419aee9defd570)(class ::clang::Decl  const *) = ::clang::VarTemplateDecl::classof;
    class ::clang::VarDecl  * (::clang::VarTemplateDecl::*method_pointer_a15de82d166a569d8c971aec08b68ee0)() const = &::clang::VarTemplateDecl::getTemplatedDecl;
    boost::python::class_< class ::clang::VarTemplateDecl, autowig::HeldType< class ::clang::VarTemplateDecl >, boost::python::bases< class ::clang::RedeclarableTemplateDecl >, boost::noncopyable > class_a48aa9ea770c53f78dda53d1616fcc09("VarTemplateDecl", "", boost::python::no_init);
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_most_recent_decl", method_pointer_b37a499153555688b1662740ce76052b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_previous_decl", method_pointer_e5a3103896c85e6b859f0f2bb27690f5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_previous_decl", method_pointer_d11a515cf1d25683b21acee4a80ae41d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("create_deserialized", method_pointer_5d099d154f47550aa87637b6296f5602, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("load_lazy_specializations", method_pointer_0d4c44f7403e5db8b4ed18306e6d2aaa, "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_instantiated_from_member_template", method_pointer_c1b6a5198ecc5fda9e6640dbbba5a2d2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_canonical_decl", method_pointer_4bcec70d2af557b58bcd55673324d7d1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("is_this_declaration_a_definition", method_pointer_1822df437c7e59ed9366d3e269a86a37, "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("classof_kind", method_pointer_a43a367d358b56a894067e5b85b964ae, "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_most_recent_decl", method_pointer_15a299ca03d15bfaa2578b62105f3425, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_canonical_decl", method_pointer_5f08d79f5f4258b6b269bcf0ab572f27, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("find_partial_spec_instantiated_from_member", method_pointer_45dce81521da52deacc5d4b9de4a1eea, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_definition", method_pointer_334b80133c8451bcaea60d633fb7c72c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("classof", method_pointer_427eab82a523567a8e419aee9defd570, "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_templated_decl", method_pointer_a15de82d166a569d8c971aec08b68ee0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.staticmethod("classof_kind");
    class_a48aa9ea770c53f78dda53d1616fcc09.staticmethod("create_deserialized");
    class_a48aa9ea770c53f78dda53d1616fcc09.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarTemplateDecl >, autowig::HeldType< class ::clang::RedeclarableTemplateDecl > >();
    }

}