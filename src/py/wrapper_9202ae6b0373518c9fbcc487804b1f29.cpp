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
    bool  (*method_pointer_9d13e1a0d428574f93da38f6e5ae6da4)(class ::clang::Decl  const *) = ::clang::TemplateTypeParmDecl::classof;
    bool  (*method_pointer_f807c66e50e55a9ba1d016db3ece6cda)(enum ::clang::Decl::Kind ) = ::clang::TemplateTypeParmDecl::classofKind;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_b722a3e3ec2d52e485272907f03abfbd)() const = &::clang::TemplateTypeParmDecl::defaultArgumentWasInherited;
    class ::clang::QualType  (::clang::TemplateTypeParmDecl::*method_pointer_def32c5d64765c20b4a487e41e4ae9ae)() const = &::clang::TemplateTypeParmDecl::getDefaultArgument;
    class ::clang::SourceLocation  (::clang::TemplateTypeParmDecl::*method_pointer_ed37ab4f7890509c80b6cba3524b5e86)() const = &::clang::TemplateTypeParmDecl::getDefaultArgumentLoc;
    unsigned int  (::clang::TemplateTypeParmDecl::*method_pointer_3b602058bbab5b049a1b28f669b5a471)() const = &::clang::TemplateTypeParmDecl::getDepth;
    unsigned int  (::clang::TemplateTypeParmDecl::*method_pointer_653a84738cdb59afbab5208a05e651d3)() const = &::clang::TemplateTypeParmDecl::getIndex;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_0daffb9c7f375504aa8d6005ed6eaf58)() const = &::clang::TemplateTypeParmDecl::hasDefaultArgument;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_2f4eec46f07d590291dc53b88934cd85)() const = &::clang::TemplateTypeParmDecl::isParameterPack;
    void  (::clang::TemplateTypeParmDecl::*method_pointer_dec28210d3b255ee87dfb825356eee92)() = &::clang::TemplateTypeParmDecl::removeDefaultArgument;
    void  (::clang::TemplateTypeParmDecl::*method_pointer_2ecc7adca01f57f1bb9912bf31f447d1)(bool ) = &::clang::TemplateTypeParmDecl::setDeclaredWithTypename;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_01f90e3e4dd056139854f4a1be8d19ed)() const = &::clang::TemplateTypeParmDecl::wasDeclaredWithTypename;
    boost::python::class_< class ::clang::TemplateTypeParmDecl, autowig::HeldType< class ::clang::TemplateTypeParmDecl >, boost::python::bases< class ::clang::TypeDecl >, boost::noncopyable > class_9202ae6b0373518c9fbcc487804b1f29("TemplateTypeParmDecl", "", boost::python::no_init);
    class_9202ae6b0373518c9fbcc487804b1f29.def("classof", method_pointer_9d13e1a0d428574f93da38f6e5ae6da4, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("classof_kind", method_pointer_f807c66e50e55a9ba1d016db3ece6cda, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("default_argument_was_inherited", method_pointer_b722a3e3ec2d52e485272907f03abfbd, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_default_argument", method_pointer_def32c5d64765c20b4a487e41e4ae9ae, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_default_argument_loc", method_pointer_ed37ab4f7890509c80b6cba3524b5e86, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_depth", method_pointer_3b602058bbab5b049a1b28f669b5a471, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_index", method_pointer_653a84738cdb59afbab5208a05e651d3, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("has_default_argument", method_pointer_0daffb9c7f375504aa8d6005ed6eaf58, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("is_parameter_pack", method_pointer_2f4eec46f07d590291dc53b88934cd85, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("remove_default_argument", method_pointer_dec28210d3b255ee87dfb825356eee92, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("set_declared_with_typename", method_pointer_2ecc7adca01f57f1bb9912bf31f447d1, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("was_declared_with_typename", method_pointer_01f90e3e4dd056139854f4a1be8d19ed, "");
    class_9202ae6b0373518c9fbcc487804b1f29.staticmethod("classof_kind");
    class_9202ae6b0373518c9fbcc487804b1f29.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateTypeParmDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateTypeParmDecl >, autowig::HeldType< class ::clang::TypeDecl > >();
    }

}