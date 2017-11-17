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
    template <> class ::clang::IndirectFieldDecl const volatile * get_pointer<class ::clang::IndirectFieldDecl const volatile >(class ::clang::IndirectFieldDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_055e36c244395ee3a248c7839b4485ca()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::IndirectFieldDecl * (*method_pointer_a886f6fee3015bb4b341ad05704e4569)(class ::clang::ASTContext &, unsigned int ) = ::clang::IndirectFieldDecl::CreateDeserialized;
    unsigned int  (::clang::IndirectFieldDecl::*method_pointer_aaffc8f63d6e5c7cb8313fb8500f5d1a)() const = &::clang::IndirectFieldDecl::getChainingSize;
    class ::clang::FieldDecl * (::clang::IndirectFieldDecl::*method_pointer_75c2723a1b3b51ae9a949712b0a82b1e)() const = &::clang::IndirectFieldDecl::getAnonField;
    class ::clang::VarDecl * (::clang::IndirectFieldDecl::*method_pointer_2090896635f75fa881fa2b91a7e006c9)() const = &::clang::IndirectFieldDecl::getVarDecl;
    class ::clang::IndirectFieldDecl * (::clang::IndirectFieldDecl::*method_pointer_381f8c222fdb5b979e0b0c7bf78c6bbc)() = &::clang::IndirectFieldDecl::getCanonicalDecl;
    class ::clang::IndirectFieldDecl const * (::clang::IndirectFieldDecl::*method_pointer_0791d4323e4852d0a9b95994719ac80d)() const = &::clang::IndirectFieldDecl::getCanonicalDecl;
    bool  (*method_pointer_20a5982871cd59398677bf2d15aa4f49)(class ::clang::Decl const *) = ::clang::IndirectFieldDecl::classof;
    bool  (*method_pointer_9cd107317cef5e6a99765f8046e7727e)(enum ::clang::Decl::Kind ) = ::clang::IndirectFieldDecl::classofKind;
    boost::python::class_< class ::clang::IndirectFieldDecl, autowig::Held< class ::clang::IndirectFieldDecl >::Type, boost::python::bases< class ::clang::ValueDecl >, boost::noncopyable > class_055e36c244395ee3a248c7839b4485ca("IndirectFieldDecl", "", boost::python::no_init);
    class_055e36c244395ee3a248c7839b4485ca.def("create_deserialized", method_pointer_a886f6fee3015bb4b341ad05704e4569, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_chaining_size", method_pointer_aaffc8f63d6e5c7cb8313fb8500f5d1a, "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_anon_field", method_pointer_75c2723a1b3b51ae9a949712b0a82b1e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_var_decl", method_pointer_2090896635f75fa881fa2b91a7e006c9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_canonical_decl", method_pointer_381f8c222fdb5b979e0b0c7bf78c6bbc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.def("get_canonical_decl", method_pointer_0791d4323e4852d0a9b95994719ac80d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_055e36c244395ee3a248c7839b4485ca.def("classof", method_pointer_20a5982871cd59398677bf2d15aa4f49, "");
    class_055e36c244395ee3a248c7839b4485ca.def("classof_kind", method_pointer_9cd107317cef5e6a99765f8046e7727e, "");
    class_055e36c244395ee3a248c7839b4485ca.staticmethod("classof_kind");
    class_055e36c244395ee3a248c7839b4485ca.staticmethod("create_deserialized");
    class_055e36c244395ee3a248c7839b4485ca.staticmethod("classof");

    if(autowig::Held< class ::clang::IndirectFieldDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::IndirectFieldDecl >::Type, autowig::Held< class ::clang::ValueDecl >::Type >();
    }

}