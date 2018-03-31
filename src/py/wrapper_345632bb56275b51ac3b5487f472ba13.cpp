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



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::BindingDecl const volatile * get_pointer<class ::clang::BindingDecl const volatile >(class ::clang::BindingDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_345632bb56275b51ac3b5487f472ba13()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::BindingDecl * (*method_pointer_9f33652b35db55129d14aa44b171f723)(class ::clang::ASTContext &, unsigned int ) = ::clang::BindingDecl::CreateDeserialized;
    class ::clang::VarDecl * (::clang::BindingDecl::*method_pointer_ab6f4cf81e8a50c09c2ee837f5aa1808)() const = &::clang::BindingDecl::getHoldingVar;
    bool  (*method_pointer_0a0e1a36042853dfa7ee2c56019e244a)(class ::clang::Decl const *) = ::clang::BindingDecl::classof;
    bool  (*method_pointer_16e00ee30eac5817a83bb5101a2bfe8d)(enum ::clang::Decl::Kind ) = ::clang::BindingDecl::classofKind;
    boost::python::class_< class ::clang::BindingDecl, autowig::Held< class ::clang::BindingDecl >::Type, boost::python::bases< class ::clang::ValueDecl >, boost::noncopyable > class_345632bb56275b51ac3b5487f472ba13("BindingDecl", "", boost::python::no_init);
    class_345632bb56275b51ac3b5487f472ba13.def("create_deserialized", method_pointer_9f33652b35db55129d14aa44b171f723, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_345632bb56275b51ac3b5487f472ba13.def("get_holding_var", method_pointer_ab6f4cf81e8a50c09c2ee837f5aa1808, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.VarDecl`\n\n");
    class_345632bb56275b51ac3b5487f472ba13.def("classof", method_pointer_0a0e1a36042853dfa7ee2c56019e244a, "");
    class_345632bb56275b51ac3b5487f472ba13.def("classof_kind", method_pointer_16e00ee30eac5817a83bb5101a2bfe8d, "");
    class_345632bb56275b51ac3b5487f472ba13.staticmethod("classof_kind");
    class_345632bb56275b51ac3b5487f472ba13.staticmethod("create_deserialized");
    class_345632bb56275b51ac3b5487f472ba13.staticmethod("classof");

    if(autowig::Held< class ::clang::BindingDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::BindingDecl >::Type, autowig::Held< class ::clang::ValueDecl >::Type >();
    }

}