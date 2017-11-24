#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::EmptyDecl const volatile * get_pointer<class ::clang::EmptyDecl const volatile >(class ::clang::EmptyDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_5bfc55543ee4569b9b6f1d945bfacbbb()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::EmptyDecl * (*method_pointer_e45009926b505d98a375ae40503b300a)(class ::clang::ASTContext &, class ::clang::DeclContext *, class ::clang::SourceLocation ) = ::clang::EmptyDecl::Create;
    class ::clang::EmptyDecl * (*method_pointer_e4ffaecfef875632965f6cf7b5ff48a8)(class ::clang::ASTContext &, unsigned int ) = ::clang::EmptyDecl::CreateDeserialized;
    bool  (*method_pointer_5871ed0c15a855a494a69982aa277c43)(class ::clang::Decl const *) = ::clang::EmptyDecl::classof;
    bool  (*method_pointer_3327eb78307e56a6a564fd33593a9925)(enum ::clang::Decl::Kind ) = ::clang::EmptyDecl::classofKind;
    boost::python::class_< class ::clang::EmptyDecl, autowig::Held< class ::clang::EmptyDecl >::Type, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_5bfc55543ee4569b9b6f1d945bfacbbb("EmptyDecl", "Represents an empty-declaration.\n\n", boost::python::no_init);
    class_5bfc55543ee4569b9b6f1d945bfacbbb.def("create", method_pointer_e45009926b505d98a375ae40503b300a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_5bfc55543ee4569b9b6f1d945bfacbbb.def("create_deserialized", method_pointer_e4ffaecfef875632965f6cf7b5ff48a8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_5bfc55543ee4569b9b6f1d945bfacbbb.def("classof", method_pointer_5871ed0c15a855a494a69982aa277c43, "");
    class_5bfc55543ee4569b9b6f1d945bfacbbb.def("classof_kind", method_pointer_3327eb78307e56a6a564fd33593a9925, "");
    class_5bfc55543ee4569b9b6f1d945bfacbbb.staticmethod("classof_kind");
    class_5bfc55543ee4569b9b6f1d945bfacbbb.staticmethod("create");
    class_5bfc55543ee4569b9b6f1d945bfacbbb.staticmethod("create_deserialized");
    class_5bfc55543ee4569b9b6f1d945bfacbbb.staticmethod("classof");

    if(autowig::Held< class ::clang::EmptyDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::EmptyDecl >::Type, autowig::Held< class ::clang::Decl >::Type >();
    }

}