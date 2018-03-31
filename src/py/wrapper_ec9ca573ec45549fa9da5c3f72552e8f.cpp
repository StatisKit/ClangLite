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
    template <> class ::clang::RecordType const volatile * get_pointer<class ::clang::RecordType const volatile >(class ::clang::RecordType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ec9ca573ec45549fa9da5c3f72552e8f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::RecordDecl * (::clang::RecordType::*method_pointer_ff6eda250e865262b9e3fd7b4e90752a)() const = &::clang::RecordType::getDecl;
    bool  (::clang::RecordType::*method_pointer_fae75a2310125b40856980ede4c16072)() const = &::clang::RecordType::hasConstFields;
    bool  (::clang::RecordType::*method_pointer_a8f2356e34e651bdb3c5627c71db89cb)() const = &::clang::RecordType::isSugared;
    class ::clang::QualType  (::clang::RecordType::*method_pointer_f1d2a98a449159dcaf9735dac348000a)() const = &::clang::RecordType::desugar;
    bool  (*method_pointer_1510631969c3579ba251a32c10d01ef3)(class ::clang::Type const *) = ::clang::RecordType::classof;
    boost::python::class_< class ::clang::RecordType, autowig::Held< class ::clang::RecordType >::Type, boost::python::bases< class ::clang::TagType >, boost::noncopyable > class_ec9ca573ec45549fa9da5c3f72552e8f("RecordType", "", boost::python::no_init);
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("get_decl", method_pointer_ff6eda250e865262b9e3fd7b4e90752a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("has_const_fields", method_pointer_fae75a2310125b40856980ede4c16072, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("is_sugared", method_pointer_a8f2356e34e651bdb3c5627c71db89cb, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("desugar", method_pointer_f1d2a98a449159dcaf9735dac348000a, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("classof", method_pointer_1510631969c3579ba251a32c10d01ef3, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.staticmethod("classof");

    if(autowig::Held< class ::clang::RecordType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::RecordType >::Type, autowig::Held< class ::clang::TagType >::Type >();
    }

}