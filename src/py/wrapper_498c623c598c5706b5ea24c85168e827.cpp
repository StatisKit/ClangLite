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


void wrapper_498c623c598c5706b5ea24c85168e827()
{

    std::string name_21ee8db290f35815a57c7bf74dca851d = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".boost");
    boost::python::object module_21ee8db290f35815a57c7bf74dca851d(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_21ee8db290f35815a57c7bf74dca851d.c_str()))));
    boost::python::scope().attr("boost") = module_21ee8db290f35815a57c7bf74dca851d;
    boost::python::scope scope_21ee8db290f35815a57c7bf74dca851d = module_21ee8db290f35815a57c7bf74dca851d;
    std::string name_fc29b231afcc5a6587b428f2bab37266 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".python");
    boost::python::object module_fc29b231afcc5a6587b428f2bab37266(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fc29b231afcc5a6587b428f2bab37266.c_str()))));
    boost::python::scope().attr("python") = module_fc29b231afcc5a6587b428f2bab37266;
    boost::python::scope scope_fc29b231afcc5a6587b428f2bab37266 = module_fc29b231afcc5a6587b428f2bab37266;
    std::string name_0bad2e5cfdec5f1695656d4f0b1ba163 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".api");
    boost::python::object module_0bad2e5cfdec5f1695656d4f0b1ba163(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_0bad2e5cfdec5f1695656d4f0b1ba163.c_str()))));
    boost::python::scope().attr("api") = module_0bad2e5cfdec5f1695656d4f0b1ba163;
    boost::python::scope scope_0bad2e5cfdec5f1695656d4f0b1ba163 = module_0bad2e5cfdec5f1695656d4f0b1ba163;
}