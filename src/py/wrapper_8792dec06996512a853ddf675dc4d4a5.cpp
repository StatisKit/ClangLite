#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::TypedefDecl const volatile * get_pointer<class ::clang::TypedefDecl const volatile >(class ::clang::TypedefDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_8792dec06996512a853ddf675dc4d4a5()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TypedefDecl * (*method_pointer_b69aefef4ff15b81b646b831e889fa17)(class ::clang::ASTContext &, unsigned int ) = ::clang::TypedefDecl::CreateDeserialized;
    bool  (*method_pointer_45e36ed1450e5cb695711537dfe53972)(class ::clang::Decl const *) = ::clang::TypedefDecl::classof;
    bool  (*method_pointer_18de171fccaa54609a8e8edff7bebd66)(enum ::clang::Decl::Kind ) = ::clang::TypedefDecl::classofKind;
    boost::python::class_< class ::clang::TypedefDecl, autowig::Held< class ::clang::TypedefDecl >::Type, boost::python::bases< class ::clang::TypedefNameDecl >, boost::noncopyable > class_8792dec06996512a853ddf675dc4d4a5("TypedefDecl", "", boost::python::no_init);
    class_8792dec06996512a853ddf675dc4d4a5.def("create_deserialized", method_pointer_b69aefef4ff15b81b646b831e889fa17, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8792dec06996512a853ddf675dc4d4a5.def("classof", method_pointer_45e36ed1450e5cb695711537dfe53972, "");
    class_8792dec06996512a853ddf675dc4d4a5.def("classof_kind", method_pointer_18de171fccaa54609a8e8edff7bebd66, "");
    class_8792dec06996512a853ddf675dc4d4a5.staticmethod("classof_kind");
    class_8792dec06996512a853ddf675dc4d4a5.staticmethod("create_deserialized");
    class_8792dec06996512a853ddf675dc4d4a5.staticmethod("classof");

    if(autowig::Held< class ::clang::TypedefDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::TypedefDecl >::Type, autowig::Held< class ::clang::TypedefNameDecl >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::TypedefDecl >::Type, boost::python::objects::make_ptr_instance< class ::clang::TypedefDecl, boost::python::objects::pointer_holder< autowig::Held< class ::clang::TypedefDecl >::Type, class ::clang::TypedefDecl > > >();
    }

}