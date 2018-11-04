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
    template <> class ::clang::ObjCObjectPointerType const volatile * get_pointer<class ::clang::ObjCObjectPointerType const volatile >(class ::clang::ObjCObjectPointerType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_282d613855865c408950cce436839a1f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_5d23d33463805f249e2f5c06ad85e427)() const = &::clang::ObjCObjectPointerType::getPointeeType;
    class ::clang::ObjCObjectType const * (::clang::ObjCObjectPointerType::*method_pointer_52ece4e1150052b88872aa7e438bbfdd)() const = &::clang::ObjCObjectPointerType::getObjectType;
    class ::clang::ObjCInterfaceType const * (::clang::ObjCObjectPointerType::*method_pointer_d7dada39911a51a5ab879e49622bdf11)() const = &::clang::ObjCObjectPointerType::getInterfaceType;
    class ::clang::ObjCInterfaceDecl * (::clang::ObjCObjectPointerType::*method_pointer_9271dfbac23a563fb8e355d3506d0748)() const = &::clang::ObjCObjectPointerType::getInterfaceDecl;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_2d15aa9fc4ed51909c88f24bc9157435)() const = &::clang::ObjCObjectPointerType::isObjCIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_5c654a23b7065c408909225744f4791f)() const = &::clang::ObjCObjectPointerType::isObjCClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_d151b151d3175ed2a1dcb7a94be8874f)() const = &::clang::ObjCObjectPointerType::isObjCIdOrClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_af7b8260782e5084be465cb2314e6cf2)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedIdType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_06bd44a7fbb753418c50a9ecacb444e2)() const = &::clang::ObjCObjectPointerType::isObjCQualifiedClassType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_1eb32eed17475f5ca0b29d6824d15c4b)() const = &::clang::ObjCObjectPointerType::isKindOfType;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_4fdd42476cd658dd9d223a7358e2734c)() const = &::clang::ObjCObjectPointerType::isSpecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_0c1d5a1b4714569e94e016127aeb9917)() const = &::clang::ObjCObjectPointerType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_c576cc0633db5bb1b9bf5044f5094569)() const = &::clang::ObjCObjectPointerType::isUnspecialized;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_73afc3b471a95c1ca1c094ffc1a5ffc0)() const = &::clang::ObjCObjectPointerType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_6a7c8c2e8dce50cb89332de34bf82ea4)() const = &::clang::ObjCObjectPointerType::qual_empty;
    unsigned int  (::clang::ObjCObjectPointerType::*method_pointer_656b891abc135e7fbf29705fbf237349)() const = &::clang::ObjCObjectPointerType::getNumProtocols;
    class ::clang::ObjCProtocolDecl * (::clang::ObjCObjectPointerType::*method_pointer_df7fc56ecc9153f682fdbbf959e7d1b5)(unsigned int ) const = &::clang::ObjCObjectPointerType::getProtocol;
    bool  (::clang::ObjCObjectPointerType::*method_pointer_7e74f4b41a8951b29f6fd2f27c732262)() const = &::clang::ObjCObjectPointerType::isSugared;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_eaf7b6aa53525dae83246bf170f0e51a)() const = &::clang::ObjCObjectPointerType::desugar;
    class ::clang::QualType  (::clang::ObjCObjectPointerType::*method_pointer_85190767ffbd5a6986845e4654059a45)() const = &::clang::ObjCObjectPointerType::getSuperClassType;
    bool  (*method_pointer_b0103a852d4b51f2beb2b474c106f78a)(class ::clang::Type const *) = ::clang::ObjCObjectPointerType::classof;
    boost::python::class_< class ::clang::ObjCObjectPointerType, autowig::Held< class ::clang::ObjCObjectPointerType >::Type, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_282d613855865c408950cce436839a1f("ObjCObjectPointerType", "", boost::python::no_init);
    class_282d613855865c408950cce436839a1f.def("get_pointee_type", method_pointer_5d23d33463805f249e2f5c06ad85e427, ":Return Type:\n    :py:class:`clanglite.clang.QualType`\n\n");
    class_282d613855865c408950cce436839a1f.def("get_object_type", method_pointer_52ece4e1150052b88872aa7e438bbfdd, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.ObjCObjectType`\n\n");
    class_282d613855865c408950cce436839a1f.def("get_interface_type", method_pointer_d7dada39911a51a5ab879e49622bdf11, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.ObjCInterfaceType`\n\n");
    class_282d613855865c408950cce436839a1f.def("get_interface_decl", method_pointer_9271dfbac23a563fb8e355d3506d0748, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.ObjCInterfaceDecl`\n\n");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_type", method_pointer_2d15aa9fc4ed51909c88f24bc9157435, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_class_type", method_pointer_5c654a23b7065c408909225744f4791f, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_id_or_class_type", method_pointer_d151b151d3175ed2a1dcb7a94be8874f, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_id_type", method_pointer_af7b8260782e5084be465cb2314e6cf2, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_282d613855865c408950cce436839a1f.def("is_obj_c_qualified_class_type", method_pointer_06bd44a7fbb753418c50a9ecacb444e2, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_282d613855865c408950cce436839a1f.def("is_kind_of_type", method_pointer_1eb32eed17475f5ca0b29d6824d15c4b, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_282d613855865c408950cce436839a1f.def("is_specialized", method_pointer_4fdd42476cd658dd9d223a7358e2734c, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_282d613855865c408950cce436839a1f.def("is_specialized_as_written", method_pointer_0c1d5a1b4714569e94e016127aeb9917, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized", method_pointer_c576cc0633db5bb1b9bf5044f5094569, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_282d613855865c408950cce436839a1f.def("is_unspecialized_as_written", method_pointer_73afc3b471a95c1ca1c094ffc1a5ffc0, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_282d613855865c408950cce436839a1f.def("qual_empty", method_pointer_6a7c8c2e8dce50cb89332de34bf82ea4, "");
    class_282d613855865c408950cce436839a1f.def("get_num_protocols", method_pointer_656b891abc135e7fbf29705fbf237349, ":Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_282d613855865c408950cce436839a1f.def("get_protocol", method_pointer_df7fc56ecc9153f682fdbbf959e7d1b5, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Parameter:\n    `I` (:cpp:any:`unsigned` int) - Undocumented\n\n:Return Type:\n    :py:class:`clanglite.clang.ObjCProtocolDecl`\n\n");
    class_282d613855865c408950cce436839a1f.def("is_sugared", method_pointer_7e74f4b41a8951b29f6fd2f27c732262, "");
    class_282d613855865c408950cce436839a1f.def("desugar", method_pointer_eaf7b6aa53525dae83246bf170f0e51a, "");
    class_282d613855865c408950cce436839a1f.def("get_super_class_type", method_pointer_85190767ffbd5a6986845e4654059a45, ":Return Type:\n    :py:class:`clanglite.clang.QualType`\n\n");
    class_282d613855865c408950cce436839a1f.def("classof", method_pointer_b0103a852d4b51f2beb2b474c106f78a, "");
    class_282d613855865c408950cce436839a1f.staticmethod("classof");

    if(autowig::Held< class ::clang::ObjCObjectPointerType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::ObjCObjectPointerType >::Type, autowig::Held< class ::clang::Type >::Type >();
    }

}