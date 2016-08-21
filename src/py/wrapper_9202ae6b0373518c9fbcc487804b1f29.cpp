#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_9202ae6b0373518c9fbcc487804b1f29()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_0db21c3d97a45aee9e9292375ff18971)(class ::clang::Decl  const *) = ::clang::TemplateTypeParmDecl::classof;
    bool  (*method_pointer_c028acca650d5736b27417c8ab8f3cb1)(enum ::clang::Decl::Kind ) = ::clang::TemplateTypeParmDecl::classofKind;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_f1b38905077a5f11a8a6fc5e7cdc3820)() const = &::clang::TemplateTypeParmDecl::defaultArgumentWasInherited;
    unsigned int  (::clang::TemplateTypeParmDecl::*method_pointer_d3ce1c2b987c52cfb9113b855754762a)() const = &::clang::TemplateTypeParmDecl::getDepth;
    unsigned int  (::clang::TemplateTypeParmDecl::*method_pointer_b96b8f62a83c5cbf8fc5c7ca158054fa)() const = &::clang::TemplateTypeParmDecl::getIndex;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_5b6489c9ff855179876888a74f2d8e2b)() const = &::clang::TemplateTypeParmDecl::hasDefaultArgument;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_8178da6be8f9561eaf9fda226ecb1b12)() const = &::clang::TemplateTypeParmDecl::isParameterPack;
    void  (::clang::TemplateTypeParmDecl::*method_pointer_4568a26c6e2950d6b75e511d2f683590)() = &::clang::TemplateTypeParmDecl::removeDefaultArgument;
    void  (::clang::TemplateTypeParmDecl::*method_pointer_d0988938a1f951de9f1bc2528b742dc0)(bool ) = &::clang::TemplateTypeParmDecl::setDeclaredWithTypename;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_0223782d5acd5d8198309eeb97bf6e47)() const = &::clang::TemplateTypeParmDecl::wasDeclaredWithTypename;
    boost::python::class_< class ::clang::TemplateTypeParmDecl, autowig::HeldType< class ::clang::TemplateTypeParmDecl >, boost::python::bases< class ::clang::TypeDecl >, boost::noncopyable > class_9202ae6b0373518c9fbcc487804b1f29("TemplateTypeParmDecl", "", boost::python::no_init);
    class_9202ae6b0373518c9fbcc487804b1f29.def("classof", method_pointer_0db21c3d97a45aee9e9292375ff18971, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("classof_kind", method_pointer_c028acca650d5736b27417c8ab8f3cb1, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("default_argument_was_inherited", method_pointer_f1b38905077a5f11a8a6fc5e7cdc3820, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_depth", method_pointer_d3ce1c2b987c52cfb9113b855754762a, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_index", method_pointer_b96b8f62a83c5cbf8fc5c7ca158054fa, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("has_default_argument", method_pointer_5b6489c9ff855179876888a74f2d8e2b, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("is_parameter_pack", method_pointer_8178da6be8f9561eaf9fda226ecb1b12, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("remove_default_argument", method_pointer_4568a26c6e2950d6b75e511d2f683590, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("set_declared_with_typename", method_pointer_d0988938a1f951de9f1bc2528b742dc0, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("was_declared_with_typename", method_pointer_0223782d5acd5d8198309eeb97bf6e47, "");
    class_9202ae6b0373518c9fbcc487804b1f29.staticmethod("classof_kind");
    class_9202ae6b0373518c9fbcc487804b1f29.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateTypeParmDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateTypeParmDecl >, autowig::HeldType< class ::clang::TypeDecl > >();
    }

}