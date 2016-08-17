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
    bool  (*method_pointer_d69476a0ca43569e8768a50685bface2)(enum ::clang::Decl::Kind ) = ::clang::EnumConstantDecl::classofKind;
    class ::clang::EnumConstantDecl  * (*method_pointer_632dbc73aa7e57ee92a0b90e3a1a7105)(class ::clang::ASTContext  &, unsigned int ) = ::clang::EnumConstantDecl::CreateDeserialized;
    class ::clang::EnumConstantDecl  * (::clang::EnumConstantDecl::*method_pointer_77132e1c18ba5dc6ba3262296a450b2b)() = &::clang::EnumConstantDecl::getCanonicalDecl;
    class ::clang::EnumConstantDecl  const * (::clang::EnumConstantDecl::*method_pointer_42bcb231ff4a508db3045f6c749b524a)() const = &::clang::EnumConstantDecl::getCanonicalDecl;
    bool  (*method_pointer_5499abbe722552dbb8a573765c88ea2c)(class ::clang::Decl  const *) = ::clang::EnumConstantDecl::classof;
    boost::python::class_< class ::clang::EnumConstantDecl, autowig::HeldType< class ::clang::EnumConstantDecl >, boost::python::bases< class ::clang::ValueDecl >, boost::noncopyable > class_80ca55a3e7785ce48e982c583ad333f5("EnumConstantDecl", "", boost::python::no_init);
    class_80ca55a3e7785ce48e982c583ad333f5.def("classof_kind", method_pointer_d69476a0ca43569e8768a50685bface2, "");
    class_80ca55a3e7785ce48e982c583ad333f5.def("create_deserialized", method_pointer_632dbc73aa7e57ee92a0b90e3a1a7105, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_80ca55a3e7785ce48e982c583ad333f5.def("get_canonical_decl", method_pointer_77132e1c18ba5dc6ba3262296a450b2b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_80ca55a3e7785ce48e982c583ad333f5.def("get_canonical_decl", method_pointer_42bcb231ff4a508db3045f6c749b524a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_80ca55a3e7785ce48e982c583ad333f5.def("classof", method_pointer_5499abbe722552dbb8a573765c88ea2c, "");
    class_80ca55a3e7785ce48e982c583ad333f5.staticmethod("classof_kind");
    class_80ca55a3e7785ce48e982c583ad333f5.staticmethod("create_deserialized");
    class_80ca55a3e7785ce48e982c583ad333f5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::EnumConstantDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::EnumConstantDecl >, autowig::HeldType< class ::clang::ValueDecl > >();
    }

}