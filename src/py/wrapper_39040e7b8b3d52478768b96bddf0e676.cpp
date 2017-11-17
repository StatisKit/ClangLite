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
    template <> class ::clang::ObjCCompatibleAliasDecl const volatile * get_pointer<class ::clang::ObjCCompatibleAliasDecl const volatile >(class ::clang::ObjCCompatibleAliasDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_39040e7b8b3d52478768b96bddf0e676()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCCompatibleAliasDecl * (*method_pointer_bb9f6ebfd73c54c695ae390e468a1559)(class ::clang::ASTContext &, unsigned int ) = ::clang::ObjCCompatibleAliasDecl::CreateDeserialized;
    class ::clang::ObjCInterfaceDecl const * (::clang::ObjCCompatibleAliasDecl::*method_pointer_aae7bd566ab053e4801f20c8ba439f50)() const = &::clang::ObjCCompatibleAliasDecl::getClassInterface;
    class ::clang::ObjCInterfaceDecl * (::clang::ObjCCompatibleAliasDecl::*method_pointer_4434e57fbefa5fd68dcbc208a915fef9)() = &::clang::ObjCCompatibleAliasDecl::getClassInterface;
    void  (::clang::ObjCCompatibleAliasDecl::*method_pointer_a4fc81752fc656dd92bc65619c8a2c75)(class ::clang::ObjCInterfaceDecl *) = &::clang::ObjCCompatibleAliasDecl::setClassInterface;
    bool  (*method_pointer_83d8544900995e1ca1ad69621bb5ecb0)(class ::clang::Decl const *) = ::clang::ObjCCompatibleAliasDecl::classof;
    bool  (*method_pointer_dc8b4e40d0fc5a32b1f61208b1f32da2)(enum ::clang::Decl::Kind ) = ::clang::ObjCCompatibleAliasDecl::classofKind;
    boost::python::class_< class ::clang::ObjCCompatibleAliasDecl, autowig::Held< class ::clang::ObjCCompatibleAliasDecl >::Type, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_39040e7b8b3d52478768b96bddf0e676("ObjCCompatibleAliasDecl", "", boost::python::no_init);
    class_39040e7b8b3d52478768b96bddf0e676.def("create_deserialized", method_pointer_bb9f6ebfd73c54c695ae390e468a1559, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_39040e7b8b3d52478768b96bddf0e676.def("get_class_interface", method_pointer_aae7bd566ab053e4801f20c8ba439f50, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_39040e7b8b3d52478768b96bddf0e676.def("get_class_interface", method_pointer_4434e57fbefa5fd68dcbc208a915fef9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_39040e7b8b3d52478768b96bddf0e676.def("set_class_interface", method_pointer_a4fc81752fc656dd92bc65619c8a2c75, "");
    class_39040e7b8b3d52478768b96bddf0e676.def("classof", method_pointer_83d8544900995e1ca1ad69621bb5ecb0, "");
    class_39040e7b8b3d52478768b96bddf0e676.def("classof_kind", method_pointer_dc8b4e40d0fc5a32b1f61208b1f32da2, "");
    class_39040e7b8b3d52478768b96bddf0e676.staticmethod("classof_kind");
    class_39040e7b8b3d52478768b96bddf0e676.staticmethod("create_deserialized");
    class_39040e7b8b3d52478768b96bddf0e676.staticmethod("classof");

    if(autowig::Held< class ::clang::ObjCCompatibleAliasDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::ObjCCompatibleAliasDecl >::Type, autowig::Held< class ::clang::NamedDecl >::Type >();
    }

}