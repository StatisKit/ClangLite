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
    template <> class ::clang::MemberPointerType const volatile * get_pointer<class ::clang::MemberPointerType const volatile >(class ::clang::MemberPointerType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_8d01556e36c3546b8e1c01fbdb3d882d()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::QualType  (::clang::MemberPointerType::*method_pointer_2312c5863e1e5b8ea300ed2ca0e9c6d8)() const = &::clang::MemberPointerType::getPointeeType;
    bool  (::clang::MemberPointerType::*method_pointer_6e26f84b50eb5397a94f7d40d3c53d3e)() const = &::clang::MemberPointerType::isMemberFunctionPointer;
    bool  (::clang::MemberPointerType::*method_pointer_86ea463eb281550a9b20abc567441e68)() const = &::clang::MemberPointerType::isMemberDataPointer;
    class ::clang::Type const * (::clang::MemberPointerType::*method_pointer_da95e96e24a85a9784cf7bd8950cf3cc)() const = &::clang::MemberPointerType::getClass;
    class ::clang::CXXRecordDecl * (::clang::MemberPointerType::*method_pointer_0d08fa2be25b572d9718e05a6d3cc316)() const = &::clang::MemberPointerType::getMostRecentCXXRecordDecl;
    bool  (::clang::MemberPointerType::*method_pointer_2922d768a09a5046adb567daeed2305c)() const = &::clang::MemberPointerType::isSugared;
    class ::clang::QualType  (::clang::MemberPointerType::*method_pointer_c375c71eb4985eccb6a80cc07a575707)() const = &::clang::MemberPointerType::desugar;
    bool  (*method_pointer_35ed1d80743257938884b3484499193e)(class ::clang::Type const *) = ::clang::MemberPointerType::classof;
    boost::python::class_< class ::clang::MemberPointerType, autowig::Held< class ::clang::MemberPointerType >::Type, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_8d01556e36c3546b8e1c01fbdb3d882d("MemberPointerType", "", boost::python::no_init);
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("get_pointee_type", method_pointer_2312c5863e1e5b8ea300ed2ca0e9c6d8, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("is_member_function_pointer", method_pointer_6e26f84b50eb5397a94f7d40d3c53d3e, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("is_member_data_pointer", method_pointer_86ea463eb281550a9b20abc567441e68, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("get_class", method_pointer_da95e96e24a85a9784cf7bd8950cf3cc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("get_most_recent_cxx_record_decl", method_pointer_0d08fa2be25b572d9718e05a6d3cc316, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("is_sugared", method_pointer_2922d768a09a5046adb567daeed2305c, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("desugar", method_pointer_c375c71eb4985eccb6a80cc07a575707, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("classof", method_pointer_35ed1d80743257938884b3484499193e, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.staticmethod("classof");

    if(autowig::Held< class ::clang::MemberPointerType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::MemberPointerType >::Type, autowig::Held< class ::clang::Type >::Type >();
    }

}