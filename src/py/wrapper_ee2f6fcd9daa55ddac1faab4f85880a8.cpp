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
    template <> class ::clang::ClassScopeFunctionSpecializationDecl const volatile * get_pointer<class ::clang::ClassScopeFunctionSpecializationDecl const volatile >(class ::clang::ClassScopeFunctionSpecializationDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ee2f6fcd9daa55ddac1faab4f85880a8()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::CXXMethodDecl * (::clang::ClassScopeFunctionSpecializationDecl::*method_pointer_38437ec3277654c8a69450f4e53bf048)() const = &::clang::ClassScopeFunctionSpecializationDecl::getSpecialization;
    bool  (::clang::ClassScopeFunctionSpecializationDecl::*method_pointer_8d728074f4105ca6a5b5149d7497b420)() const = &::clang::ClassScopeFunctionSpecializationDecl::hasExplicitTemplateArgs;
    class ::clang::ClassScopeFunctionSpecializationDecl * (*method_pointer_40a50a683c3b52e69f880090fde178c1)(class ::clang::ASTContext &, unsigned int ) = ::clang::ClassScopeFunctionSpecializationDecl::CreateDeserialized;
    bool  (*method_pointer_05b77dabb1cd5d6590df8ed269e2591f)(class ::clang::Decl const *) = ::clang::ClassScopeFunctionSpecializationDecl::classof;
    bool  (*method_pointer_12845d4376a352f5bb1259b0f8ec055f)(enum ::clang::Decl::Kind ) = ::clang::ClassScopeFunctionSpecializationDecl::classofKind;
    boost::python::class_< class ::clang::ClassScopeFunctionSpecializationDecl, autowig::Held< class ::clang::ClassScopeFunctionSpecializationDecl >::Type, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_ee2f6fcd9daa55ddac1faab4f85880a8("ClassScopeFunctionSpecializationDecl", "Declaration of a function specialization at template class scope.\n\nThis is a non-standard extension needed to support MSVC.\n\nFor example:\n\n", boost::python::no_init);
    class_ee2f6fcd9daa55ddac1faab4f85880a8.def("get_specialization", method_pointer_38437ec3277654c8a69450f4e53bf048, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.def("has_explicit_template_args", method_pointer_8d728074f4105ca6a5b5149d7497b420, "");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.def("create_deserialized", method_pointer_40a50a683c3b52e69f880090fde178c1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.def("classof", method_pointer_05b77dabb1cd5d6590df8ed269e2591f, "");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.def("classof_kind", method_pointer_12845d4376a352f5bb1259b0f8ec055f, "");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.staticmethod("classof_kind");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.staticmethod("create_deserialized");
    class_ee2f6fcd9daa55ddac1faab4f85880a8.staticmethod("classof");

    if(autowig::Held< class ::clang::ClassScopeFunctionSpecializationDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::ClassScopeFunctionSpecializationDecl >::Type, autowig::Held< class ::clang::Decl >::Type >();
    }

}