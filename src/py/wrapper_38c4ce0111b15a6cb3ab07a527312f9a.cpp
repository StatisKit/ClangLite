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
    template <> class ::clang::ObjCCategoryDecl const volatile * get_pointer<class ::clang::ObjCCategoryDecl const volatile >(class ::clang::ObjCCategoryDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_38c4ce0111b15a6cb3ab07a527312f9a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCCategoryDecl * (*method_pointer_0442d9709e9958449a30611bd66f27e5)(class ::clang::ASTContext &, unsigned int ) = ::clang::ObjCCategoryDecl::CreateDeserialized;
    class ::clang::ObjCInterfaceDecl * (::clang::ObjCCategoryDecl::*method_pointer_673b60952c00574585001bd17397f6c6)() = &::clang::ObjCCategoryDecl::getClassInterface;
    class ::clang::ObjCInterfaceDecl const * (::clang::ObjCCategoryDecl::*method_pointer_a042f411d7385683abc1a4a89b24d106)() const = &::clang::ObjCCategoryDecl::getClassInterface;
    class ::clang::ObjCCategoryImplDecl * (::clang::ObjCCategoryDecl::*method_pointer_49fb0b54f2a1531c9b37dc386eabdf62)() const = &::clang::ObjCCategoryDecl::getImplementation;
    void  (::clang::ObjCCategoryDecl::*method_pointer_f9e48bd439215815a01777903b9ff3d3)(class ::clang::ObjCCategoryImplDecl *) = &::clang::ObjCCategoryDecl::setImplementation;
    unsigned int  (::clang::ObjCCategoryDecl::*method_pointer_e4b521db741e5e1ab5377f5d8c8781e8)() const = &::clang::ObjCCategoryDecl::protocol_size;
    ::clang::ObjCCategoryDecl::protocol_loc_iterator  (::clang::ObjCCategoryDecl::*method_pointer_8842687fba5650bea968b24c8e101159)() const = &::clang::ObjCCategoryDecl::protocol_loc_begin;
    ::clang::ObjCCategoryDecl::protocol_loc_iterator  (::clang::ObjCCategoryDecl::*method_pointer_e99dfc4ff5b7557681ef44376f9dfddb)() const = &::clang::ObjCCategoryDecl::protocol_loc_end;
    class ::clang::ObjCCategoryDecl * (::clang::ObjCCategoryDecl::*method_pointer_0faa6b4747d556dca25e9fa1849b559b)() const = &::clang::ObjCCategoryDecl::getNextClassCategory;
    class ::clang::ObjCCategoryDecl * (::clang::ObjCCategoryDecl::*method_pointer_6e87af9cd96a5b9fb5acfb907ee3031f)() const = &::clang::ObjCCategoryDecl::getNextClassCategoryRaw;
    bool  (::clang::ObjCCategoryDecl::*method_pointer_2f2fdb55a5ec5834956be89416072577)() const = &::clang::ObjCCategoryDecl::IsClassExtension;
    unsigned int  (::clang::ObjCCategoryDecl::*method_pointer_dfa3b15a37a15cb28b69e12ce1d45c95)() const = &::clang::ObjCCategoryDecl::ivar_size;
    bool  (::clang::ObjCCategoryDecl::*method_pointer_2809bb94ad5153f6b3ab3229caff723b)() const = &::clang::ObjCCategoryDecl::ivar_empty;
    class ::clang::SourceLocation  (::clang::ObjCCategoryDecl::*method_pointer_1a609a3cac7254759d919996ac4d281a)() const = &::clang::ObjCCategoryDecl::getCategoryNameLoc;
    void  (::clang::ObjCCategoryDecl::*method_pointer_17a2ae0eebf5599b95d4e8e073185c75)(class ::clang::SourceLocation ) = &::clang::ObjCCategoryDecl::setCategoryNameLoc;
    void  (::clang::ObjCCategoryDecl::*method_pointer_6c34006901b45a6eac5c26bc6413e447)(class ::clang::SourceLocation ) = &::clang::ObjCCategoryDecl::setIvarLBraceLoc;
    class ::clang::SourceLocation  (::clang::ObjCCategoryDecl::*method_pointer_70b83f0836415cafa4e6c941505ebe11)() const = &::clang::ObjCCategoryDecl::getIvarLBraceLoc;
    void  (::clang::ObjCCategoryDecl::*method_pointer_1abe9d718a2b5113a2d9a50bc0c20bc4)(class ::clang::SourceLocation ) = &::clang::ObjCCategoryDecl::setIvarRBraceLoc;
    class ::clang::SourceLocation  (::clang::ObjCCategoryDecl::*method_pointer_13e5047d7dbb563fa6d184b2ee35bebd)() const = &::clang::ObjCCategoryDecl::getIvarRBraceLoc;
    bool  (*method_pointer_4b71c612acf65cb18a5c6cea40b6254d)(class ::clang::Decl const *) = ::clang::ObjCCategoryDecl::classof;
    bool  (*method_pointer_e9be313a12cd50f7b8a770bec99e6b15)(enum ::clang::Decl::Kind ) = ::clang::ObjCCategoryDecl::classofKind;
    boost::python::class_< class ::clang::ObjCCategoryDecl, autowig::Held< class ::clang::ObjCCategoryDecl >::Type, boost::python::bases< class ::clang::ObjCContainerDecl >, boost::noncopyable > class_38c4ce0111b15a6cb3ab07a527312f9a("ObjCCategoryDecl", "", boost::python::no_init);
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("create_deserialized", method_pointer_0442d9709e9958449a30611bd66f27e5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_class_interface", method_pointer_673b60952c00574585001bd17397f6c6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_class_interface", method_pointer_a042f411d7385683abc1a4a89b24d106, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_implementation", method_pointer_49fb0b54f2a1531c9b37dc386eabdf62, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("set_implementation", method_pointer_f9e48bd439215815a01777903b9ff3d3, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("protocol_size", method_pointer_e4b521db741e5e1ab5377f5d8c8781e8, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("protocol_loc_begin", method_pointer_8842687fba5650bea968b24c8e101159, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("protocol_loc_end", method_pointer_e99dfc4ff5b7557681ef44376f9dfddb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_next_class_category", method_pointer_0faa6b4747d556dca25e9fa1849b559b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_next_class_category_raw", method_pointer_6e87af9cd96a5b9fb5acfb907ee3031f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieve the pointer to the next stored category (or extension), which\nmay be hidden.\n\n:Return Type:\n    :py:class:`clanglite.clang.ObjCCategoryDecl`\n\n");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("is_class_extension", method_pointer_2f2fdb55a5ec5834956be89416072577, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("ivar_size", method_pointer_dfa3b15a37a15cb28b69e12ce1d45c95, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("ivar_empty", method_pointer_2809bb94ad5153f6b3ab3229caff723b, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_category_name_loc", method_pointer_1a609a3cac7254759d919996ac4d281a, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("set_category_name_loc", method_pointer_17a2ae0eebf5599b95d4e8e073185c75, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("set_ivar_l_brace_loc", method_pointer_6c34006901b45a6eac5c26bc6413e447, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_ivar_l_brace_loc", method_pointer_70b83f0836415cafa4e6c941505ebe11, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("set_ivar_r_brace_loc", method_pointer_1abe9d718a2b5113a2d9a50bc0c20bc4, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_ivar_r_brace_loc", method_pointer_13e5047d7dbb563fa6d184b2ee35bebd, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("classof", method_pointer_4b71c612acf65cb18a5c6cea40b6254d, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("classof_kind", method_pointer_e9be313a12cd50f7b8a770bec99e6b15, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.staticmethod("classof_kind");
    class_38c4ce0111b15a6cb3ab07a527312f9a.staticmethod("create_deserialized");
    class_38c4ce0111b15a6cb3ab07a527312f9a.staticmethod("classof");

    if(autowig::Held< class ::clang::ObjCCategoryDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::ObjCCategoryDecl >::Type, autowig::Held< class ::clang::ObjCContainerDecl >::Type >();
    }

}