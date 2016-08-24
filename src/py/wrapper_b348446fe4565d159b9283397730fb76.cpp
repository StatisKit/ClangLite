#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_b348446fe4565d159b9283397730fb76()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::UnresolvedUsingValueDecl  * (*method_pointer_720cf86f5e36524db7ac86102639c8ad)(class ::clang::ASTContext  &, unsigned int ) = ::clang::UnresolvedUsingValueDecl::CreateDeserialized;
    bool  (*method_pointer_a0714bfd5b675c38a3f6c90f807f3ec6)(class ::clang::Decl  const *) = ::clang::UnresolvedUsingValueDecl::classof;
    bool  (*method_pointer_66ca3a4d7edb5381a39ab4ed0b318a59)(enum ::clang::Decl::Kind ) = ::clang::UnresolvedUsingValueDecl::classofKind;
    class ::clang::UnresolvedUsingValueDecl  * (::clang::UnresolvedUsingValueDecl::*method_pointer_cdd3b37690075a3a960141da8e1a3cda)() = &::clang::UnresolvedUsingValueDecl::getCanonicalDecl;
    class ::clang::UnresolvedUsingValueDecl  const * (::clang::UnresolvedUsingValueDecl::*method_pointer_c977141a8ae25642b06911d89ba1439c)() const = &::clang::UnresolvedUsingValueDecl::getCanonicalDecl;
    class ::clang::SourceLocation  (::clang::UnresolvedUsingValueDecl::*method_pointer_f2ad82faae345c45a00c74c34dc1f0f8)() const = &::clang::UnresolvedUsingValueDecl::getUsingLoc;
    bool  (::clang::UnresolvedUsingValueDecl::*method_pointer_fe3e44b6dbaf5cf98d82ab557b931279)() const = &::clang::UnresolvedUsingValueDecl::isAccessDeclaration;
    void  (::clang::UnresolvedUsingValueDecl::*method_pointer_82347ef70d60539883cce149cde11d0e)(class ::clang::SourceLocation ) = &::clang::UnresolvedUsingValueDecl::setUsingLoc;
    boost::python::class_< class ::clang::UnresolvedUsingValueDecl, autowig::HeldType< class ::clang::UnresolvedUsingValueDecl >, boost::python::bases< class ::clang::ValueDecl >, boost::noncopyable > class_b348446fe4565d159b9283397730fb76("UnresolvedUsingValueDecl", "", boost::python::no_init);
    class_b348446fe4565d159b9283397730fb76.def("create_deserialized", method_pointer_720cf86f5e36524db7ac86102639c8ad, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b348446fe4565d159b9283397730fb76.def("classof", method_pointer_a0714bfd5b675c38a3f6c90f807f3ec6, "");
    class_b348446fe4565d159b9283397730fb76.def("classof_kind", method_pointer_66ca3a4d7edb5381a39ab4ed0b318a59, "");
    class_b348446fe4565d159b9283397730fb76.def("get_canonical_decl", method_pointer_cdd3b37690075a3a960141da8e1a3cda, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b348446fe4565d159b9283397730fb76.def("get_canonical_decl", method_pointer_c977141a8ae25642b06911d89ba1439c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b348446fe4565d159b9283397730fb76.def("get_using_loc", method_pointer_f2ad82faae345c45a00c74c34dc1f0f8, "");
    class_b348446fe4565d159b9283397730fb76.def("is_access_declaration", method_pointer_fe3e44b6dbaf5cf98d82ab557b931279, "");
    class_b348446fe4565d159b9283397730fb76.def("set_using_loc", method_pointer_82347ef70d60539883cce149cde11d0e, "");
    class_b348446fe4565d159b9283397730fb76.staticmethod("classof_kind");
    class_b348446fe4565d159b9283397730fb76.staticmethod("create_deserialized");
    class_b348446fe4565d159b9283397730fb76.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UnresolvedUsingValueDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UnresolvedUsingValueDecl >, autowig::HeldType< class ::clang::ValueDecl > >();
    }

}