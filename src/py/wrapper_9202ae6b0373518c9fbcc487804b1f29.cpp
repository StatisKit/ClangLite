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
    bool  (*method_pointer_789b187d9a1a5b669d565a5403348cae)(class ::clang::Decl  const *) = ::clang::TemplateTypeParmDecl::classof;
    bool  (*method_pointer_6b489f5222f85db3a52b742b5dedc39d)(enum ::clang::Decl::Kind ) = ::clang::TemplateTypeParmDecl::classofKind;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_661b8b6ee8fa55148fb94098dd15c034)() const = &::clang::TemplateTypeParmDecl::defaultArgumentWasInherited;
    class ::clang::QualType  (::clang::TemplateTypeParmDecl::*method_pointer_4ecbbfdaab6552d7aac1b9a620631e1b)() const = &::clang::TemplateTypeParmDecl::getDefaultArgument;
    unsigned int  (::clang::TemplateTypeParmDecl::*method_pointer_be5dcea04e735d5c896b555efe20441a)() const = &::clang::TemplateTypeParmDecl::getDepth;
    unsigned int  (::clang::TemplateTypeParmDecl::*method_pointer_bfc408baeab35acca992fa70501800c9)() const = &::clang::TemplateTypeParmDecl::getIndex;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_956870b910d35e0f99a0bafc61bd183a)() const = &::clang::TemplateTypeParmDecl::hasDefaultArgument;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_5ec1476cfae15ced9d8696be8fa5e877)() const = &::clang::TemplateTypeParmDecl::isParameterPack;
    void  (::clang::TemplateTypeParmDecl::*method_pointer_51c1940847a15dc699d67e100922f580)() = &::clang::TemplateTypeParmDecl::removeDefaultArgument;
    void  (::clang::TemplateTypeParmDecl::*method_pointer_09317bb9a19b5e268c17dda63b8ee45b)(bool ) = &::clang::TemplateTypeParmDecl::setDeclaredWithTypename;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_1d932ffb441c514dad4764d708800b44)() const = &::clang::TemplateTypeParmDecl::wasDeclaredWithTypename;
    boost::python::class_< class ::clang::TemplateTypeParmDecl, autowig::HeldType< class ::clang::TemplateTypeParmDecl >, boost::python::bases< class ::clang::TypeDecl >, boost::noncopyable > class_9202ae6b0373518c9fbcc487804b1f29("TemplateTypeParmDecl", "", boost::python::no_init);
    class_9202ae6b0373518c9fbcc487804b1f29.def("classof", method_pointer_789b187d9a1a5b669d565a5403348cae, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("classof_kind", method_pointer_6b489f5222f85db3a52b742b5dedc39d, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("default_argument_was_inherited", method_pointer_661b8b6ee8fa55148fb94098dd15c034, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_default_argument", method_pointer_4ecbbfdaab6552d7aac1b9a620631e1b, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_depth", method_pointer_be5dcea04e735d5c896b555efe20441a, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_index", method_pointer_bfc408baeab35acca992fa70501800c9, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("has_default_argument", method_pointer_956870b910d35e0f99a0bafc61bd183a, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("is_parameter_pack", method_pointer_5ec1476cfae15ced9d8696be8fa5e877, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("remove_default_argument", method_pointer_51c1940847a15dc699d67e100922f580, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("set_declared_with_typename", method_pointer_09317bb9a19b5e268c17dda63b8ee45b, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("was_declared_with_typename", method_pointer_1d932ffb441c514dad4764d708800b44, "");
    class_9202ae6b0373518c9fbcc487804b1f29.staticmethod("classof_kind");
    class_9202ae6b0373518c9fbcc487804b1f29.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateTypeParmDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateTypeParmDecl >, autowig::HeldType< class ::clang::TypeDecl > >();
    }

}