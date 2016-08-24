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
    class ::clang::FileScopeAsmDecl  * (*method_pointer_485e2ecbc4b95492ab3478f83d2155f6)(class ::clang::ASTContext  &, unsigned int ) = ::clang::FileScopeAsmDecl::CreateDeserialized;
    bool  (*method_pointer_e53679e6b86b50699d61efde06309502)(class ::clang::Decl  const *) = ::clang::FileScopeAsmDecl::classof;
    bool  (*method_pointer_7bba36e313485fafbbd7b68ff2e382f0)(enum ::clang::Decl::Kind ) = ::clang::FileScopeAsmDecl::classofKind;
    class ::clang::SourceLocation  (::clang::FileScopeAsmDecl::*method_pointer_b4217398346f58969abdb973f2164d46)() const = &::clang::FileScopeAsmDecl::getAsmLoc;
    class ::clang::SourceLocation  (::clang::FileScopeAsmDecl::*method_pointer_f5d4a089d2c15a41b407667af957d802)() const = &::clang::FileScopeAsmDecl::getRParenLoc;
    void  (::clang::FileScopeAsmDecl::*method_pointer_b77777a70a3658f79488c3e048a682b7)(class ::clang::SourceLocation ) = &::clang::FileScopeAsmDecl::setRParenLoc;
    boost::python::class_< class ::clang::FileScopeAsmDecl, autowig::HeldType< class ::clang::FileScopeAsmDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_f962c9f0723d5c5fa0f3eb20b8b2a111("FileScopeAsmDecl", "", boost::python::no_init);
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.def("create_deserialized", method_pointer_485e2ecbc4b95492ab3478f83d2155f6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.def("classof", method_pointer_e53679e6b86b50699d61efde06309502, "");
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.def("classof_kind", method_pointer_7bba36e313485fafbbd7b68ff2e382f0, "");
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.def("get_asm_loc", method_pointer_b4217398346f58969abdb973f2164d46, "");
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.def("get_r_paren_loc", method_pointer_f5d4a089d2c15a41b407667af957d802, "");
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.def("set_r_paren_loc", method_pointer_b77777a70a3658f79488c3e048a682b7, "");
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.staticmethod("classof_kind");
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.staticmethod("create_deserialized");
    class_f962c9f0723d5c5fa0f3eb20b8b2a111.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FileScopeAsmDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FileScopeAsmDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}