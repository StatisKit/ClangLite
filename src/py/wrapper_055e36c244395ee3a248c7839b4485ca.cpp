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
    class ::clang::IndirectFieldDecl  * (*method_pointer_36ec367ad51d5843bf198349fefe0634)(class ::clang::ASTContext  &, unsigned int ) = ::clang::IndirectFieldDecl::CreateDeserialized;
    bool  (*method_pointer_de69c39dc317513b973ac526c9565bdc)(class ::clang::Decl  const *) = ::clang::IndirectFieldDecl::classof;
    bool  (*method_pointer_c2b59b7421a65d14b258de1132d6b48a)(enum ::clang::Decl::Kind ) = ::clang::IndirectFieldDecl::classofKind;
    class ::clang::FieldDecl  * (::clang::IndirectFieldDecl::*method_pointer_76b95f90b2d15bc8858c927c62bb1d25)() const = &::clang::IndirectFieldDecl::getAnonField;
    class ::clang::IndirectFieldDecl  * (::clang::IndirectFieldDecl::*method_pointer_e30588cc8114556cb50f7f815b9ed995)() = &::clang::IndirectFieldDecl::getCanonicalDecl;
    class ::clang::IndirectFieldDecl  const * (::clang::IndirectFieldDecl::*method_pointer_8555bb88659a54778d524dbd345dca83)() const = &::clang::IndirectFieldDecl::getCanonicalDecl;
    unsigned int  (::clang::IndirectFieldDecl::*method_pointer_e922ab91b2fd53c2919c6343306dfe48)() const = &::clang::IndirectFieldDecl::getChainingSize;
    class ::clang::VarDecl  * (::clang::IndirectFieldDecl::*method_pointer_00d7a89dbdf150599b5fd83fb9197ca2)() const = &::clang::IndirectFieldDecl::getVarDecl;
    boost::python::class_< class ::clang::IndirectFieldDecl, autowig::HeldType< class ::clang::IndirectFieldDecl >, boost::python::bases< class ::clang::ValueDecl >, boost::noncopyable > class_055e36c244395ee3a248c7839b4485ca("IndirectFieldDecl", "", boost::python::no_init);
    class_055e36c244395ee3a248c7839b4485ca.def("create_deserialized", method_pointer_36ec367ad51d5843bf198349fefe0634, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.def("classof", method_pointer_de69c39dc317513b973ac526c9565bdc, "");
    class_055e36c244395ee3a248c7839b4485ca.def("classof_kind", method_pointer_c2b59b7421a65d14b258de1132d6b48a, "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_anon_field", method_pointer_76b95f90b2d15bc8858c927c62bb1d25, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_canonical_decl", method_pointer_e30588cc8114556cb50f7f815b9ed995, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_canonical_decl", method_pointer_8555bb88659a54778d524dbd345dca83, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_chaining_size", method_pointer_e922ab91b2fd53c2919c6343306dfe48, "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_var_decl", method_pointer_00d7a89dbdf150599b5fd83fb9197ca2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.staticmethod("classof_kind");
    class_055e36c244395ee3a248c7839b4485ca.staticmethod("create_deserialized");
    class_055e36c244395ee3a248c7839b4485ca.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::IndirectFieldDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::IndirectFieldDecl >, autowig::HeldType< class ::clang::ValueDecl > >();
    }

}