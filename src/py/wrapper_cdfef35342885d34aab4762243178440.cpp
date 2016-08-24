#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_cdfef35342885d34aab4762243178440()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ImplicitParamDecl  * (*method_pointer_849180488fee5759bcde485c75248cc7)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ImplicitParamDecl::CreateDeserialized;
    bool  (*method_pointer_9eac814bf41555ecb16d1e49ba4a6d72)(class ::clang::Decl  const *) = ::clang::ImplicitParamDecl::classof;
    bool  (*method_pointer_cd4227b6f2c55bf5890eeeaef97bcac4)(enum ::clang::Decl::Kind ) = ::clang::ImplicitParamDecl::classofKind;
    boost::python::class_< class ::clang::ImplicitParamDecl, autowig::HeldType< class ::clang::ImplicitParamDecl >, boost::python::bases< class ::clang::VarDecl >, boost::noncopyable > class_cdfef35342885d34aab4762243178440("ImplicitParamDecl", "", boost::python::no_init);
    class_cdfef35342885d34aab4762243178440.def("create_deserialized", method_pointer_849180488fee5759bcde485c75248cc7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_cdfef35342885d34aab4762243178440.def("classof", method_pointer_9eac814bf41555ecb16d1e49ba4a6d72, "");
    class_cdfef35342885d34aab4762243178440.def("classof_kind", method_pointer_cd4227b6f2c55bf5890eeeaef97bcac4, "");
    class_cdfef35342885d34aab4762243178440.staticmethod("classof_kind");
    class_cdfef35342885d34aab4762243178440.staticmethod("create_deserialized");
    class_cdfef35342885d34aab4762243178440.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ImplicitParamDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ImplicitParamDecl >, autowig::HeldType< class ::clang::VarDecl > >();
    }

}