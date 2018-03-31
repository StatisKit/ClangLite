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
    boost::python::enum_< enum ::clang::TemplateArgument::ArgKind > enum_7bc3191eac5451618d350bf624886bc4("arg_kind");
    enum_7bc3191eac5451618d350bf624886bc4.value("NULL", ::clang::TemplateArgument::Null);
    enum_7bc3191eac5451618d350bf624886bc4.value("TYPE", ::clang::TemplateArgument::Type);
    enum_7bc3191eac5451618d350bf624886bc4.value("DECLARATION", ::clang::TemplateArgument::Declaration);
    enum_7bc3191eac5451618d350bf624886bc4.value("NULL_PTR", ::clang::TemplateArgument::NullPtr);
    enum_7bc3191eac5451618d350bf624886bc4.value("INTEGRAL", ::clang::TemplateArgument::Integral);
    enum_7bc3191eac5451618d350bf624886bc4.value("TEMPLATE", ::clang::TemplateArgument::Template);
    enum_7bc3191eac5451618d350bf624886bc4.value("TEMPLATE_EXPANSION", ::clang::TemplateArgument::TemplateExpansion);
    enum_7bc3191eac5451618d350bf624886bc4.value("EXPRESSION", ::clang::TemplateArgument::Expression);
    enum_7bc3191eac5451618d350bf624886bc4.value("PACK", ::clang::TemplateArgument::Pack);

}