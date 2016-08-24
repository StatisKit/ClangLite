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
    class ::clang::IndirectFieldDecl  * (*method_pointer_76fe65377a905abc8ac03bea332263f5)(class ::clang::ASTContext  &, unsigned int ) = ::clang::IndirectFieldDecl::CreateDeserialized;
    bool  (*method_pointer_4ffbb2e9d06a5e9395fd5a8ed5565fdf)(class ::clang::Decl  const *) = ::clang::IndirectFieldDecl::classof;
    bool  (*method_pointer_886a864d9a6b5c1984d7b7dd8e44d657)(enum ::clang::Decl::Kind ) = ::clang::IndirectFieldDecl::classofKind;
    class ::clang::FieldDecl  * (::clang::IndirectFieldDecl::*method_pointer_48861876a2c05100b2dbed9e2fbed867)() const = &::clang::IndirectFieldDecl::getAnonField;
    class ::clang::IndirectFieldDecl  const * (::clang::IndirectFieldDecl::*method_pointer_3a0eb688801d5c24a7c9aebac0fc4e36)() const = &::clang::IndirectFieldDecl::getCanonicalDecl;
    class ::clang::IndirectFieldDecl  * (::clang::IndirectFieldDecl::*method_pointer_8e9de1fcd6875f28bc95c14e68d27532)() = &::clang::IndirectFieldDecl::getCanonicalDecl;
    unsigned int  (::clang::IndirectFieldDecl::*method_pointer_2020539c5f975125939e6e8c518b088e)() const = &::clang::IndirectFieldDecl::getChainingSize;
    class ::clang::VarDecl  * (::clang::IndirectFieldDecl::*method_pointer_203dbad39de05d868df0dedba7bbacbf)() const = &::clang::IndirectFieldDecl::getVarDecl;
    boost::python::class_< class ::clang::IndirectFieldDecl, autowig::HeldType< class ::clang::IndirectFieldDecl >, boost::python::bases< class ::clang::ValueDecl >, boost::noncopyable > class_055e36c244395ee3a248c7839b4485ca("IndirectFieldDecl", "", boost::python::no_init);
    class_055e36c244395ee3a248c7839b4485ca.def("create_deserialized", method_pointer_76fe65377a905abc8ac03bea332263f5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.def("classof", method_pointer_4ffbb2e9d06a5e9395fd5a8ed5565fdf, "");
    class_055e36c244395ee3a248c7839b4485ca.def("classof_kind", method_pointer_886a864d9a6b5c1984d7b7dd8e44d657, "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_anon_field", method_pointer_48861876a2c05100b2dbed9e2fbed867, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_canonical_decl", method_pointer_3a0eb688801d5c24a7c9aebac0fc4e36, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_canonical_decl", method_pointer_8e9de1fcd6875f28bc95c14e68d27532, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_chaining_size", method_pointer_2020539c5f975125939e6e8c518b088e, "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_var_decl", method_pointer_203dbad39de05d868df0dedba7bbacbf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.staticmethod("classof_kind");
    class_055e36c244395ee3a248c7839b4485ca.staticmethod("create_deserialized");
    class_055e36c244395ee3a248c7839b4485ca.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::IndirectFieldDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::IndirectFieldDecl >, autowig::HeldType< class ::clang::ValueDecl > >();
    }

}