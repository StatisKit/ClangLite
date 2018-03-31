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
    template <> class ::clang::ObjCObjectType const volatile * get_pointer<class ::clang::ObjCObjectType const volatile >(class ::clang::ObjCObjectType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_3980f13801db50f498b55d818463d500()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_c69850bdb6035e14b28aaadaf92add30)() const = &::clang::ObjCObjectType::getBaseType;
    bool  (::clang::ObjCObjectType::*method_pointer_858c1476c2ff58ce97cd96a09b052bb8)() const = &::clang::ObjCObjectType::isObjCId;
    bool  (::clang::ObjCObjectType::*method_pointer_b699f6cbd19a5aaf87ce8a37e90f3ee0)() const = &::clang::ObjCObjectType::isObjCClass;
    bool  (::clang::ObjCObjectType::*method_pointer_d5ea09489ade5465847db8a984ff8554)() const = &::clang::ObjCObjectType::isObjCUnqualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_0ced3057ed5b57008a21c7e235e823d1)() const = &::clang::ObjCObjectType::isObjCUnqualifiedClass;
    bool  (::clang::ObjCObjectType::*method_pointer_690f2dfc6aea562a95dfd4bb780ed60d)() const = &::clang::ObjCObjectType::isObjCUnqualifiedIdOrClass;
    bool  (::clang::ObjCObjectType::*method_pointer_ca585dbfc3775eba937c70ad6d57f014)() const = &::clang::ObjCObjectType::isObjCQualifiedId;
    bool  (::clang::ObjCObjectType::*method_pointer_a30bc08db72f574d90f2777b60d9c233)() const = &::clang::ObjCObjectType::isObjCQualifiedClass;
    class ::clang::ObjCInterfaceDecl * (::clang::ObjCObjectType::*method_pointer_d46b1c679ddd526ebe27b5419514b788)() const = &::clang::ObjCObjectType::getInterface;
    bool  (::clang::ObjCObjectType::*method_pointer_b5728ee334b4571789a751612b4510d9)() const = &::clang::ObjCObjectType::isSpecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_0d433cdc8861568d85d40c47b27d8440)() const = &::clang::ObjCObjectType::isSpecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_aa9b30a497095803888da24abb604ea2)() const = &::clang::ObjCObjectType::isUnspecialized;
    bool  (::clang::ObjCObjectType::*method_pointer_d2f54aa11206546d80d7e9e1f7426cf3)() const = &::clang::ObjCObjectType::isUnspecializedAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_e188053337f85044a06ea083108bdb3c)() const = &::clang::ObjCObjectType::isKindOfTypeAsWritten;
    bool  (::clang::ObjCObjectType::*method_pointer_f45d07ed55af5bc985b14a2234e6c983)() const = &::clang::ObjCObjectType::isKindOfType;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_f9a1b4534b5d52db9f1da0ca89604e85)() const = &::clang::ObjCObjectType::getSuperClassType;
    bool  (::clang::ObjCObjectType::*method_pointer_f7deeb3ca61354c29a87ffd037b7487c)() const = &::clang::ObjCObjectType::isSugared;
    class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_a8aec2ecab005157a4efb112ad7ccb05)() const = &::clang::ObjCObjectType::desugar;
    bool  (*method_pointer_e33cfc74b7cf5b00b73240047090d9f2)(class ::clang::Type const *) = ::clang::ObjCObjectType::classof;
    boost::python::class_< class ::clang::ObjCObjectType, autowig::Held< class ::clang::ObjCObjectType >::Type, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3980f13801db50f498b55d818463d500("ObjCObjectType", "", boost::python::no_init);
    class_3980f13801db50f498b55d818463d500.def("get_base_type", method_pointer_c69850bdb6035e14b28aaadaf92add30, ":Return Type:\n    :py:class:`clanglite.clang.QualType`\n\n");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_id", method_pointer_858c1476c2ff58ce97cd96a09b052bb8, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_class", method_pointer_b699f6cbd19a5aaf87ce8a37e90f3ee0, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id", method_pointer_d5ea09489ade5465847db8a984ff8554, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_class", method_pointer_0ced3057ed5b57008a21c7e235e823d1, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id_or_class", method_pointer_690f2dfc6aea562a95dfd4bb780ed60d, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_id", method_pointer_ca585dbfc3775eba937c70ad6d57f014, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_class", method_pointer_a30bc08db72f574d90f2777b60d9c233, "");
    class_3980f13801db50f498b55d818463d500.def("get_interface", method_pointer_d46b1c679ddd526ebe27b5419514b788, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.ObjCInterfaceDecl`\n\n");
    class_3980f13801db50f498b55d818463d500.def("is_specialized", method_pointer_b5728ee334b4571789a751612b4510d9, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_3980f13801db50f498b55d818463d500.def("is_specialized_as_written", method_pointer_0d433cdc8861568d85d40c47b27d8440, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized", method_pointer_aa9b30a497095803888da24abb604ea2, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized_as_written", method_pointer_d2f54aa11206546d80d7e9e1f7426cf3, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type_as_written", method_pointer_e188053337f85044a06ea083108bdb3c, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type", method_pointer_f45d07ed55af5bc985b14a2234e6c983, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_3980f13801db50f498b55d818463d500.def("get_super_class_type", method_pointer_f9a1b4534b5d52db9f1da0ca89604e85, ":Return Type:\n    :py:class:`clanglite.clang.QualType`\n\n");
    class_3980f13801db50f498b55d818463d500.def("is_sugared", method_pointer_f7deeb3ca61354c29a87ffd037b7487c, "");
    class_3980f13801db50f498b55d818463d500.def("desugar", method_pointer_a8aec2ecab005157a4efb112ad7ccb05, "");
    class_3980f13801db50f498b55d818463d500.def("classof", method_pointer_e33cfc74b7cf5b00b73240047090d9f2, "");
    class_3980f13801db50f498b55d818463d500.staticmethod("classof");

    if(autowig::Held< class ::clang::ObjCObjectType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::ObjCObjectType >::Type, autowig::Held< class ::clang::Type >::Type >();
    }

}