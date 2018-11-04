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
    template <> class ::clang::ObjCPropertyImplDecl const volatile * get_pointer<class ::clang::ObjCPropertyImplDecl const volatile >(class ::clang::ObjCPropertyImplDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_19b8049789335462bac78de513b121a7()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCPropertyImplDecl * (*method_pointer_35d4ec1ca4a65158977227acfc5ea324)(class ::clang::ASTContext &, unsigned int ) = ::clang::ObjCPropertyImplDecl::CreateDeserialized;
    class ::clang::SourceLocation  (::clang::ObjCPropertyImplDecl::*method_pointer_b17a68e8ce1a5993ac1c2f461c22eb54)() const = &::clang::ObjCPropertyImplDecl::getLocStart;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_5a42b08f2b5c5646877f49230aa2a499)(class ::clang::SourceLocation ) = &::clang::ObjCPropertyImplDecl::setAtLoc;
    class ::clang::ObjCPropertyDecl * (::clang::ObjCPropertyImplDecl::*method_pointer_352baacce881584c9be94f636849f025)() const = &::clang::ObjCPropertyImplDecl::getPropertyDecl;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_eb2e58982a005d93a7926f230e533b44)(class ::clang::ObjCPropertyDecl *) = &::clang::ObjCPropertyImplDecl::setPropertyDecl;
    class ::clang::ObjCIvarDecl * (::clang::ObjCPropertyImplDecl::*method_pointer_0da1fa1d3f9b5c7d88a1e56a5b1c5558)() const = &::clang::ObjCPropertyImplDecl::getPropertyIvarDecl;
    class ::clang::SourceLocation  (::clang::ObjCPropertyImplDecl::*method_pointer_4d0969817a595bd19b79eae96bd9425f)() const = &::clang::ObjCPropertyImplDecl::getPropertyIvarDeclLoc;
    void  (::clang::ObjCPropertyImplDecl::*method_pointer_d9bef8551e885dfcb1dbce0355b47c54)(class ::clang::ObjCIvarDecl *, class ::clang::SourceLocation ) = &::clang::ObjCPropertyImplDecl::setPropertyIvarDecl;
    bool  (::clang::ObjCPropertyImplDecl::*method_pointer_774cc4638db35e7985906ef51bed057d)() const = &::clang::ObjCPropertyImplDecl::isIvarNameSpecified;
    bool  (*method_pointer_5cfda90e8bb25dd18e0dba8126c21cbb)(class ::clang::Decl const *) = ::clang::ObjCPropertyImplDecl::classof;
    bool  (*method_pointer_45abfdf03e2f5243a6f16654d62e0fb7)(enum ::clang::Decl::Kind ) = ::clang::ObjCPropertyImplDecl::classofKind;
    boost::python::class_< class ::clang::ObjCPropertyImplDecl, autowig::Held< class ::clang::ObjCPropertyImplDecl >::Type, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_19b8049789335462bac78de513b121a7("ObjCPropertyImplDecl", "", boost::python::no_init);
    class_19b8049789335462bac78de513b121a7.def("create_deserialized", method_pointer_35d4ec1ca4a65158977227acfc5ea324, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("get_loc_start", method_pointer_b17a68e8ce1a5993ac1c2f461c22eb54, "");
    class_19b8049789335462bac78de513b121a7.def("set_at_loc", method_pointer_5a42b08f2b5c5646877f49230aa2a499, "");
    class_19b8049789335462bac78de513b121a7.def("get_property_decl", method_pointer_352baacce881584c9be94f636849f025, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("set_property_decl", method_pointer_eb2e58982a005d93a7926f230e533b44, "");
    class_19b8049789335462bac78de513b121a7.def("get_property_ivar_decl", method_pointer_0da1fa1d3f9b5c7d88a1e56a5b1c5558, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_19b8049789335462bac78de513b121a7.def("get_property_ivar_decl_loc", method_pointer_4d0969817a595bd19b79eae96bd9425f, "");
    class_19b8049789335462bac78de513b121a7.def("set_property_ivar_decl", method_pointer_d9bef8551e885dfcb1dbce0355b47c54, "");
    class_19b8049789335462bac78de513b121a7.def("is_ivar_name_specified", method_pointer_774cc4638db35e7985906ef51bed057d, "For @synthesize, returns true if an ivar name was explicitly specified.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_19b8049789335462bac78de513b121a7.def("classof", method_pointer_5cfda90e8bb25dd18e0dba8126c21cbb, "");
    class_19b8049789335462bac78de513b121a7.def("classof_kind", method_pointer_45abfdf03e2f5243a6f16654d62e0fb7, "");
    class_19b8049789335462bac78de513b121a7.staticmethod("classof_kind");
    class_19b8049789335462bac78de513b121a7.staticmethod("create_deserialized");
    class_19b8049789335462bac78de513b121a7.staticmethod("classof");

    if(autowig::Held< class ::clang::ObjCPropertyImplDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::ObjCPropertyImplDecl >::Type, autowig::Held< class ::clang::Decl >::Type >();
    }

}