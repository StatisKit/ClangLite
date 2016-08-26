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
    bool  (*method_pointer_711756369a3657c1bd4b099db8618650)(class ::clang::Decl  const *) = ::clang::TemplateTypeParmDecl::classof;
    bool  (*method_pointer_b025fe61e8bf53318f74ed60c71f1ba9)(enum ::clang::Decl::Kind ) = ::clang::TemplateTypeParmDecl::classofKind;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_025702d364ef552691abf438137d26fb)() const = &::clang::TemplateTypeParmDecl::defaultArgumentWasInherited;
    class ::clang::QualType  (::clang::TemplateTypeParmDecl::*method_pointer_0bc3c1cee18954bda364e4e8e89b69d2)() const = &::clang::TemplateTypeParmDecl::getDefaultArgument;
    class ::clang::SourceLocation  (::clang::TemplateTypeParmDecl::*method_pointer_9ff34aa2a0885b478117295f76432ed8)() const = &::clang::TemplateTypeParmDecl::getDefaultArgumentLoc;
    unsigned int  (::clang::TemplateTypeParmDecl::*method_pointer_d5dd58fcc9c85d839177a676ed792462)() const = &::clang::TemplateTypeParmDecl::getDepth;
    unsigned int  (::clang::TemplateTypeParmDecl::*method_pointer_bc91156766df5b388e91bb972b55e04d)() const = &::clang::TemplateTypeParmDecl::getIndex;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_d5442d8abea450f5b1d9145858073618)() const = &::clang::TemplateTypeParmDecl::hasDefaultArgument;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_fc236ad86ee5583f8318b1eb53291eb0)() const = &::clang::TemplateTypeParmDecl::isParameterPack;
    void  (::clang::TemplateTypeParmDecl::*method_pointer_8df190f3d1d2580f939272ec12a90f0e)() = &::clang::TemplateTypeParmDecl::removeDefaultArgument;
    void  (::clang::TemplateTypeParmDecl::*method_pointer_2929f1ed4e7753b2896e93dc3d5a8187)(bool ) = &::clang::TemplateTypeParmDecl::setDeclaredWithTypename;
    bool  (::clang::TemplateTypeParmDecl::*method_pointer_c66ee3dcc63d562bbf9ec863f7d88dad)() const = &::clang::TemplateTypeParmDecl::wasDeclaredWithTypename;
    boost::python::class_< class ::clang::TemplateTypeParmDecl, autowig::HeldType< class ::clang::TemplateTypeParmDecl >, boost::python::bases< class ::clang::TypeDecl >, boost::noncopyable > class_9202ae6b0373518c9fbcc487804b1f29("TemplateTypeParmDecl", "", boost::python::no_init);
    class_9202ae6b0373518c9fbcc487804b1f29.def("classof", method_pointer_711756369a3657c1bd4b099db8618650, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("classof_kind", method_pointer_b025fe61e8bf53318f74ed60c71f1ba9, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("default_argument_was_inherited", method_pointer_025702d364ef552691abf438137d26fb, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_default_argument", method_pointer_0bc3c1cee18954bda364e4e8e89b69d2, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_default_argument_loc", method_pointer_9ff34aa2a0885b478117295f76432ed8, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_depth", method_pointer_d5dd58fcc9c85d839177a676ed792462, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("get_index", method_pointer_bc91156766df5b388e91bb972b55e04d, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("has_default_argument", method_pointer_d5442d8abea450f5b1d9145858073618, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("is_parameter_pack", method_pointer_fc236ad86ee5583f8318b1eb53291eb0, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("remove_default_argument", method_pointer_8df190f3d1d2580f939272ec12a90f0e, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("set_declared_with_typename", method_pointer_2929f1ed4e7753b2896e93dc3d5a8187, "");
    class_9202ae6b0373518c9fbcc487804b1f29.def("was_declared_with_typename", method_pointer_c66ee3dcc63d562bbf9ec863f7d88dad, "");
    class_9202ae6b0373518c9fbcc487804b1f29.staticmethod("classof_kind");
    class_9202ae6b0373518c9fbcc487804b1f29.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateTypeParmDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateTypeParmDecl >, autowig::HeldType< class ::clang::TypeDecl > >();
    }

}