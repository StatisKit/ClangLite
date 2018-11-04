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


void wrapper_4cd9c65376ca51a8861a77904585a2df()
{

    std::string name_455bdc46e2b35a918626aaf15ff5c590 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clanglite");
    boost::python::object module_455bdc46e2b35a918626aaf15ff5c590(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_455bdc46e2b35a918626aaf15ff5c590.c_str()))));
    boost::python::scope().attr("clanglite") = module_455bdc46e2b35a918626aaf15ff5c590;
    boost::python::scope scope_455bdc46e2b35a918626aaf15ff5c590 = module_455bdc46e2b35a918626aaf15ff5c590;
    class ::clang::ASTUnit * (*function_pointer_4cd9c65376ca51a8861a77904585a2df)(class ::boost::python::api::object , class ::boost::python::api::object ) = ::clanglite::build_ast_from_code_with_args;
    boost::python::def("build_ast_from_code_with_args", function_pointer_4cd9c65376ca51a8861a77904585a2df, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
}