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
    template <> class ::clang::UsingShadowDecl const volatile * get_pointer<class ::clang::UsingShadowDecl const volatile >(class ::clang::UsingShadowDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_8ed765a365325afd812394a92e49d498()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::UsingShadowDecl * (*method_pointer_ab165a2b9f555eea93e0daf9dea8711b)(class ::clang::ASTContext &, class ::clang::DeclContext *, class ::clang::SourceLocation , class ::clang::UsingDecl *, class ::clang::NamedDecl *) = ::clang::UsingShadowDecl::Create;
    class ::clang::UsingShadowDecl * (*method_pointer_956b2972581c5a0a8c67f5e99b8fbd7d)(class ::clang::ASTContext &, unsigned int ) = ::clang::UsingShadowDecl::CreateDeserialized;
    class ::clang::UsingShadowDecl * (::clang::UsingShadowDecl::*method_pointer_7eea10668e605bcf8fe9e603fe3391b7)() = &::clang::UsingShadowDecl::getCanonicalDecl;
    class ::clang::UsingShadowDecl const * (::clang::UsingShadowDecl::*method_pointer_28670bc7d400527a9b3cb3736611ff46)() const = &::clang::UsingShadowDecl::getCanonicalDecl;
    class ::clang::NamedDecl * (::clang::UsingShadowDecl::*method_pointer_9d109885e6d75cd7b34f0a220943aa8f)() const = &::clang::UsingShadowDecl::getTargetDecl;
    void  (::clang::UsingShadowDecl::*method_pointer_5ff8d916fa3b5825835084c2fc5b832d)(class ::clang::NamedDecl *) = &::clang::UsingShadowDecl::setTargetDecl;
    class ::clang::UsingDecl * (::clang::UsingShadowDecl::*method_pointer_6e02fbd1249653a6bd687e882786e921)() const = &::clang::UsingShadowDecl::getUsingDecl;
    class ::clang::UsingShadowDecl * (::clang::UsingShadowDecl::*method_pointer_2b62529882545bd5969cfbefc13553a8)() const = &::clang::UsingShadowDecl::getNextUsingShadowDecl;
    bool  (*method_pointer_de2c137bcfb552189e09c4a983129224)(class ::clang::Decl const *) = ::clang::UsingShadowDecl::classof;
    bool  (*method_pointer_ecff7f40a4e458e5a1ebb9e899cc97ec)(enum ::clang::Decl::Kind ) = ::clang::UsingShadowDecl::classofKind;
    boost::python::class_< class ::clang::UsingShadowDecl, autowig::Held< class ::clang::UsingShadowDecl >::Type, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_8ed765a365325afd812394a92e49d498("UsingShadowDecl", "Represents a shadow declaration introduced into a scope by a (resolved)\nusing declaration.\n\nFor example,\n\n", boost::python::no_init);
    class_8ed765a365325afd812394a92e49d498.def("create", method_pointer_ab165a2b9f555eea93e0daf9dea8711b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("create_deserialized", method_pointer_956b2972581c5a0a8c67f5e99b8fbd7d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("get_canonical_decl", method_pointer_7eea10668e605bcf8fe9e603fe3391b7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("get_canonical_decl", method_pointer_28670bc7d400527a9b3cb3736611ff46, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8ed765a365325afd812394a92e49d498.def("get_target_decl", method_pointer_9d109885e6d75cd7b34f0a220943aa8f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Gets the underlying declaration which has been brought into the local\nscope.\n\n:Return Type:\n    :py:class:`clanglite.clang.NamedDecl`\n\n");
    class_8ed765a365325afd812394a92e49d498.def("set_target_decl", method_pointer_5ff8d916fa3b5825835084c2fc5b832d, "Sets the underlying declaration which has been brought into the local\nscope.\n\n:Parameter:\n    `ND` (:py:class:`clanglite.clang.NamedDecl`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_8ed765a365325afd812394a92e49d498.def("get_using_decl", method_pointer_6e02fbd1249653a6bd687e882786e921, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Gets the using declaration to which this declaration is tied.\n\n:Return Type:\n    :py:class:`clanglite.clang.UsingDecl`\n\n");
    class_8ed765a365325afd812394a92e49d498.def("get_next_using_shadow_decl", method_pointer_2b62529882545bd5969cfbefc13553a8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "The next using shadow declaration contained in the shadow decl chain of\nthe using declaration which introduced this decl.\n\n:Return Type:\n    :py:class:`clanglite.clang.UsingShadowDecl`\n\n");
    class_8ed765a365325afd812394a92e49d498.def("classof", method_pointer_de2c137bcfb552189e09c4a983129224, "");
    class_8ed765a365325afd812394a92e49d498.def("classof_kind", method_pointer_ecff7f40a4e458e5a1ebb9e899cc97ec, "");
    class_8ed765a365325afd812394a92e49d498.staticmethod("classof_kind");
    class_8ed765a365325afd812394a92e49d498.staticmethod("create");
    class_8ed765a365325afd812394a92e49d498.staticmethod("create_deserialized");
    class_8ed765a365325afd812394a92e49d498.staticmethod("classof");

    if(autowig::Held< class ::clang::UsingShadowDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::UsingShadowDecl >::Type, autowig::Held< class ::clang::NamedDecl >::Type >();
    }

}