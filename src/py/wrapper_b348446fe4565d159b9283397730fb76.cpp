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
    class ::clang::UnresolvedUsingValueDecl  * (*method_pointer_ac56e205b2b656f4b7415aaae98e1667)(class ::clang::ASTContext  &, unsigned int ) = ::clang::UnresolvedUsingValueDecl::CreateDeserialized;
    bool  (*method_pointer_99588c742dab55f0819af8c21741d0d7)(class ::clang::Decl  const *) = ::clang::UnresolvedUsingValueDecl::classof;
    bool  (*method_pointer_57c647f9e8285faa9b72a1e33c0429fe)(enum ::clang::Decl::Kind ) = ::clang::UnresolvedUsingValueDecl::classofKind;
    class ::clang::UnresolvedUsingValueDecl  const * (::clang::UnresolvedUsingValueDecl::*method_pointer_ff3640be30835ab98e6ad6a3a03504e0)() const = &::clang::UnresolvedUsingValueDecl::getCanonicalDecl;
    class ::clang::UnresolvedUsingValueDecl  * (::clang::UnresolvedUsingValueDecl::*method_pointer_eafd2f2f6c1d519896244dce048aba90)() = &::clang::UnresolvedUsingValueDecl::getCanonicalDecl;
    class ::clang::SourceLocation  (::clang::UnresolvedUsingValueDecl::*method_pointer_5be06dcf93ee5b36854c9121af0859a2)() const = &::clang::UnresolvedUsingValueDecl::getUsingLoc;
    bool  (::clang::UnresolvedUsingValueDecl::*method_pointer_c1c5436f3e9d52c9967788c36a4f5e25)() const = &::clang::UnresolvedUsingValueDecl::isAccessDeclaration;
    void  (::clang::UnresolvedUsingValueDecl::*method_pointer_2458f41baaad5395b0f365e1e8f20130)(class ::clang::SourceLocation ) = &::clang::UnresolvedUsingValueDecl::setUsingLoc;
    boost::python::class_< class ::clang::UnresolvedUsingValueDecl, autowig::HeldType< class ::clang::UnresolvedUsingValueDecl >, boost::python::bases< class ::clang::ValueDecl >, boost::noncopyable > class_b348446fe4565d159b9283397730fb76("UnresolvedUsingValueDecl", "", boost::python::no_init);
    class_b348446fe4565d159b9283397730fb76.def("create_deserialized", method_pointer_ac56e205b2b656f4b7415aaae98e1667, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b348446fe4565d159b9283397730fb76.def("classof", method_pointer_99588c742dab55f0819af8c21741d0d7, "");
    class_b348446fe4565d159b9283397730fb76.def("classof_kind", method_pointer_57c647f9e8285faa9b72a1e33c0429fe, "");
    class_b348446fe4565d159b9283397730fb76.def("get_canonical_decl", method_pointer_ff3640be30835ab98e6ad6a3a03504e0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b348446fe4565d159b9283397730fb76.def("get_canonical_decl", method_pointer_eafd2f2f6c1d519896244dce048aba90, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b348446fe4565d159b9283397730fb76.def("get_using_loc", method_pointer_5be06dcf93ee5b36854c9121af0859a2, "");
    class_b348446fe4565d159b9283397730fb76.def("is_access_declaration", method_pointer_c1c5436f3e9d52c9967788c36a4f5e25, "");
    class_b348446fe4565d159b9283397730fb76.def("set_using_loc", method_pointer_2458f41baaad5395b0f365e1e8f20130, "");
    class_b348446fe4565d159b9283397730fb76.staticmethod("classof_kind");
    class_b348446fe4565d159b9283397730fb76.staticmethod("create_deserialized");
    class_b348446fe4565d159b9283397730fb76.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UnresolvedUsingValueDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UnresolvedUsingValueDecl >, autowig::HeldType< class ::clang::ValueDecl > >();
    }

}