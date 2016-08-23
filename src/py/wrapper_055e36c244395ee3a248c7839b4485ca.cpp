#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_055e36c244395ee3a248c7839b4485ca()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::IndirectFieldDecl  * (*method_pointer_0316fbbd7bcd5c7ebffff02d3b90c5bc)(class ::clang::ASTContext  &, unsigned int ) = ::clang::IndirectFieldDecl::CreateDeserialized;
    bool  (*method_pointer_312a621673a954db94f2ca462a270fed)(class ::clang::Decl  const *) = ::clang::IndirectFieldDecl::classof;
    bool  (*method_pointer_86b1a1d5713e5290915d005daa31c958)(enum ::clang::Decl::Kind ) = ::clang::IndirectFieldDecl::classofKind;
    class ::clang::FieldDecl  * (::clang::IndirectFieldDecl::*method_pointer_27783723df0e5652ac089863fa79f769)() const = &::clang::IndirectFieldDecl::getAnonField;
    class ::clang::IndirectFieldDecl  const * (::clang::IndirectFieldDecl::*method_pointer_1b95f5c055a950f4933048bb1a42260d)() const = &::clang::IndirectFieldDecl::getCanonicalDecl;
    class ::clang::IndirectFieldDecl  * (::clang::IndirectFieldDecl::*method_pointer_fd7611e810ee5f75b9dd9eca7116098e)() = &::clang::IndirectFieldDecl::getCanonicalDecl;
    unsigned int  (::clang::IndirectFieldDecl::*method_pointer_64f30dce8f445cbd95596d57d76330d7)() const = &::clang::IndirectFieldDecl::getChainingSize;
    class ::clang::VarDecl  * (::clang::IndirectFieldDecl::*method_pointer_8e920baf57855075a03d0a69712162d9)() const = &::clang::IndirectFieldDecl::getVarDecl;
    boost::python::class_< class ::clang::IndirectFieldDecl, autowig::HeldType< class ::clang::IndirectFieldDecl >, boost::python::bases< class ::clang::ValueDecl >, boost::noncopyable > class_055e36c244395ee3a248c7839b4485ca("IndirectFieldDecl", "", boost::python::no_init);
    class_055e36c244395ee3a248c7839b4485ca.def("create_deserialized", method_pointer_0316fbbd7bcd5c7ebffff02d3b90c5bc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.def("classof", method_pointer_312a621673a954db94f2ca462a270fed, "");
    class_055e36c244395ee3a248c7839b4485ca.def("classof_kind", method_pointer_86b1a1d5713e5290915d005daa31c958, "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_anon_field", method_pointer_27783723df0e5652ac089863fa79f769, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_canonical_decl", method_pointer_1b95f5c055a950f4933048bb1a42260d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_canonical_decl", method_pointer_fd7611e810ee5f75b9dd9eca7116098e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_chaining_size", method_pointer_64f30dce8f445cbd95596d57d76330d7, "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_var_decl", method_pointer_8e920baf57855075a03d0a69712162d9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.staticmethod("classof_kind");
    class_055e36c244395ee3a248c7839b4485ca.staticmethod("create_deserialized");
    class_055e36c244395ee3a248c7839b4485ca.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::IndirectFieldDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::IndirectFieldDecl >, autowig::HeldType< class ::clang::ValueDecl > >();
    }

}