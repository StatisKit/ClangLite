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
/* File authors: Pierre Fernique <pfernique@gmail.com> (6)                        */
/*                                                                                */
/**********************************************************************************/

#include "_clanglite.h"


void wrapper_7bc3191eac5451618d350bf624886bc4()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    std::string name_c135a712d4ea5ecca5fd38e224a91e4a = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._template_argument");
    boost::python::object module_c135a712d4ea5ecca5fd38e224a91e4a(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_c135a712d4ea5ecca5fd38e224a91e4a.c_str()))));
    boost::python::scope().attr("_template_argument") = module_c135a712d4ea5ecca5fd38e224a91e4a;
    boost::python::scope scope_c135a712d4ea5ecca5fd38e224a91e4a = module_c135a712d4ea5ecca5fd38e224a91e4a;
    boost::python::enum_< enum ::clang::TemplateArgument::ArgKind >("arg_kind")
        .value("DECLARATION", ::clang::TemplateArgument::Declaration)
        .value("EXPRESSION", ::clang::TemplateArgument::Expression)
        .value("INTEGRAL", ::clang::TemplateArgument::Integral)
        .value("NULL", ::clang::TemplateArgument::Null)
        .value("NULL_PTR", ::clang::TemplateArgument::NullPtr)
        .value("PACK", ::clang::TemplateArgument::Pack)
        .value("TEMPLATE", ::clang::TemplateArgument::Template)
        .value("TEMPLATE_EXPANSION", ::clang::TemplateArgument::TemplateExpansion)
        .value("TYPE", ::clang::TemplateArgument::Type);
}