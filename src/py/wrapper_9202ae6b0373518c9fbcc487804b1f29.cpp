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
    bool  (*method_pointer_9941d5aa708e50b2a701754c993e60f3)(class ::clang::Decl  const *) = ::clang::TemplateTypeParmDecl::classof;
    bool  (*method_pointer_8fac5c5fc4515cd59946af59be83be53)(enum ::clang::Decl::Kind ) = ::clang::TemplateTypeParmDecl::classofKind;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_5dd57c36fa8c5f07bb12526b71506f85)() const = &::clang::TemplateTypeParmDecl::defaultArgumentWasInherited;
    class ::clang::QualType  (::clang::TemplateTypeParmDecl::*method_pointer_747ad463da005684b66bbf54ac151b88)() const = &::clang::TemplateTypeParmDecl::getDefaultArgument;
    unsigned int  (::clang::TemplateTypeParmDecl::*method_pointer_af6e4330411a57bd9c08aa8fccb6523a)() const = &::clang::TemplateTypeParmDecl::getDepth;
    unsigned int  (::clang::TemplateTypeParmDecl::*method_pointer_b63350a309275aa8820743898c0aea9d)() const = &::clang::TemplateTypeParmDecl::getIndex;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_81c05e589e3c564c8ab825688390e7a4)() const = &::clang::TemplateTypeParmDecl::hasDefaultArgument;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_04f7891d95ad53f9bf921a18195d8a3e)() const = &::clang::TemplateTypeParmDecl::isParameterPack;
    void  (::clang::TemplateTypeParmDecl::*method_pointer_43e24ae69f625772bd12c449a5508a3b)() = &::clang::TemplateTypeParmDecl::removeDefaultArgument;
    void  (::clang::TemplateTypeParmDecl::*method_pointer_9e81c8a8c43f5d93a5af222d3fb4e3fd)(bool ) = &::clang::TemplateTypeParmDecl::setDeclaredWithTypename;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_984129e47a415dae8e1613ca3e7a09f7)() const = &::clang::TemplateTypeParmDecl::wasDeclaredWithTypename;
    boost::python::class_< class ::clang::TemplateTypeParmDecl, autowig::HeldType< class ::clang::TemplateTypeParmDecl >, boost::python::bases< class ::clang::TypeDecl >, boost::noncopyable > class_9202ae6b0373518c9fbcc487804b1f29("TemplateTypeParmDecl", "", boost::python::no_init);
    class_9202ae6b0373518c9fbcc487804b1f29.def("classof", method_pointer_9941d5aa708e50b2a701754c993e60f3, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("classof_kind", method_pointer_8fac5c5fc4515cd59946af59be83be53, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("default_argument_was_inherited", method_pointer_5dd57c36fa8c5f07bb12526b71506f85, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_default_argument", method_pointer_747ad463da005684b66bbf54ac151b88, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_depth", method_pointer_af6e4330411a57bd9c08aa8fccb6523a, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_index", method_pointer_b63350a309275aa8820743898c0aea9d, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("has_default_argument", method_pointer_81c05e589e3c564c8ab825688390e7a4, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("is_parameter_pack", method_pointer_04f7891d95ad53f9bf921a18195d8a3e, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("remove_default_argument", method_pointer_43e24ae69f625772bd12c449a5508a3b, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("set_declared_with_typename", method_pointer_9e81c8a8c43f5d93a5af222d3fb4e3fd, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("was_declared_with_typename", method_pointer_984129e47a415dae8e1613ca3e7a09f7, "");
    class_9202ae6b0373518c9fbcc487804b1f29.staticmethod("classof_kind");
    class_9202ae6b0373518c9fbcc487804b1f29.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateTypeParmDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateTypeParmDecl >, autowig::HeldType< class ::clang::TypeDecl > >();
    }

}