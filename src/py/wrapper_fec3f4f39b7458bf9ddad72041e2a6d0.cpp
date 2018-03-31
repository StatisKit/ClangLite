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
    template <> class ::clang::ObjCInterfaceType const volatile * get_pointer<class ::clang::ObjCInterfaceType const volatile >(class ::clang::ObjCInterfaceType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_fec3f4f39b7458bf9ddad72041e2a6d0()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCInterfaceDecl * (::clang::ObjCInterfaceType::*method_pointer_ce9c9e4ee9d65267abd8ac0d585a0186)() const = &::clang::ObjCInterfaceType::getDecl;
    bool  (::clang::ObjCInterfaceType::*method_pointer_51ef6346a5e65cf889544f31ab5e0e18)() const = &::clang::ObjCInterfaceType::isSugared;
    class ::clang::QualType  (::clang::ObjCInterfaceType::*method_pointer_8fd83c457aa75eec9f036123354f2241)() const = &::clang::ObjCInterfaceType::desugar;
    bool  (*method_pointer_f1dbef92457b59c1877b7426021d8433)(class ::clang::Type const *) = ::clang::ObjCInterfaceType::classof;
    boost::python::class_< class ::clang::ObjCInterfaceType, autowig::Held< class ::clang::ObjCInterfaceType >::Type, boost::python::bases< class ::clang::ObjCObjectType >, boost::noncopyable > class_fec3f4f39b7458bf9ddad72041e2a6d0("ObjCInterfaceType", "", boost::python::no_init);
    class_fec3f4f39b7458bf9ddad72041e2a6d0.def("get_decl", method_pointer_ce9c9e4ee9d65267abd8ac0d585a0186, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.ObjCInterfaceDecl`\n\n");
    class_fec3f4f39b7458bf9ddad72041e2a6d0.def("is_sugared", method_pointer_51ef6346a5e65cf889544f31ab5e0e18, "");
    class_fec3f4f39b7458bf9ddad72041e2a6d0.def("desugar", method_pointer_8fd83c457aa75eec9f036123354f2241, "");
    class_fec3f4f39b7458bf9ddad72041e2a6d0.def("classof", method_pointer_f1dbef92457b59c1877b7426021d8433, "");
    class_fec3f4f39b7458bf9ddad72041e2a6d0.staticmethod("classof");

    if(autowig::Held< class ::clang::ObjCInterfaceType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::ObjCInterfaceType >::Type, autowig::Held< class ::clang::ObjCObjectType >::Type >();
    }

}