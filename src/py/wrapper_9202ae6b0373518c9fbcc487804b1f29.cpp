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
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_245f3ab2775d5f31a2ce07315ef3ec3e)() const = &::clang::TemplateTypeParmDecl::wasDeclaredWithTypename;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_51975baf0d05520787573170b19def53)() const = &::clang::TemplateTypeParmDecl::isParameterPack;
    bool  (*method_pointer_19f419ea2e295054b9ab6afdcf65f987)(enum ::clang::Decl::Kind ) = ::clang::TemplateTypeParmDecl::classofKind;
    unsigned int  (::clang::TemplateTypeParmDecl::*method_pointer_f2a07f2963af536cac8c1a8da2593cd7)() const = &::clang::TemplateTypeParmDecl::getDepth;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_daaf1eee2b0f570fa156da25ebcb7137)() const = &::clang::TemplateTypeParmDecl::defaultArgumentWasInherited;
    bool  (*method_pointer_d42860ce781151968b06e45defa36def)(class ::clang::Decl  const *) = ::clang::TemplateTypeParmDecl::classof;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_f487fd41e1845bbc8e13971efb48e511)() const = &::clang::TemplateTypeParmDecl::hasDefaultArgument;
    void  (::clang::TemplateTypeParmDecl::*method_pointer_3a35f1ffdf15505283ffe1d96aa8af6a)() = &::clang::TemplateTypeParmDecl::removeDefaultArgument;
    void  (::clang::TemplateTypeParmDecl::*method_pointer_005d530e8969571582f1b705998a2e35)(bool ) = &::clang::TemplateTypeParmDecl::setDeclaredWithTypename;
    unsigned int  (::clang::TemplateTypeParmDecl::*method_pointer_5874d7d242ba53579839e1b6adc55c77)() const = &::clang::TemplateTypeParmDecl::getIndex;
    boost::python::class_< class ::clang::TemplateTypeParmDecl, autowig::HeldType< class ::clang::TemplateTypeParmDecl >, boost::python::bases< class ::clang::TypeDecl >, boost::noncopyable > class_9202ae6b0373518c9fbcc487804b1f29("TemplateTypeParmDecl", "", boost::python::no_init);
    class_9202ae6b0373518c9fbcc487804b1f29.def("was_declared_with_typename", method_pointer_245f3ab2775d5f31a2ce07315ef3ec3e, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("is_parameter_pack", method_pointer_51975baf0d05520787573170b19def53, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("classof_kind", method_pointer_19f419ea2e295054b9ab6afdcf65f987, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_depth", method_pointer_f2a07f2963af536cac8c1a8da2593cd7, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("default_argument_was_inherited", method_pointer_daaf1eee2b0f570fa156da25ebcb7137, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("classof", method_pointer_d42860ce781151968b06e45defa36def, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("has_default_argument", method_pointer_f487fd41e1845bbc8e13971efb48e511, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("remove_default_argument", method_pointer_3a35f1ffdf15505283ffe1d96aa8af6a, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("set_declared_with_typename", method_pointer_005d530e8969571582f1b705998a2e35, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_index", method_pointer_5874d7d242ba53579839e1b6adc55c77, "");
    class_9202ae6b0373518c9fbcc487804b1f29.staticmethod("classof_kind");
    class_9202ae6b0373518c9fbcc487804b1f29.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateTypeParmDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateTypeParmDecl >, autowig::HeldType< class ::clang::TypeDecl > >();
    }

}