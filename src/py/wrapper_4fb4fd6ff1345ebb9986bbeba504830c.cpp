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
    class ::clang::MSPropertyDecl  * (*method_pointer_9bd777bbebe955eba6d2152569a0ff43)(class ::clang::ASTContext  &, unsigned int ) = ::clang::MSPropertyDecl::CreateDeserialized;
    bool  (*method_pointer_9d656eb2896c5faab2648d3c5ac0bc3b)(class ::clang::Decl  const *) = ::clang::MSPropertyDecl::classof;
    bool  (::clang::MSPropertyDecl::*method_pointer_f8c81d5f8b6d57c49e9793868f7a985d)() const = &::clang::MSPropertyDecl::hasGetter;
    bool  (::clang::MSPropertyDecl::*method_pointer_792b6c290e1b59d5bba6a93c3ce517f2)() const = &::clang::MSPropertyDecl::hasSetter;
    boost::python::class_< class ::clang::MSPropertyDecl, autowig::HeldType< class ::clang::MSPropertyDecl >, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_4fb4fd6ff1345ebb9986bbeba504830c("MSPropertyDecl", "", boost::python::no_init);
    class_4fb4fd6ff1345ebb9986bbeba504830c.def("create_deserialized", method_pointer_9bd777bbebe955eba6d2152569a0ff43, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4fb4fd6ff1345ebb9986bbeba504830c.def("classof", method_pointer_9d656eb2896c5faab2648d3c5ac0bc3b, "");
    class_4fb4fd6ff1345ebb9986bbeba504830c.def("has_getter", method_pointer_f8c81d5f8b6d57c49e9793868f7a985d, "");
    class_4fb4fd6ff1345ebb9986bbeba504830c.def("has_setter", method_pointer_792b6c290e1b59d5bba6a93c3ce517f2, "");
    class_4fb4fd6ff1345ebb9986bbeba504830c.staticmethod("create_deserialized");
    class_4fb4fd6ff1345ebb9986bbeba504830c.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::MSPropertyDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::MSPropertyDecl >, autowig::HeldType< class ::clang::DeclaratorDecl > >();
    }

}