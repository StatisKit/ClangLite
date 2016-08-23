#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_f36600d29ca4530a95955d39f3729dd4()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ClassTemplateSpecializationDecl  * (*method_pointer_ba78aacfedb95906abb09e5592e9dd46)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ClassTemplateSpecializationDecl::CreateDeserialized;
    bool  (*method_pointer_5fc88592875d550d81ef167a28f02fb6)(class ::clang::Decl  const *) = ::clang::ClassTemplateSpecializationDecl::classof;
    bool  (*method_pointer_06f2fea0b91f55839bf30ce7c0fe8f10)(enum ::clang::Decl::Kind ) = ::clang::ClassTemplateSpecializationDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ClassTemplateSpecializationDecl::*method_pointer_3b6b5adb014356fb8473bc53f96bc1b6)() const = &::clang::ClassTemplateSpecializationDecl::getExternLoc;
    class ::clang::ClassTemplateSpecializationDecl  * (::clang::ClassTemplateSpecializationDecl::*method_pointer_1f01bf538fce5a11b5a311292715cd04)() = &::clang::ClassTemplateSpecializationDecl::getMostRecentDecl;
    class ::clang::SourceLocation  (::clang::ClassTemplateSpecializationDecl::*method_pointer_fb7c9cd6aa3651839986c73269f0a43b)() const = &::clang::ClassTemplateSpecializationDecl::getPointOfInstantiation;
    class ::clang::ClassTemplateDecl  * (::clang::ClassTemplateSpecializationDecl::*method_pointer_16563bd52e6f522eb2373b41fab33e59)() const = &::clang::ClassTemplateSpecializationDecl::getSpecializedTemplate;
    class ::clang::SourceLocation  (::clang::ClassTemplateSpecializationDecl::*method_pointer_4f8cf812cbf256e79a560a5852a3c63e)() const = &::clang::ClassTemplateSpecializationDecl::getTemplateKeywordLoc;
    bool  (::clang::ClassTemplateSpecializationDecl::*method_pointer_8e6c3cb711555dda80fbbb85be1ffb58)() const = &::clang::ClassTemplateSpecializationDecl::isExplicitInstantiationOrSpecialization;
    bool  (::clang::ClassTemplateSpecializationDecl::*method_pointer_019dc6767c21510792a8ec627754332d)() const = &::clang::ClassTemplateSpecializationDecl::isExplicitSpecialization;
    void  (::clang::ClassTemplateSpecializationDecl::*method_pointer_1f615145116f525db1cebfb7bdd28bcd)(class ::clang::SourceLocation ) = &::clang::ClassTemplateSpecializationDecl::setExternLoc;
    void  (::clang::ClassTemplateSpecializationDecl::*method_pointer_4040a4a35a9e5ab2a5ebc53f04cc2a6f)(class ::clang::ClassTemplateDecl  *) = &::clang::ClassTemplateSpecializationDecl::setInstantiationOf;
    void  (::clang::ClassTemplateSpecializationDecl::*method_pointer_27bb408a750058a598c314b1d4d884e8)(class ::clang::ClassTemplatePartialSpecializationDecl  *, class ::clang::TemplateArgumentList  const *) = &::clang::ClassTemplateSpecializationDecl::setInstantiationOf;
    void  (::clang::ClassTemplateSpecializationDecl::*method_pointer_50b8f6030cfe517ea7f0b1fabb47ddd0)(class ::clang::SourceLocation ) = &::clang::ClassTemplateSpecializationDecl::setPointOfInstantiation;
    void  (::clang::ClassTemplateSpecializationDecl::*method_pointer_ec2581a3ab3f5ccf8b8980cc5745b419)(class ::clang::SourceLocation ) = &::clang::ClassTemplateSpecializationDecl::setTemplateKeywordLoc;
    struct function_group
    {
        static class ::boost::python::str  function_abc3d856acee5701907d4f0102906cf0(class ::clang::ClassTemplateSpecializationDecl  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::ClassTemplateSpecializationDecl, autowig::HeldType< class ::clang::ClassTemplateSpecializationDecl >, boost::python::bases< class ::clang::CXXRecordDecl >, boost::noncopyable > class_f36600d29ca4530a95955d39f3729dd4("ClassTemplateSpecializationDecl", "", boost::python::no_init);
    class_f36600d29ca4530a95955d39f3729dd4.def("create_deserialized", method_pointer_ba78aacfedb95906abb09e5592e9dd46, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f36600d29ca4530a95955d39f3729dd4.def("classof", method_pointer_5fc88592875d550d81ef167a28f02fb6, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("classof_kind", method_pointer_06f2fea0b91f55839bf30ce7c0fe8f10, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_extern_loc", method_pointer_3b6b5adb014356fb8473bc53f96bc1b6, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_most_recent_decl", method_pointer_1f01bf538fce5a11b5a311292715cd04, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_point_of_instantiation", method_pointer_fb7c9cd6aa3651839986c73269f0a43b, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_specialized_template", method_pointer_16563bd52e6f522eb2373b41fab33e59, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_template_keyword_loc", method_pointer_4f8cf812cbf256e79a560a5852a3c63e, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("is_explicit_instantiation_or_specialization", method_pointer_8e6c3cb711555dda80fbbb85be1ffb58, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("is_explicit_specialization", method_pointer_019dc6767c21510792a8ec627754332d, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("set_extern_loc", method_pointer_1f615145116f525db1cebfb7bdd28bcd, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("set_instantiation_of", method_pointer_4040a4a35a9e5ab2a5ebc53f04cc2a6f, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("set_instantiation_of", method_pointer_27bb408a750058a598c314b1d4d884e8, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("set_point_of_instantiation", method_pointer_50b8f6030cfe517ea7f0b1fabb47ddd0, "");
    class_f36600d29ca4530a95955d39f3729dd4.def("set_template_keyword_loc", method_pointer_ec2581a3ab3f5ccf8b8980cc5745b419, "");
    class_f36600d29ca4530a95955d39f3729dd4.staticmethod("classof_kind");
    class_f36600d29ca4530a95955d39f3729dd4.staticmethod("create_deserialized");
    class_f36600d29ca4530a95955d39f3729dd4.staticmethod("classof");
    class_f36600d29ca4530a95955d39f3729dd4.def("get_name", function_group::function_abc3d856acee5701907d4f0102906cf0, "");

    if(std::is_class< autowig::HeldType< class ::clang::ClassTemplateSpecializationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ClassTemplateSpecializationDecl >, autowig::HeldType< class ::clang::CXXRecordDecl > >();
    }

}