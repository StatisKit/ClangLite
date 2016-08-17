#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_b348446fe4565d159b9283397730fb76()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::UnresolvedUsingValueDecl  const * (::clang::UnresolvedUsingValueDecl::*method_pointer_ea3789b9b7185db19844ba11a82df7ee)() const = &::clang::UnresolvedUsingValueDecl::getCanonicalDecl;
    bool  (*method_pointer_c21c4f6a3aad5960a26454c76de9cd79)(enum ::clang::Decl::Kind ) = ::clang::UnresolvedUsingValueDecl::classofKind;
    class ::clang::UnresolvedUsingValueDecl  * (::clang::UnresolvedUsingValueDecl::*method_pointer_4152d236b7a25bdca56174f2c4de007d)() = &::clang::UnresolvedUsingValueDecl::getCanonicalDecl;
    class ::clang::UnresolvedUsingValueDecl  * (*method_pointer_290f7fbf94e350c4b5fe52f2993d4a11)(class ::clang::ASTContext  &, unsigned int ) = ::clang::UnresolvedUsingValueDecl::CreateDeserialized;
    bool  (::clang::UnresolvedUsingValueDecl::*method_pointer_1304a68db5195c0f81a0ff76650e5521)() const = &::clang::UnresolvedUsingValueDecl::isAccessDeclaration;
    bool  (*method_pointer_f9a48c8e20225105ad70b538154c878d)(class ::clang::Decl  const *) = ::clang::UnresolvedUsingValueDecl::classof;
    boost::python::class_< class ::clang::UnresolvedUsingValueDecl, autowig::HeldType< class ::clang::UnresolvedUsingValueDecl >, boost::python::bases< class ::clang::ValueDecl >, boost::noncopyable > class_b348446fe4565d159b9283397730fb76("UnresolvedUsingValueDecl", "", boost::python::no_init);
    class_b348446fe4565d159b9283397730fb76.def("get_canonical_decl", method_pointer_ea3789b9b7185db19844ba11a82df7ee, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b348446fe4565d159b9283397730fb76.def("classof_kind", method_pointer_c21c4f6a3aad5960a26454c76de9cd79, "");
    class_b348446fe4565d159b9283397730fb76.def("get_canonical_decl", method_pointer_4152d236b7a25bdca56174f2c4de007d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b348446fe4565d159b9283397730fb76.def("create_deserialized", method_pointer_290f7fbf94e350c4b5fe52f2993d4a11, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b348446fe4565d159b9283397730fb76.def("is_access_declaration", method_pointer_1304a68db5195c0f81a0ff76650e5521, "");
    class_b348446fe4565d159b9283397730fb76.def("classof", method_pointer_f9a48c8e20225105ad70b538154c878d, "");
    class_b348446fe4565d159b9283397730fb76.staticmethod("classof_kind");
    class_b348446fe4565d159b9283397730fb76.staticmethod("create_deserialized");
    class_b348446fe4565d159b9283397730fb76.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UnresolvedUsingValueDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UnresolvedUsingValueDecl >, autowig::HeldType< class ::clang::ValueDecl > >();
    }

}