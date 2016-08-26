#include "_clanglite.h"


namespace autowig
{
}


void wrapper_e8de972362795c73b92c7a53a3029be0()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::BlockDecl  * (*method_pointer_9f04ee916cd05c6181fe4e9d71996e98)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::SourceLocation ) = ::clang::BlockDecl::Create;
    class ::clang::BlockDecl  * (*method_pointer_d0a72b96105e5ef6aa933bfe64455ce1)(class ::clang::ASTContext  &, unsigned int ) = ::clang::BlockDecl::CreateDeserialized;
    bool  (::clang::BlockDecl::*method_pointer_b33306b578b95e46a82f0167059b18ef)() const = &::clang::BlockDecl::blockMissingReturnType;
    bool  (::clang::BlockDecl::*method_pointer_11a3206510c35bb0b1c16ab06016b0b9)() const = &::clang::BlockDecl::capturesCXXThis;
    bool  (::clang::BlockDecl::*method_pointer_898e86ed755c5712ae23675a35637f4c)(class ::clang::VarDecl  const *) const = &::clang::BlockDecl::capturesVariable;
    class ::clang::BlockDecl  * (*method_pointer_8a39411a57f5587eb0da512ed852c4da)(class ::clang::DeclContext  const *) = ::clang::BlockDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_a67293df3088527bb2f06164a168daff)(class ::clang::BlockDecl  const *) = ::clang::BlockDecl::castToDeclContext;
    bool  (*method_pointer_1c46182ba0e65c61aebf3b99d2129d32)(class ::clang::Decl  const *) = ::clang::BlockDecl::classof;
    bool  (*method_pointer_aec6025295355eafa0b99786e96b49bc)(enum ::clang::Decl::Kind ) = ::clang::BlockDecl::classofKind;
    class ::clang::Decl  * (::clang::BlockDecl::*method_pointer_b8c7c4e8e5bc55058ad221c48a82608c)() const = &::clang::BlockDecl::getBlockManglingContextDecl;
    unsigned int  (::clang::BlockDecl::*method_pointer_3715962532885227841db36c1d407bbe)() const = &::clang::BlockDecl::getBlockManglingNumber;
    class ::clang::SourceLocation  (::clang::BlockDecl::*method_pointer_fc19f7ad5f0150cf9fa66daa62dafd47)() const = &::clang::BlockDecl::getCaretLocation;
    unsigned int  (::clang::BlockDecl::*method_pointer_28b7ae32429c504990751d5f0ae39f25)() const = &::clang::BlockDecl::getNumCaptures;
    unsigned int  (::clang::BlockDecl::*method_pointer_b9e3890ae51953329b0af40151ef78c0)() const = &::clang::BlockDecl::getNumParams;
    class ::clang::ParmVarDecl  * (::clang::BlockDecl::*method_pointer_85945598285d5f9a9317e4dd46f6ffbd)(unsigned int ) = &::clang::BlockDecl::getParamDecl;
    class ::clang::ParmVarDecl  const * (::clang::BlockDecl::*method_pointer_a11a986901a7556fab061b80bb4cf14d)(unsigned int ) const = &::clang::BlockDecl::getParamDecl;
    bool  (::clang::BlockDecl::*method_pointer_87ff320d7d3a5101976130a89db4d6c5)() const = &::clang::BlockDecl::hasCaptures;
    bool  (::clang::BlockDecl::*method_pointer_e96acb2cc1bf570bb85cf3e6c2534d53)() const = &::clang::BlockDecl::isConversionFromLambda;
    bool  (::clang::BlockDecl::*method_pointer_451b1539f4ac5d7a9c7285062954598a)() const = &::clang::BlockDecl::isVariadic;
    bool  (::clang::BlockDecl::*method_pointer_6a73ff30739954fa9f03bb524c9eb2e4)() const = &::clang::BlockDecl::param_empty;
    unsigned int  (::clang::BlockDecl::*method_pointer_c3e3adb37ab45bebb7b3af1dc71b7e17)() const = &::clang::BlockDecl::param_size;
    void  (::clang::BlockDecl::*method_pointer_61261b2100c05c78b0b1f0c5f54df13b)(unsigned int , class ::clang::Decl  *) = &::clang::BlockDecl::setBlockMangling;
    void  (::clang::BlockDecl::*method_pointer_052ad8ec01e95488bb99709e7d7df053)(bool ) = &::clang::BlockDecl::setBlockMissingReturnType;
    void  (::clang::BlockDecl::*method_pointer_1589fc9c88f35dd8b3b059f445b6bd33)(bool ) = &::clang::BlockDecl::setIsConversionFromLambda;
    void  (::clang::BlockDecl::*method_pointer_93e38890623d5a4d844ca57b363950c1)(bool ) = &::clang::BlockDecl::setIsVariadic;
    boost::python::class_< class ::clang::BlockDecl, autowig::HeldType< class ::clang::BlockDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_e8de972362795c73b92c7a53a3029be0("BlockDecl", "", boost::python::no_init);
    class_e8de972362795c73b92c7a53a3029be0.def("create", method_pointer_9f04ee916cd05c6181fe4e9d71996e98, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("create_deserialized", method_pointer_d0a72b96105e5ef6aa933bfe64455ce1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("block_missing_return_type", method_pointer_b33306b578b95e46a82f0167059b18ef, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_cxx_this", method_pointer_11a3206510c35bb0b1c16ab06016b0b9, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_variable", method_pointer_898e86ed755c5712ae23675a35637f4c, "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_from_decl_context", method_pointer_8a39411a57f5587eb0da512ed852c4da, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_to_decl_context", method_pointer_a67293df3088527bb2f06164a168daff, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof", method_pointer_1c46182ba0e65c61aebf3b99d2129d32, "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof_kind", method_pointer_aec6025295355eafa0b99786e96b49bc, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_context_decl", method_pointer_b8c7c4e8e5bc55058ad221c48a82608c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_number", method_pointer_3715962532885227841db36c1d407bbe, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_caret_location", method_pointer_fc19f7ad5f0150cf9fa66daa62dafd47, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_captures", method_pointer_28b7ae32429c504990751d5f0ae39f25, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_params", method_pointer_b9e3890ae51953329b0af40151ef78c0, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_85945598285d5f9a9317e4dd46f6ffbd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_a11a986901a7556fab061b80bb4cf14d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("has_captures", method_pointer_87ff320d7d3a5101976130a89db4d6c5, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_conversion_from_lambda", method_pointer_e96acb2cc1bf570bb85cf3e6c2534d53, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_variadic", method_pointer_451b1539f4ac5d7a9c7285062954598a, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_empty", method_pointer_6a73ff30739954fa9f03bb524c9eb2e4, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_size", method_pointer_c3e3adb37ab45bebb7b3af1dc71b7e17, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_mangling", method_pointer_61261b2100c05c78b0b1f0c5f54df13b, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_missing_return_type", method_pointer_052ad8ec01e95488bb99709e7d7df053, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_conversion_from_lambda", method_pointer_1589fc9c88f35dd8b3b059f445b6bd33, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_variadic", method_pointer_93e38890623d5a4d844ca57b363950c1, "");
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