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
    class ::clang::VarTemplateDecl  * (*method_pointer_dd525fbc383754568ece95f1dd1d49bc)(class ::clang::ASTContext  &, unsigned int ) = ::clang::VarTemplateDecl::CreateDeserialized;
    void  (::clang::VarTemplateDecl::*method_pointer_4e3368592a1752869d6cf93021f9263d)() const = &::clang::VarTemplateDecl::LoadLazySpecializations;
    bool  (*method_pointer_1f31bfa91fdb5924bc13651f6c5e4dd7)(class ::clang::Decl  const *) = ::clang::VarTemplateDecl::classof;
    bool  (*method_pointer_47b1b8d2f2ef5cae837dc077de1da19e)(enum ::clang::Decl::Kind ) = ::clang::VarTemplateDecl::classofKind;
    class ::clang::VarTemplatePartialSpecializationDecl  * (::clang::VarTemplateDecl::*method_pointer_ac102d9cd310573ca6539bcd0dc7fc1e)(class ::clang::VarTemplatePartialSpecializationDecl  *) = &::clang::VarTemplateDecl::findPartialSpecInstantiatedFromMember;
    class ::clang::VarTemplateDecl  const * (::clang::VarTemplateDecl::*method_pointer_faf08dbad35a5b14990dbe40a2d42e93)() const = &::clang::VarTemplateDecl::getCanonicalDecl;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateDecl::*method_pointer_055f72938c6a5a82994c0855e3822928)() = &::clang::VarTemplateDecl::getCanonicalDecl;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateDecl::*method_pointer_b5d32aebddce53a1a89fbc4f49c7aeab)() = &::clang::VarTemplateDecl::getDefinition;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateDecl::*method_pointer_363f35cc70fe5794883e4222b217d8a9)() const = &::clang::VarTemplateDecl::getInstantiatedFromMemberTemplate;
    class ::clang::VarTemplateDecl  const * (::clang::VarTemplateDecl::*method_pointer_ccd3e30f63845b00afbe4568d922bb3a)() const = &::clang::VarTemplateDecl::getMostRecentDecl;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateDecl::*method_pointer_c9c9c9a20dbd522b8723d3ae540dd21c)() = &::clang::VarTemplateDecl::getMostRecentDecl;
    class ::clang::VarTemplateDecl  const * (::clang::VarTemplateDecl::*method_pointer_1f937e846a7258bda64aa43226c7b1c3)() const = &::clang::VarTemplateDecl::getPreviousDecl;
    class ::clang::VarTemplateDecl  * (::clang::VarTemplateDecl::*method_pointer_9f31f939043f5bc6afd970ca754a944b)() = &::clang::VarTemplateDecl::getPreviousDecl;
    class ::clang::VarDecl  * (::clang::VarTemplateDecl::*method_pointer_c74d9f47139e5f4cae1727af66dfad9d)() const = &::clang::VarTemplateDecl::getTemplatedDecl;
    bool  (::clang::VarTemplateDecl::*method_pointer_33caf138a0cd515b819a0388f37325d1)() const = &::clang::VarTemplateDecl::isThisDeclarationADefinition;
    boost::python::class_< class ::clang::VarTemplateDecl, autowig::HeldType< class ::clang::VarTemplateDecl >, boost::python::bases< class ::clang::RedeclarableTemplateDecl >, boost::noncopyable > class_a48aa9ea770c53f78dda53d1616fcc09("VarTemplateDecl", "", boost::python::no_init);
    class_a48aa9ea770c53f78dda53d1616fcc09.def("create_deserialized", method_pointer_dd525fbc383754568ece95f1dd1d49bc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("load_lazy_specializations", method_pointer_4e3368592a1752869d6cf93021f9263d, "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("classof", method_pointer_1f31bfa91fdb5924bc13651f6c5e4dd7, "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("classof_kind", method_pointer_47b1b8d2f2ef5cae837dc077de1da19e, "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("find_partial_spec_instantiated_from_member", method_pointer_ac102d9cd310573ca6539bcd0dc7fc1e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_canonical_decl", method_pointer_faf08dbad35a5b14990dbe40a2d42e93, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_canonical_decl", method_pointer_055f72938c6a5a82994c0855e3822928, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_definition", method_pointer_b5d32aebddce53a1a89fbc4f49c7aeab, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_instantiated_from_member_template", method_pointer_363f35cc70fe5794883e4222b217d8a9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_most_recent_decl", method_pointer_ccd3e30f63845b00afbe4568d922bb3a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_most_recent_decl", method_pointer_c9c9c9a20dbd522b8723d3ae540dd21c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_previous_decl", method_pointer_1f937e846a7258bda64aa43226c7b1c3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_previous_decl", method_pointer_9f31f939043f5bc6afd970ca754a944b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("get_templated_decl", method_pointer_c74d9f47139e5f4cae1727af66dfad9d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a48aa9ea770c53f78dda53d1616fcc09.def("is_this_declaration_a_definition", method_pointer_33caf138a0cd515b819a0388f37325d1, "");
    class_a48aa9ea770c53f78dda53d1616fcc09.staticmethod("classof_kind");
    class_a48aa9ea770c53f78dda53d1616fcc09.staticmethod("create_deserialized");
    class_a48aa9ea770c53f78dda53d1616fcc09.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VarTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VarTemplateDecl >, autowig::HeldType< class ::clang::RedeclarableTemplateDecl > >();
    }

}