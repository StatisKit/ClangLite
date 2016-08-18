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
    bool  (*method_pointer_ce70b96d08a95b539b70b50c18ff6619)(class ::clang::Decl  const *) = ::clang::TemplateTypeParmDecl::classof;
    bool  (*method_pointer_2ee6a01ec0e551e5b203cf1df140d1c7)(enum ::clang::Decl::Kind ) = ::clang::TemplateTypeParmDecl::classofKind;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_949b34ccb6205d108f100d767e05f2af)() const = &::clang::TemplateTypeParmDecl::defaultArgumentWasInherited;
    unsigned int  (::clang::TemplateTypeParmDecl::*method_pointer_e1ea5a375a8954118dda2bd44b005ba6)() const = &::clang::TemplateTypeParmDecl::getDepth;
    unsigned int  (::clang::TemplateTypeParmDecl::*method_pointer_7895b56717f15b3f989cfd671b854ff7)() const = &::clang::TemplateTypeParmDecl::getIndex;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_bc21bd73c1a35de8b4766304fc3b4383)() const = &::clang::TemplateTypeParmDecl::hasDefaultArgument;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_4d4508f89b4d5e8d840954ea1e658905)() const = &::clang::TemplateTypeParmDecl::isParameterPack;
    void  (::clang::TemplateTypeParmDecl::*method_pointer_08a2b5cb57355e96b109ff898db11dd7)() = &::clang::TemplateTypeParmDecl::removeDefaultArgument;
    void  (::clang::TemplateTypeParmDecl::*method_pointer_2f67fb19e9a75d4eabfe9583659d8c78)(bool ) = &::clang::TemplateTypeParmDecl::setDeclaredWithTypename;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_59300c6cdbd954ebab83781caf8c70f6)() const = &::clang::TemplateTypeParmDecl::wasDeclaredWithTypename;
    boost::python::class_< class ::clang::TemplateTypeParmDecl, autowig::HeldType< class ::clang::TemplateTypeParmDecl >, boost::python::bases< class ::clang::TypeDecl >, boost::noncopyable > class_9202ae6b0373518c9fbcc487804b1f29("TemplateTypeParmDecl", "", boost::python::no_init);
    class_9202ae6b0373518c9fbcc487804b1f29.def("classof", method_pointer_ce70b96d08a95b539b70b50c18ff6619, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("classof_kind", method_pointer_2ee6a01ec0e551e5b203cf1df140d1c7, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("default_argument_was_inherited", method_pointer_949b34ccb6205d108f100d767e05f2af, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_depth", method_pointer_e1ea5a375a8954118dda2bd44b005ba6, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_index", method_pointer_7895b56717f15b3f989cfd671b854ff7, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("has_default_argument", method_pointer_bc21bd73c1a35de8b4766304fc3b4383, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("is_parameter_pack", method_pointer_4d4508f89b4d5e8d840954ea1e658905, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("remove_default_argument", method_pointer_08a2b5cb57355e96b109ff898db11dd7, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("set_declared_with_typename", method_pointer_2f67fb19e9a75d4eabfe9583659d8c78, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("was_declared_with_typename", method_pointer_59300c6cdbd954ebab83781caf8c70f6, "");
    class_9202ae6b0373518c9fbcc487804b1f29.staticmethod("classof_kind");
    class_9202ae6b0373518c9fbcc487804b1f29.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateTypeParmDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateTypeParmDecl >, autowig::HeldType< class ::clang::TypeDecl > >();
    }

}