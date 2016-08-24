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
    class ::clang::FileScopeAsmDecl  * (*method_pointer_4a303694381a56eea1499e45733a3140)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FileScopeAsmDecl::CreateDeserialized;
    bool  (*method_pointer_a1efbdd702825d58ae4ea18dd7ed35a8)(class ::clang::Decl  const *) = ::clang::FileScopeAsmDecl::classof;
    bool  (*method_pointer_cbcdb02d084c5162855fb3135c4b3f11)(enum ::clang::Decl::Kind ) = ::clang::FileScopeAsmDecl::classofKind;
    class ::clang::SourceLocation  (::clang::FileScopeAsmDecl::*method_pointer_b90a8cce6b1a5a6fb0366e7a16fccb0d)() const = &::clang::FileScopeAsmDecl::getAsmLoc;
    class ::clang::SourceLocation  (::clang::FileScopeAsmDecl::*method_pointer_b775ba2d217b5d388e43850f96913ebb)() const = &::clang::FileScopeAsmDecl::getRParenLoc;
    void  (::clang::FileScopeAsmDecl::*method_pointer_493ce504a6bf50f49345a75630e59516)(class ::clang::SourceLocation ) = &::clang::FileScopeAsmDecl::setRParenLoc;
    boost::python::class_< class ::clang::FileScopeAsmDecl, autowig::HeldType< class ::clang::FileScopeAsmDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_f962c9f0723d5c5fa0f3eb20b8b2a111("FileScopeAsmDecl", "", boost::python::no_init);
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.def("create_deserialized", method_pointer_4a303694381a56eea1499e45733a3140, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.def("classof", method_pointer_a1efbdd702825d58ae4ea18dd7ed35a8, "");
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.def("classof_kind", method_pointer_cbcdb02d084c5162855fb3135c4b3f11, "");
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.def("get_asm_loc", method_pointer_b90a8cce6b1a5a6fb0366e7a16fccb0d, "");
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.def("get_r_paren_loc", method_pointer_b775ba2d217b5d388e43850f96913ebb, "");
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.def("set_r_paren_loc", method_pointer_493ce504a6bf50f49345a75630e59516, "");
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.staticmethod("classof_kind");
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.staticmethod("create_deserialized");
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FileScopeAsmDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FileScopeAsmDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}