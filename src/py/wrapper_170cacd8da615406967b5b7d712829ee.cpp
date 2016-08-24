#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_170cacd8da615406967b5b7d712829ee()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::FunctionTemplateDecl  * (*method_pointer_643bd2b8a90657c9845b02bdb4311bb4)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FunctionTemplateDecl::CreateDeserialized;
    void  (::clang::FunctionTemplateDecl::*method_pointer_3421835b82f85927a584eb6954cebdfc)() const = &::clang::FunctionTemplateDecl::LoadLazySpecializations;
    bool  (*method_pointer_8d25e47c3b315424a16a1257350af9d2)(class ::clang::Decl  const *) = ::clang::FunctionTemplateDecl::classof;
    bool  (*method_pointer_d58e841ae7ad5d7fae76d2a36c792117)(enum ::clang::Decl::Kind ) = ::clang::FunctionTemplateDecl::classofKind;
    class ::clang::FunctionTemplateDecl  const * (::clang::FunctionTemplateDecl::*method_pointer_24321611faac59e7a2401d21250dcd70)() const = &::clang::FunctionTemplateDecl::getCanonicalDecl;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionTemplateDecl::*method_pointer_cdfa3e74027e5334a1030a78d1af5328)() = &::clang::FunctionTemplateDecl::getCanonicalDecl;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionTemplateDecl::*method_pointer_bf788c13003c578eae1eda8a0bfe9759)() const = &::clang::FunctionTemplateDecl::getInstantiatedFromMemberTemplate;
    class ::clang::FunctionTemplateDecl  const * (::clang::FunctionTemplateDecl::*method_pointer_e354fd93947a59adb442e198182badb6)() const = &::clang::FunctionTemplateDecl::getMostRecentDecl;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionTemplateDecl::*method_pointer_5f705562ff2e55548e719b1451374a53)() = &::clang::FunctionTemplateDecl::getMostRecentDecl;
    class ::clang::FunctionTemplateDecl  * (::clang::FunctionTemplateDecl::*method_pointer_1cff0d34bd5a5a43b161d138e34cd978)() = &::clang::FunctionTemplateDecl::getPreviousDecl;
    class ::clang::FunctionTemplateDecl  const * (::clang::FunctionTemplateDecl::*method_pointer_c2c23f120a00532494ad3069f299fc7b)() const = &::clang::FunctionTemplateDecl::getPreviousDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionTemplateDecl::*method_pointer_c448168e917956cf818493e30e89e182)() const = &::clang::FunctionTemplateDecl::getTemplatedDecl;
    bool  (::clang::FunctionTemplateDecl::*method_pointer_6930fc77697454709ca5bac4083c0007)() const = &::clang::FunctionTemplateDecl::isThisDeclarationADefinition;
    boost::python::class_< class ::clang::FunctionTemplateDecl, autowig::HeldType< class ::clang::FunctionTemplateDecl >, boost::python::bases< class ::clang::RedeclarableTemplateDecl >, boost::noncopyable > class_170cacd8da615406967b5b7d712829ee("FunctionTemplateDecl", "", boost::python::no_init);
    class_170cacd8da615406967b5b7d712829ee.def("create_deserialized", method_pointer_643bd2b8a90657c9845b02bdb4311bb4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("load_lazy_specializations", method_pointer_3421835b82f85927a584eb6954cebdfc, "");
    class_170cacd8da615406967b5b7d712829ee.def("classof", method_pointer_8d25e47c3b315424a16a1257350af9d2, "");
    class_170cacd8da615406967b5b7d712829ee.def("classof_kind", method_pointer_d58e841ae7ad5d7fae76d2a36c792117, "");
    class_170cacd8da615406967b5b7d712829ee.def("get_canonical_decl", method_pointer_24321611faac59e7a2401d21250dcd70, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_canonical_decl", method_pointer_cdfa3e74027e5334a1030a78d1af5328, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_instantiated_from_member_template", method_pointer_bf788c13003c578eae1eda8a0bfe9759, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_most_recent_decl", method_pointer_e354fd93947a59adb442e198182badb6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_most_recent_decl", method_pointer_5f705562ff2e55548e719b1451374a53, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_previous_decl", method_pointer_1cff0d34bd5a5a43b161d138e34cd978, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_previous_decl", method_pointer_c2c23f120a00532494ad3069f299fc7b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_templated_decl", method_pointer_c448168e917956cf818493e30e89e182, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("is_this_declaration_a_definition", method_pointer_6930fc77697454709ca5bac4083c0007, "");
    class_170cacd8da615406967b5b7d712829ee.staticmethod("classof_kind");
    class_170cacd8da615406967b5b7d712829ee.staticmethod("create_deserialized");
    class_170cacd8da615406967b5b7d712829ee.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionTemplateDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionTemplateDecl >, autowig::HeldType< class ::clang::RedeclarableTemplateDecl > >();
    }

}