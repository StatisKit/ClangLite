#include "_clanglite.h"


namespace autowig
{
}


void wrapper_9202ae6b0373518c9fbcc487804b1f29()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_de3cc183dab25ca48ac0907599d5da3c)(class ::clang::Decl  const *) = ::clang::TemplateTypeParmDecl::classof;
    bool  (*method_pointer_7a2070550c71501fb9623e819ed8678a)(enum ::clang::Decl::Kind ) = ::clang::TemplateTypeParmDecl::classofKind;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_0d6374b2cc685ca38e443f995f6ad5ec)() const = &::clang::TemplateTypeParmDecl::defaultArgumentWasInherited;
    unsigned int  (::clang::TemplateTypeParmDecl::*method_pointer_1d3ca34ab6085d739b906bb40f27c9c0)() const = &::clang::TemplateTypeParmDecl::getDepth;
    unsigned int  (::clang::TemplateTypeParmDecl::*method_pointer_4bc2e7f72a5c5199bb66d7775310c396)() const = &::clang::TemplateTypeParmDecl::getIndex;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_a14fbcb5f09759d68eff6918226c700a)() const = &::clang::TemplateTypeParmDecl::hasDefaultArgument;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_8af5ec9208605563ad0c80fecef24abe)() const = &::clang::TemplateTypeParmDecl::isParameterPack;
    void  (::clang::TemplateTypeParmDecl::*method_pointer_91754f96e9f050f5a8c1a49b42e075a8)() = &::clang::TemplateTypeParmDecl::removeDefaultArgument;
    void  (::clang::TemplateTypeParmDecl::*method_pointer_14eced86fb1758c1a95641c53151b158)(bool ) = &::clang::TemplateTypeParmDecl::setDeclaredWithTypename;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_946f63d7ca1b573b8c4d9005ec8198af)() const = &::clang::TemplateTypeParmDecl::wasDeclaredWithTypename;
    boost::python::class_< class ::clang::TemplateTypeParmDecl, autowig::HeldType< class ::clang::TemplateTypeParmDecl >, boost::python::bases< class ::clang::TypeDecl >, boost::noncopyable > class_9202ae6b0373518c9fbcc487804b1f29("TemplateTypeParmDecl", "", boost::python::no_init);
    class_9202ae6b0373518c9fbcc487804b1f29.def("classof", method_pointer_de3cc183dab25ca48ac0907599d5da3c, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("classof_kind", method_pointer_7a2070550c71501fb9623e819ed8678a, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("default_argument_was_inherited", method_pointer_0d6374b2cc685ca38e443f995f6ad5ec, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_depth", method_pointer_1d3ca34ab6085d739b906bb40f27c9c0, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_index", method_pointer_4bc2e7f72a5c5199bb66d7775310c396, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("has_default_argument", method_pointer_a14fbcb5f09759d68eff6918226c700a, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("is_parameter_pack", method_pointer_8af5ec9208605563ad0c80fecef24abe, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("remove_default_argument", method_pointer_91754f96e9f050f5a8c1a49b42e075a8, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("set_declared_with_typename", method_pointer_14eced86fb1758c1a95641c53151b158, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("was_declared_with_typename", method_pointer_946f63d7ca1b573b8c4d9005ec8198af, "");
    class_9202ae6b0373518c9fbcc487804b1f29.staticmethod("classof_kind");
    class_9202ae6b0373518c9fbcc487804b1f29.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateTypeParmDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateTypeParmDecl >, autowig::HeldType< class ::clang::TypeDecl > >();
    }

}