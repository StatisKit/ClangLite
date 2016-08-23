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
    class ::clang::BlockDecl  * (*method_pointer_48c17aeceb335e01bc2580f8e3df0d47)(class ::clang::ASTContext  &, unsigned int ) = ::clang::BlockDecl::CreateDeserialized;
    bool  (::clang::BlockDecl::*method_pointer_5cc406271a0b51a5a880b516f392b9c9)() const = &::clang::BlockDecl::blockMissingReturnType;
    bool  (::clang::BlockDecl::*method_pointer_a7fa9e9eca885b06820b0853494f2c7c)() const = &::clang::BlockDecl::capturesCXXThis;
    bool  (::clang::BlockDecl::*method_pointer_6bd7b81d44045803887684409203a9c8)(class ::clang::VarDecl  const *) const = &::clang::BlockDecl::capturesVariable;
    class ::clang::BlockDecl  * (*method_pointer_6516cc5c77415c2e86456828d0a0a934)(class ::clang::DeclContext  const *) = ::clang::BlockDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_4a0e3c15d8975fae94b1a376ce968e98)(class ::clang::BlockDecl  const *) = ::clang::BlockDecl::castToDeclContext;
    bool  (*method_pointer_2d036b2feef6522e9347651e6fe70a8f)(class ::clang::Decl  const *) = ::clang::BlockDecl::classof;
    bool  (*method_pointer_130318e6a38c56898f01e3ed21e8cc3e)(enum ::clang::Decl::Kind ) = ::clang::BlockDecl::classofKind;
    class ::clang::Decl  * (::clang::BlockDecl::*method_pointer_8921e6756b185fe3966e6a6efe8ae8f7)() const = &::clang::BlockDecl::getBlockManglingContextDecl;
    unsigned int  (::clang::BlockDecl::*method_pointer_8cd0afa6aa0f59ec9e11924d54d29113)() const = &::clang::BlockDecl::getBlockManglingNumber;
    unsigned int  (::clang::BlockDecl::*method_pointer_d905232b8d0f596a8b50ff2deb9c4bd3)() const = &::clang::BlockDecl::getNumCaptures;
    unsigned int  (::clang::BlockDecl::*method_pointer_a07634544e0758c8bec8f1ee4d78c50c)() const = &::clang::BlockDecl::getNumParams;
    class ::clang::ParmVarDecl  * (::clang::BlockDecl::*method_pointer_e1df877109245a6c8a2d56a76b70ae33)(unsigned int ) = &::clang::BlockDecl::getParamDecl;
    class ::clang::ParmVarDecl  const * (::clang::BlockDecl::*method_pointer_8f7c6a5f3b6b5de5bfd7752aaf91716c)(unsigned int ) const = &::clang::BlockDecl::getParamDecl;
    bool  (::clang::BlockDecl::*method_pointer_185315b29bde5e7989988e7a741a53fd)() const = &::clang::BlockDecl::hasCaptures;
    bool  (::clang::BlockDecl::*method_pointer_476bbb49ba2d54eebeff485e1f9ef644)() const = &::clang::BlockDecl::isConversionFromLambda;
    bool  (::clang::BlockDecl::*method_pointer_21f499a9b37c5c1c9c42f3d7eafb6401)() const = &::clang::BlockDecl::isVariadic;
    bool  (::clang::BlockDecl::*method_pointer_5cd2019a217758aabd112a47d18b6b66)() const = &::clang::BlockDecl::param_empty;
    unsigned int  (::clang::BlockDecl::*method_pointer_a7c1c89ed3975cfc94df0dccce2eef16)() const = &::clang::BlockDecl::param_size;
    void  (::clang::BlockDecl::*method_pointer_d522630372db503eb9e183beee2d2e84)(unsigned int , class ::clang::Decl  *) = &::clang::BlockDecl::setBlockMangling;
    void  (::clang::BlockDecl::*method_pointer_5c23d2edf0595ae1ba886e7f1e5b866c)(bool ) = &::clang::BlockDecl::setBlockMissingReturnType;
    void  (::clang::BlockDecl::*method_pointer_dac5dcfe7a0a5cf0834ff20eef74b9e5)(bool ) = &::clang::BlockDecl::setIsConversionFromLambda;
    void  (::clang::BlockDecl::*method_pointer_b082f412e0af542196e02dedeccdfd72)(bool ) = &::clang::BlockDecl::setIsVariadic;
    boost::python::class_< class ::clang::BlockDecl, autowig::HeldType< class ::clang::BlockDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_e8de972362795c73b92c7a53a3029be0("BlockDecl", "", boost::python::no_init);
    class_e8de972362795c73b92c7a53a3029be0.def("create_deserialized", method_pointer_48c17aeceb335e01bc2580f8e3df0d47, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("block_missing_return_type", method_pointer_5cc406271a0b51a5a880b516f392b9c9, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_cxx_this", method_pointer_a7fa9e9eca885b06820b0853494f2c7c, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_variable", method_pointer_6bd7b81d44045803887684409203a9c8, "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_from_decl_context", method_pointer_6516cc5c77415c2e86456828d0a0a934, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_to_decl_context", method_pointer_4a0e3c15d8975fae94b1a376ce968e98, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof", method_pointer_2d036b2feef6522e9347651e6fe70a8f, "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof_kind", method_pointer_130318e6a38c56898f01e3ed21e8cc3e, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_context_decl", method_pointer_8921e6756b185fe3966e6a6efe8ae8f7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_number", method_pointer_8cd0afa6aa0f59ec9e11924d54d29113, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_captures", method_pointer_d905232b8d0f596a8b50ff2deb9c4bd3, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_params", method_pointer_a07634544e0758c8bec8f1ee4d78c50c, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_e1df877109245a6c8a2d56a76b70ae33, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_8f7c6a5f3b6b5de5bfd7752aaf91716c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("has_captures", method_pointer_185315b29bde5e7989988e7a741a53fd, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_conversion_from_lambda", method_pointer_476bbb49ba2d54eebeff485e1f9ef644, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_variadic", method_pointer_21f499a9b37c5c1c9c42f3d7eafb6401, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_empty", method_pointer_5cd2019a217758aabd112a47d18b6b66, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_size", method_pointer_a7c1c89ed3975cfc94df0dccce2eef16, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_mangling", method_pointer_d522630372db503eb9e183beee2d2e84, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_missing_return_type", method_pointer_5c23d2edf0595ae1ba886e7f1e5b866c, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_conversion_from_lambda", method_pointer_dac5dcfe7a0a5cf0834ff20eef74b9e5, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_variadic", method_pointer_b082f412e0af542196e02dedeccdfd72, "");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("classof_kind");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("create_deserialized");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("classof");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("cast_from_decl_context");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("cast_to_decl_context");

    if(std::is_class< autowig::HeldType< class ::clang::BlockDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BlockDecl >, autowig::HeldType< class ::clang::Decl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BlockDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}