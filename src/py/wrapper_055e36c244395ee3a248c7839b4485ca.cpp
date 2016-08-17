#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_055e36c244395ee3a248c7839b4485ca()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::VarDecl  * (::clang::IndirectFieldDecl::*method_pointer_ffd28754860d5745918d1e74d07e3f40)() const = &::clang::IndirectFieldDecl::getVarDecl;
    class ::clang::IndirectFieldDecl  * (*method_pointer_a9882a75ea095e7e9f0d1bb195e424db)(class ::clang::ASTContext  &, unsigned int ) = ::clang::IndirectFieldDecl::CreateDeserialized;
    class ::clang::IndirectFieldDecl  * (::clang::IndirectFieldDecl::*method_pointer_83164c52f265558ebb50e3450f5981c3)() = &::clang::IndirectFieldDecl::getCanonicalDecl;
    unsigned int  (::clang::IndirectFieldDecl::*method_pointer_fab23cc1d53c57b8a9fc447dcb6382b9)() const = &::clang::IndirectFieldDecl::getChainingSize;
    class ::clang::IndirectFieldDecl  const * (::clang::IndirectFieldDecl::*method_pointer_39edaab22f7358faa38e26836b7a8a52)() const = &::clang::IndirectFieldDecl::getCanonicalDecl;
    bool  (*method_pointer_a6510a62ba9d5fb1b923bc5f87f101cc)(enum ::clang::Decl::Kind ) = ::clang::IndirectFieldDecl::classofKind;
    class ::clang::FieldDecl  * (::clang::IndirectFieldDecl::*method_pointer_f6b413a84cbc56e2b4b4d40c25545c6b)() const = &::clang::IndirectFieldDecl::getAnonField;
    bool  (*method_pointer_6dbad91172795f5c831a1d8fee7f028b)(class ::clang::Decl  const *) = ::clang::IndirectFieldDecl::classof;
    boost::python::class_< class ::clang::IndirectFieldDecl, autowig::HeldType< class ::clang::IndirectFieldDecl >, boost::python::bases< class ::clang::ValueDecl >, boost::noncopyable > class_055e36c244395ee3a248c7839b4485ca("IndirectFieldDecl", "", boost::python::no_init);
    class_055e36c244395ee3a248c7839b4485ca.def("get_var_decl", method_pointer_ffd28754860d5745918d1e74d07e3f40, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.def("create_deserialized", method_pointer_a9882a75ea095e7e9f0d1bb195e424db, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_canonical_decl", method_pointer_83164c52f265558ebb50e3450f5981c3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_chaining_size", method_pointer_fab23cc1d53c57b8a9fc447dcb6382b9, "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_canonical_decl", method_pointer_39edaab22f7358faa38e26836b7a8a52, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.def("classof_kind", method_pointer_a6510a62ba9d5fb1b923bc5f87f101cc, "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_anon_field", method_pointer_f6b413a84cbc56e2b4b4d40c25545c6b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.def("classof", method_pointer_6dbad91172795f5c831a1d8fee7f028b, "");
    class_055e36c244395ee3a248c7839b4485ca.staticmethod("classof_kind");
    class_055e36c244395ee3a248c7839b4485ca.staticmethod("create_deserialized");
    class_055e36c244395ee3a248c7839b4485ca.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::IndirectFieldDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::IndirectFieldDecl >, autowig::HeldType< class ::clang::ValueDecl > >();
    }

}