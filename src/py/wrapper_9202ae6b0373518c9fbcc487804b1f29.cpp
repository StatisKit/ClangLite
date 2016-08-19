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
    bool  (*method_pointer_f020cd8b71305ed5b9c81d9478f03994)(class ::clang::Decl  const *) = ::clang::TemplateTypeParmDecl::classof;
    bool  (*method_pointer_a9b7b327917e5a41ac31ab3b679cf96e)(enum ::clang::Decl::Kind ) = ::clang::TemplateTypeParmDecl::classofKind;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_09bbc71037045a11babb6c153a4827bc)() const = &::clang::TemplateTypeParmDecl::defaultArgumentWasInherited;
    unsigned int  (::clang::TemplateTypeParmDecl::*method_pointer_a999599966605e089ad7b4967f1aca98)() const = &::clang::TemplateTypeParmDecl::getDepth;
    unsigned int  (::clang::TemplateTypeParmDecl::*method_pointer_ec6534d5f96f5ae7a140358b3b18c20b)() const = &::clang::TemplateTypeParmDecl::getIndex;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_d870131a394155c8a5de4e35872a8334)() const = &::clang::TemplateTypeParmDecl::hasDefaultArgument;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_5bbeeb7f7a7b50928d3306c5e3488dfd)() const = &::clang::TemplateTypeParmDecl::isParameterPack;
    void  (::clang::TemplateTypeParmDecl::*method_pointer_d6a0fd33f5f1597bbe175b898541f728)() = &::clang::TemplateTypeParmDecl::removeDefaultArgument;
    void  (::clang::TemplateTypeParmDecl::*method_pointer_f75f5f2910db5f86a5e61977cb25bdd3)(bool ) = &::clang::TemplateTypeParmDecl::setDeclaredWithTypename;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_97a7feba000456a488f49afead9c6cb0)() const = &::clang::TemplateTypeParmDecl::wasDeclaredWithTypename;
    boost::python::class_< class ::clang::TemplateTypeParmDecl, autowig::HeldType< class ::clang::TemplateTypeParmDecl >, boost::python::bases< class ::clang::TypeDecl >, boost::noncopyable > class_9202ae6b0373518c9fbcc487804b1f29("TemplateTypeParmDecl", "", boost::python::no_init);
    class_9202ae6b0373518c9fbcc487804b1f29.def("classof", method_pointer_f020cd8b71305ed5b9c81d9478f03994, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("classof_kind", method_pointer_a9b7b327917e5a41ac31ab3b679cf96e, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("default_argument_was_inherited", method_pointer_09bbc71037045a11babb6c153a4827bc, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_depth", method_pointer_a999599966605e089ad7b4967f1aca98, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_index", method_pointer_ec6534d5f96f5ae7a140358b3b18c20b, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("has_default_argument", method_pointer_d870131a394155c8a5de4e35872a8334, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("is_parameter_pack", method_pointer_5bbeeb7f7a7b50928d3306c5e3488dfd, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("remove_default_argument", method_pointer_d6a0fd33f5f1597bbe175b898541f728, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("set_declared_with_typename", method_pointer_f75f5f2910db5f86a5e61977cb25bdd3, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("was_declared_with_typename", method_pointer_97a7feba000456a488f49afead9c6cb0, "");
    class_9202ae6b0373518c9fbcc487804b1f29.staticmethod("classof_kind");
    class_9202ae6b0373518c9fbcc487804b1f29.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateTypeParmDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateTypeParmDecl >, autowig::HeldType< class ::clang::TypeDecl > >();
    }

}