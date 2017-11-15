#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::BlockDecl const volatile * get_pointer<class ::clang::BlockDecl const volatile >(class ::clang::BlockDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e8de972362795c73b92c7a53a3029be0()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::BlockDecl * (*method_pointer_fbdb5c930bd35fb497d135ec500441d5)(class ::clang::ASTContext &, class ::clang::DeclContext *, class ::clang::SourceLocation ) = ::clang::BlockDecl::Create;
    class ::clang::BlockDecl * (*method_pointer_7d4f5a10717450cab6684f2a20759a0c)(class ::clang::ASTContext &, unsigned int ) = ::clang::BlockDecl::CreateDeserialized;
    class ::clang::SourceLocation  (::clang::BlockDecl::*method_pointer_df4e42d2f22b5ff4b96b117e618bbcc4)() const = &::clang::BlockDecl::getCaretLocation;
    bool  (::clang::BlockDecl::*method_pointer_c6c97e76fb1e5ccfade1b728fd59330e)() const = &::clang::BlockDecl::isVariadic;
    void  (::clang::BlockDecl::*method_pointer_746c4c7f32235bb6bd4ae8d82fd18bb4)(bool ) = &::clang::BlockDecl::setIsVariadic;
    bool  (::clang::BlockDecl::*method_pointer_d2b62052e4585a2d959e2b5d2dc52b59)() const = &::clang::BlockDecl::param_empty;
    ::size_t  (::clang::BlockDecl::*method_pointer_b4e3675b529959ad893f8a1a17a621ae)() const = &::clang::BlockDecl::param_size;
    unsigned int  (::clang::BlockDecl::*method_pointer_d1c49902e8df5be592b9e2f889648011)() const = &::clang::BlockDecl::getNumParams;
    class ::clang::ParmVarDecl const * (::clang::BlockDecl::*method_pointer_71c5c56e31b858b3840dea1e354473c5)(unsigned int ) const = &::clang::BlockDecl::getParamDecl;
    class ::clang::ParmVarDecl * (::clang::BlockDecl::*method_pointer_8ccb93406bda5c488a97c04a79eb6201)(unsigned int ) = &::clang::BlockDecl::getParamDecl;
    bool  (::clang::BlockDecl::*method_pointer_c68ec23bcfe15a0e91552772f78588b8)() const = &::clang::BlockDecl::hasCaptures;
    unsigned int  (::clang::BlockDecl::*method_pointer_bcbf60a607cc53d4bab99b8f92f17f29)() const = &::clang::BlockDecl::getNumCaptures;
    bool  (::clang::BlockDecl::*method_pointer_c988f5a2e41a5492aeb6837dab102cd1)() const = &::clang::BlockDecl::capturesCXXThis;
    bool  (::clang::BlockDecl::*method_pointer_0178f765be04529a936347242763fb0d)() const = &::clang::BlockDecl::blockMissingReturnType;
    void  (::clang::BlockDecl::*method_pointer_a0d1806a4b015b3aba7168f22f903978)(bool ) = &::clang::BlockDecl::setBlockMissingReturnType;
    bool  (::clang::BlockDecl::*method_pointer_255f55a76b245104ba74ecd3824d4637)() const = &::clang::BlockDecl::isConversionFromLambda;
    void  (::clang::BlockDecl::*method_pointer_46110026b5a75b6ba033d536ae65f442)(bool ) = &::clang::BlockDecl::setIsConversionFromLambda;
    bool  (::clang::BlockDecl::*method_pointer_ab661bf44d595fdb810462015c599c24)(class ::clang::VarDecl const *) const = &::clang::BlockDecl::capturesVariable;
    unsigned int  (::clang::BlockDecl::*method_pointer_cf4b47ea9c1a5f6fbe75a693ffca55fa)() const = &::clang::BlockDecl::getBlockManglingNumber;
    class ::clang::Decl * (::clang::BlockDecl::*method_pointer_8d1fc849e2515c5ea1b7bd63d011bfb3)() const = &::clang::BlockDecl::getBlockManglingContextDecl;
    void  (::clang::BlockDecl::*method_pointer_7346cfd30dd45eb1ba1e6c12e8fd5265)(unsigned int , class ::clang::Decl *) = &::clang::BlockDecl::setBlockMangling;
    bool  (*method_pointer_47e646bc02305d859f784ae6a2cd2963)(class ::clang::Decl const *) = ::clang::BlockDecl::classof;
    bool  (*method_pointer_1bdcc7387ea55ccaaa73c5683437982f)(enum ::clang::Decl::Kind ) = ::clang::BlockDecl::classofKind;
    class ::clang::DeclContext * (*method_pointer_81cb9b7941905b0db25875b73880df6c)(class ::clang::BlockDecl const *) = ::clang::BlockDecl::castToDeclContext;
    class ::clang::BlockDecl * (*method_pointer_5e232373b6c451e19bfba1988ab485a0)(class ::clang::DeclContext const *) = ::clang::BlockDecl::castFromDeclContext;
    boost::python::class_< class ::clang::BlockDecl, autowig::Held< class ::clang::BlockDecl >::Type, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_e8de972362795c73b92c7a53a3029be0("BlockDecl", "", boost::python::no_init);
    class_e8de972362795c73b92c7a53a3029be0.def("create", method_pointer_fbdb5c930bd35fb497d135ec500441d5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("create_deserialized", method_pointer_7d4f5a10717450cab6684f2a20759a0c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_caret_location", method_pointer_df4e42d2f22b5ff4b96b117e618bbcc4, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_variadic", method_pointer_c6c97e76fb1e5ccfade1b728fd59330e, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_variadic", method_pointer_746c4c7f32235bb6bd4ae8d82fd18bb4, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_empty", method_pointer_d2b62052e4585a2d959e2b5d2dc52b59, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_size", method_pointer_b4e3675b529959ad893f8a1a17a621ae, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_params", method_pointer_d1c49902e8df5be592b9e2f889648011, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_71c5c56e31b858b3840dea1e354473c5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_8ccb93406bda5c488a97c04a79eb6201, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("has_captures", method_pointer_c68ec23bcfe15a0e91552772f78588b8, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_captures", method_pointer_bcbf60a607cc53d4bab99b8f92f17f29, ":Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_cxx_this", method_pointer_c988f5a2e41a5492aeb6837dab102cd1, "");
    class_e8de972362795c73b92c7a53a3029be0.def("block_missing_return_type", method_pointer_0178f765be04529a936347242763fb0d, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_missing_return_type", method_pointer_a0d1806a4b015b3aba7168f22f903978, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_conversion_from_lambda", method_pointer_255f55a76b245104ba74ecd3824d4637, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_conversion_from_lambda", method_pointer_46110026b5a75b6ba033d536ae65f442, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_variable", method_pointer_ab661bf44d595fdb810462015c599c24, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_number", method_pointer_cf4b47ea9c1a5f6fbe75a693ffca55fa, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_context_decl", method_pointer_8d1fc849e2515c5ea1b7bd63d011bfb3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_mangling", method_pointer_7346cfd30dd45eb1ba1e6c12e8fd5265, "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof", method_pointer_47e646bc02305d859f784ae6a2cd2963, "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof_kind", method_pointer_1bdcc7387ea55ccaaa73c5683437982f, "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_to_decl_context", method_pointer_81cb9b7941905b0db25875b73880df6c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_from_decl_context", method_pointer_5e232373b6c451e19bfba1988ab485a0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("cast_from_decl_context");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("cast_to_decl_context");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("create");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("classof_kind");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("classof");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("create_deserialized");

    if(autowig::Held< class ::clang::BlockDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::BlockDecl >::Type, autowig::Held< class ::clang::Decl >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::clang::BlockDecl >::Type, autowig::Held< class ::clang::DeclContext >::Type >();
    }

}