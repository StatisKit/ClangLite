#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_80ca55a3e7785ce48e982c583ad333f5()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::EnumConstantDecl  * (::clang::EnumConstantDecl::*method_pointer_946b4974e2635f0abab9f2c4c60e03d1)() = &::clang::EnumConstantDecl::getCanonicalDecl;
    bool  (*method_pointer_5bccb1b053c85e79aabb7982b10c4ca7)(enum ::clang::Decl::Kind ) = ::clang::EnumConstantDecl::classofKind;
    bool  (*method_pointer_9ac7dbd6dceb5439a9d14a43f2a3c8d4)(class ::clang::Decl  const *) = ::clang::EnumConstantDecl::classof;
    class ::clang::EnumConstantDecl  * (*method_pointer_9ae4eefbd14453309ece3066bbc46cae)(class ::clang::ASTContext  &, unsigned int ) = ::clang::EnumConstantDecl::CreateDeserialized;
    class ::clang::EnumConstantDecl  const * (::clang::EnumConstantDecl::*method_pointer_a1d530fac54752f085c278c5662bdf01)() const = &::clang::EnumConstantDecl::getCanonicalDecl;
    boost::python::class_< class ::clang::EnumConstantDecl, autowig::HeldType< class ::clang::EnumConstantDecl >, boost::python::bases< class ::clang::ValueDecl >, boost::noncopyable > class_80ca55a3e7785ce48e982c583ad333f5("EnumConstantDecl", "", boost::python::no_init);
    class_80ca55a3e7785ce48e982c583ad333f5.def("get_canonical_decl", method_pointer_946b4974e2635f0abab9f2c4c60e03d1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_80ca55a3e7785ce48e982c583ad333f5.def("classof_kind", method_pointer_5bccb1b053c85e79aabb7982b10c4ca7, "");
    class_80ca55a3e7785ce48e982c583ad333f5.def("classof", method_pointer_9ac7dbd6dceb5439a9d14a43f2a3c8d4, "");
    class_80ca55a3e7785ce48e982c583ad333f5.def("create_deserialized", method_pointer_9ae4eefbd14453309ece3066bbc46cae, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_80ca55a3e7785ce48e982c583ad333f5.def("get_canonical_decl", method_pointer_a1d530fac54752f085c278c5662bdf01, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_80ca55a3e7785ce48e982c583ad333f5.staticmethod("classof_kind");
    class_80ca55a3e7785ce48e982c583ad333f5.staticmethod("create_deserialized");
    class_80ca55a3e7785ce48e982c583ad333f5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::EnumConstantDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::EnumConstantDecl >, autowig::HeldType< class ::clang::ValueDecl > >();
    }

}