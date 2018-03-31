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
    template <> class ::clang::FriendDecl const volatile * get_pointer<class ::clang::FriendDecl const volatile >(class ::clang::FriendDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_902a9bb2e95657b784deb3b4e5d5526b()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::FriendDecl * (*method_pointer_313d62f5e1155c27a374d262d1d0cf10)(class ::clang::ASTContext &, unsigned int , unsigned int ) = ::clang::FriendDecl::CreateDeserialized;
    unsigned int  (::clang::FriendDecl::*method_pointer_64f9b69545bb5b55be711fb798e02a8f)() const = &::clang::FriendDecl::getFriendTypeNumTemplateParameterLists;
    class ::clang::NamedDecl * (::clang::FriendDecl::*method_pointer_9d0769e1c5a95ef1bbd3f3ce2053e7df)() const = &::clang::FriendDecl::getFriendDecl;
    class ::clang::SourceLocation  (::clang::FriendDecl::*method_pointer_abd897004ca95fbf89204c2891b614bb)() const = &::clang::FriendDecl::getFriendLoc;
    bool  (::clang::FriendDecl::*method_pointer_9e33cbbfc29f57ecbd64aeef13b5429c)() const = &::clang::FriendDecl::isUnsupportedFriend;
    void  (::clang::FriendDecl::*method_pointer_b8260f1b5684520db53ab443ff976b0c)(bool ) = &::clang::FriendDecl::setUnsupportedFriend;
    bool  (*method_pointer_9c6213a019b65e60ad27d703fbd785c5)(class ::clang::Decl const *) = ::clang::FriendDecl::classof;
    bool  (*method_pointer_81efb23d1246509e8074c1574b4f25f1)(enum ::clang::Decl::Kind ) = ::clang::FriendDecl::classofKind;
    boost::python::class_< class ::clang::FriendDecl, autowig::Held< class ::clang::FriendDecl >::Type, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_902a9bb2e95657b784deb3b4e5d5526b("FriendDecl", "", boost::python::no_init);
    class_902a9bb2e95657b784deb3b4e5d5526b.def("create_deserialized", method_pointer_313d62f5e1155c27a374d262d1d0cf10, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("get_friend_type_num_template_parameter_lists", method_pointer_64f9b69545bb5b55be711fb798e02a8f, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("get_friend_decl", method_pointer_9d0769e1c5a95ef1bbd3f3ce2053e7df, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.NamedDecl`\n\n");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("get_friend_loc", method_pointer_abd897004ca95fbf89204c2891b614bb, ":Return Type:\n    :py:class:`clanglite.clang.SourceLocation`\n\n");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("is_unsupported_friend", method_pointer_9e33cbbfc29f57ecbd64aeef13b5429c, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("set_unsupported_friend", method_pointer_b8260f1b5684520db53ab443ff976b0c, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("classof", method_pointer_9c6213a019b65e60ad27d703fbd785c5, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.def("classof_kind", method_pointer_81efb23d1246509e8074c1574b4f25f1, "");
    class_902a9bb2e95657b784deb3b4e5d5526b.staticmethod("classof_kind");
    class_902a9bb2e95657b784deb3b4e5d5526b.staticmethod("create_deserialized");
    class_902a9bb2e95657b784deb3b4e5d5526b.staticmethod("classof");

    if(autowig::Held< class ::clang::FriendDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::FriendDecl >::Type, autowig::Held< class ::clang::Decl >::Type >();
    }

}