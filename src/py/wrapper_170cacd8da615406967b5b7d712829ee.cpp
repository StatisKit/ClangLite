#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_170cacd8da615406967b5b7d712829ee()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::FunctionTemplateDecl  const * (::clang::FunctionTemplateDecl::*method_pointer_8ba89f1955255a6793313a48ded50940)() const = &::clang::FunctionTemplateDecl::getCanonicalDecl;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionTemplateDecl::*method_pointer_d7e7f4ba82bf58bcbe7fb5e7d93291e3)() = &::clang::FunctionTemplateDecl::getCanonicalDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionTemplateDecl::*method_pointer_475de40801f15b9a961e821b9a1f5541)() const = &::clang::FunctionTemplateDecl::getTemplatedDecl;
    class ::clang::FunctionTemplateDecl  const * (::clang::FunctionTemplateDecl::*method_pointer_00d436ea0e08525785a527d85fa366d1)() const = &::clang::FunctionTemplateDecl::getMostRecentDecl;
    void  (::clang::FunctionTemplateDecl::*method_pointer_a6f35b0a609e5f3abef0bbb83b74510e)() const = &::clang::FunctionTemplateDecl::LoadLazySpecializations;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionTemplateDecl::*method_pointer_5a698443916e5e8c827fdb47cf46a88a)() = &::clang::FunctionTemplateDecl::getPreviousDecl;
    class ::clang::FunctionTemplateDecl  const * (::clang::FunctionTemplateDecl::*method_pointer_ab80b181c5de5e51b172ea602bb547f9)() const = &::clang::FunctionTemplateDecl::getPreviousDecl;
    bool  (::clang::FunctionTemplateDecl::*method_pointer_270a42f359105646ba5b2d7a248fede3)() const = &::clang::FunctionTemplateDecl::isThisDeclarationADefinition;
    bool  (*method_pointer_1c9a94ea0d2e57c6bafe76656e2b442d)(class ::clang::Decl  const *) = ::clang::FunctionTemplateDecl::classof;
    bool  (*method_pointer_d58c983840f75365a1650a681f0e3f8e)(enum ::clang::Decl::Kind ) = ::clang::FunctionTemplateDecl::classofKind;
    class ::clang::FunctionTemplateDecl  * (*method_pointer_9953f4c7c43e5389a0ccb2228c9da5d6)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionTemplateDecl::CreateDeserialized;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionTemplateDecl::*method_pointer_32b569233f315ecd8fd17100281ddd67)() = &::clang::FunctionTemplateDecl::getMostRecentDecl;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionTemplateDecl::*method_pointer_9af8ff7e35905bb69478233ecc67de73)() const = &::clang::FunctionTemplateDecl::getInstantiatedFromMemberTemplate;
    boost::python::class_< class ::clang::FunctionTemplateDecl, autowig::HeldType< class ::clang::FunctionTemplateDecl >, boost::python::bases< class ::clang::RedeclarableTemplateDecl >, boost::noncopyable > class_170cacd8da615406967b5b7d712829ee("FunctionTemplateDecl", "", boost::python::no_init);
    class_170cacd8da615406967b5b7d712829ee.def("get_canonical_decl", method_pointer_8ba89f1955255a6793313a48ded50940, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_canonical_decl", method_pointer_d7e7f4ba82bf58bcbe7fb5e7d93291e3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_templated_decl", method_pointer_475de40801f15b9a961e821b9a1f5541, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_most_recent_decl", method_pointer_00d436ea0e08525785a527d85fa366d1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("load_lazy_specializations", method_pointer_a6f35b0a609e5f3abef0bbb83b74510e, "");
    class_170cacd8da615406967b5b7d712829ee.def("get_previous_decl", method_pointer_5a698443916e5e8c827fdb47cf46a88a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_previous_decl", method_pointer_ab80b181c5de5e51b172ea602bb547f9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("is_this_declaration_a_definition", method_pointer_270a42f359105646ba5b2d7a248fede3, "");
    class_170cacd8da615406967b5b7d712829ee.def("classof", method_pointer_1c9a94ea0d2e57c6bafe76656e2b442d, "");
    class_170cacd8da615406967b5b7d712829ee.def("classof_kind", method_pointer_d58c983840f75365a1650a681f0e3f8e, "");
    class_170cacd8da615406967b5b7d712829ee.def("create_deserialized", method_pointer_9953f4c7c43e5389a0ccb2228c9da5d6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_most_recent_decl", method_pointer_32b569233f315ecd8fd17100281ddd67, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_instantiated_from_member_template", method_pointer_9af8ff7e35905bb69478233ecc67de73, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.staticmethod("classof_kind");
    class_170cacd8da615406967b5b7d712829ee.staticmethod("create_deserialized");
    class_170cacd8da615406967b5b7d712829ee.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionTemplateDecl >, autowig::HeldType< class ::clang::RedeclarableTemplateDecl > >();
    }

}