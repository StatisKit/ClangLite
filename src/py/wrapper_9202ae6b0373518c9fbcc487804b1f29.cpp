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
    bool  (*method_pointer_2663db5206c6593d97875e74c42082b4)(class ::clang::Decl  const *) = ::clang::TemplateTypeParmDecl::classof;
    bool  (*method_pointer_a3cb759922b55db58e326c3ffc1d3938)(enum ::clang::Decl::Kind ) = ::clang::TemplateTypeParmDecl::classofKind;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_38ca6c4bf53457b084926cb122023dff)() const = &::clang::TemplateTypeParmDecl::defaultArgumentWasInherited;
    unsigned int  (::clang::TemplateTypeParmDecl::*method_pointer_cd463089036d5928ba98896f0327bf63)() const = &::clang::TemplateTypeParmDecl::getDepth;
    unsigned int  (::clang::TemplateTypeParmDecl::*method_pointer_c158948d628f51b397af6bfd6a55cd32)() const = &::clang::TemplateTypeParmDecl::getIndex;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_95c883d6f71056d6a691ac0b11c1dc43)() const = &::clang::TemplateTypeParmDecl::hasDefaultArgument;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_fbc69698ae64511380870be9c247254d)() const = &::clang::TemplateTypeParmDecl::isParameterPack;
    void  (::clang::TemplateTypeParmDecl::*method_pointer_e648ea4fd4d556e18465fcf831ee3e10)() = &::clang::TemplateTypeParmDecl::removeDefaultArgument;
    void  (::clang::TemplateTypeParmDecl::*method_pointer_070a910039e755b8a223f37f4d28f1c2)(bool ) = &::clang::TemplateTypeParmDecl::setDeclaredWithTypename;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_66f5b8e29db750a1a18be80a71c3fc2b)() const = &::clang::TemplateTypeParmDecl::wasDeclaredWithTypename;
    boost::python::class_< class ::clang::TemplateTypeParmDecl, autowig::HeldType< class ::clang::TemplateTypeParmDecl >, boost::python::bases< class ::clang::TypeDecl >, boost::noncopyable > class_9202ae6b0373518c9fbcc487804b1f29("TemplateTypeParmDecl", "", boost::python::no_init);
    class_9202ae6b0373518c9fbcc487804b1f29.def("classof", method_pointer_2663db5206c6593d97875e74c42082b4, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("classof_kind", method_pointer_a3cb759922b55db58e326c3ffc1d3938, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("default_argument_was_inherited", method_pointer_38ca6c4bf53457b084926cb122023dff, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_depth", method_pointer_cd463089036d5928ba98896f0327bf63, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_index", method_pointer_c158948d628f51b397af6bfd6a55cd32, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("has_default_argument", method_pointer_95c883d6f71056d6a691ac0b11c1dc43, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("is_parameter_pack", method_pointer_fbc69698ae64511380870be9c247254d, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("remove_default_argument", method_pointer_e648ea4fd4d556e18465fcf831ee3e10, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("set_declared_with_typename", method_pointer_070a910039e755b8a223f37f4d28f1c2, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("was_declared_with_typename", method_pointer_66f5b8e29db750a1a18be80a71c3fc2b, "");
    class_9202ae6b0373518c9fbcc487804b1f29.staticmethod("classof_kind");
    class_9202ae6b0373518c9fbcc487804b1f29.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateTypeParmDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateTypeParmDecl >, autowig::HeldType< class ::clang::TypeDecl > >();
    }

}