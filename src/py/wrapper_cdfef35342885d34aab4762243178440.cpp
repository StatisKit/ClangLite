#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::ImplicitParamDecl const volatile * get_pointer<class ::clang::ImplicitParamDecl const volatile >(class ::clang::ImplicitParamDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_cdfef35342885d34aab4762243178440()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ImplicitParamDecl * (*method_pointer_f3b6f7c41a01501ea64acd30079c149c)(class ::clang::ASTContext &, unsigned int ) = ::clang::ImplicitParamDecl::CreateDeserialized;
    bool  (*method_pointer_669a0ce239dc5388b30594acfd7facad)(class ::clang::Decl const *) = ::clang::ImplicitParamDecl::classof;
    bool  (*method_pointer_683aa3e3a13b5281bef113dddd666a5d)(enum ::clang::Decl::Kind ) = ::clang::ImplicitParamDecl::classofKind;
    boost::python::class_< class ::clang::ImplicitParamDecl, autowig::Held< class ::clang::ImplicitParamDecl >::Type, boost::python::bases< class ::clang::VarDecl >, boost::noncopyable > class_cdfef35342885d34aab4762243178440("ImplicitParamDecl", "", boost::python::no_init);
    class_cdfef35342885d34aab4762243178440.def("create_deserialized", method_pointer_f3b6f7c41a01501ea64acd30079c149c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_cdfef35342885d34aab4762243178440.def("classof", method_pointer_669a0ce239dc5388b30594acfd7facad, "");
    class_cdfef35342885d34aab4762243178440.def("classof_kind", method_pointer_683aa3e3a13b5281bef113dddd666a5d, "");
    class_cdfef35342885d34aab4762243178440.staticmethod("classof_kind");
    class_cdfef35342885d34aab4762243178440.staticmethod("create_deserialized");
    class_cdfef35342885d34aab4762243178440.staticmethod("classof");

    if(autowig::Held< class ::clang::ImplicitParamDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::ImplicitParamDecl >::Type, autowig::Held< class ::clang::VarDecl >::Type >();
    }

}