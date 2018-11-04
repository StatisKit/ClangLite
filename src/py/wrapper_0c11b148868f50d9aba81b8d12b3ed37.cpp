// Copyright [2017-2018] UMR MISTEA INRA, UMR LEPSE INRA,                //
//                       UMR AGAP CIRAD, EPI Virtual Plants Inria        //
// Copyright [2015-2016] UMR AGAP CIRAD, EPI Virtual Plants Inria        //
//                                                                       //
// This file is part of the AutoWIG project. More information can be     //
// found at                                                              //
//                                                                       //
//     http://autowig.rtfd.io                                            //
//                                                                       //
// The Apache Software Foundation (ASF) licenses this file to you under  //
// the Apache License, Version 2.0 (the "License"); you may not use this //
// file except in compliance with the License. You should have received  //
// a copy of the Apache License, Version 2.0 along with this file; see   //
// the file LICENSE. If not, you may obtain a copy of the License at     //
//                                                                       //
//     http://www.apache.org/licenses/LICENSE-2.0                        //
//                                                                       //
// Unless required by applicable law or agreed to in writing, software   //
// distributed under the License is distributed on an "AS IS" BASIS,     //
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or       //
// mplied. See the License for the specific language governing           //
// permissions and limitations under the License.                        //

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
    boost::python::enum_< enum ::clang::LinkageSpecDecl::LanguageIDs > enum_0c11b148868f50d9aba81b8d12b3ed37("language_i_ds");
    enum_0c11b148868f50d9aba81b8d12b3ed37.value("LANG_C", ::clang::LinkageSpecDecl::lang_c);
    enum_0c11b148868f50d9aba81b8d12b3ed37.value("LANG_CXX", ::clang::LinkageSpecDecl::lang_cxx);

}