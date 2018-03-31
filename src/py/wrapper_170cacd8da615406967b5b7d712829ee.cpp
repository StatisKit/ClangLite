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
    template <> class ::clang::FunctionTemplateDecl const volatile * get_pointer<class ::clang::FunctionTemplateDecl const volatile >(class ::clang::FunctionTemplateDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_170cacd8da615406967b5b7d712829ee()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    void  (::clang::FunctionTemplateDecl::*method_pointer_07e658462c875c48a75cf9c1fe151a87)() const = &::clang::FunctionTemplateDecl::LoadLazySpecializations;
    class ::clang::FunctionDecl * (::clang::FunctionTemplateDecl::*method_pointer_8b97df53407b512bb7ae6d8038314a0b)() const = &::clang::FunctionTemplateDecl::getTemplatedDecl;
    bool  (::clang::FunctionTemplateDecl::*method_pointer_741f0e28617353cc9cab5887153792f7)() const = &::clang::FunctionTemplateDecl::isThisDeclarationADefinition;
    class ::clang::FunctionTemplateDecl * (::clang::FunctionTemplateDecl::*method_pointer_1e69ff3aa9ea587a8991aa70d447c8a0)() = &::clang::FunctionTemplateDecl::getCanonicalDecl;
    class ::clang::FunctionTemplateDecl const * (::clang::FunctionTemplateDecl::*method_pointer_7a8d1a99c0b75186b999aa13fb702162)() const = &::clang::FunctionTemplateDecl::getCanonicalDecl;
    class ::clang::FunctionTemplateDecl * (::clang::FunctionTemplateDecl::*method_pointer_6447bed6e7f75a93b3237a5937ce1361)() = &::clang::FunctionTemplateDecl::getPreviousDecl;
    class ::clang::FunctionTemplateDecl const * (::clang::FunctionTemplateDecl::*method_pointer_b6cb4f42097a5ee6a79912493be9f6d6)() const = &::clang::FunctionTemplateDecl::getPreviousDecl;
    class ::clang::FunctionTemplateDecl * (::clang::FunctionTemplateDecl::*method_pointer_c831a976e0995c66bda3f276fa7bfde9)() = &::clang::FunctionTemplateDecl::getMostRecentDecl;
    class ::clang::FunctionTemplateDecl const * (::clang::FunctionTemplateDecl::*method_pointer_f6dc8290c58a55e3bb72dc50a8436b91)() const = &::clang::FunctionTemplateDecl::getMostRecentDecl;
    class ::clang::FunctionTemplateDecl * (::clang::FunctionTemplateDecl::*method_pointer_d9c33e789b66576290fc99749a1d9db2)() const = &::clang::FunctionTemplateDecl::getInstantiatedFromMemberTemplate;
    class ::clang::FunctionTemplateDecl * (*method_pointer_1aa0bf8c011d52918b3086f3b387fbfc)(class ::clang::ASTContext &, unsigned int ) = ::clang::FunctionTemplateDecl::CreateDeserialized;
    bool  (*method_pointer_ec8e2de8b65d5585bf38a81b41501d30)(class ::clang::Decl const *) = ::clang::FunctionTemplateDecl::classof;
    bool  (*method_pointer_75074d7c261e514fad79157b259a6074)(enum ::clang::Decl::Kind ) = ::clang::FunctionTemplateDecl::classofKind;
    boost::python::class_< class ::clang::FunctionTemplateDecl, autowig::Held< class ::clang::FunctionTemplateDecl >::Type, boost::python::bases< class ::clang::RedeclarableTemplateDecl >, boost::noncopyable > class_170cacd8da615406967b5b7d712829ee("FunctionTemplateDecl", "", boost::python::no_init);
    class_170cacd8da615406967b5b7d712829ee.def("load_lazy_specializations", method_pointer_07e658462c875c48a75cf9c1fe151a87, "Load any lazily-loaded specializations from the external source.\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_170cacd8da615406967b5b7d712829ee.def("get_templated_decl", method_pointer_8b97df53407b512bb7ae6d8038314a0b, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.FunctionDecl`\n\n");
    class_170cacd8da615406967b5b7d712829ee.def("is_this_declaration_a_definition", method_pointer_741f0e28617353cc9cab5887153792f7, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_170cacd8da615406967b5b7d712829ee.def("get_canonical_decl", method_pointer_1e69ff3aa9ea587a8991aa70d447c8a0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_canonical_decl", method_pointer_7a8d1a99c0b75186b999aa13fb702162, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_previous_decl", method_pointer_6447bed6e7f75a93b3237a5937ce1361, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieve the previous declaration of this function template, or NULL if\nno such declaration exists.\n\n:Return Type:\n    :py:class:`clanglite.clang.FunctionTemplateDecl`\n\n");
    class_170cacd8da615406967b5b7d712829ee.def("get_previous_decl", method_pointer_b6cb4f42097a5ee6a79912493be9f6d6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieve the previous declaration of this function template, or NULL if\nno such declaration exists.\n\n:Return Type:\n    :py:class:`clanglite.clang.FunctionTemplateDecl`\n\n");
    class_170cacd8da615406967b5b7d712829ee.def("get_most_recent_decl", method_pointer_c831a976e0995c66bda3f276fa7bfde9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_most_recent_decl", method_pointer_f6dc8290c58a55e3bb72dc50a8436b91, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("get_instantiated_from_member_template", method_pointer_d9c33e789b66576290fc99749a1d9db2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_170cacd8da615406967b5b7d712829ee.def("create_deserialized", method_pointer_1aa0bf8c011d52918b3086f3b387fbfc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Create an empty function template node.\n\n:Parameters:\n  - `C` (:py:class:`clanglite.clang.ASTContext`) - Undocumented\n  - `ID` (:cpp:any:`unsigned` int) - Undocumented\n\n:Return Type:\n    :py:class:`clanglite.clang.FunctionTemplateDecl`\n\n");
    class_170cacd8da615406967b5b7d712829ee.def("classof", method_pointer_ec8e2de8b65d5585bf38a81b41501d30, "");
    class_170cacd8da615406967b5b7d712829ee.def("classof_kind", method_pointer_75074d7c261e514fad79157b259a6074, "");
    class_170cacd8da615406967b5b7d712829ee.staticmethod("classof_kind");
    class_170cacd8da615406967b5b7d712829ee.staticmethod("create_deserialized");
    class_170cacd8da615406967b5b7d712829ee.staticmethod("classof");

    if(autowig::Held< class ::clang::FunctionTemplateDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::FunctionTemplateDecl >::Type, autowig::Held< class ::clang::RedeclarableTemplateDecl >::Type >();
    }

}