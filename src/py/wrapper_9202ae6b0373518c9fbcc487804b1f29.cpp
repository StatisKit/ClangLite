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
    bool  (*method_pointer_5401ee72ddcb570ca05f66802802195e)(class ::clang::Decl  const *) = ::clang::TemplateTypeParmDecl::classof;
    bool  (*method_pointer_fb7f259c81e258bbb5062487c2b0cb4c)(enum ::clang::Decl::Kind ) = ::clang::TemplateTypeParmDecl::classofKind;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_daf2b8897fe25c118045c9c56238d6a5)() const = &::clang::TemplateTypeParmDecl::defaultArgumentWasInherited;
    class ::clang::QualType  (::clang::TemplateTypeParmDecl::*method_pointer_26588c6a42c55f2b82c44c3ac34d6e3c)() const = &::clang::TemplateTypeParmDecl::getDefaultArgument;
    class ::clang::SourceLocation  (::clang::TemplateTypeParmDecl::*method_pointer_bdef9317e9905dacb22826bbe1daca09)() const = &::clang::TemplateTypeParmDecl::getDefaultArgumentLoc;
    unsigned int  (::clang::TemplateTypeParmDecl::*method_pointer_c70f2521243758cfaf280a8d3a16cbbd)() const = &::clang::TemplateTypeParmDecl::getDepth;
    unsigned int  (::clang::TemplateTypeParmDecl::*method_pointer_642b087f9048507abba9b5cd57e61d46)() const = &::clang::TemplateTypeParmDecl::getIndex;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_4bdaeab0cfdc556293c93cada99cbcf1)() const = &::clang::TemplateTypeParmDecl::hasDefaultArgument;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_efee5cf827da5367a7440c50d73c6bb0)() const = &::clang::TemplateTypeParmDecl::isParameterPack;
    void  (::clang::TemplateTypeParmDecl::*method_pointer_02f2be7caccf5e3db8f6d6155c2de4ef)() = &::clang::TemplateTypeParmDecl::removeDefaultArgument;
    void  (::clang::TemplateTypeParmDecl::*method_pointer_c481291487265c59860cf3b69ee8a6ad)(bool ) = &::clang::TemplateTypeParmDecl::setDeclaredWithTypename;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_cfa5fd3f0e21561a882cd94fa6b15da1)() const = &::clang::TemplateTypeParmDecl::wasDeclaredWithTypename;
    boost::python::class_< class ::clang::TemplateTypeParmDecl, autowig::HeldType< class ::clang::TemplateTypeParmDecl >, boost::python::bases< class ::clang::TypeDecl >, boost::noncopyable > class_9202ae6b0373518c9fbcc487804b1f29("TemplateTypeParmDecl", "", boost::python::no_init);
    class_9202ae6b0373518c9fbcc487804b1f29.def("classof", method_pointer_5401ee72ddcb570ca05f66802802195e, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("classof_kind", method_pointer_fb7f259c81e258bbb5062487c2b0cb4c, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("default_argument_was_inherited", method_pointer_daf2b8897fe25c118045c9c56238d6a5, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_default_argument", method_pointer_26588c6a42c55f2b82c44c3ac34d6e3c, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_default_argument_loc", method_pointer_bdef9317e9905dacb22826bbe1daca09, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_depth", method_pointer_c70f2521243758cfaf280a8d3a16cbbd, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_index", method_pointer_642b087f9048507abba9b5cd57e61d46, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("has_default_argument", method_pointer_4bdaeab0cfdc556293c93cada99cbcf1, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("is_parameter_pack", method_pointer_efee5cf827da5367a7440c50d73c6bb0, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("remove_default_argument", method_pointer_02f2be7caccf5e3db8f6d6155c2de4ef, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("set_declared_with_typename", method_pointer_c481291487265c59860cf3b69ee8a6ad, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("was_declared_with_typename", method_pointer_cfa5fd3f0e21561a882cd94fa6b15da1, "");
    class_9202ae6b0373518c9fbcc487804b1f29.staticmethod("classof_kind");
    class_9202ae6b0373518c9fbcc487804b1f29.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateTypeParmDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateTypeParmDecl >, autowig::HeldType< class ::clang::TypeDecl > >();
    }

}