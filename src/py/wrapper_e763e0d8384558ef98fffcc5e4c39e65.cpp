#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::ImportDecl const volatile * get_pointer<class ::clang::ImportDecl const volatile >(class ::clang::ImportDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e763e0d8384558ef98fffcc5e4c39e65()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ImportDecl * (*method_pointer_3c7757bf88d5591db6887fcc818cc3b1)(class ::clang::ASTContext &, unsigned int , unsigned int ) = ::clang::ImportDecl::CreateDeserialized;
    bool  (*method_pointer_9dc80c40e3a95b5d8ba62f6ede304db5)(class ::clang::Decl const *) = ::clang::ImportDecl::classof;
    bool  (*method_pointer_cae6e150d22355168f0e9a9ce5befff8)(enum ::clang::Decl::Kind ) = ::clang::ImportDecl::classofKind;
    boost::python::class_< class ::clang::ImportDecl, autowig::Held< class ::clang::ImportDecl >::Type, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_e763e0d8384558ef98fffcc5e4c39e65("ImportDecl", "Describes a module import declaration, which makes the contents of the\nnamed module visible in the current translation unit.\n\nAn import declaration imports the named module (or submodule). For\nexample:\n\n", boost::python::no_init);
    class_e763e0d8384558ef98fffcc5e4c39e65.def("create_deserialized", method_pointer_3c7757bf88d5591db6887fcc818cc3b1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Create a new, deserialized module import declaration.\n\n:Parameters:\n  - `C` (:py:class:`clanglite.clang.ASTContext`) - Undocumented\n  - `ID` (:cpp:any:`unsigned` int) - Undocumented\n  - `NumLocations` (:cpp:any:`unsigned` int) - Undocumented\n\n:Return Type:\n    :py:class:`clanglite.clang.ImportDecl`\n\n");
    class_e763e0d8384558ef98fffcc5e4c39e65.def("classof", method_pointer_9dc80c40e3a95b5d8ba62f6ede304db5, "");
    class_e763e0d8384558ef98fffcc5e4c39e65.def("classof_kind", method_pointer_cae6e150d22355168f0e9a9ce5befff8, "");
    class_e763e0d8384558ef98fffcc5e4c39e65.staticmethod("classof_kind");
    class_e763e0d8384558ef98fffcc5e4c39e65.staticmethod("create_deserialized");
    class_e763e0d8384558ef98fffcc5e4c39e65.staticmethod("classof");

    if(autowig::Held< class ::clang::ImportDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::ImportDecl >::Type, autowig::Held< class ::clang::Decl >::Type >();
    }

}