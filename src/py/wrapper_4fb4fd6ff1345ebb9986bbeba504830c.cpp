#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::MSPropertyDecl const volatile * get_pointer<class ::clang::MSPropertyDecl const volatile >(class ::clang::MSPropertyDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_4fb4fd6ff1345ebb9986bbeba504830c()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::MSPropertyDecl * (*method_pointer_4ef4947bf7e55305a11bf03846c3b811)(class ::clang::ASTContext &, unsigned int ) = ::clang::MSPropertyDecl::CreateDeserialized;
    bool  (*method_pointer_98aab06bbdfc5233a07b7c4d386f4615)(class ::clang::Decl const *) = ::clang::MSPropertyDecl::classof;
    bool  (::clang::MSPropertyDecl::*method_pointer_dbe6cfbd0e235d23b939ebc4281f4a7d)() const = &::clang::MSPropertyDecl::hasGetter;
    bool  (::clang::MSPropertyDecl::*method_pointer_78607d937d5b5a9e8a0ec9e4b30bca30)() const = &::clang::MSPropertyDecl::hasSetter;
    boost::python::class_< class ::clang::MSPropertyDecl, autowig::Held< class ::clang::MSPropertyDecl >::Type, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_4fb4fd6ff1345ebb9986bbeba504830c("MSPropertyDecl", "", boost::python::no_init);
    class_4fb4fd6ff1345ebb9986bbeba504830c.def("create_deserialized", method_pointer_4ef4947bf7e55305a11bf03846c3b811, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4fb4fd6ff1345ebb9986bbeba504830c.def("classof", method_pointer_98aab06bbdfc5233a07b7c4d386f4615, "");
    class_4fb4fd6ff1345ebb9986bbeba504830c.def("has_getter", method_pointer_dbe6cfbd0e235d23b939ebc4281f4a7d, "");
    class_4fb4fd6ff1345ebb9986bbeba504830c.def("has_setter", method_pointer_78607d937d5b5a9e8a0ec9e4b30bca30, "");
    class_4fb4fd6ff1345ebb9986bbeba504830c.staticmethod("create_deserialized");
    class_4fb4fd6ff1345ebb9986bbeba504830c.staticmethod("classof");

    if(autowig::Held< class ::clang::MSPropertyDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::MSPropertyDecl >::Type, autowig::Held< class ::clang::DeclaratorDecl >::Type >();
    }

}