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
    class ::clang::UnresolvedUsingValueDecl  * (*method_pointer_66f329616149512899eccb0bf9871968)(class ::clang::ASTContext  &, unsigned int ) = ::clang::UnresolvedUsingValueDecl::CreateDeserialized;
    bool  (*method_pointer_6ac07fab7db85f11a92a75826a562a2b)(class ::clang::Decl  const *) = ::clang::UnresolvedUsingValueDecl::classof;
    bool  (*method_pointer_a2e977352ebd57dfb5824663d8e76e85)(enum ::clang::Decl::Kind ) = ::clang::UnresolvedUsingValueDecl::classofKind;
    class ::clang::UnresolvedUsingValueDecl  const * (::clang::UnresolvedUsingValueDecl::*method_pointer_9d6c62fdc051598fb3b9ea7ef9cdcb14)() const = &::clang::UnresolvedUsingValueDecl::getCanonicalDecl;
    class ::clang::UnresolvedUsingValueDecl  * (::clang::UnresolvedUsingValueDecl::*method_pointer_39839d9984eb54789363599b3ba00a73)() = &::clang::UnresolvedUsingValueDecl::getCanonicalDecl;
    class ::clang::SourceLocation  (::clang::UnresolvedUsingValueDecl::*method_pointer_0bbd3b1a4553594ea9edc607ff1cb725)() const = &::clang::UnresolvedUsingValueDecl::getUsingLoc;
    bool  (::clang::UnresolvedUsingValueDecl::*method_pointer_804993d7c542539c86d8c3410ad8d993)() const = &::clang::UnresolvedUsingValueDecl::isAccessDeclaration;
    void  (::clang::UnresolvedUsingValueDecl::*method_pointer_da6221662cc25910953b3610a45a9542)(class ::clang::SourceLocation ) = &::clang::UnresolvedUsingValueDecl::setUsingLoc;
    boost::python::class_< class ::clang::UnresolvedUsingValueDecl, autowig::HeldType< class ::clang::UnresolvedUsingValueDecl >, boost::python::bases< class ::clang::ValueDecl >, boost::noncopyable > class_b348446fe4565d159b9283397730fb76("UnresolvedUsingValueDecl", "", boost::python::no_init);
    class_b348446fe4565d159b9283397730fb76.def("create_deserialized", method_pointer_66f329616149512899eccb0bf9871968, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b348446fe4565d159b9283397730fb76.def("classof", method_pointer_6ac07fab7db85f11a92a75826a562a2b, "");
    class_b348446fe4565d159b9283397730fb76.def("classof_kind", method_pointer_a2e977352ebd57dfb5824663d8e76e85, "");
    class_b348446fe4565d159b9283397730fb76.def("get_canonical_decl", method_pointer_9d6c62fdc051598fb3b9ea7ef9cdcb14, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b348446fe4565d159b9283397730fb76.def("get_canonical_decl", method_pointer_39839d9984eb54789363599b3ba00a73, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b348446fe4565d159b9283397730fb76.def("get_using_loc", method_pointer_0bbd3b1a4553594ea9edc607ff1cb725, "");
    class_b348446fe4565d159b9283397730fb76.def("is_access_declaration", method_pointer_804993d7c542539c86d8c3410ad8d993, "");
    class_b348446fe4565d159b9283397730fb76.def("set_using_loc", method_pointer_da6221662cc25910953b3610a45a9542, "");
    class_b348446fe4565d159b9283397730fb76.staticmethod("classof_kind");
    class_b348446fe4565d159b9283397730fb76.staticmethod("create_deserialized");
    class_b348446fe4565d159b9283397730fb76.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UnresolvedUsingValueDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UnresolvedUsingValueDecl >, autowig::HeldType< class ::clang::ValueDecl > >();
    }

}