#include "_clanglite.h"


namespace autowig
{
}


void wrapper_7a8dbb57ea425a4ca4c5329f099a1ce8()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ParmVarDecl  * (*method_pointer_2708e63fed575a23818ab4b8dafc0328)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ParmVarDecl::CreateDeserialized;
    bool  (*method_pointer_51d10a8819695af193723031d96e127a)(class ::clang::Decl  const *) = ::clang::ParmVarDecl::classof;
    bool  (*method_pointer_7d62149890d751df9d4bdcb88cfc8e98)(enum ::clang::Decl::Kind ) = ::clang::ParmVarDecl::classofKind;
    unsigned int  (::clang::ParmVarDecl::*method_pointer_57dc718e10ea576ab59f82e560d8d62d)() const = &::clang::ParmVarDecl::getFunctionScopeDepth;
    unsigned int  (::clang::ParmVarDecl::*method_pointer_9a8a8ae7d0e15e40a3ee3487b40bab73)() const = &::clang::ParmVarDecl::getFunctionScopeIndex;
    bool  (::clang::ParmVarDecl::*method_pointer_bce185a397d35fdead9b0c4abc7f1942)() const = &::clang::ParmVarDecl::hasDefaultArg;
    bool  (::clang::ParmVarDecl::*method_pointer_ec35248cf087512bb3263ac45b24384a)() const = &::clang::ParmVarDecl::hasInheritedDefaultArg;
    bool  (::clang::ParmVarDecl::*method_pointer_196a4cb446835463ab63d992ac7ebf67)() const = &::clang::ParmVarDecl::hasUninstantiatedDefaultArg;
    bool  (::clang::ParmVarDecl::*method_pointer_be6981d00c3352f89c51695ce7d05f0e)() const = &::clang::ParmVarDecl::hasUnparsedDefaultArg;
    bool  (::clang::ParmVarDecl::*method_pointer_546db2e423a656538028601807d2eb28)() const = &::clang::ParmVarDecl::isKNRPromoted;
    bool  (::clang::ParmVarDecl::*method_pointer_152ef11900a2586680853cba6eb75a46)() const = &::clang::ParmVarDecl::isObjCMethodParameter;
    bool  (::clang::ParmVarDecl::*method_pointer_4c42f0a76faa56229217413f877cb121)() const = &::clang::ParmVarDecl::isParameterPack;
    void  (::clang::ParmVarDecl::*method_pointer_a8e7182e3af954128384ebeff77c11d4)(bool ) = &::clang::ParmVarDecl::setHasInheritedDefaultArg;
    void  (::clang::ParmVarDecl::*method_pointer_19a19b52d8d85db2be832425ea824f6c)(bool ) = &::clang::ParmVarDecl::setKNRPromoted;
    void  (::clang::ParmVarDecl::*method_pointer_0368e9b3faf65c2595a42d05ebfc8a0b)(unsigned int ) = &::clang::ParmVarDecl::setObjCMethodScopeInfo;
    void  (::clang::ParmVarDecl::*method_pointer_6969fc2cfeba51c5aebbf8f82e692a8a)(class ::clang::DeclContext  *) = &::clang::ParmVarDecl::setOwningFunction;
    void  (::clang::ParmVarDecl::*method_pointer_2ce77c41b8165f70aa762dff88103b0e)(unsigned int , unsigned int ) = &::clang::ParmVarDecl::setScopeInfo;
    void  (::clang::ParmVarDecl::*method_pointer_688b839b8233578887f363c75435894f)() = &::clang::ParmVarDecl::setUnparsedDefaultArg;
    boost::python::class_< class ::clang::ParmVarDecl, autowig::HeldType< class ::clang::ParmVarDecl >, boost::python::bases< class ::clang::VarDecl >, boost::noncopyable > class_7a8dbb57ea425a4ca4c5329f099a1ce8("ParmVarDecl", "", boost::python::no_init);
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("create_deserialized", method_pointer_2708e63fed575a23818ab4b8dafc0328, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("classof", method_pointer_51d10a8819695af193723031d96e127a, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("classof_kind", method_pointer_7d62149890d751df9d4bdcb88cfc8e98, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("get_function_scope_depth", method_pointer_57dc718e10ea576ab59f82e560d8d62d, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("get_function_scope_index", method_pointer_9a8a8ae7d0e15e40a3ee3487b40bab73, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("has_default_arg", method_pointer_bce185a397d35fdead9b0c4abc7f1942, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("has_inherited_default_arg", method_pointer_ec35248cf087512bb3263ac45b24384a, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("has_uninstantiated_default_arg", method_pointer_196a4cb446835463ab63d992ac7ebf67, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("has_unparsed_default_arg", method_pointer_be6981d00c3352f89c51695ce7d05f0e, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("is_knr_promoted", method_pointer_546db2e423a656538028601807d2eb28, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("is_obj_c_method_parameter", method_pointer_152ef11900a2586680853cba6eb75a46, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("is_parameter_pack", method_pointer_4c42f0a76faa56229217413f877cb121, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_has_inherited_default_arg", method_pointer_a8e7182e3af954128384ebeff77c11d4, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_knr_promoted", method_pointer_19a19b52d8d85db2be832425ea824f6c, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_obj_c_method_scope_info", method_pointer_0368e9b3faf65c2595a42d05ebfc8a0b, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_owning_function", method_pointer_6969fc2cfeba51c5aebbf8f82e692a8a, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_scope_info", method_pointer_2ce77c41b8165f70aa762dff88103b0e, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_unparsed_default_arg", method_pointer_688b839b8233578887f363c75435894f, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.staticmethod("classof_kind");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.staticmethod("create_deserialized");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ParmVarDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ParmVarDecl >, autowig::HeldType< class ::clang::VarDecl > >();
    }

}