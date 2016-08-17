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
    bool  (*method_pointer_62fb810e99ef5760a59ed88db1e53630)(enum ::clang::Decl::Kind ) = ::clang::EnumConstantDecl::classofKind;
    class ::clang::EnumConstantDecl  * (*method_pointer_371e911afa8c503f8f56c70a6d0391a3)(class ::clang::ASTContext  &, unsigned int ) = ::clang::EnumConstantDecl::CreateDeserialized;
    bool  (*method_pointer_2e0efe7afcf25fa7b9277e8b6e42da97)(class ::clang::Decl  const *) = ::clang::EnumConstantDecl::classof;
    class ::clang::EnumConstantDecl  const * (::clang::EnumConstantDecl::*method_pointer_7f1b255b527a5b789ec031b4b3a6272e)() const = &::clang::EnumConstantDecl::getCanonicalDecl;
    class ::clang::EnumConstantDecl  * (::clang::EnumConstantDecl::*method_pointer_d9052698a19e59f2ba2d6d1f25450c90)() = &::clang::EnumConstantDecl::getCanonicalDecl;
    boost::python::class_< class ::clang::EnumConstantDecl, autowig::HeldType< class ::clang::EnumConstantDecl >, boost::python::bases< class ::clang::ValueDecl >, boost::noncopyable > class_80ca55a3e7785ce48e982c583ad333f5("EnumConstantDecl", "", boost::python::no_init);
    class_80ca55a3e7785ce48e982c583ad333f5.def("classof_kind", method_pointer_62fb810e99ef5760a59ed88db1e53630, "");
    class_80ca55a3e7785ce48e982c583ad333f5.def("create_deserialized", method_pointer_371e911afa8c503f8f56c70a6d0391a3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_80ca55a3e7785ce48e982c583ad333f5.def("classof", method_pointer_2e0efe7afcf25fa7b9277e8b6e42da97, "");
    class_80ca55a3e7785ce48e982c583ad333f5.def("get_canonical_decl", method_pointer_7f1b255b527a5b789ec031b4b3a6272e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_80ca55a3e7785ce48e982c583ad333f5.def("get_canonical_decl", method_pointer_d9052698a19e59f2ba2d6d1f25450c90, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_80ca55a3e7785ce48e982c583ad333f5.staticmethod("classof_kind");
    class_80ca55a3e7785ce48e982c583ad333f5.staticmethod("create_deserialized");
    class_80ca55a3e7785ce48e982c583ad333f5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::EnumConstantDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::EnumConstantDecl >, autowig::HeldType< class ::clang::ValueDecl > >();
    }

}