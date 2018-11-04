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
    template <> class ::clang::ObjCCategoryImplDecl const volatile * get_pointer<class ::clang::ObjCCategoryImplDecl const volatile >(class ::clang::ObjCCategoryImplDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7289d815af725e0c81cacbe193055c17()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCCategoryImplDecl * (*method_pointer_0b15fc832f665bb494ac06c61e61d1aa)(class ::clang::ASTContext &, unsigned int ) = ::clang::ObjCCategoryImplDecl::CreateDeserialized;
    class ::clang::ObjCCategoryDecl * (::clang::ObjCCategoryImplDecl::*method_pointer_fb9f75f090e0524cb86f8026f58b7983)() const = &::clang::ObjCCategoryImplDecl::getCategoryDecl;
    class ::clang::SourceLocation  (::clang::ObjCCategoryImplDecl::*method_pointer_c09d42bc0ef35da29ca8da3f0d0a1403)() const = &::clang::ObjCCategoryImplDecl::getCategoryNameLoc;
    class ::llvm::StringRef  (::clang::ObjCCategoryImplDecl::*method_pointer_ccd77943197f5926997819e01f471fbe)() const = &::clang::ObjCCategoryImplDecl::getName;
    bool  (*method_pointer_d07e3837cce45cf595502401f42f8d42)(class ::clang::Decl const *) = ::clang::ObjCCategoryImplDecl::classof;
    bool  (*method_pointer_e9441865e5ad5cf8a8f5f57b71dee532)(enum ::clang::Decl::Kind ) = ::clang::ObjCCategoryImplDecl::classofKind;
    boost::python::class_< class ::clang::ObjCCategoryImplDecl, autowig::Held< class ::clang::ObjCCategoryImplDecl >::Type, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_7289d815af725e0c81cacbe193055c17("ObjCCategoryImplDecl", "", boost::python::no_init);
    class_7289d815af725e0c81cacbe193055c17.def("create_deserialized", method_pointer_0b15fc832f665bb494ac06c61e61d1aa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7289d815af725e0c81cacbe193055c17.def("get_category_decl", method_pointer_fb9f75f090e0524cb86f8026f58b7983, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7289d815af725e0c81cacbe193055c17.def("get_category_name_loc", method_pointer_c09d42bc0ef35da29ca8da3f0d0a1403, "");
    class_7289d815af725e0c81cacbe193055c17.def("get_name", method_pointer_ccd77943197f5926997819e01f471fbe, ":Return Type:\n    :py:class:`clanglite.llvm.StringRef`\n\n");
    class_7289d815af725e0c81cacbe193055c17.def("classof", method_pointer_d07e3837cce45cf595502401f42f8d42, "");
    class_7289d815af725e0c81cacbe193055c17.def("classof_kind", method_pointer_e9441865e5ad5cf8a8f5f57b71dee532, "");
    class_7289d815af725e0c81cacbe193055c17.staticmethod("classof_kind");
    class_7289d815af725e0c81cacbe193055c17.staticmethod("create_deserialized");
    class_7289d815af725e0c81cacbe193055c17.staticmethod("classof");

    if(autowig::Held< class ::clang::ObjCCategoryImplDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::ObjCCategoryImplDecl >::Type, autowig::Held< class ::clang::ObjCImplDecl >::Type >();
    }

}