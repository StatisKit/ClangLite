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
    bool  (*method_pointer_24c7247773d6519ea014b03f6cc343a5)(class ::clang::Decl  const *) = ::clang::TemplateTypeParmDecl::classof;
    bool  (*method_pointer_2d39db74c29a5888aed8968ddbb3f3ed)(enum ::clang::Decl::Kind ) = ::clang::TemplateTypeParmDecl::classofKind;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_ac43afe2a1545071a9a6b2dfcc2c78e3)() const = &::clang::TemplateTypeParmDecl::defaultArgumentWasInherited;
    class ::clang::QualType  (::clang::TemplateTypeParmDecl::*method_pointer_c4bfeb8ac98f5149b24b217679289cca)() const = &::clang::TemplateTypeParmDecl::getDefaultArgument;
    class ::clang::SourceLocation  (::clang::TemplateTypeParmDecl::*method_pointer_5c8843326f0a5c7f8be8f82abedcf8ad)() const = &::clang::TemplateTypeParmDecl::getDefaultArgumentLoc;
    unsigned int  (::clang::TemplateTypeParmDecl::*method_pointer_74e19d00f5dc571b8aca853f2d59f76e)() const = &::clang::TemplateTypeParmDecl::getDepth;
    unsigned int  (::clang::TemplateTypeParmDecl::*method_pointer_4bd0b5350c3b57afa20bc3f0cfdb8883)() const = &::clang::TemplateTypeParmDecl::getIndex;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_68bdf372f4c35ad38061f905a9d9a994)() const = &::clang::TemplateTypeParmDecl::hasDefaultArgument;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_587916adb22d577ea12760257539d7f8)() const = &::clang::TemplateTypeParmDecl::isParameterPack;
    void  (::clang::TemplateTypeParmDecl::*method_pointer_4a7a44a4e62e54ee876cf66a7221867e)() = &::clang::TemplateTypeParmDecl::removeDefaultArgument;
    void  (::clang::TemplateTypeParmDecl::*method_pointer_a3ce07fd23af589dadefd0a197e6715b)(bool ) = &::clang::TemplateTypeParmDecl::setDeclaredWithTypename;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_21ccee55a0865bc587ab7dab5cb4d4e2)() const = &::clang::TemplateTypeParmDecl::wasDeclaredWithTypename;
    boost::python::class_< class ::clang::TemplateTypeParmDecl, autowig::HeldType< class ::clang::TemplateTypeParmDecl >, boost::python::bases< class ::clang::TypeDecl >, boost::noncopyable > class_9202ae6b0373518c9fbcc487804b1f29("TemplateTypeParmDecl", "", boost::python::no_init);
    class_9202ae6b0373518c9fbcc487804b1f29.def("classof", method_pointer_24c7247773d6519ea014b03f6cc343a5, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("classof_kind", method_pointer_2d39db74c29a5888aed8968ddbb3f3ed, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("default_argument_was_inherited", method_pointer_ac43afe2a1545071a9a6b2dfcc2c78e3, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_default_argument", method_pointer_c4bfeb8ac98f5149b24b217679289cca, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_default_argument_loc", method_pointer_5c8843326f0a5c7f8be8f82abedcf8ad, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_depth", method_pointer_74e19d00f5dc571b8aca853f2d59f76e, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_index", method_pointer_4bd0b5350c3b57afa20bc3f0cfdb8883, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("has_default_argument", method_pointer_68bdf372f4c35ad38061f905a9d9a994, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("is_parameter_pack", method_pointer_587916adb22d577ea12760257539d7f8, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("remove_default_argument", method_pointer_4a7a44a4e62e54ee876cf66a7221867e, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("set_declared_with_typename", method_pointer_a3ce07fd23af589dadefd0a197e6715b, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("was_declared_with_typename", method_pointer_21ccee55a0865bc587ab7dab5cb4d4e2, "");
    class_9202ae6b0373518c9fbcc487804b1f29.staticmethod("classof_kind");
    class_9202ae6b0373518c9fbcc487804b1f29.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateTypeParmDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateTypeParmDecl >, autowig::HeldType< class ::clang::TypeDecl > >();
    }

}