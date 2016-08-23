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
    class ::clang::BlockDecl  * (*method_pointer_22af1a11896f597ebb0b5be794a60158)(class ::clang::ASTContext  &, unsigned int ) = ::clang::BlockDecl::CreateDeserialized;
    bool  (::clang::BlockDecl::*method_pointer_6a257a549f5d55c19d12b921746dfdb5)() const = &::clang::BlockDecl::blockMissingReturnType;
    bool  (::clang::BlockDecl::*method_pointer_add5071b8f0455098466389c2e6260ab)() const = &::clang::BlockDecl::capturesCXXThis;
    bool  (::clang::BlockDecl::*method_pointer_c39405d409a35542af9f9102eadb5cb8)(class ::clang::VarDecl  const *) const = &::clang::BlockDecl::capturesVariable;
    class ::clang::BlockDecl  * (*method_pointer_139b76dd49fa52ed8b2faa77bec3311a)(class ::clang::DeclContext  const *) = ::clang::BlockDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_509980532f145ec4b61863496c544791)(class ::clang::BlockDecl  const *) = ::clang::BlockDecl::castToDeclContext;
    bool  (*method_pointer_2578d08e1c12543dacc57571860c006e)(class ::clang::Decl  const *) = ::clang::BlockDecl::classof;
    bool  (*method_pointer_0f7d1f5910825a8a8a326874c203c4f3)(enum ::clang::Decl::Kind ) = ::clang::BlockDecl::classofKind;
    class ::clang::Decl  * (::clang::BlockDecl::*method_pointer_2b98cf24a47d53cfb6994b0d79f5199b)() const = &::clang::BlockDecl::getBlockManglingContextDecl;
    unsigned int  (::clang::BlockDecl::*method_pointer_b4b4ec5a428a551fbbb05f02510fe2d8)() const = &::clang::BlockDecl::getBlockManglingNumber;
    unsigned int  (::clang::BlockDecl::*method_pointer_ab28527f4c4f59bfb42540d139205bb3)() const = &::clang::BlockDecl::getNumCaptures;
    unsigned int  (::clang::BlockDecl::*method_pointer_dfdf439a2ff75cd9af9f939cb82cde3e)() const = &::clang::BlockDecl::getNumParams;
    class ::clang::ParmVarDecl  const * (::clang::BlockDecl::*method_pointer_7e4a32f7191d52c0a04c9fc8f1c29ba2)(unsigned int ) const = &::clang::BlockDecl::getParamDecl;
    class ::clang::ParmVarDecl  * (::clang::BlockDecl::*method_pointer_f6d2693e354f55b294100ef8c1c3383f)(unsigned int ) = &::clang::BlockDecl::getParamDecl;
    bool  (::clang::BlockDecl::*method_pointer_372ee73fa9e954e9998f32b13567eab0)() const = &::clang::BlockDecl::hasCaptures;
    bool  (::clang::BlockDecl::*method_pointer_34f3e7133fa05146bbfbe35760a5542d)() const = &::clang::BlockDecl::isConversionFromLambda;
    bool  (::clang::BlockDecl::*method_pointer_9a217f0d2f9b5ebca80d087331fe9997)() const = &::clang::BlockDecl::isVariadic;
    bool  (::clang::BlockDecl::*method_pointer_349691a4ff3652759de1cd5abd5345b8)() const = &::clang::BlockDecl::param_empty;
    unsigned int  (::clang::BlockDecl::*method_pointer_657a0b0dad6d5dd3aaee97dde6d83d90)() const = &::clang::BlockDecl::param_size;
    void  (::clang::BlockDecl::*method_pointer_6a6d0904336955059b570a9de11b456d)(unsigned int , class ::clang::Decl  *) = &::clang::BlockDecl::setBlockMangling;
    void  (::clang::BlockDecl::*method_pointer_3de7a8a1c4685a3b863ba651d450150a)(bool ) = &::clang::BlockDecl::setBlockMissingReturnType;
    void  (::clang::BlockDecl::*method_pointer_b0c648aebf58578fa43425a23901f918)(bool ) = &::clang::BlockDecl::setIsConversionFromLambda;
    void  (::clang::BlockDecl::*method_pointer_58f318ed4941502e91052c3df47a45cd)(bool ) = &::clang::BlockDecl::setIsVariadic;
    boost::python::class_< class ::clang::BlockDecl, autowig::HeldType< class ::clang::BlockDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_e8de972362795c73b92c7a53a3029be0("BlockDecl", "", boost::python::no_init);
    class_e8de972362795c73b92c7a53a3029be0.def("create_deserialized", method_pointer_22af1a11896f597ebb0b5be794a60158, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("block_missing_return_type", method_pointer_6a257a549f5d55c19d12b921746dfdb5, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_cxx_this", method_pointer_add5071b8f0455098466389c2e6260ab, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_variable", method_pointer_c39405d409a35542af9f9102eadb5cb8, "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_from_decl_context", method_pointer_139b76dd49fa52ed8b2faa77bec3311a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_to_decl_context", method_pointer_509980532f145ec4b61863496c544791, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof", method_pointer_2578d08e1c12543dacc57571860c006e, "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof_kind", method_pointer_0f7d1f5910825a8a8a326874c203c4f3, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_context_decl", method_pointer_2b98cf24a47d53cfb6994b0d79f5199b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_number", method_pointer_b4b4ec5a428a551fbbb05f02510fe2d8, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_captures", method_pointer_ab28527f4c4f59bfb42540d139205bb3, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_params", method_pointer_dfdf439a2ff75cd9af9f939cb82cde3e, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_7e4a32f7191d52c0a04c9fc8f1c29ba2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_f6d2693e354f55b294100ef8c1c3383f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("has_captures", method_pointer_372ee73fa9e954e9998f32b13567eab0, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_conversion_from_lambda", method_pointer_34f3e7133fa05146bbfbe35760a5542d, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_variadic", method_pointer_9a217f0d2f9b5ebca80d087331fe9997, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_empty", method_pointer_349691a4ff3652759de1cd5abd5345b8, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_size", method_pointer_657a0b0dad6d5dd3aaee97dde6d83d90, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_mangling", method_pointer_6a6d0904336955059b570a9de11b456d, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_missing_return_type", method_pointer_3de7a8a1c4685a3b863ba651d450150a, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_conversion_from_lambda", method_pointer_b0c648aebf58578fa43425a23901f918, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_variadic", method_pointer_58f318ed4941502e91052c3df47a45cd, "");
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