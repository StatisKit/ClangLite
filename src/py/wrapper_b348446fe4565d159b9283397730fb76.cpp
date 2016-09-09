/**********************************************************************************/
/*                                                                                */
/* PyClangLite: Python bindings for Clang                                         */
/*                                                                                */
/* Homepage: http://pyclanglite.readthedocs.io/                                   */
/*                                                                                */
/* Copyright (c) 2016 Pierre Fernique                                             */
/*                                                                                */
/* This software is distributed under the CeCILL-C license. You should have       */
/* received a copy of the legalcode along with this work. If not, see             */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/* File authors: Pierre Fernique <pfernique@gmail.com> (36)                       */
/*                                                                                */
/**********************************************************************************/

#include "_clanglite.h"


namespace autowig
{
}


void wrapper_b348446fe4565d159b9283397730fb76()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::UnresolvedUsingValueDecl  * (*method_pointer_6e52dbaf6ec851ed8962190079daae18)(class ::clang::ASTContext  &, unsigned int ) = ::clang::UnresolvedUsingValueDecl::CreateDeserialized;
    bool  (*method_pointer_69682ebb6d175f6cbc5fa7a8bb1396d1)(class ::clang::Decl  const *) = ::clang::UnresolvedUsingValueDecl::classof;
    bool  (*method_pointer_1b4480c0856051d7bb0f3d8f28d5de6f)(enum ::clang::Decl::Kind ) = ::clang::UnresolvedUsingValueDecl::classofKind;
    class ::clang::UnresolvedUsingValueDecl  * (::clang::UnresolvedUsingValueDecl::*method_pointer_f103ccb521c55f1181c82fccd605bee7)() = &::clang::UnresolvedUsingValueDecl::getCanonicalDecl;
    class ::clang::UnresolvedUsingValueDecl  const * (::clang::UnresolvedUsingValueDecl::*method_pointer_4368844812145be9ad7d5055ce799855)() const = &::clang::UnresolvedUsingValueDecl::getCanonicalDecl;
    class ::clang::SourceLocation  (::clang::UnresolvedUsingValueDecl::*method_pointer_22ecf3ebd06454e0adb0218f8ca332bf)() const = &::clang::UnresolvedUsingValueDecl::getUsingLoc;
    bool  (::clang::UnresolvedUsingValueDecl::*method_pointer_c61e0090f5a25d738ee1bb31365a21fe)() const = &::clang::UnresolvedUsingValueDecl::isAccessDeclaration;
    void  (::clang::UnresolvedUsingValueDecl::*method_pointer_54df7e52255658ae8f00a9754bf408ec)(class ::clang::SourceLocation ) = &::clang::UnresolvedUsingValueDecl::setUsingLoc;
    boost::python::class_< class ::clang::UnresolvedUsingValueDecl, autowig::HeldType< class ::clang::UnresolvedUsingValueDecl >, boost::python::bases< class ::clang::ValueDecl >, boost::noncopyable > class_b348446fe4565d159b9283397730fb76("UnresolvedUsingValueDecl", "", boost::python::no_init);
    class_b348446fe4565d159b9283397730fb76.def("create_deserialized", method_pointer_6e52dbaf6ec851ed8962190079daae18, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b348446fe4565d159b9283397730fb76.def("classof", method_pointer_69682ebb6d175f6cbc5fa7a8bb1396d1, "");
    class_b348446fe4565d159b9283397730fb76.def("classof_kind", method_pointer_1b4480c0856051d7bb0f3d8f28d5de6f, "");
    class_b348446fe4565d159b9283397730fb76.def("get_canonical_decl", method_pointer_f103ccb521c55f1181c82fccd605bee7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b348446fe4565d159b9283397730fb76.def("get_canonical_decl", method_pointer_4368844812145be9ad7d5055ce799855, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b348446fe4565d159b9283397730fb76.def("get_using_loc", method_pointer_22ecf3ebd06454e0adb0218f8ca332bf, "");
    class_b348446fe4565d159b9283397730fb76.def("is_access_declaration", method_pointer_c61e0090f5a25d738ee1bb31365a21fe, "");
    class_b348446fe4565d159b9283397730fb76.def("set_using_loc", method_pointer_54df7e52255658ae8f00a9754bf408ec, "");
    class_b348446fe4565d159b9283397730fb76.staticmethod("classof_kind");
    class_b348446fe4565d159b9283397730fb76.staticmethod("create_deserialized");
    class_b348446fe4565d159b9283397730fb76.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UnresolvedUsingValueDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UnresolvedUsingValueDecl >, autowig::HeldType< class ::clang::ValueDecl > >();
    }

}