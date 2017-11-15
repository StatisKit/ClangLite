#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::OMPCapturedExprDecl const volatile * get_pointer<class ::clang::OMPCapturedExprDecl const volatile >(class ::clang::OMPCapturedExprDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_94b1c6686dee517f91069de2c8314c4c()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::OMPCapturedExprDecl * (*method_pointer_3967f0f41c5e548291eb5e3478cc3c59)(class ::clang::ASTContext &, unsigned int ) = ::clang::OMPCapturedExprDecl::CreateDeserialized;
    bool  (*method_pointer_075ee3c541175c6ba83b2af5d6c2c429)(class ::clang::Decl const *) = ::clang::OMPCapturedExprDecl::classof;
    bool  (*method_pointer_d99eed282bbe5d4daaba26d3334acfad)(enum ::clang::Decl::Kind ) = ::clang::OMPCapturedExprDecl::classofKind;
    boost::python::class_< class ::clang::OMPCapturedExprDecl, autowig::Held< class ::clang::OMPCapturedExprDecl >::Type, boost::python::bases< class ::clang::VarDecl >, boost::noncopyable > class_94b1c6686dee517f91069de2c8314c4c("OMPCapturedExprDecl", "", boost::python::no_init);
    class_94b1c6686dee517f91069de2c8314c4c.def("create_deserialized", method_pointer_3967f0f41c5e548291eb5e3478cc3c59, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_94b1c6686dee517f91069de2c8314c4c.def("classof", method_pointer_075ee3c541175c6ba83b2af5d6c2c429, "");
    class_94b1c6686dee517f91069de2c8314c4c.def("classof_kind", method_pointer_d99eed282bbe5d4daaba26d3334acfad, "");
    class_94b1c6686dee517f91069de2c8314c4c.staticmethod("classof_kind");
    class_94b1c6686dee517f91069de2c8314c4c.staticmethod("create_deserialized");
    class_94b1c6686dee517f91069de2c8314c4c.staticmethod("classof");

    if(autowig::Held< class ::clang::OMPCapturedExprDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::OMPCapturedExprDecl >::Type, autowig::Held< class ::clang::VarDecl >::Type >();
    }

}