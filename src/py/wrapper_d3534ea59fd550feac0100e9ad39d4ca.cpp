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
    template <> class ::clang::PragmaCommentDecl const volatile * get_pointer<class ::clang::PragmaCommentDecl const volatile >(class ::clang::PragmaCommentDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_d3534ea59fd550feac0100e9ad39d4ca()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::PragmaCommentDecl * (*method_pointer_0e3b9e38e75b56e4a86c1b2c70ab9d92)(class ::clang::ASTContext &, unsigned int , unsigned int ) = ::clang::PragmaCommentDecl::CreateDeserialized;
    class ::llvm::StringRef  (::clang::PragmaCommentDecl::*method_pointer_8fb106cdce645bd685f3eb4e93dd72dd)() const = &::clang::PragmaCommentDecl::getArg;
    bool  (*method_pointer_635d7c7dedb2550d8da58b6125a67596)(class ::clang::Decl const *) = ::clang::PragmaCommentDecl::classof;
    bool  (*method_pointer_c97acc823f615730a8d58ff8f8f6ee2b)(enum ::clang::Decl::Kind ) = ::clang::PragmaCommentDecl::classofKind;
    boost::python::class_< class ::clang::PragmaCommentDecl, autowig::Held< class ::clang::PragmaCommentDecl >::Type, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_d3534ea59fd550feac0100e9ad39d4ca("PragmaCommentDecl", "Represents a ``#pragma comment`` line. Always a child of\nTranslationUnitDecl.\n\n", boost::python::no_init);
    class_d3534ea59fd550feac0100e9ad39d4ca.def("create_deserialized", method_pointer_0e3b9e38e75b56e4a86c1b2c70ab9d92, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_d3534ea59fd550feac0100e9ad39d4ca.def("get_arg", method_pointer_8fb106cdce645bd685f3eb4e93dd72dd, "");
    class_d3534ea59fd550feac0100e9ad39d4ca.def("classof", method_pointer_635d7c7dedb2550d8da58b6125a67596, "");
    class_d3534ea59fd550feac0100e9ad39d4ca.def("classof_kind", method_pointer_c97acc823f615730a8d58ff8f8f6ee2b, "");
    class_d3534ea59fd550feac0100e9ad39d4ca.staticmethod("classof_kind");
    class_d3534ea59fd550feac0100e9ad39d4ca.staticmethod("create_deserialized");
    class_d3534ea59fd550feac0100e9ad39d4ca.staticmethod("classof");

    if(autowig::Held< class ::clang::PragmaCommentDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::PragmaCommentDecl >::Type, autowig::Held< class ::clang::Decl >::Type >();
    }

}