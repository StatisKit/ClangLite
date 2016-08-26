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
    class ::clang::BlockDecl  * (*method_pointer_31e7eaccf8b75de995bbd1ee6b7c8a2f)(class ::clang::ASTContext  &, unsigned int ) = ::clang::BlockDecl::CreateDeserialized;
    bool  (::clang::BlockDecl::*method_pointer_fc0be1bac402576fabaac47c3572de3a)() const = &::clang::BlockDecl::blockMissingReturnType;
    bool  (::clang::BlockDecl::*method_pointer_53742d94a8305509a0de4f95d436debd)() const = &::clang::BlockDecl::capturesCXXThis;
    bool  (::clang::BlockDecl::*method_pointer_f28d1205841e5d53bc60836521a359d6)(class ::clang::VarDecl  const *) const = &::clang::BlockDecl::capturesVariable;
    class ::clang::BlockDecl  * (*method_pointer_a1de864d2c025b489f7bca98aa3041ca)(class ::clang::DeclContext  const *) = ::clang::BlockDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_a85f8cd1b1b2562db27879ee0b40f486)(class ::clang::BlockDecl  const *) = ::clang::BlockDecl::castToDeclContext;
    bool  (*method_pointer_8033db73168b50dd90024680f6d33aad)(class ::clang::Decl  const *) = ::clang::BlockDecl::classof;
    bool  (*method_pointer_dc8dbd1c6e2d558b83fc14fa5432e2a3)(enum ::clang::Decl::Kind ) = ::clang::BlockDecl::classofKind;
    class ::clang::Decl  * (::clang::BlockDecl::*method_pointer_e06c9713d31b523fbc21bdb0bc20683c)() const = &::clang::BlockDecl::getBlockManglingContextDecl;
    unsigned int  (::clang::BlockDecl::*method_pointer_b08635790efa52fe91cd7c9b4d792f85)() const = &::clang::BlockDecl::getBlockManglingNumber;
    unsigned int  (::clang::BlockDecl::*method_pointer_a65b285c8be75cf2af789190103fb264)() const = &::clang::BlockDecl::getNumCaptures;
    unsigned int  (::clang::BlockDecl::*method_pointer_5b68c45a021a5ff7ade9963b0546227b)() const = &::clang::BlockDecl::getNumParams;
    class ::clang::ParmVarDecl  const * (::clang::BlockDecl::*method_pointer_49f2a3c75a9e53acbedfb9eee95de174)(unsigned int ) const = &::clang::BlockDecl::getParamDecl;
    class ::clang::ParmVarDecl  * (::clang::BlockDecl::*method_pointer_79fec3c8dd565987b88a137ec90a8909)(unsigned int ) = &::clang::BlockDecl::getParamDecl;
    bool  (::clang::BlockDecl::*method_pointer_875f4b5b65ee5df19defeb790e573c9a)() const = &::clang::BlockDecl::hasCaptures;
    bool  (::clang::BlockDecl::*method_pointer_2f1308a7bc1a5ea68cb0a16aa5dfa385)() const = &::clang::BlockDecl::isConversionFromLambda;
    bool  (::clang::BlockDecl::*method_pointer_f14d05b1e83d55beb8b013ae6f05548b)() const = &::clang::BlockDecl::isVariadic;
    bool  (::clang::BlockDecl::*method_pointer_264718bb683e5546ae009abf748718aa)() const = &::clang::BlockDecl::param_empty;
    unsigned int  (::clang::BlockDecl::*method_pointer_e04ff95632ed585d8542410a4e176579)() const = &::clang::BlockDecl::param_size;
    void  (::clang::BlockDecl::*method_pointer_cd124204fff6543b80f90bc2f55121d1)(unsigned int , class ::clang::Decl  *) = &::clang::BlockDecl::setBlockMangling;
    void  (::clang::BlockDecl::*method_pointer_fed9283a3c5b5534a7cc206a7d803ed6)(bool ) = &::clang::BlockDecl::setBlockMissingReturnType;
    void  (::clang::BlockDecl::*method_pointer_8030c7526eb45ca68c2866f32b165945)(bool ) = &::clang::BlockDecl::setIsConversionFromLambda;
    void  (::clang::BlockDecl::*method_pointer_7ef2f0694bb7564c89f420cac7f5dd2a)(bool ) = &::clang::BlockDecl::setIsVariadic;
    boost::python::class_< class ::clang::BlockDecl, autowig::HeldType< class ::clang::BlockDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_e8de972362795c73b92c7a53a3029be0("BlockDecl", "", boost::python::no_init);
    class_e8de972362795c73b92c7a53a3029be0.def("create_deserialized", method_pointer_31e7eaccf8b75de995bbd1ee6b7c8a2f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("block_missing_return_type", method_pointer_fc0be1bac402576fabaac47c3572de3a, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_cxx_this", method_pointer_53742d94a8305509a0de4f95d436debd, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_variable", method_pointer_f28d1205841e5d53bc60836521a359d6, "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_from_decl_context", method_pointer_a1de864d2c025b489f7bca98aa3041ca, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_to_decl_context", method_pointer_a85f8cd1b1b2562db27879ee0b40f486, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof", method_pointer_8033db73168b50dd90024680f6d33aad, "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof_kind", method_pointer_dc8dbd1c6e2d558b83fc14fa5432e2a3, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_context_decl", method_pointer_e06c9713d31b523fbc21bdb0bc20683c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_number", method_pointer_b08635790efa52fe91cd7c9b4d792f85, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_captures", method_pointer_a65b285c8be75cf2af789190103fb264, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_params", method_pointer_5b68c45a021a5ff7ade9963b0546227b, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_49f2a3c75a9e53acbedfb9eee95de174, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_79fec3c8dd565987b88a137ec90a8909, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("has_captures", method_pointer_875f4b5b65ee5df19defeb790e573c9a, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_conversion_from_lambda", method_pointer_2f1308a7bc1a5ea68cb0a16aa5dfa385, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_variadic", method_pointer_f14d05b1e83d55beb8b013ae6f05548b, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_empty", method_pointer_264718bb683e5546ae009abf748718aa, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_size", method_pointer_e04ff95632ed585d8542410a4e176579, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_mangling", method_pointer_cd124204fff6543b80f90bc2f55121d1, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_missing_return_type", method_pointer_fed9283a3c5b5534a7cc206a7d803ed6, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_conversion_from_lambda", method_pointer_8030c7526eb45ca68c2866f32b165945, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_variadic", method_pointer_7ef2f0694bb7564c89f420cac7f5dd2a, "");
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