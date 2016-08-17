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
    class ::clang::FieldDecl  * (::clang::IndirectFieldDecl::*method_pointer_eef1ff32e97351108f9bac897534a80a)() const = &::clang::IndirectFieldDecl::getAnonField;
    class ::clang::IndirectFieldDecl  const * (::clang::IndirectFieldDecl::*method_pointer_1b6c85dbb506582b901dcc97707e9dac)() const = &::clang::IndirectFieldDecl::getCanonicalDecl;
    class ::clang::IndirectFieldDecl  * (::clang::IndirectFieldDecl::*method_pointer_51353e216d1f5427b14f158d8fbe42f1)() = &::clang::IndirectFieldDecl::getCanonicalDecl;
    bool  (*method_pointer_bc214e9007725780a10ada1c969d570f)(enum ::clang::Decl::Kind ) = ::clang::IndirectFieldDecl::classofKind;
    class ::clang::VarDecl  * (::clang::IndirectFieldDecl::*method_pointer_71a7226f3e8956c4a9e1d6748aa40b92)() const = &::clang::IndirectFieldDecl::getVarDecl;
    bool  (*method_pointer_45557182456d50e48f98b6ad7b3df029)(class ::clang::Decl  const *) = ::clang::IndirectFieldDecl::classof;
    unsigned int  (::clang::IndirectFieldDecl::*method_pointer_d41f0e2ca9075dd5874fce5793de9932)() const = &::clang::IndirectFieldDecl::getChainingSize;
    class ::clang::IndirectFieldDecl  * (*method_pointer_bed83217702958d9881d7eeccdffcfba)(class ::clang::ASTContext  &, unsigned int ) = ::clang::IndirectFieldDecl::CreateDeserialized;
    boost::python::class_< class ::clang::IndirectFieldDecl, autowig::HeldType< class ::clang::IndirectFieldDecl >, boost::python::bases< class ::clang::ValueDecl >, boost::noncopyable > class_055e36c244395ee3a248c7839b4485ca("IndirectFieldDecl", "", boost::python::no_init);
    class_055e36c244395ee3a248c7839b4485ca.def("get_anon_field", method_pointer_eef1ff32e97351108f9bac897534a80a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_canonical_decl", method_pointer_1b6c85dbb506582b901dcc97707e9dac, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_canonical_decl", method_pointer_51353e216d1f5427b14f158d8fbe42f1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.def("classof_kind", method_pointer_bc214e9007725780a10ada1c969d570f, "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_var_decl", method_pointer_71a7226f3e8956c4a9e1d6748aa40b92, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.def("classof", method_pointer_45557182456d50e48f98b6ad7b3df029, "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_chaining_size", method_pointer_d41f0e2ca9075dd5874fce5793de9932, "");
    class_055e36c244395ee3a248c7839b4485ca.def("create_deserialized", method_pointer_bed83217702958d9881d7eeccdffcfba, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.staticmethod("classof_kind");
    class_055e36c244395ee3a248c7839b4485ca.staticmethod("create_deserialized");
    class_055e36c244395ee3a248c7839b4485ca.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::IndirectFieldDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::IndirectFieldDecl >, autowig::HeldType< class ::clang::ValueDecl > >();
    }

}