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
/* File authors: Pierre Fernique <pfernique@gmail.com> (5)                        */
/*                                                                                */
/**********************************************************************************/

#include "_clanglite.h"


void wrapper_0c11b148868f50d9aba81b8d12b3ed37()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    std::string name_693db0b37725552a85ff783087528c5b = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._linkage_spec_decl");
    boost::python::object module_693db0b37725552a85ff783087528c5b(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_693db0b37725552a85ff783087528c5b.c_str()))));
    boost::python::scope().attr("_linkage_spec_decl") = module_693db0b37725552a85ff783087528c5b;
    boost::python::scope scope_693db0b37725552a85ff783087528c5b = module_693db0b37725552a85ff783087528c5b;
    boost::python::enum_< enum ::clang::LinkageSpecDecl::LanguageIDs >("language_i_ds")
        .value("LANG_C", ::clang::LinkageSpecDecl::lang_c)
        .value("LANG_CXX", ::clang::LinkageSpecDecl::lang_cxx);
}