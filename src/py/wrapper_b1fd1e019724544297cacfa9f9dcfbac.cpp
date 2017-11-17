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
    template <> class ::clang::NonTypeTemplateParmDecl const volatile * get_pointer<class ::clang::NonTypeTemplateParmDecl const volatile >(class ::clang::NonTypeTemplateParmDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_b1fd1e019724544297cacfa9f9dcfbac()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::NonTypeTemplateParmDecl * (*method_pointer_79bdab9d1b9d585184632a589f01bdd4)(class ::clang::ASTContext &, unsigned int ) = ::clang::NonTypeTemplateParmDecl::CreateDeserialized;
    class ::clang::NonTypeTemplateParmDecl * (*method_pointer_461bb2741aab528e9608090cc8863eb9)(class ::clang::ASTContext &, unsigned int , unsigned int ) = ::clang::NonTypeTemplateParmDecl::CreateDeserialized;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_09b602d8bb5f59a79d14769ff737e078)() const = &::clang::NonTypeTemplateParmDecl::hasDefaultArgument;
    class ::clang::SourceLocation  (::clang::NonTypeTemplateParmDecl::*method_pointer_bf8cf7a3a1df5d1096d77f589a90cd22)() const = &::clang::NonTypeTemplateParmDecl::getDefaultArgumentLoc;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_c93e5b7bffbb563fb08bf9b3e1d51073)() const = &::clang::NonTypeTemplateParmDecl::defaultArgumentWasInherited;
    void  (::clang::NonTypeTemplateParmDecl::*method_pointer_5e018c278b765bbc98d71b41636804c9)() = &::clang::NonTypeTemplateParmDecl::removeDefaultArgument;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_0853313d7c135b9e8fe531e9846b8e18)() const = &::clang::NonTypeTemplateParmDecl::isParameterPack;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_5251b6702d7f5a4a989c910cfc277918)() const = &::clang::NonTypeTemplateParmDecl::isPackExpansion;
    bool  (::clang::NonTypeTemplateParmDecl::*method_pointer_98eb4443db315aa8ab3c65411e454a10)() const = &::clang::NonTypeTemplateParmDecl::isExpandedParameterPack;
    unsigned int  (::clang::NonTypeTemplateParmDecl::*method_pointer_6796c3e9586c513a86860517e97e6bfb)() const = &::clang::NonTypeTemplateParmDecl::getNumExpansionTypes;
    class ::clang::QualType  (::clang::NonTypeTemplateParmDecl::*method_pointer_6c73bd08544d5adb99b9352db7434806)(unsigned int ) const = &::clang::NonTypeTemplateParmDecl::getExpansionType;
    bool  (*method_pointer_858e9a2bc4e15d0cb47b0a7f613714cc)(class ::clang::Decl const *) = ::clang::NonTypeTemplateParmDecl::classof;
    bool  (*method_pointer_ebe00001997a58fd960a8483ad9d1fc4)(enum ::clang::Decl::Kind ) = ::clang::NonTypeTemplateParmDecl::classofKind;
    boost::python::class_< class ::clang::NonTypeTemplateParmDecl, autowig::Held< class ::clang::NonTypeTemplateParmDecl >::Type, boost::python::bases< class ::clang::DeclaratorDecl >, boost::noncopyable > class_b1fd1e019724544297cacfa9f9dcfbac("NonTypeTemplateParmDecl", "", boost::python::no_init);
    class_b1fd1e019724544297cacfa9f9dcfbac.def("create_deserialized", method_pointer_79bdab9d1b9d585184632a589f01bdd4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("create_deserialized", method_pointer_461bb2741aab528e9608090cc8863eb9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("has_default_argument", method_pointer_09b602d8bb5f59a79d14769ff737e078, "Determine whether this template parameter has a default argument.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("get_default_argument_loc", method_pointer_bf8cf7a3a1df5d1096d77f589a90cd22, "Retrieve the location of the default argument, if any.\n\n:Return Type:\n    :py:class:`clanglite.clang.SourceLocation`\n\n");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("default_argument_was_inherited", method_pointer_c93e5b7bffbb563fb08bf9b3e1d51073, "Determines whether the default argument was inherited from a previous\ndeclaration of this template.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("remove_default_argument", method_pointer_5e018c278b765bbc98d71b41636804c9, "Removes the default argument of this template parameter.\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("is_parameter_pack", method_pointer_0853313d7c135b9e8fe531e9846b8e18, "Whether this parameter is a non-type template parameter pack.\n\nIf the parameter is a parameter pack, the type may be a\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("is_pack_expansion", method_pointer_5251b6702d7f5a4a989c910cfc277918, "Whether this parameter pack is a pack expansion.\n\nA non-type template parameter pack is a pack expansion if its type\ncontains an unexpanded parameter pack. In this case, we will have built\na PackExpansionType wrapping the type.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("is_expanded_parameter_pack", method_pointer_98eb4443db315aa8ab3c65411e454a10, "Whether this parameter is a non-type template parameter pack that has a\nknown list of different types at different positions.\n\nA parameter pack is an expanded parameter pack when the original\nparameter pack's type was itself a pack expansion, and that expansion\nhas already been expanded. For example, given:\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("get_num_expansion_types", method_pointer_6796c3e9586c513a86860517e97e6bfb, "Retrieves the number of expansion types in an expanded parameter pack.\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("get_expansion_type", method_pointer_6c73bd08544d5adb99b9352db7434806, "Retrieve a particular expansion type within an expanded parameter pack.\n\n:Parameter:\n    `I` (:cpp:any:`unsigned` int) - Undocumented\n\n:Return Type:\n    :py:class:`clanglite.clang.QualType`\n\n");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("classof", method_pointer_858e9a2bc4e15d0cb47b0a7f613714cc, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.def("classof_kind", method_pointer_ebe00001997a58fd960a8483ad9d1fc4, "");
    class_b1fd1e019724544297cacfa9f9dcfbac.staticmethod("classof_kind");
    class_b1fd1e019724544297cacfa9f9dcfbac.staticmethod("create_deserialized");
    class_b1fd1e019724544297cacfa9f9dcfbac.staticmethod("classof");

    if(autowig::Held< class ::clang::NonTypeTemplateParmDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::NonTypeTemplateParmDecl >::Type, autowig::Held< class ::clang::DeclaratorDecl >::Type >();
    }

}