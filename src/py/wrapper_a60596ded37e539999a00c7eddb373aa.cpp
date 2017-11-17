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
    template <> class ::clang::ExportDecl const volatile * get_pointer<class ::clang::ExportDecl const volatile >(class ::clang::ExportDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a60596ded37e539999a00c7eddb373aa()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ExportDecl * (*method_pointer_1cc9cbbba96e50b39bc9c380dab095a4)(class ::clang::ASTContext &, class ::clang::DeclContext *, class ::clang::SourceLocation ) = ::clang::ExportDecl::Create;
    class ::clang::ExportDecl * (*method_pointer_43385f3bda8251b183d7a4954b572b17)(class ::clang::ASTContext &, unsigned int ) = ::clang::ExportDecl::CreateDeserialized;
    class ::clang::SourceLocation  (::clang::ExportDecl::*method_pointer_d5ba3b5a51d3578786ad6d0b5e58a622)() const = &::clang::ExportDecl::getExportLoc;
    class ::clang::SourceLocation  (::clang::ExportDecl::*method_pointer_2c28d89a661253e49771ae49a77b7a2d)() const = &::clang::ExportDecl::getRBraceLoc;
    void  (::clang::ExportDecl::*method_pointer_e9d7eeb30f8e51a69e5192469a261503)(class ::clang::SourceLocation ) = &::clang::ExportDecl::setRBraceLoc;
    class ::clang::SourceLocation  (::clang::ExportDecl::*method_pointer_b90206a062da5e55a91b59fbca71f571)() const = &::clang::ExportDecl::getLocEnd;
    bool  (*method_pointer_a9bee5e33f705034a650029265b70be6)(class ::clang::Decl const *) = ::clang::ExportDecl::classof;
    bool  (*method_pointer_07e959c2e8ee59479c048085b1828695)(enum ::clang::Decl::Kind ) = ::clang::ExportDecl::classofKind;
    class ::clang::DeclContext * (*method_pointer_d8087fb1539b533abecb9bfc4a268bb5)(class ::clang::ExportDecl const *) = ::clang::ExportDecl::castToDeclContext;
    class ::clang::ExportDecl * (*method_pointer_25caf11557a55f6b859d71099d21b798)(class ::clang::DeclContext const *) = ::clang::ExportDecl::castFromDeclContext;
    boost::python::class_< class ::clang::ExportDecl, autowig::Held< class ::clang::ExportDecl >::Type, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_a60596ded37e539999a00c7eddb373aa("ExportDecl", "Represents a C++ Modules TS module export declaration.\n\nFor example:\n\n", boost::python::no_init);
    class_a60596ded37e539999a00c7eddb373aa.def("create", method_pointer_1cc9cbbba96e50b39bc9c380dab095a4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a60596ded37e539999a00c7eddb373aa.def("create_deserialized", method_pointer_43385f3bda8251b183d7a4954b572b17, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a60596ded37e539999a00c7eddb373aa.def("get_export_loc", method_pointer_d5ba3b5a51d3578786ad6d0b5e58a622, "");
    class_a60596ded37e539999a00c7eddb373aa.def("get_r_brace_loc", method_pointer_2c28d89a661253e49771ae49a77b7a2d, "");
    class_a60596ded37e539999a00c7eddb373aa.def("set_r_brace_loc", method_pointer_e9d7eeb30f8e51a69e5192469a261503, "");
    class_a60596ded37e539999a00c7eddb373aa.def("get_loc_end", method_pointer_b90206a062da5e55a91b59fbca71f571, "");
    class_a60596ded37e539999a00c7eddb373aa.def("classof", method_pointer_a9bee5e33f705034a650029265b70be6, "");
    class_a60596ded37e539999a00c7eddb373aa.def("classof_kind", method_pointer_07e959c2e8ee59479c048085b1828695, "");
    class_a60596ded37e539999a00c7eddb373aa.def("cast_to_decl_context", method_pointer_d8087fb1539b533abecb9bfc4a268bb5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a60596ded37e539999a00c7eddb373aa.def("cast_from_decl_context", method_pointer_25caf11557a55f6b859d71099d21b798, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a60596ded37e539999a00c7eddb373aa.staticmethod("cast_from_decl_context");
    class_a60596ded37e539999a00c7eddb373aa.staticmethod("cast_to_decl_context");
    class_a60596ded37e539999a00c7eddb373aa.staticmethod("create");
    class_a60596ded37e539999a00c7eddb373aa.staticmethod("classof_kind");
    class_a60596ded37e539999a00c7eddb373aa.staticmethod("classof");
    class_a60596ded37e539999a00c7eddb373aa.staticmethod("create_deserialized");

    if(autowig::Held< class ::clang::ExportDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::ExportDecl >::Type, autowig::Held< class ::clang::Decl >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::clang::ExportDecl >::Type, autowig::Held< class ::clang::DeclContext >::Type >();
    }

}