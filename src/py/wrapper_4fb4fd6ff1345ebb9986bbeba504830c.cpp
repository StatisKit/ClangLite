#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_4fb4fd6ff1345ebb9986bbeba504830c()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::MSPropertyDecl::*method_pointer_f5fc14a1101158758686286c57391602)() const = &::clang::MSPropertyDecl::hasGetter;
    bool  (*method_pointer_6b8f2244c8a257b384f61467bf9edb44)(class ::clang::Decl  const *) = ::clang::MSPropertyDecl::classof;
    bool  (::clang::MSPropertyDecl::*method_pointer_9d39900228c45266a7bee3b826ab7ea2)() const = &::clang::MSPropertyDecl::hasSetter;
    class ::clang::MSPropertyDecl  * (*method_pointer_14635b451dda53ca80f2c902c2422afb)(class ::clang::ASTContext  &, unsigned int ) = ::clang::MSPropertyDecl::CreateDeserialized;
    boost::python::class_< class ::clang::MSPropertyDecl, autowig::HeldType< class ::clang::MSPropertyDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_4fb4fd6ff1345ebb9986bbeba504830c("MSPropertyDecl", "", boost::python::no_init);
    class_4fb4fd6ff1345ebb9986bbeba504830c.def("has_getter", method_pointer_f5fc14a1101158758686286c57391602, "");
    class_4fb4fd6ff1345ebb9986bbeba504830c.def("classof", method_pointer_6b8f2244c8a257b384f61467bf9edb44, "");
    class_4fb4fd6ff1345ebb9986bbeba504830c.def("has_setter", method_pointer_9d39900228c45266a7bee3b826ab7ea2, "");
    class_4fb4fd6ff1345ebb9986bbeba504830c.def("create_deserialized", method_pointer_14635b451dda53ca80f2c902c2422afb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4fb4fd6ff1345ebb9986bbeba504830c.staticmethod("create_deserialized");
    class_4fb4fd6ff1345ebb9986bbeba504830c.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::MSPropertyDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::MSPropertyDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}