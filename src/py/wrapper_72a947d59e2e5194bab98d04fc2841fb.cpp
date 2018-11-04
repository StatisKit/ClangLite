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
    template <> class ::clang::FieldDecl const volatile * get_pointer<class ::clang::FieldDecl const volatile >(class ::clang::FieldDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_72a947d59e2e5194bab98d04fc2841fb()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::FieldDecl * (*method_pointer_3ae30625338d53879e7b6094f1dc366b)(class ::clang::ASTContext &, unsigned int ) = ::clang::FieldDecl::CreateDeserialized;
    unsigned int  (::clang::FieldDecl::*method_pointer_34d47c7ba1b058ecad3cc05b62501b38)() const = &::clang::FieldDecl::getFieldIndex;
    bool  (::clang::FieldDecl::*method_pointer_79d0f35e58aa58a48a3d7b11fd608c2b)() const = &::clang::FieldDecl::isMutable;
    bool  (::clang::FieldDecl::*method_pointer_11cf7bcd364e53e686e5a1bff9e0db00)() const = &::clang::FieldDecl::isBitField;
    bool  (::clang::FieldDecl::*method_pointer_85635fda25c75c9ea0c4bf9e377dcdc7)() const = &::clang::FieldDecl::isUnnamedBitfield;
    bool  (::clang::FieldDecl::*method_pointer_b565294828455219bf938a54bf2e25b1)() const = &::clang::FieldDecl::isAnonymousStructOrUnion;
    void  (::clang::FieldDecl::*method_pointer_eca8536f27bf5056bcbd927f4bb6f197)() = &::clang::FieldDecl::removeBitWidth;
    bool  (::clang::FieldDecl::*method_pointer_aad5670aba055eb881f8657df919b036)() const = &::clang::FieldDecl::hasInClassInitializer;
    void  (::clang::FieldDecl::*method_pointer_9eaebdf3aea4519ab6487cdec9e40cdc)() = &::clang::FieldDecl::removeInClassInitializer;
    bool  (::clang::FieldDecl::*method_pointer_4f242c602a2157c6b371dfd50aceb473)() const = &::clang::FieldDecl::hasCapturedVLAType;
    class ::clang::VariableArrayType const * (::clang::FieldDecl::*method_pointer_9591ff621ef1518281b22fa8a6fa2775)() const = &::clang::FieldDecl::getCapturedVLAType;
    void  (::clang::FieldDecl::*method_pointer_3304df5f5c7659548aab4d8b05d05ae8)(class ::clang::VariableArrayType const *) = &::clang::FieldDecl::setCapturedVLAType;
    class ::clang::RecordDecl const * (::clang::FieldDecl::*method_pointer_c8df6249d5f357479a227cefa4c56779)() const = &::clang::FieldDecl::getParent;
    class ::clang::RecordDecl * (::clang::FieldDecl::*method_pointer_08132954844350e39f18cb51933c3d07)() = &::clang::FieldDecl::getParent;
    class ::clang::FieldDecl * (::clang::FieldDecl::*method_pointer_060f7975a40354bab3288de47b050031)() = &::clang::FieldDecl::getCanonicalDecl;
    class ::clang::FieldDecl const * (::clang::FieldDecl::*method_pointer_f8cc9bb9edbf5de18ef8b4d8960b52b7)() const = &::clang::FieldDecl::getCanonicalDecl;
    bool  (*method_pointer_0afa4fd563f656daa13d9a7ed551a5f9)(class ::clang::Decl const *) = ::clang::FieldDecl::classof;
    bool  (*method_pointer_110696eae10d5d0ebf6f92db4e1b1bf6)(enum ::clang::Decl::Kind ) = ::clang::FieldDecl::classofKind;
    boost::python::class_< class ::clang::FieldDecl, autowig::Held< class ::clang::FieldDecl >::Type, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_72a947d59e2e5194bab98d04fc2841fb("FieldDecl", "", boost::python::no_init);
    class_72a947d59e2e5194bab98d04fc2841fb.def("create_deserialized", method_pointer_3ae30625338d53879e7b6094f1dc366b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_field_index", method_pointer_34d47c7ba1b058ecad3cc05b62501b38, ":Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_mutable", method_pointer_79d0f35e58aa58a48a3d7b11fd608c2b, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_bit_field", method_pointer_11cf7bcd364e53e686e5a1bff9e0db00, "Determines whether this field is a bitfield.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_unnamed_bitfield", method_pointer_85635fda25c75c9ea0c4bf9e377dcdc7, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_72a947d59e2e5194bab98d04fc2841fb.def("is_anonymous_struct_or_union", method_pointer_b565294828455219bf938a54bf2e25b1, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_bit_width", method_pointer_eca8536f27bf5056bcbd927f4bb6f197, ":Return Type:\n    :cpp:any:`void`\n\n");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_in_class_initializer", method_pointer_aad5670aba055eb881f8657df919b036, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_72a947d59e2e5194bab98d04fc2841fb.def("remove_in_class_initializer", method_pointer_9eaebdf3aea4519ab6487cdec9e40cdc, ":Return Type:\n    :cpp:any:`void`\n\n");
    class_72a947d59e2e5194bab98d04fc2841fb.def("has_captured_vla_type", method_pointer_4f242c602a2157c6b371dfd50aceb473, "Determine whether this member captures the variable length array type.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_captured_vla_type", method_pointer_9591ff621ef1518281b22fa8a6fa2775, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Get the captured variable length array type.\n\n:Return Type:\n    :py:class:`clanglite.clang.VariableArrayType`\n\n");
    class_72a947d59e2e5194bab98d04fc2841fb.def("set_captured_vla_type", method_pointer_3304df5f5c7659548aab4d8b05d05ae8, "Set the captured variable length array type for this field.\n\n:Parameter:\n    `VLAType` (:py:class:`clanglite.clang.VariableArrayType`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_c8df6249d5f357479a227cefa4c56779, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.RecordDecl`\n\n");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_parent", method_pointer_08132954844350e39f18cb51933c3d07, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_060f7975a40354bab3288de47b050031, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.FieldDecl`\n\n");
    class_72a947d59e2e5194bab98d04fc2841fb.def("get_canonical_decl", method_pointer_f8cc9bb9edbf5de18ef8b4d8960b52b7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof", method_pointer_0afa4fd563f656daa13d9a7ed551a5f9, "");
    class_72a947d59e2e5194bab98d04fc2841fb.def("classof_kind", method_pointer_110696eae10d5d0ebf6f92db4e1b1bf6, "");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof_kind");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("create_deserialized");
    class_72a947d59e2e5194bab98d04fc2841fb.staticmethod("classof");

    if(autowig::Held< class ::clang::FieldDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::FieldDecl >::Type, autowig::Held< class ::clang::DeclaratorDecl >::Type >();
    }

}