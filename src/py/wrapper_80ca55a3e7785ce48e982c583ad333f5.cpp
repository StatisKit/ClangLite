#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::EnumConstantDecl const volatile * get_pointer<class ::clang::EnumConstantDecl const volatile >(class ::clang::EnumConstantDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_80ca55a3e7785ce48e982c583ad333f5()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::EnumConstantDecl * (*method_pointer_c14353c0ae1e592cb7c4003230f49e7c)(class ::clang::ASTContext &, unsigned int ) = ::clang::EnumConstantDecl::CreateDeserialized;
    class ::clang::EnumConstantDecl * (::clang::EnumConstantDecl::*method_pointer_8e55757ef56c593696327adb07bb7a7e)() = &::clang::EnumConstantDecl::getCanonicalDecl;
    class ::clang::EnumConstantDecl const * (::clang::EnumConstantDecl::*method_pointer_584dc6539c845beb983ad822ced9f154)() const = &::clang::EnumConstantDecl::getCanonicalDecl;
    bool  (*method_pointer_c6facb55ea055be89a37290c16131f64)(class ::clang::Decl const *) = ::clang::EnumConstantDecl::classof;
    bool  (*method_pointer_61c982bc91ed548cba4bd09086cec134)(enum ::clang::Decl::Kind ) = ::clang::EnumConstantDecl::classofKind;
    boost::python::class_< class ::clang::EnumConstantDecl, autowig::Held< class ::clang::EnumConstantDecl >::Type, boost::python::bases< class ::clang::ValueDecl >, boost::noncopyable > class_80ca55a3e7785ce48e982c583ad333f5("EnumConstantDecl", "", boost::python::no_init);
    class_80ca55a3e7785ce48e982c583ad333f5.def("create_deserialized", method_pointer_c14353c0ae1e592cb7c4003230f49e7c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_80ca55a3e7785ce48e982c583ad333f5.def("get_canonical_decl", method_pointer_8e55757ef56c593696327adb07bb7a7e, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.EnumConstantDecl`\n\n");
    class_80ca55a3e7785ce48e982c583ad333f5.def("get_canonical_decl", method_pointer_584dc6539c845beb983ad822ced9f154, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_80ca55a3e7785ce48e982c583ad333f5.def("classof", method_pointer_c6facb55ea055be89a37290c16131f64, "");
    class_80ca55a3e7785ce48e982c583ad333f5.def("classof_kind", method_pointer_61c982bc91ed548cba4bd09086cec134, "");
    class_80ca55a3e7785ce48e982c583ad333f5.staticmethod("classof_kind");
    class_80ca55a3e7785ce48e982c583ad333f5.staticmethod("create_deserialized");
    class_80ca55a3e7785ce48e982c583ad333f5.staticmethod("classof");

    if(autowig::Held< class ::clang::EnumConstantDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::EnumConstantDecl >::Type, autowig::Held< class ::clang::ValueDecl >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::EnumConstantDecl >::Type, boost::python::objects::make_ptr_instance< class ::clang::EnumConstantDecl, boost::python::objects::pointer_holder< autowig::Held< class ::clang::EnumConstantDecl >::Type, class ::clang::EnumConstantDecl > > >();
    }

}