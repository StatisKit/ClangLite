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
    class ::clang::IndirectFieldDecl  * (*method_pointer_32d4abb5bc09552b9af9882b70c3a996)(class ::clang::ASTContext  &, unsigned int ) = ::clang::IndirectFieldDecl::CreateDeserialized;
    bool  (*method_pointer_32a284505f9c593890087588c3f3e249)(class ::clang::Decl  const *) = ::clang::IndirectFieldDecl::classof;
    bool  (*method_pointer_8b1f3e4db1bb56fe9d489706c839dd5a)(enum ::clang::Decl::Kind ) = ::clang::IndirectFieldDecl::classofKind;
    class ::clang::FieldDecl  * (::clang::IndirectFieldDecl::*method_pointer_f87ef8ea95265626967c692913b9a667)() const = &::clang::IndirectFieldDecl::getAnonField;
    class ::clang::IndirectFieldDecl  * (::clang::IndirectFieldDecl::*method_pointer_43e80d17954a58ac8383e9330ca2f447)() = &::clang::IndirectFieldDecl::getCanonicalDecl;
    class ::clang::IndirectFieldDecl  const * (::clang::IndirectFieldDecl::*method_pointer_d383a99e52345a8c8f036687ff9083d5)() const = &::clang::IndirectFieldDecl::getCanonicalDecl;
    unsigned int  (::clang::IndirectFieldDecl::*method_pointer_b09b7f16ed4753099dfedae08ffcfbf8)() const = &::clang::IndirectFieldDecl::getChainingSize;
    class ::clang::VarDecl  * (::clang::IndirectFieldDecl::*method_pointer_1a7ab077170c5f3ab97c4aa083faa5cf)() const = &::clang::IndirectFieldDecl::getVarDecl;
    boost::python::class_< class ::clang::IndirectFieldDecl, autowig::HeldType< class ::clang::IndirectFieldDecl >, boost::python::bases< class ::clang::ValueDecl >, boost::noncopyable > class_055e36c244395ee3a248c7839b4485ca("IndirectFieldDecl", "", boost::python::no_init);
    class_055e36c244395ee3a248c7839b4485ca.def("create_deserialized", method_pointer_32d4abb5bc09552b9af9882b70c3a996, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.def("classof", method_pointer_32a284505f9c593890087588c3f3e249, "");
    class_055e36c244395ee3a248c7839b4485ca.def("classof_kind", method_pointer_8b1f3e4db1bb56fe9d489706c839dd5a, "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_anon_field", method_pointer_f87ef8ea95265626967c692913b9a667, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_canonical_decl", method_pointer_43e80d17954a58ac8383e9330ca2f447, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_canonical_decl", method_pointer_d383a99e52345a8c8f036687ff9083d5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_chaining_size", method_pointer_b09b7f16ed4753099dfedae08ffcfbf8, "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_var_decl", method_pointer_1a7ab077170c5f3ab97c4aa083faa5cf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.staticmethod("classof_kind");
    class_055e36c244395ee3a248c7839b4485ca.staticmethod("create_deserialized");
    class_055e36c244395ee3a248c7839b4485ca.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::IndirectFieldDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::IndirectFieldDecl >, autowig::HeldType< class ::clang::ValueDecl > >();
    }

}