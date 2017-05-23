#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::UsingDecl const volatile * get_pointer<class ::clang::UsingDecl const volatile >(class ::clang::UsingDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e7b3b4e4c9fa5685aa128e57eb78adb2()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::SourceLocation  (::clang::UsingDecl::*method_pointer_b36139fc68ad536dae803c9c0a658de9)() const = &::clang::UsingDecl::getUsingLoc;
    void  (::clang::UsingDecl::*method_pointer_0adf0cfc43965418ba99266d031213b9)(class ::clang::SourceLocation ) = &::clang::UsingDecl::setUsingLoc;
    bool  (::clang::UsingDecl::*method_pointer_b5a5d8ad527b5f339618fecbbdba45ac)() const = &::clang::UsingDecl::isAccessDeclaration;
    bool  (::clang::UsingDecl::*method_pointer_177554ee466d56c8bd64dc83c7a4453a)() const = &::clang::UsingDecl::hasTypename;
    void  (::clang::UsingDecl::*method_pointer_e5a07da8d2df5b5c835d4ed4d0d928e4)(bool ) = &::clang::UsingDecl::setTypename;
    unsigned int  (::clang::UsingDecl::*method_pointer_2fa642104fd458d0b9565d2337e1d765)() const = &::clang::UsingDecl::shadow_size;
    void  (::clang::UsingDecl::*method_pointer_3c5bf25e9afd51878664ed8d2c3bfdf3)(class ::clang::UsingShadowDecl *) = &::clang::UsingDecl::addShadowDecl;
    void  (::clang::UsingDecl::*method_pointer_1d0533e6a0dc503393972f4a6c9d9f0d)(class ::clang::UsingShadowDecl *) = &::clang::UsingDecl::removeShadowDecl;
    class ::clang::UsingDecl * (*method_pointer_4a19b7814930548f933cbef14a077f28)(class ::clang::ASTContext &, unsigned int ) = ::clang::UsingDecl::CreateDeserialized;
    class ::clang::UsingDecl * (::clang::UsingDecl::*method_pointer_0269e44773365d91901c0227c1a00e83)() = &::clang::UsingDecl::getCanonicalDecl;
    class ::clang::UsingDecl const * (::clang::UsingDecl::*method_pointer_22cc9f1cca4a599f9a02e7e97f87bcd4)() const = &::clang::UsingDecl::getCanonicalDecl;
    bool  (*method_pointer_f119a7997fb05895963480bf52d68eb9)(class ::clang::Decl const *) = ::clang::UsingDecl::classof;
    bool  (*method_pointer_ad10e1a8162557079d305922aaedc551)(enum ::clang::Decl::Kind ) = ::clang::UsingDecl::classofKind;
    boost::python::class_< class ::clang::UsingDecl, autowig::Held< class ::clang::UsingDecl >::Type, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_e7b3b4e4c9fa5685aa128e57eb78adb2("UsingDecl", "Represents a C++ using-declaration.\n\nFor example:\n\n", boost::python::no_init);
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("get_using_loc", method_pointer_b36139fc68ad536dae803c9c0a658de9, "Return the source location of the 'using' keyword.\n\n:Return Type:\n    :py:class:`clanglite.clang.SourceLocation`\n\n");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("set_using_loc", method_pointer_0adf0cfc43965418ba99266d031213b9, "Set the source location of the 'using' keyword.\n\n:Parameter:\n    `L` (:py:class:`clanglite.clang.SourceLocation`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("is_access_declaration", method_pointer_b5a5d8ad527b5f339618fecbbdba45ac, "Return true if it is a C++03 access declaration (no 'using').\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("has_typename", method_pointer_177554ee466d56c8bd64dc83c7a4453a, "Return true if the using declaration has 'typename'.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("set_typename", method_pointer_e5a07da8d2df5b5c835d4ed4d0d928e4, "Sets whether the using declaration has 'typename'.\n\n:Parameter:\n    `TN` (:cpp:any:`bool`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("shadow_size", method_pointer_2fa642104fd458d0b9565d2337e1d765, "Return the number of shadowed declarations associated with this using\ndeclaration.\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("add_shadow_decl", method_pointer_3c5bf25e9afd51878664ed8d2c3bfdf3, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("remove_shadow_decl", method_pointer_1d0533e6a0dc503393972f4a6c9d9f0d, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("create_deserialized", method_pointer_4a19b7814930548f933cbef14a077f28, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("get_canonical_decl", method_pointer_0269e44773365d91901c0227c1a00e83, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.UsingDecl`\n\n");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("get_canonical_decl", method_pointer_22cc9f1cca4a599f9a02e7e97f87bcd4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("classof", method_pointer_f119a7997fb05895963480bf52d68eb9, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("classof_kind", method_pointer_ad10e1a8162557079d305922aaedc551, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.staticmethod("classof_kind");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.staticmethod("create_deserialized");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.staticmethod("classof");

    if(autowig::Held< class ::clang::UsingDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::UsingDecl >::Type, autowig::Held< class ::clang::NamedDecl >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::UsingDecl >::Type, boost::python::objects::make_ptr_instance< class ::clang::UsingDecl, boost::python::objects::pointer_holder< autowig::Held< class ::clang::UsingDecl >::Type, class ::clang::UsingDecl > > >();
    }

}