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
    class ::clang::UnresolvedUsingValueDecl  * (*method_pointer_b1c9e5e2e2495f3cbe0b12b33f4e1ddf)(class ::clang::ASTContext  &, unsigned int ) = ::clang::UnresolvedUsingValueDecl::CreateDeserialized;
    bool  (*method_pointer_bbfc17e093ae5f26af3a4151d115b61d)(class ::clang::Decl  const *) = ::clang::UnresolvedUsingValueDecl::classof;
    bool  (*method_pointer_6f02392cbcae5943b5bdedb2b5d755d9)(enum ::clang::Decl::Kind ) = ::clang::UnresolvedUsingValueDecl::classofKind;
    class ::clang::UnresolvedUsingValueDecl  * (::clang::UnresolvedUsingValueDecl::*method_pointer_878966786cd05326a1977ce1cd66135e)() = &::clang::UnresolvedUsingValueDecl::getCanonicalDecl;
    class ::clang::UnresolvedUsingValueDecl  const * (::clang::UnresolvedUsingValueDecl::*method_pointer_3d6b09a6cb225f39ade45609d40bd1db)() const = &::clang::UnresolvedUsingValueDecl::getCanonicalDecl;
    class ::clang::SourceLocation  (::clang::UnresolvedUsingValueDecl::*method_pointer_8f906474e901578bae39ee5322b27b21)() const = &::clang::UnresolvedUsingValueDecl::getUsingLoc;
    bool  (::clang::UnresolvedUsingValueDecl::*method_pointer_07635a52e69f5ca189aa1e3e82284637)() const = &::clang::UnresolvedUsingValueDecl::isAccessDeclaration;
    void  (::clang::UnresolvedUsingValueDecl::*method_pointer_00d8ad91588f545daf16a4e86b2df74c)(class ::clang::SourceLocation ) = &::clang::UnresolvedUsingValueDecl::setUsingLoc;
    boost::python::class_< class ::clang::UnresolvedUsingValueDecl, autowig::HeldType< class ::clang::UnresolvedUsingValueDecl >, boost::python::bases< class ::clang::ValueDecl >, boost::noncopyable > class_b348446fe4565d159b9283397730fb76("UnresolvedUsingValueDecl", "", boost::python::no_init);
    class_b348446fe4565d159b9283397730fb76.def("create_deserialized", method_pointer_b1c9e5e2e2495f3cbe0b12b33f4e1ddf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b348446fe4565d159b9283397730fb76.def("classof", method_pointer_bbfc17e093ae5f26af3a4151d115b61d, "");
    class_b348446fe4565d159b9283397730fb76.def("classof_kind", method_pointer_6f02392cbcae5943b5bdedb2b5d755d9, "");
    class_b348446fe4565d159b9283397730fb76.def("get_canonical_decl", method_pointer_878966786cd05326a1977ce1cd66135e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b348446fe4565d159b9283397730fb76.def("get_canonical_decl", method_pointer_3d6b09a6cb225f39ade45609d40bd1db, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b348446fe4565d159b9283397730fb76.def("get_using_loc", method_pointer_8f906474e901578bae39ee5322b27b21, "");
    class_b348446fe4565d159b9283397730fb76.def("is_access_declaration", method_pointer_07635a52e69f5ca189aa1e3e82284637, "");
    class_b348446fe4565d159b9283397730fb76.def("set_using_loc", method_pointer_00d8ad91588f545daf16a4e86b2df74c, "");
    class_b348446fe4565d159b9283397730fb76.staticmethod("classof_kind");
    class_b348446fe4565d159b9283397730fb76.staticmethod("create_deserialized");
    class_b348446fe4565d159b9283397730fb76.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UnresolvedUsingValueDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UnresolvedUsingValueDecl >, autowig::HeldType< class ::clang::ValueDecl > >();
    }

}