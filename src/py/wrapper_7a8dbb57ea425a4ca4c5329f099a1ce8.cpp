#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::ParmVarDecl const volatile * get_pointer<class ::clang::ParmVarDecl const volatile >(class ::clang::ParmVarDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7a8dbb57ea425a4ca4c5329f099a1ce8()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ParmVarDecl * (*method_pointer_71b097d6dc67578fbd6ee329476e2bf9)(class ::clang::ASTContext &, unsigned int ) = ::clang::ParmVarDecl::CreateDeserialized;
    void  (::clang::ParmVarDecl::*method_pointer_7aa3f3cc481a5d8f9026126a7ee44d79)(unsigned int ) = &::clang::ParmVarDecl::setObjCMethodScopeInfo;
    void  (::clang::ParmVarDecl::*method_pointer_21fe92bfbe77556eb3aa3d28af19720f)(unsigned int , unsigned int ) = &::clang::ParmVarDecl::setScopeInfo;
    bool  (::clang::ParmVarDecl::*method_pointer_e8fac05a22135f54a1c7835a111e6317)() const = &::clang::ParmVarDecl::isObjCMethodParameter;
    unsigned int  (::clang::ParmVarDecl::*method_pointer_660957e7b5635a29a8dc7baf41e61c2a)() const = &::clang::ParmVarDecl::getFunctionScopeDepth;
    unsigned int  (::clang::ParmVarDecl::*method_pointer_e6ba5f89665b5f6da7e0038ae4977621)() const = &::clang::ParmVarDecl::getFunctionScopeIndex;
    bool  (::clang::ParmVarDecl::*method_pointer_c48a9dd3de7256a3a234f574421f2c0f)() const = &::clang::ParmVarDecl::isKNRPromoted;
    void  (::clang::ParmVarDecl::*method_pointer_1f947aa99123517cb72630e3970f5cc9)(bool ) = &::clang::ParmVarDecl::setKNRPromoted;
    bool  (::clang::ParmVarDecl::*method_pointer_19e49f5c3ea85d70a7ed5a03f2267a0a)() const = &::clang::ParmVarDecl::hasDefaultArg;
    bool  (::clang::ParmVarDecl::*method_pointer_fe0251dae17b5d5c8a185d200d6de1aa)() const = &::clang::ParmVarDecl::hasUnparsedDefaultArg;
    bool  (::clang::ParmVarDecl::*method_pointer_ad24baf8a9505b3b9a0a8916705bb26d)() const = &::clang::ParmVarDecl::hasUninstantiatedDefaultArg;
    void  (::clang::ParmVarDecl::*method_pointer_0a9525d2777e5753b4d575b8255d5e6d)() = &::clang::ParmVarDecl::setUnparsedDefaultArg;
    bool  (::clang::ParmVarDecl::*method_pointer_f043e201410a5529bc46cd7e1874cbf6)() const = &::clang::ParmVarDecl::hasInheritedDefaultArg;
    void  (::clang::ParmVarDecl::*method_pointer_985e6ba5f12a53c69949d758fe3973f2)(bool ) = &::clang::ParmVarDecl::setHasInheritedDefaultArg;
    class ::clang::QualType  (::clang::ParmVarDecl::*method_pointer_bd59d604b49552e2b34265777b6e9568)() const = &::clang::ParmVarDecl::getOriginalType;
    bool  (::clang::ParmVarDecl::*method_pointer_6b1bf80fd5a5594fb8ad0c77c667579c)() const = &::clang::ParmVarDecl::isParameterPack;
    void  (::clang::ParmVarDecl::*method_pointer_40f65732c57d5bf4bd370e516aa5c1f9)(class ::clang::DeclContext *) = &::clang::ParmVarDecl::setOwningFunction;
    bool  (*method_pointer_bdfa4ad0a27a55f4b37b9f81bbdd6391)(class ::clang::Decl const *) = ::clang::ParmVarDecl::classof;
    bool  (*method_pointer_c69217f5ce78511b954060ccb1937256)(enum ::clang::Decl::Kind ) = ::clang::ParmVarDecl::classofKind;
    boost::python::class_< class ::clang::ParmVarDecl, autowig::Held< class ::clang::ParmVarDecl >::Type, boost::python::bases< class ::clang::VarDecl >, boost::noncopyable > class_7a8dbb57ea425a4ca4c5329f099a1ce8("ParmVarDecl", "", boost::python::no_init);
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("create_deserialized", method_pointer_71b097d6dc67578fbd6ee329476e2bf9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_obj_c_method_scope_info", method_pointer_7aa3f3cc481a5d8f9026126a7ee44d79, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_scope_info", method_pointer_21fe92bfbe77556eb3aa3d28af19720f, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("is_obj_c_method_parameter", method_pointer_e8fac05a22135f54a1c7835a111e6317, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("get_function_scope_depth", method_pointer_660957e7b5635a29a8dc7baf41e61c2a, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("get_function_scope_index", method_pointer_e6ba5f89665b5f6da7e0038ae4977621, ":Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("is_knr_promoted", method_pointer_c48a9dd3de7256a3a234f574421f2c0f, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_knr_promoted", method_pointer_1f947aa99123517cb72630e3970f5cc9, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("has_default_arg", method_pointer_19e49f5c3ea85d70a7ed5a03f2267a0a, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("has_unparsed_default_arg", method_pointer_fe0251dae17b5d5c8a185d200d6de1aa, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("has_uninstantiated_default_arg", method_pointer_ad24baf8a9505b3b9a0a8916705bb26d, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_unparsed_default_arg", method_pointer_0a9525d2777e5753b4d575b8255d5e6d, ":Return Type:\n    :cpp:any:`void`\n\n");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("has_inherited_default_arg", method_pointer_f043e201410a5529bc46cd7e1874cbf6, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_has_inherited_default_arg", method_pointer_985e6ba5f12a53c69949d758fe3973f2, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("get_original_type", method_pointer_bd59d604b49552e2b34265777b6e9568, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("is_parameter_pack", method_pointer_6b1bf80fd5a5594fb8ad0c77c667579c, "Determine whether this parameter is actually a function parameter pack.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("set_owning_function", method_pointer_40f65732c57d5bf4bd370e516aa5c1f9, ":Parameter:\n    `FD` (:py:class:`clanglite.clang.DeclContext`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("classof", method_pointer_bdfa4ad0a27a55f4b37b9f81bbdd6391, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.def("classof_kind", method_pointer_c69217f5ce78511b954060ccb1937256, "");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.staticmethod("classof_kind");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.staticmethod("create_deserialized");
    class_7a8dbb57ea425a4ca4c5329f099a1ce8.staticmethod("classof");

    if(autowig::Held< class ::clang::ParmVarDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::ParmVarDecl >::Type, autowig::Held< class ::clang::VarDecl >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::ParmVarDecl >::Type, boost::python::objects::make_ptr_instance< class ::clang::ParmVarDecl, boost::python::objects::pointer_holder< autowig::Held< class ::clang::ParmVarDecl >::Type, class ::clang::ParmVarDecl > > >();
    }

}