#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_9202ae6b0373518c9fbcc487804b1f29()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_2c46d6a9c07f5e3ea6c3c7302865bc0e)(class ::clang::Decl  const *) = ::clang::TemplateTypeParmDecl::classof;
    bool  (*method_pointer_8eff67b29f4c590da65bf01eb5510210)(enum ::clang::Decl::Kind ) = ::clang::TemplateTypeParmDecl::classofKind;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_cf8929cc4c735736bf0ce51e5639d000)() const = &::clang::TemplateTypeParmDecl::defaultArgumentWasInherited;
    class ::clang::QualType  (::clang::TemplateTypeParmDecl::*method_pointer_e0ff1f54fdf35258bc4381a3f3b1ae8b)() const = &::clang::TemplateTypeParmDecl::getDefaultArgument;
    class ::clang::SourceLocation  (::clang::TemplateTypeParmDecl::*method_pointer_0d5a3551f63851a6a9ebd9e8cc3a7996)() const = &::clang::TemplateTypeParmDecl::getDefaultArgumentLoc;
    unsigned int  (::clang::TemplateTypeParmDecl::*method_pointer_754505b202a55137b4b244b12acda60a)() const = &::clang::TemplateTypeParmDecl::getDepth;
    unsigned int  (::clang::TemplateTypeParmDecl::*method_pointer_e8d2dac3693c5f5d85bd6a856c7eafb6)() const = &::clang::TemplateTypeParmDecl::getIndex;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_7aa024ccc32b55bd941cab34f1caa73d)() const = &::clang::TemplateTypeParmDecl::hasDefaultArgument;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_f8516596c26059e1967e375cd6f20b67)() const = &::clang::TemplateTypeParmDecl::isParameterPack;
    void  (::clang::TemplateTypeParmDecl::*method_pointer_d5a05e3041015a219978bee85f1af5d6)() = &::clang::TemplateTypeParmDecl::removeDefaultArgument;
    void  (::clang::TemplateTypeParmDecl::*method_pointer_bf33edda6d935cf693bb0c343ed2bfba)(bool ) = &::clang::TemplateTypeParmDecl::setDeclaredWithTypename;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_ea1090ce6f13555e823bef0a8ebc8d57)() const = &::clang::TemplateTypeParmDecl::wasDeclaredWithTypename;
    boost::python::class_< class ::clang::TemplateTypeParmDecl, autowig::HeldType< class ::clang::TemplateTypeParmDecl >, boost::python::bases< class ::clang::TypeDecl >, boost::noncopyable > class_9202ae6b0373518c9fbcc487804b1f29("TemplateTypeParmDecl", "", boost::python::no_init);
    class_9202ae6b0373518c9fbcc487804b1f29.def("classof", method_pointer_2c46d6a9c07f5e3ea6c3c7302865bc0e, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("classof_kind", method_pointer_8eff67b29f4c590da65bf01eb5510210, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("default_argument_was_inherited", method_pointer_cf8929cc4c735736bf0ce51e5639d000, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_default_argument", method_pointer_e0ff1f54fdf35258bc4381a3f3b1ae8b, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_default_argument_loc", method_pointer_0d5a3551f63851a6a9ebd9e8cc3a7996, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_depth", method_pointer_754505b202a55137b4b244b12acda60a, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_index", method_pointer_e8d2dac3693c5f5d85bd6a856c7eafb6, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("has_default_argument", method_pointer_7aa024ccc32b55bd941cab34f1caa73d, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("is_parameter_pack", method_pointer_f8516596c26059e1967e375cd6f20b67, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("remove_default_argument", method_pointer_d5a05e3041015a219978bee85f1af5d6, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("set_declared_with_typename", method_pointer_bf33edda6d935cf693bb0c343ed2bfba, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("was_declared_with_typename", method_pointer_ea1090ce6f13555e823bef0a8ebc8d57, "");
    class_9202ae6b0373518c9fbcc487804b1f29.staticmethod("classof_kind");
    class_9202ae6b0373518c9fbcc487804b1f29.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateTypeParmDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateTypeParmDecl >, autowig::HeldType< class ::clang::TypeDecl > >();
    }

}