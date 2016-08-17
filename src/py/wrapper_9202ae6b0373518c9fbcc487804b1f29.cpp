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
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_7d82c5817a385cf7af8fdf8ebb7767aa)() const = &::clang::TemplateTypeParmDecl::defaultArgumentWasInherited;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_e50a089f771a5d8c94015e8412786d63)() const = &::clang::TemplateTypeParmDecl::wasDeclaredWithTypename;
    bool  (*method_pointer_0d833ec5c0df546698b2a6a98e15663e)(enum ::clang::Decl::Kind ) = ::clang::TemplateTypeParmDecl::classofKind;
    unsigned int  (::clang::TemplateTypeParmDecl::*method_pointer_95e96ebc69b15aa28daced1b474889e0)() const = &::clang::TemplateTypeParmDecl::getDepth;
    void  (::clang::TemplateTypeParmDecl::*method_pointer_2c9b7658bb7e5033a6bb16b06c40e94d)() = &::clang::TemplateTypeParmDecl::removeDefaultArgument;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_f2b0dc6d05855e569791ba307c1d8cf7)() const = &::clang::TemplateTypeParmDecl::hasDefaultArgument;
    bool  (*method_pointer_1cebacda658359ab9effe0d94b676d0e)(class ::clang::Decl  const *) = ::clang::TemplateTypeParmDecl::classof;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_77c83b3936835e408f65a2efa9408ac0)() const = &::clang::TemplateTypeParmDecl::isParameterPack;
    unsigned int  (::clang::TemplateTypeParmDecl::*method_pointer_d79ad9e6417c5ee096b2fe4c264a457a)() const = &::clang::TemplateTypeParmDecl::getIndex;
    void  (::clang::TemplateTypeParmDecl::*method_pointer_165e4be93d5c55aa9485af6dc18f604b)(bool ) = &::clang::TemplateTypeParmDecl::setDeclaredWithTypename;
    boost::python::class_< class ::clang::TemplateTypeParmDecl, autowig::HeldType< class ::clang::TemplateTypeParmDecl >, boost::python::bases< class ::clang::TypeDecl >, boost::noncopyable > class_9202ae6b0373518c9fbcc487804b1f29("TemplateTypeParmDecl", "", boost::python::no_init);
    class_9202ae6b0373518c9fbcc487804b1f29.def("default_argument_was_inherited", method_pointer_7d82c5817a385cf7af8fdf8ebb7767aa, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("was_declared_with_typename", method_pointer_e50a089f771a5d8c94015e8412786d63, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("classof_kind", method_pointer_0d833ec5c0df546698b2a6a98e15663e, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_depth", method_pointer_95e96ebc69b15aa28daced1b474889e0, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("remove_default_argument", method_pointer_2c9b7658bb7e5033a6bb16b06c40e94d, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("has_default_argument", method_pointer_f2b0dc6d05855e569791ba307c1d8cf7, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("classof", method_pointer_1cebacda658359ab9effe0d94b676d0e, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("is_parameter_pack", method_pointer_77c83b3936835e408f65a2efa9408ac0, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_index", method_pointer_d79ad9e6417c5ee096b2fe4c264a457a, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("set_declared_with_typename", method_pointer_165e4be93d5c55aa9485af6dc18f604b, "");
    class_9202ae6b0373518c9fbcc487804b1f29.staticmethod("classof_kind");
    class_9202ae6b0373518c9fbcc487804b1f29.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateTypeParmDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateTypeParmDecl >, autowig::HeldType< class ::clang::TypeDecl > >();
    }

}