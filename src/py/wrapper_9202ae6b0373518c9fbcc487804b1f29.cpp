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
    unsigned int  (::clang::TemplateTypeParmDecl::*method_pointer_8dae1b4b852652139d11ccf0fdd8380b)() const = &::clang::TemplateTypeParmDecl::getDepth;
    unsigned int  (::clang::TemplateTypeParmDecl::*method_pointer_b4d39d1a5ebb5ad49f38cd2b2cd25213)() const = &::clang::TemplateTypeParmDecl::getIndex;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_4b232ba767e9530ba701a8c0197a8273)() const = &::clang::TemplateTypeParmDecl::hasDefaultArgument;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_04b6654a106f50df84f20b7f422773d0)() const = &::clang::TemplateTypeParmDecl::defaultArgumentWasInherited;
    void  (::clang::TemplateTypeParmDecl::*method_pointer_4e89e21191135d9f84f1454d5a8c0213)() = &::clang::TemplateTypeParmDecl::removeDefaultArgument;
    bool  (*method_pointer_229f1e3587be5a008fcca3dc799ccaaa)(class ::clang::Decl  const *) = ::clang::TemplateTypeParmDecl::classof;
    bool  (*method_pointer_803d8ea8232f5e4c871b421a02d62b2f)(enum ::clang::Decl::Kind ) = ::clang::TemplateTypeParmDecl::classofKind;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_6a2e72a089fb5fffaea99d6e949fa36b)() const = &::clang::TemplateTypeParmDecl::wasDeclaredWithTypename;
    void  (::clang::TemplateTypeParmDecl::*method_pointer_a130d62b429c5a6288f0b33e1cbc4ad6)(bool ) = &::clang::TemplateTypeParmDecl::setDeclaredWithTypename;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_0f49230de1185a618cfaa87a152fc45a)() const = &::clang::TemplateTypeParmDecl::isParameterPack;
    boost::python::class_< class ::clang::TemplateTypeParmDecl, autowig::HeldType< class ::clang::TemplateTypeParmDecl >, boost::python::bases< class ::clang::TypeDecl >, boost::noncopyable > class_9202ae6b0373518c9fbcc487804b1f29("TemplateTypeParmDecl", "", boost::python::no_init);
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_depth", method_pointer_8dae1b4b852652139d11ccf0fdd8380b, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_index", method_pointer_b4d39d1a5ebb5ad49f38cd2b2cd25213, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("has_default_argument", method_pointer_4b232ba767e9530ba701a8c0197a8273, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("default_argument_was_inherited", method_pointer_04b6654a106f50df84f20b7f422773d0, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("remove_default_argument", method_pointer_4e89e21191135d9f84f1454d5a8c0213, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("classof", method_pointer_229f1e3587be5a008fcca3dc799ccaaa, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("classof_kind", method_pointer_803d8ea8232f5e4c871b421a02d62b2f, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("was_declared_with_typename", method_pointer_6a2e72a089fb5fffaea99d6e949fa36b, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("set_declared_with_typename", method_pointer_a130d62b429c5a6288f0b33e1cbc4ad6, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("is_parameter_pack", method_pointer_0f49230de1185a618cfaa87a152fc45a, "");
    class_9202ae6b0373518c9fbcc487804b1f29.staticmethod("classof_kind");
    class_9202ae6b0373518c9fbcc487804b1f29.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateTypeParmDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateTypeParmDecl >, autowig::HeldType< class ::clang::TypeDecl > >();
    }

}