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
    template <> class ::clang::ArrayType const volatile * get_pointer<class ::clang::ArrayType const volatile >(class ::clang::ArrayType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7981b6362f50522ab01234005fa1e76a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::QualType  (::clang::ArrayType::*method_pointer_b97e156b94cf50cda50477b0d236636a)() const = &::clang::ArrayType::getElementType;
    unsigned int  (::clang::ArrayType::*method_pointer_e6278be9114a53939cf3c5aebfcfedfb)() const = &::clang::ArrayType::getIndexTypeCVRQualifiers;
    bool  (*method_pointer_0af6cded331f51059bbaf1cbb4f8e66a)(class ::clang::Type const *) = ::clang::ArrayType::classof;
    boost::python::class_< class ::clang::ArrayType, autowig::Held< class ::clang::ArrayType >::Type, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_7981b6362f50522ab01234005fa1e76a("ArrayType", "", boost::python::no_init);
    class_7981b6362f50522ab01234005fa1e76a.def("get_element_type", method_pointer_b97e156b94cf50cda50477b0d236636a, "");
    class_7981b6362f50522ab01234005fa1e76a.def("get_index_type_cvr_qualifiers", method_pointer_e6278be9114a53939cf3c5aebfcfedfb, "");
    class_7981b6362f50522ab01234005fa1e76a.def("classof", method_pointer_0af6cded331f51059bbaf1cbb4f8e66a, "");
    class_7981b6362f50522ab01234005fa1e76a.staticmethod("classof");

    if(autowig::Held< class ::clang::ArrayType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::ArrayType >::Type, autowig::Held< class ::clang::Type >::Type >();
    }

}