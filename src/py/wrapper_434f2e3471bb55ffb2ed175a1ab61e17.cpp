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
/* File authors: Pierre Fernique <pfernique@gmail.com> (37)                       */
/*                                                                                */
/**********************************************************************************/

#include "_clanglite.h"


namespace autowig
{
}


void wrapper_434f2e3471bb55ffb2ed175a1ab61e17()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_5d576199986b55b081c058881f24ff9a)(class ::clang::Type  const *) = ::clang::EnumType::classof;
    class ::clang::QualType  (::clang::EnumType::*method_pointer_65856217fa025db9b502338cc8f0ef07)() const = &::clang::EnumType::desugar;
    class ::clang::EnumDecl  * (::clang::EnumType::*method_pointer_d79e44c9fda352689b2eace9392ec780)() const = &::clang::EnumType::getDecl;
    bool  (::clang::EnumType::*method_pointer_abcee1187b6e5523b6e7fe0f06c02cfe)() const = &::clang::EnumType::isSugared;
    boost::python::class_< class ::clang::EnumType, autowig::HeldType< class ::clang::EnumType >, boost::python::bases< class ::clang::TagType >, boost::noncopyable > class_434f2e3471bb55ffb2ed175a1ab61e17("EnumType", "", boost::python::no_init);
    class_434f2e3471bb55ffb2ed175a1ab61e17.def("classof", method_pointer_5d576199986b55b081c058881f24ff9a, "");
    class_434f2e3471bb55ffb2ed175a1ab61e17.def("desugar", method_pointer_65856217fa025db9b502338cc8f0ef07, "");
    class_434f2e3471bb55ffb2ed175a1ab61e17.def("get_decl", method_pointer_d79e44c9fda352689b2eace9392ec780, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_434f2e3471bb55ffb2ed175a1ab61e17.def("is_sugared", method_pointer_abcee1187b6e5523b6e7fe0f06c02cfe, "");
    class_434f2e3471bb55ffb2ed175a1ab61e17.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::EnumType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::EnumType >, autowig::HeldType< class ::clang::TagType > >();
    }

}