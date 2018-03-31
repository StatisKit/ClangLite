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
    template <> class ::clang::EnumType const volatile * get_pointer<class ::clang::EnumType const volatile >(class ::clang::EnumType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_434f2e3471bb55ffb2ed175a1ab61e17()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::EnumDecl * (::clang::EnumType::*method_pointer_3ca0ced41f6757b3be086535ca224793)() const = &::clang::EnumType::getDecl;
    bool  (::clang::EnumType::*method_pointer_18da273eda295f78a61b3e77c15b228e)() const = &::clang::EnumType::isSugared;
    class ::clang::QualType  (::clang::EnumType::*method_pointer_af776cb35ddd5f469d1adc1e6fad1851)() const = &::clang::EnumType::desugar;
    bool  (*method_pointer_2e170401af7f57e69168a4c65968da36)(class ::clang::Type const *) = ::clang::EnumType::classof;
    boost::python::class_< class ::clang::EnumType, autowig::Held< class ::clang::EnumType >::Type, boost::python::bases< class ::clang::TagType >, boost::noncopyable > class_434f2e3471bb55ffb2ed175a1ab61e17("EnumType", "", boost::python::no_init);
    class_434f2e3471bb55ffb2ed175a1ab61e17.def("get_decl", method_pointer_3ca0ced41f6757b3be086535ca224793, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_434f2e3471bb55ffb2ed175a1ab61e17.def("is_sugared", method_pointer_18da273eda295f78a61b3e77c15b228e, "");
    class_434f2e3471bb55ffb2ed175a1ab61e17.def("desugar", method_pointer_af776cb35ddd5f469d1adc1e6fad1851, "");
    class_434f2e3471bb55ffb2ed175a1ab61e17.def("classof", method_pointer_2e170401af7f57e69168a4c65968da36, "");
    class_434f2e3471bb55ffb2ed175a1ab61e17.staticmethod("classof");

    if(autowig::Held< class ::clang::EnumType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::EnumType >::Type, autowig::Held< class ::clang::TagType >::Type >();
    }

}