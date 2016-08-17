#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_cdfef35342885d34aab4762243178440()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ImplicitParamDecl  * (*method_pointer_8da48542116d59dc99e3956103b895de)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ImplicitParamDecl::CreateDeserialized;
    bool  (*method_pointer_93c7ac0c281f57179b3a6478bdaa5a62)(enum ::clang::Decl::Kind ) = ::clang::ImplicitParamDecl::classofKind;
    bool  (*method_pointer_f63b619da06f5115926015971243e743)(class ::clang::Decl  const *) = ::clang::ImplicitParamDecl::classof;
    boost::python::class_< class ::clang::ImplicitParamDecl, autowig::HeldType< class ::clang::ImplicitParamDecl >, boost::python::bases< class ::clang::VarDecl >, boost::noncopyable > class_cdfef35342885d34aab4762243178440("ImplicitParamDecl", "", boost::python::no_init);
    class_cdfef35342885d34aab4762243178440.def("create_deserialized", method_pointer_8da48542116d59dc99e3956103b895de, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_cdfef35342885d34aab4762243178440.def("classof_kind", method_pointer_93c7ac0c281f57179b3a6478bdaa5a62, "");
    class_cdfef35342885d34aab4762243178440.def("classof", method_pointer_f63b619da06f5115926015971243e743, "");
    class_cdfef35342885d34aab4762243178440.staticmethod("classof_kind");
    class_cdfef35342885d34aab4762243178440.staticmethod("create_deserialized");
    class_cdfef35342885d34aab4762243178440.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ImplicitParamDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ImplicitParamDecl >, autowig::HeldType< class ::clang::VarDecl > >();
    }

}