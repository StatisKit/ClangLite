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
    bool  (::clang::MSPropertyDecl::*method_pointer_4173b4ff0af55ea49a8f0c60b832fda1)() const = &::clang::MSPropertyDecl::hasSetter;
    bool  (*method_pointer_51451b1c4cc05435974d92f7bacf5f97)(class ::clang::Decl  const *) = ::clang::MSPropertyDecl::classof;
    class ::clang::MSPropertyDecl  * (*method_pointer_66b8fa30a4385acfbfe032a8644e111e)(class ::clang::ASTContext  &, unsigned int ) = ::clang::MSPropertyDecl::CreateDeserialized;
    bool  (::clang::MSPropertyDecl::*method_pointer_54ad361e77e55a5ebe4eae284ec2ee94)() const = &::clang::MSPropertyDecl::hasGetter;
    boost::python::class_< class ::clang::MSPropertyDecl, autowig::HeldType< class ::clang::MSPropertyDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_4fb4fd6ff1345ebb9986bbeba504830c("MSPropertyDecl", "", boost::python::no_init);
    class_4fb4fd6ff1345ebb9986bbeba504830c.def("has_setter", method_pointer_4173b4ff0af55ea49a8f0c60b832fda1, "");
    class_4fb4fd6ff1345ebb9986bbeba504830c.def("classof", method_pointer_51451b1c4cc05435974d92f7bacf5f97, "");
    class_4fb4fd6ff1345ebb9986bbeba504830c.def("create_deserialized", method_pointer_66b8fa30a4385acfbfe032a8644e111e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4fb4fd6ff1345ebb9986bbeba504830c.def("has_getter", method_pointer_54ad361e77e55a5ebe4eae284ec2ee94, "");
    class_4fb4fd6ff1345ebb9986bbeba504830c.staticmethod("create_deserialized");
    class_4fb4fd6ff1345ebb9986bbeba504830c.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::MSPropertyDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::MSPropertyDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}