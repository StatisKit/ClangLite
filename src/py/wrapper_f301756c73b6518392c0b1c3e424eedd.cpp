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
    template <> class ::clang::ObjCTypeParamDecl const volatile * get_pointer<class ::clang::ObjCTypeParamDecl const volatile >(class ::clang::ObjCTypeParamDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f301756c73b6518392c0b1c3e424eedd()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCTypeParamDecl * (*method_pointer_5b1cc0324c2f5bbaa04eeeb201cce4b1)(class ::clang::ASTContext &, unsigned int ) = ::clang::ObjCTypeParamDecl::CreateDeserialized;
    class ::clang::SourceLocation  (::clang::ObjCTypeParamDecl::*method_pointer_9dd273670de055689b2fe680e4733e51)() const = &::clang::ObjCTypeParamDecl::getVarianceLoc;
    unsigned int  (::clang::ObjCTypeParamDecl::*method_pointer_848098375ecf5191ab138f57d7f18be2)() const = &::clang::ObjCTypeParamDecl::getIndex;
    bool  (::clang::ObjCTypeParamDecl::*method_pointer_87e9ae4db816519ba865286418a743a2)() const = &::clang::ObjCTypeParamDecl::hasExplicitBound;
    class ::clang::SourceLocation  (::clang::ObjCTypeParamDecl::*method_pointer_5ee395c5915e5695bf25b182f385694a)() const = &::clang::ObjCTypeParamDecl::getColonLoc;
    bool  (*method_pointer_52818fedab575813b31990c66a75b374)(class ::clang::Decl const *) = ::clang::ObjCTypeParamDecl::classof;
    bool  (*method_pointer_dae714d729a45c8f943893482e2d68d1)(enum ::clang::Decl::Kind ) = ::clang::ObjCTypeParamDecl::classofKind;
    boost::python::class_< class ::clang::ObjCTypeParamDecl, autowig::Held< class ::clang::ObjCTypeParamDecl >::Type, boost::python::bases< class ::clang::TypedefNameDecl >, boost::noncopyable > class_f301756c73b6518392c0b1c3e424eedd("ObjCTypeParamDecl", "", boost::python::no_init);
    class_f301756c73b6518392c0b1c3e424eedd.def("create_deserialized", method_pointer_5b1cc0324c2f5bbaa04eeeb201cce4b1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f301756c73b6518392c0b1c3e424eedd.def("get_variance_loc", method_pointer_9dd273670de055689b2fe680e4733e51, ":Return Type:\n    :py:class:`clanglite.clang.SourceLocation`\n\n");
    class_f301756c73b6518392c0b1c3e424eedd.def("get_index", method_pointer_848098375ecf5191ab138f57d7f18be2, ":Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_f301756c73b6518392c0b1c3e424eedd.def("has_explicit_bound", method_pointer_87e9ae4db816519ba865286418a743a2, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_f301756c73b6518392c0b1c3e424eedd.def("get_colon_loc", method_pointer_5ee395c5915e5695bf25b182f385694a, ":Return Type:\n    :py:class:`clanglite.clang.SourceLocation`\n\n");
    class_f301756c73b6518392c0b1c3e424eedd.def("classof", method_pointer_52818fedab575813b31990c66a75b374, "");
    class_f301756c73b6518392c0b1c3e424eedd.def("classof_kind", method_pointer_dae714d729a45c8f943893482e2d68d1, "");
    class_f301756c73b6518392c0b1c3e424eedd.staticmethod("classof_kind");
    class_f301756c73b6518392c0b1c3e424eedd.staticmethod("create_deserialized");
    class_f301756c73b6518392c0b1c3e424eedd.staticmethod("classof");

    if(autowig::Held< class ::clang::ObjCTypeParamDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::ObjCTypeParamDecl >::Type, autowig::Held< class ::clang::TypedefNameDecl >::Type >();
    }

}