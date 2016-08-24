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
    bool  (*method_pointer_8df26c82366256a2bb685d4547a73db2)(class ::clang::Decl  const *) = ::clang::TemplateTypeParmDecl::classof;
    bool  (*method_pointer_8ea02483e31b5ecf8a5a6219195796e4)(enum ::clang::Decl::Kind ) = ::clang::TemplateTypeParmDecl::classofKind;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_e51a9a19045859d1bf5bf92f0fc3a4ea)() const = &::clang::TemplateTypeParmDecl::defaultArgumentWasInherited;
    class ::clang::QualType  (::clang::TemplateTypeParmDecl::*method_pointer_fcf3481edd69558ab877c1c5b17eefb4)() const = &::clang::TemplateTypeParmDecl::getDefaultArgument;
    class ::clang::SourceLocation  (::clang::TemplateTypeParmDecl::*method_pointer_0792c778b4f15f6e8912945af6c26aae)() const = &::clang::TemplateTypeParmDecl::getDefaultArgumentLoc;
    unsigned int  (::clang::TemplateTypeParmDecl::*method_pointer_c7150bb444055ed099bed1f3953ae873)() const = &::clang::TemplateTypeParmDecl::getDepth;
    unsigned int  (::clang::TemplateTypeParmDecl::*method_pointer_a2b8241003445f88aabb19134ad387c2)() const = &::clang::TemplateTypeParmDecl::getIndex;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_2f44e34490e65263a726930ba69afe5f)() const = &::clang::TemplateTypeParmDecl::hasDefaultArgument;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_7d9957f94d225f798156b1dd8d891b1d)() const = &::clang::TemplateTypeParmDecl::isParameterPack;
    void  (::clang::TemplateTypeParmDecl::*method_pointer_da8cdf574659578d8126e796b4808589)() = &::clang::TemplateTypeParmDecl::removeDefaultArgument;
    void  (::clang::TemplateTypeParmDecl::*method_pointer_08df21a1bc27585caa6bb1032f2d9f3d)(bool ) = &::clang::TemplateTypeParmDecl::setDeclaredWithTypename;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_d19906800326575cb740495952f86fdd)() const = &::clang::TemplateTypeParmDecl::wasDeclaredWithTypename;
    boost::python::class_< class ::clang::TemplateTypeParmDecl, autowig::HeldType< class ::clang::TemplateTypeParmDecl >, boost::python::bases< class ::clang::TypeDecl >, boost::noncopyable > class_9202ae6b0373518c9fbcc487804b1f29("TemplateTypeParmDecl", "", boost::python::no_init);
    class_9202ae6b0373518c9fbcc487804b1f29.def("classof", method_pointer_8df26c82366256a2bb685d4547a73db2, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("classof_kind", method_pointer_8ea02483e31b5ecf8a5a6219195796e4, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("default_argument_was_inherited", method_pointer_e51a9a19045859d1bf5bf92f0fc3a4ea, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_default_argument", method_pointer_fcf3481edd69558ab877c1c5b17eefb4, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_default_argument_loc", method_pointer_0792c778b4f15f6e8912945af6c26aae, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_depth", method_pointer_c7150bb444055ed099bed1f3953ae873, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_index", method_pointer_a2b8241003445f88aabb19134ad387c2, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("has_default_argument", method_pointer_2f44e34490e65263a726930ba69afe5f, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("is_parameter_pack", method_pointer_7d9957f94d225f798156b1dd8d891b1d, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("remove_default_argument", method_pointer_da8cdf574659578d8126e796b4808589, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("set_declared_with_typename", method_pointer_08df21a1bc27585caa6bb1032f2d9f3d, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("was_declared_with_typename", method_pointer_d19906800326575cb740495952f86fdd, "");
    class_9202ae6b0373518c9fbcc487804b1f29.staticmethod("classof_kind");
    class_9202ae6b0373518c9fbcc487804b1f29.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateTypeParmDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateTypeParmDecl >, autowig::HeldType< class ::clang::TypeDecl > >();
    }

}