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
    bool  (*method_pointer_30bfebea39d451ac9e5a6fa5e064e13f)(class ::clang::Decl  const *) = ::clang::IndirectFieldDecl::classof;
    bool  (*method_pointer_5b9012b6dbed545ea2fe61677fe5debe)(enum ::clang::Decl::Kind ) = ::clang::IndirectFieldDecl::classofKind;
    unsigned int  (::clang::IndirectFieldDecl::*method_pointer_16aac054dc025eaab1608063cb8f10d2)() const = &::clang::IndirectFieldDecl::getChainingSize;
    class ::clang::IndirectFieldDecl  const * (::clang::IndirectFieldDecl::*method_pointer_44ab08cb125358279be652203f36a81d)() const = &::clang::IndirectFieldDecl::getCanonicalDecl;
    class ::clang::FieldDecl  * (::clang::IndirectFieldDecl::*method_pointer_895894648d0c5ce89aec53f939f5f600)() const = &::clang::IndirectFieldDecl::getAnonField;
    class ::clang::VarDecl  * (::clang::IndirectFieldDecl::*method_pointer_4bbb908784895149956a533896c67da6)() const = &::clang::IndirectFieldDecl::getVarDecl;
    class ::clang::IndirectFieldDecl  * (*method_pointer_f45523bac74e5cbabb19625f1fd83d7a)(class ::clang::ASTContext  &, unsigned int ) = ::clang::IndirectFieldDecl::CreateDeserialized;
    class ::clang::IndirectFieldDecl  * (::clang::IndirectFieldDecl::*method_pointer_8b8b30dbf0ab5a188a0d723fb72facea)() = &::clang::IndirectFieldDecl::getCanonicalDecl;
    boost::python::class_< class ::clang::IndirectFieldDecl, autowig::HeldType< class ::clang::IndirectFieldDecl >, boost::python::bases< class ::clang::ValueDecl >, boost::noncopyable > class_055e36c244395ee3a248c7839b4485ca("IndirectFieldDecl", "", boost::python::no_init);
    class_055e36c244395ee3a248c7839b4485ca.def("classof", method_pointer_30bfebea39d451ac9e5a6fa5e064e13f, "");
    class_055e36c244395ee3a248c7839b4485ca.def("classof_kind", method_pointer_5b9012b6dbed545ea2fe61677fe5debe, "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_chaining_size", method_pointer_16aac054dc025eaab1608063cb8f10d2, "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_canonical_decl", method_pointer_44ab08cb125358279be652203f36a81d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_anon_field", method_pointer_895894648d0c5ce89aec53f939f5f600, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_var_decl", method_pointer_4bbb908784895149956a533896c67da6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.def("create_deserialized", method_pointer_f45523bac74e5cbabb19625f1fd83d7a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_canonical_decl", method_pointer_8b8b30dbf0ab5a188a0d723fb72facea, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.staticmethod("classof_kind");
    class_055e36c244395ee3a248c7839b4485ca.staticmethod("create_deserialized");
    class_055e36c244395ee3a248c7839b4485ca.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::IndirectFieldDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::IndirectFieldDecl >, autowig::HeldType< class ::clang::ValueDecl > >();
    }

}