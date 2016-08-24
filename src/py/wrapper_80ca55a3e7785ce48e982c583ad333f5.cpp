#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_80ca55a3e7785ce48e982c583ad333f5()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::EnumConstantDecl  * (*method_pointer_2b1a999f78725488b288004557be98c1)(class ::clang::ASTContext  &, unsigned int ) = ::clang::EnumConstantDecl::CreateDeserialized;
    bool  (*method_pointer_bbdcf1641e7658c38062d739bd1a4c31)(class ::clang::Decl  const *) = ::clang::EnumConstantDecl::classof;
    bool  (*method_pointer_4f438a958896551aa5ec4d84c2058d06)(enum ::clang::Decl::Kind ) = ::clang::EnumConstantDecl::classofKind;
    class ::clang::EnumConstantDecl  * (::clang::EnumConstantDecl::*method_pointer_1d191b535cff5aab9661e2b99cb7eb6d)() = &::clang::EnumConstantDecl::getCanonicalDecl;
    class ::clang::EnumConstantDecl  const * (::clang::EnumConstantDecl::*method_pointer_09b1252fa1255d188e796464bec5871a)() const = &::clang::EnumConstantDecl::getCanonicalDecl;
    boost::python::class_< class ::clang::EnumConstantDecl, autowig::HeldType< class ::clang::EnumConstantDecl >, boost::python::bases< class ::clang::ValueDecl >, boost::noncopyable > class_80ca55a3e7785ce48e982c583ad333f5("EnumConstantDecl", "", boost::python::no_init);
    class_80ca55a3e7785ce48e982c583ad333f5.def("create_deserialized", method_pointer_2b1a999f78725488b288004557be98c1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_80ca55a3e7785ce48e982c583ad333f5.def("classof", method_pointer_bbdcf1641e7658c38062d739bd1a4c31, "");
    class_80ca55a3e7785ce48e982c583ad333f5.def("classof_kind", method_pointer_4f438a958896551aa5ec4d84c2058d06, "");
    class_80ca55a3e7785ce48e982c583ad333f5.def("get_canonical_decl", method_pointer_1d191b535cff5aab9661e2b99cb7eb6d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_80ca55a3e7785ce48e982c583ad333f5.def("get_canonical_decl", method_pointer_09b1252fa1255d188e796464bec5871a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_80ca55a3e7785ce48e982c583ad333f5.staticmethod("classof_kind");
    class_80ca55a3e7785ce48e982c583ad333f5.staticmethod("create_deserialized");
    class_80ca55a3e7785ce48e982c583ad333f5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::EnumConstantDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::EnumConstantDecl >, autowig::HeldType< class ::clang::ValueDecl > >();
    }

}