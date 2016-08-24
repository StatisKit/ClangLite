#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_e8de972362795c73b92c7a53a3029be0()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::BlockDecl  * (*method_pointer_35db50a6cb875a55943adeea0ce914b0)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::SourceLocation ) = ::clang::BlockDecl::Create;
    class ::clang::BlockDecl  * (*method_pointer_a618fc24c8fc51f7b9e9a3fd82dfed3b)(class ::clang::ASTContext  &, unsigned int ) = ::clang::BlockDecl::CreateDeserialized;
    bool  (::clang::BlockDecl::*method_pointer_a7f62b434965547b861bf5673f6febe7)() const = &::clang::BlockDecl::blockMissingReturnType;
    bool  (::clang::BlockDecl::*method_pointer_c8e2f1048b485d278cd6c87222be84b4)() const = &::clang::BlockDecl::capturesCXXThis;
    bool  (::clang::BlockDecl::*method_pointer_ac62fe5e16eb5f1693aef6208f53b232)(class ::clang::VarDecl  const *) const = &::clang::BlockDecl::capturesVariable;
    class ::clang::BlockDecl  * (*method_pointer_983877d8cb0f59708e728b1a1c74e97d)(class ::clang::DeclContext  const *) = ::clang::BlockDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_20af2f7a6165567dbff4a7186ae6e369)(class ::clang::BlockDecl  const *) = ::clang::BlockDecl::castToDeclContext;
    bool  (*method_pointer_6ec838dce74b5bb48808b803f4b979bb)(class ::clang::Decl  const *) = ::clang::BlockDecl::classof;
    bool  (*method_pointer_b8ad30a5bc075ae0be9c78719fd81641)(enum ::clang::Decl::Kind ) = ::clang::BlockDecl::classofKind;
    class ::clang::Decl  * (::clang::BlockDecl::*method_pointer_2af0b1c8f7555059ae51f3f7703d7e88)() const = &::clang::BlockDecl::getBlockManglingContextDecl;
    unsigned int  (::clang::BlockDecl::*method_pointer_afeb36815e57566b95ce040ebe858a89)() const = &::clang::BlockDecl::getBlockManglingNumber;
    class ::clang::SourceLocation  (::clang::BlockDecl::*method_pointer_0ed6abb9b05c5ede8b90f99944240f4b)() const = &::clang::BlockDecl::getCaretLocation;
    unsigned int  (::clang::BlockDecl::*method_pointer_54d88a2ac8fe5a058ff3e4294bebab53)() const = &::clang::BlockDecl::getNumCaptures;
    unsigned int  (::clang::BlockDecl::*method_pointer_5552f961541b54cfbe7fd5b849a6d8f0)() const = &::clang::BlockDecl::getNumParams;
    class ::clang::ParmVarDecl  * (::clang::BlockDecl::*method_pointer_2cf309c4b59c5dafb5b297746a050cd3)(unsigned int ) = &::clang::BlockDecl::getParamDecl;
    class ::clang::ParmVarDecl  const * (::clang::BlockDecl::*method_pointer_b4564b3335f25d81af2356dbf8e00519)(unsigned int ) const = &::clang::BlockDecl::getParamDecl;
    bool  (::clang::BlockDecl::*method_pointer_e3d4dbe708b65fc3b969ec65ecd49c78)() const = &::clang::BlockDecl::hasCaptures;
    bool  (::clang::BlockDecl::*method_pointer_0abb36f379c556b4bc2f670ddf2a34a5)() const = &::clang::BlockDecl::isConversionFromLambda;
    bool  (::clang::BlockDecl::*method_pointer_02be12ff71b5579298b30b2e2b9a8e53)() const = &::clang::BlockDecl::isVariadic;
    bool  (::clang::BlockDecl::*method_pointer_72b02633887c5813a3097e44e1b90903)() const = &::clang::BlockDecl::param_empty;
    unsigned int  (::clang::BlockDecl::*method_pointer_f00ab769605758ba9daf2eb6c31ee27e)() const = &::clang::BlockDecl::param_size;
    void  (::clang::BlockDecl::*method_pointer_48d2ac5ab1db57cdb288df4bfb49ff1d)(unsigned int , class ::clang::Decl  *) = &::clang::BlockDecl::setBlockMangling;
    void  (::clang::BlockDecl::*method_pointer_374f8222e87e58138a93d1ffd5a3a265)(bool ) = &::clang::BlockDecl::setBlockMissingReturnType;
    void  (::clang::BlockDecl::*method_pointer_0e267e4055805146b78063c69a07a1d0)(bool ) = &::clang::BlockDecl::setIsConversionFromLambda;
    void  (::clang::BlockDecl::*method_pointer_d2e79b7ac7ab586088233a5773cf1dc9)(bool ) = &::clang::BlockDecl::setIsVariadic;
    boost::python::class_< class ::clang::BlockDecl, autowig::HeldType< class ::clang::BlockDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_e8de972362795c73b92c7a53a3029be0("BlockDecl", "", boost::python::no_init);
    class_e8de972362795c73b92c7a53a3029be0.def("create", method_pointer_35db50a6cb875a55943adeea0ce914b0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("create_deserialized", method_pointer_a618fc24c8fc51f7b9e9a3fd82dfed3b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("block_missing_return_type", method_pointer_a7f62b434965547b861bf5673f6febe7, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_cxx_this", method_pointer_c8e2f1048b485d278cd6c87222be84b4, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_variable", method_pointer_ac62fe5e16eb5f1693aef6208f53b232, "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_from_decl_context", method_pointer_983877d8cb0f59708e728b1a1c74e97d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_to_decl_context", method_pointer_20af2f7a6165567dbff4a7186ae6e369, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof", method_pointer_6ec838dce74b5bb48808b803f4b979bb, "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof_kind", method_pointer_b8ad30a5bc075ae0be9c78719fd81641, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_context_decl", method_pointer_2af0b1c8f7555059ae51f3f7703d7e88, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_number", method_pointer_afeb36815e57566b95ce040ebe858a89, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_caret_location", method_pointer_0ed6abb9b05c5ede8b90f99944240f4b, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_captures", method_pointer_54d88a2ac8fe5a058ff3e4294bebab53, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_params", method_pointer_5552f961541b54cfbe7fd5b849a6d8f0, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_2cf309c4b59c5dafb5b297746a050cd3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_b4564b3335f25d81af2356dbf8e00519, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("has_captures", method_pointer_e3d4dbe708b65fc3b969ec65ecd49c78, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_conversion_from_lambda", method_pointer_0abb36f379c556b4bc2f670ddf2a34a5, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_variadic", method_pointer_02be12ff71b5579298b30b2e2b9a8e53, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_empty", method_pointer_72b02633887c5813a3097e44e1b90903, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_size", method_pointer_f00ab769605758ba9daf2eb6c31ee27e, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_mangling", method_pointer_48d2ac5ab1db57cdb288df4bfb49ff1d, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_missing_return_type", method_pointer_374f8222e87e58138a93d1ffd5a3a265, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_conversion_from_lambda", method_pointer_0e267e4055805146b78063c69a07a1d0, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_variadic", method_pointer_d2e79b7ac7ab586088233a5773cf1dc9, "");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("cast_from_decl_context");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("cast_to_decl_context");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("create");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("classof_kind");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("classof");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("create_deserialized");

    if(std::is_class< autowig::HeldType< class ::clang::BlockDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BlockDecl >, autowig::HeldType< class ::clang::Decl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BlockDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}