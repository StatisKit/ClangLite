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
    template <> class ::clang::LabelDecl const volatile * get_pointer<class ::clang::LabelDecl const volatile >(class ::clang::LabelDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_1fef548e459e5e63a7da47f30a93388e()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::LabelDecl * (*method_pointer_700fcfe65c3154d69ea70ebbfcb0fc48)(class ::clang::ASTContext &, unsigned int ) = ::clang::LabelDecl::CreateDeserialized;
    bool  (::clang::LabelDecl::*method_pointer_7b7acecd7b61526f9ce00b2f6666d59a)() const = &::clang::LabelDecl::isGnuLocal;
    void  (::clang::LabelDecl::*method_pointer_4f81f211539757deac8e89b937eafa7b)(class ::clang::SourceLocation ) = &::clang::LabelDecl::setLocStart;
    bool  (::clang::LabelDecl::*method_pointer_3a8cc3196ae95332b6667a5a346b408c)() const = &::clang::LabelDecl::isMSAsmLabel;
    bool  (::clang::LabelDecl::*method_pointer_8b1d4dfc96c95372914dd88ed3d1ae22)() const = &::clang::LabelDecl::isResolvedMSAsmLabel;
    void  (::clang::LabelDecl::*method_pointer_7ed1bfe203f350a6b0bdc0eed39d9ea8)(class ::llvm::StringRef ) = &::clang::LabelDecl::setMSAsmLabel;
    class ::llvm::StringRef  (::clang::LabelDecl::*method_pointer_50808ea71b7e57bf87bbeef880a7d399)() const = &::clang::LabelDecl::getMSAsmLabel;
    void  (::clang::LabelDecl::*method_pointer_93323077c03d5db08fc761650151f23a)() = &::clang::LabelDecl::setMSAsmLabelResolved;
    bool  (*method_pointer_e2fb4a8d1a165c1996da4bce6a930325)(class ::clang::Decl const *) = ::clang::LabelDecl::classof;
    bool  (*method_pointer_bb2d7350e4065ba9b961db310d043fd9)(enum ::clang::Decl::Kind ) = ::clang::LabelDecl::classofKind;
    boost::python::class_< class ::clang::LabelDecl, autowig::Held< class ::clang::LabelDecl >::Type, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_1fef548e459e5e63a7da47f30a93388e("LabelDecl", "", boost::python::no_init);
    class_1fef548e459e5e63a7da47f30a93388e.def("create_deserialized", method_pointer_700fcfe65c3154d69ea70ebbfcb0fc48, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_1fef548e459e5e63a7da47f30a93388e.def("is_gnu_local", method_pointer_7b7acecd7b61526f9ce00b2f6666d59a, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("set_loc_start", method_pointer_4f81f211539757deac8e89b937eafa7b, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("is_ms_asm_label", method_pointer_3a8cc3196ae95332b6667a5a346b408c, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("is_resolved_ms_asm_label", method_pointer_8b1d4dfc96c95372914dd88ed3d1ae22, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("set_ms_asm_label", method_pointer_7ed1bfe203f350a6b0bdc0eed39d9ea8, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("get_ms_asm_label", method_pointer_50808ea71b7e57bf87bbeef880a7d399, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("set_ms_asm_label_resolved", method_pointer_93323077c03d5db08fc761650151f23a, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("classof", method_pointer_e2fb4a8d1a165c1996da4bce6a930325, "");
    class_1fef548e459e5e63a7da47f30a93388e.def("classof_kind", method_pointer_bb2d7350e4065ba9b961db310d043fd9, "");
    class_1fef548e459e5e63a7da47f30a93388e.staticmethod("classof_kind");
    class_1fef548e459e5e63a7da47f30a93388e.staticmethod("create_deserialized");
    class_1fef548e459e5e63a7da47f30a93388e.staticmethod("classof");

    if(autowig::Held< class ::clang::LabelDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::LabelDecl >::Type, autowig::Held< class ::clang::NamedDecl >::Type >();
    }

}