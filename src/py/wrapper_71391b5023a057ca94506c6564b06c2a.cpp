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
    template <> class ::clang::TypedefNameDecl const volatile * get_pointer<class ::clang::TypedefNameDecl const volatile >(class ::clang::TypedefNameDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_71391b5023a057ca94506c6564b06c2a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::TypedefNameDecl::*method_pointer_7e5523bfe00e506abb6b133833dfed3e)() const = &::clang::TypedefNameDecl::isModed;
    class ::clang::QualType  (::clang::TypedefNameDecl::*method_pointer_51c8b603df205b508e87bddad3218b5a)() const = &::clang::TypedefNameDecl::getUnderlyingType;
    class ::clang::TypedefNameDecl * (::clang::TypedefNameDecl::*method_pointer_17f1a9ed9d07511894399bfcc36d3118)() = &::clang::TypedefNameDecl::getCanonicalDecl;
    class ::clang::TypedefNameDecl const * (::clang::TypedefNameDecl::*method_pointer_864cbde415bb5a1e9f280c59e018f3cf)() const = &::clang::TypedefNameDecl::getCanonicalDecl;
    class ::clang::TagDecl * (::clang::TypedefNameDecl::*method_pointer_5e787220b638524fa776031f1c24a81c)(bool ) const = &::clang::TypedefNameDecl::getAnonDeclWithTypedefName;
    bool  (*method_pointer_d1684748675b5484af41e78ec7cd0b6c)(class ::clang::Decl const *) = ::clang::TypedefNameDecl::classof;
    bool  (*method_pointer_1530aa9c98af5fcb97830a08b09c9659)(enum ::clang::Decl::Kind ) = ::clang::TypedefNameDecl::classofKind;
    boost::python::class_< class ::clang::TypedefNameDecl, autowig::Held< class ::clang::TypedefNameDecl >::Type, boost::python::bases< class ::clang::TypeDecl >, boost::noncopyable > class_71391b5023a057ca94506c6564b06c2a("TypedefNameDecl", "", boost::python::no_init);
    class_71391b5023a057ca94506c6564b06c2a.def("is_moded", method_pointer_7e5523bfe00e506abb6b133833dfed3e, "");
    class_71391b5023a057ca94506c6564b06c2a.def("get_underlying_type", method_pointer_51c8b603df205b508e87bddad3218b5a, "");
    class_71391b5023a057ca94506c6564b06c2a.def("get_canonical_decl", method_pointer_17f1a9ed9d07511894399bfcc36d3118, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.TypedefNameDecl`\n\n");
    class_71391b5023a057ca94506c6564b06c2a.def("get_canonical_decl", method_pointer_864cbde415bb5a1e9f280c59e018f3cf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_71391b5023a057ca94506c6564b06c2a.def("get_anon_decl_with_typedef_name", method_pointer_5e787220b638524fa776031f1c24a81c, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Parameter:\n    `AnyRedecl` (:cpp:any:`bool`) - Look for the tag declaration in any redeclaration of this typedef\n                                    declaration.\n\n:Return Type:\n    :py:class:`clanglite.clang.TagDecl`\n\n");
    class_71391b5023a057ca94506c6564b06c2a.def("classof", method_pointer_d1684748675b5484af41e78ec7cd0b6c, "");
    class_71391b5023a057ca94506c6564b06c2a.def("classof_kind", method_pointer_1530aa9c98af5fcb97830a08b09c9659, "");
    class_71391b5023a057ca94506c6564b06c2a.staticmethod("classof_kind");
    class_71391b5023a057ca94506c6564b06c2a.staticmethod("classof");

    if(autowig::Held< class ::clang::TypedefNameDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::TypedefNameDecl >::Type, autowig::Held< class ::clang::TypeDecl >::Type >();
    }

}