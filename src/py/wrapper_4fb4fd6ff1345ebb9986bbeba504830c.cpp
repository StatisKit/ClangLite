#include "_clanglite.h"


namespace autowig
{
}


void wrapper_4fb4fd6ff1345ebb9986bbeba504830c()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::MSPropertyDecl  * (*method_pointer_48e67dad634558bb94d384da86a92421)(class ::clang::ASTContext  &, unsigned int ) = ::clang::MSPropertyDecl::CreateDeserialized;
    bool  (*method_pointer_12beea32f320504f8e612498a94f140f)(class ::clang::Decl  const *) = ::clang::MSPropertyDecl::classof;
    bool  (::clang::MSPropertyDecl::*method_pointer_7dc18b3a91f45c0cb6b3f5a07e6840f2)() const = &::clang::MSPropertyDecl::hasGetter;
    bool  (::clang::MSPropertyDecl::*method_pointer_cf27038e8a1e536d9a6429a3afa03551)() const = &::clang::MSPropertyDecl::hasSetter;
    boost::python::class_< class ::clang::MSPropertyDecl, autowig::HeldType< class ::clang::MSPropertyDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_4fb4fd6ff1345ebb9986bbeba504830c("MSPropertyDecl", "", boost::python::no_init);
    class_4fb4fd6ff1345ebb9986bbeba504830c.def("create_deserialized", method_pointer_48e67dad634558bb94d384da86a92421, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4fb4fd6ff1345ebb9986bbeba504830c.def("classof", method_pointer_12beea32f320504f8e612498a94f140f, "");
    class_4fb4fd6ff1345ebb9986bbeba504830c.def("has_getter", method_pointer_7dc18b3a91f45c0cb6b3f5a07e6840f2, "");
    class_4fb4fd6ff1345ebb9986bbeba504830c.def("has_setter", method_pointer_cf27038e8a1e536d9a6429a3afa03551, "");
    class_4fb4fd6ff1345ebb9986bbeba504830c.staticmethod("create_deserialized");
    class_4fb4fd6ff1345ebb9986bbeba504830c.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::MSPropertyDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::MSPropertyDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}