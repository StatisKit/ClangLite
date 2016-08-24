#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_f962c9f0723d5c5fa0f3eb20b8b2a111()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::FileScopeAsmDecl  * (*method_pointer_12851a077ada576b91d2ef387e5034b0)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FileScopeAsmDecl::CreateDeserialized;
    bool  (*method_pointer_2db5e0ea6b855989a0a8f9b7c5c04ab0)(class ::clang::Decl  const *) = ::clang::FileScopeAsmDecl::classof;
    bool  (*method_pointer_b2af466a1d905db88fbfa18d264196fd)(enum ::clang::Decl::Kind ) = ::clang::FileScopeAsmDecl::classofKind;
    class ::clang::SourceLocation  (::clang::FileScopeAsmDecl::*method_pointer_da74013405e55b549750ed0e3b386db8)() const = &::clang::FileScopeAsmDecl::getAsmLoc;
    class ::clang::SourceLocation  (::clang::FileScopeAsmDecl::*method_pointer_80e1cacc12b85b79bbe21f139782b841)() const = &::clang::FileScopeAsmDecl::getRParenLoc;
    void  (::clang::FileScopeAsmDecl::*method_pointer_b5fd4b54d86655ab90091a6f0239a360)(class ::clang::SourceLocation ) = &::clang::FileScopeAsmDecl::setRParenLoc;
    boost::python::class_< class ::clang::FileScopeAsmDecl, autowig::HeldType< class ::clang::FileScopeAsmDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_f962c9f0723d5c5fa0f3eb20b8b2a111("FileScopeAsmDecl", "", boost::python::no_init);
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.def("create_deserialized", method_pointer_12851a077ada576b91d2ef387e5034b0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.def("classof", method_pointer_2db5e0ea6b855989a0a8f9b7c5c04ab0, "");
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.def("classof_kind", method_pointer_b2af466a1d905db88fbfa18d264196fd, "");
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.def("get_asm_loc", method_pointer_da74013405e55b549750ed0e3b386db8, "");
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.def("get_r_paren_loc", method_pointer_80e1cacc12b85b79bbe21f139782b841, "");
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.def("set_r_paren_loc", method_pointer_b5fd4b54d86655ab90091a6f0239a360, "");
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.staticmethod("classof_kind");
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.staticmethod("create_deserialized");
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FileScopeAsmDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FileScopeAsmDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}