#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_4fb4fd6ff1345ebb9986bbeba504830c()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::MSPropertyDecl  * (*method_pointer_96fab54bee8a5016bae577a3ada74b6c)(class ::clang::ASTContext  &, unsigned int ) = ::clang::MSPropertyDecl::CreateDeserialized;
    bool  (*method_pointer_1979a936f6d051e6a0d76d47f2dd11c0)(class ::clang::Decl  const *) = ::clang::MSPropertyDecl::classof;
    bool  (::clang::MSPropertyDecl::*method_pointer_cdbcfda38df459a0999db6b14ee9535a)() const = &::clang::MSPropertyDecl::hasGetter;
    bool  (::clang::MSPropertyDecl::*method_pointer_0d3f60c9f660534c9a85bfdf0c952a76)() const = &::clang::MSPropertyDecl::hasSetter;
    boost::python::class_< class ::clang::MSPropertyDecl, autowig::HeldType< class ::clang::MSPropertyDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_4fb4fd6ff1345ebb9986bbeba504830c("MSPropertyDecl", "", boost::python::no_init);
    class_4fb4fd6ff1345ebb9986bbeba504830c.def("create_deserialized", method_pointer_96fab54bee8a5016bae577a3ada74b6c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4fb4fd6ff1345ebb9986bbeba504830c.def("classof", method_pointer_1979a936f6d051e6a0d76d47f2dd11c0, "");
    class_4fb4fd6ff1345ebb9986bbeba504830c.def("has_getter", method_pointer_cdbcfda38df459a0999db6b14ee9535a, "");
    class_4fb4fd6ff1345ebb9986bbeba504830c.def("has_setter", method_pointer_0d3f60c9f660534c9a85bfdf0c952a76, "");
    class_4fb4fd6ff1345ebb9986bbeba504830c.staticmethod("create_deserialized");
    class_4fb4fd6ff1345ebb9986bbeba504830c.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::MSPropertyDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::MSPropertyDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}