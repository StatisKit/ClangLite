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
    bool  (*method_pointer_f65b8283929f587584b61f1eb706b84e)(class ::clang::Decl  const *) = ::clang::TemplateTypeParmDecl::classof;
    bool  (*method_pointer_62583bbb4f4956c9aaccde6b06e3b5f0)(enum ::clang::Decl::Kind ) = ::clang::TemplateTypeParmDecl::classofKind;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_9762b9e0db27578eac6830c1448cdbc6)() const = &::clang::TemplateTypeParmDecl::defaultArgumentWasInherited;
    class ::clang::QualType  (::clang::TemplateTypeParmDecl::*method_pointer_374890170f025013b8ca59d18ad9495a)() const = &::clang::TemplateTypeParmDecl::getDefaultArgument;
    unsigned int  (::clang::TemplateTypeParmDecl::*method_pointer_e3c4fe7d153a5487ab667e78333dd2b8)() const = &::clang::TemplateTypeParmDecl::getDepth;
    unsigned int  (::clang::TemplateTypeParmDecl::*method_pointer_55447a05f1ba5cff9946569127b27a42)() const = &::clang::TemplateTypeParmDecl::getIndex;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_f9d409c393f653f6a62af877cff29c7e)() const = &::clang::TemplateTypeParmDecl::hasDefaultArgument;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_e764a51cfd5a5ccea592bff9a054e711)() const = &::clang::TemplateTypeParmDecl::isParameterPack;
    void  (::clang::TemplateTypeParmDecl::*method_pointer_d9f629988ee9582c8f8266f5290afa01)() = &::clang::TemplateTypeParmDecl::removeDefaultArgument;
    void  (::clang::TemplateTypeParmDecl::*method_pointer_87694257d5095311bea6240cf65aaff8)(bool ) = &::clang::TemplateTypeParmDecl::setDeclaredWithTypename;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_015655baf9e95ed18ed99a808dd68650)() const = &::clang::TemplateTypeParmDecl::wasDeclaredWithTypename;
    boost::python::class_< class ::clang::TemplateTypeParmDecl, autowig::HeldType< class ::clang::TemplateTypeParmDecl >, boost::python::bases< class ::clang::TypeDecl >, boost::noncopyable > class_9202ae6b0373518c9fbcc487804b1f29("TemplateTypeParmDecl", "", boost::python::no_init);
    class_9202ae6b0373518c9fbcc487804b1f29.def("classof", method_pointer_f65b8283929f587584b61f1eb706b84e, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("classof_kind", method_pointer_62583bbb4f4956c9aaccde6b06e3b5f0, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("default_argument_was_inherited", method_pointer_9762b9e0db27578eac6830c1448cdbc6, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_default_argument", method_pointer_374890170f025013b8ca59d18ad9495a, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_depth", method_pointer_e3c4fe7d153a5487ab667e78333dd2b8, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_index", method_pointer_55447a05f1ba5cff9946569127b27a42, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("has_default_argument", method_pointer_f9d409c393f653f6a62af877cff29c7e, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("is_parameter_pack", method_pointer_e764a51cfd5a5ccea592bff9a054e711, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("remove_default_argument", method_pointer_d9f629988ee9582c8f8266f5290afa01, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("set_declared_with_typename", method_pointer_87694257d5095311bea6240cf65aaff8, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("was_declared_with_typename", method_pointer_015655baf9e95ed18ed99a808dd68650, "");
    class_9202ae6b0373518c9fbcc487804b1f29.staticmethod("classof_kind");
    class_9202ae6b0373518c9fbcc487804b1f29.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateTypeParmDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateTypeParmDecl >, autowig::HeldType< class ::clang::TypeDecl > >();
    }

}