#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_905349ffcd105c71941a2e3b1ec8ec3a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    unsigned int  (::clang::DeclaratorDecl::*method_pointer_b96aa92889755650aa0f460abd71ee71)() const = &::clang::DeclaratorDecl::getNumTemplateParameterLists;
    bool  (*method_pointer_4603b13f792d5aac95d296134f9f81b8)(enum ::clang::Decl::Kind ) = ::clang::DeclaratorDecl::classofKind;
    bool  (*method_pointer_90e0110c289d54d4990e969a82cf4773)(class ::clang::Decl  const *) = ::clang::DeclaratorDecl::classof;
    boost::python::class_< class ::clang::DeclaratorDecl, autowig::HeldType< class ::clang::DeclaratorDecl >, boost::python::bases< class ::clang::ValueDecl >, boost::noncopyable > class_905349ffcd105c71941a2e3b1ec8ec3a("DeclaratorDecl", "", boost::python::no_init);
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("get_num_template_parameter_lists", method_pointer_b96aa92889755650aa0f460abd71ee71, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("classof_kind", method_pointer_4603b13f792d5aac95d296134f9f81b8, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("classof", method_pointer_90e0110c289d54d4990e969a82cf4773, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.staticmethod("classof_kind");
    class_905349ffcd105c71941a2e3b1ec8ec3a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::DeclaratorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::DeclaratorDecl >, autowig::HeldType< class ::clang::ValueDecl > >();
    }

}