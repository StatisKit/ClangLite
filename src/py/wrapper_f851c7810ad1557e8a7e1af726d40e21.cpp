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
    template <> class ::clang::ConstantArrayType const volatile * get_pointer<class ::clang::ConstantArrayType const volatile >(class ::clang::ConstantArrayType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f851c7810ad1557e8a7e1af726d40e21()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::ConstantArrayType::*method_pointer_80541c3ebe145f59b6f7608c856cb1f3)() const = &::clang::ConstantArrayType::isSugared;
    class ::clang::QualType  (::clang::ConstantArrayType::*method_pointer_fbc2e7f4543d584a904fb8834cc5b698)() const = &::clang::ConstantArrayType::desugar;
    bool  (*method_pointer_8f70bd4f364656b9b53df83b653acc78)(class ::clang::Type const *) = ::clang::ConstantArrayType::classof;
    boost::python::class_< class ::clang::ConstantArrayType, autowig::Held< class ::clang::ConstantArrayType >::Type, boost::python::bases< class ::clang::ArrayType >, boost::noncopyable > class_f851c7810ad1557e8a7e1af726d40e21("ConstantArrayType", "", boost::python::no_init);
    class_f851c7810ad1557e8a7e1af726d40e21.def("is_sugared", method_pointer_80541c3ebe145f59b6f7608c856cb1f3, "");
    class_f851c7810ad1557e8a7e1af726d40e21.def("desugar", method_pointer_fbc2e7f4543d584a904fb8834cc5b698, "");
    class_f851c7810ad1557e8a7e1af726d40e21.def("classof", method_pointer_8f70bd4f364656b9b53df83b653acc78, "");
    class_f851c7810ad1557e8a7e1af726d40e21.staticmethod("classof");

    if(autowig::Held< class ::clang::ConstantArrayType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::ConstantArrayType >::Type, autowig::Held< class ::clang::ArrayType >::Type >();
    }

}