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
    template <> class ::clang::AtomicType const volatile * get_pointer<class ::clang::AtomicType const volatile >(class ::clang::AtomicType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_17505392838a5ddf8a16f3bdbb8f586b()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::QualType  (::clang::AtomicType::*method_pointer_8542d97a617b5cdeb8d6ed7d86685dad)() const = &::clang::AtomicType::getValueType;
    bool  (::clang::AtomicType::*method_pointer_8fbea8dda98a5d7eb74b5ae8bd6285d3)() const = &::clang::AtomicType::isSugared;
    class ::clang::QualType  (::clang::AtomicType::*method_pointer_5580c407b40c50d9a5ddfefbc9ee3a3a)() const = &::clang::AtomicType::desugar;
    bool  (*method_pointer_7eae5c9b687b5fc0b0acdffccf127e7f)(class ::clang::Type const *) = ::clang::AtomicType::classof;
    boost::python::class_< class ::clang::AtomicType, autowig::Held< class ::clang::AtomicType >::Type, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_17505392838a5ddf8a16f3bdbb8f586b("AtomicType", "", boost::python::no_init);
    class_17505392838a5ddf8a16f3bdbb8f586b.def("get_value_type", method_pointer_8542d97a617b5cdeb8d6ed7d86685dad, ":Return Type:\n    :py:class:`clanglite.clang.QualType`\n\n");
    class_17505392838a5ddf8a16f3bdbb8f586b.def("is_sugared", method_pointer_8fbea8dda98a5d7eb74b5ae8bd6285d3, "");
    class_17505392838a5ddf8a16f3bdbb8f586b.def("desugar", method_pointer_5580c407b40c50d9a5ddfefbc9ee3a3a, "");
    class_17505392838a5ddf8a16f3bdbb8f586b.def("classof", method_pointer_7eae5c9b687b5fc0b0acdffccf127e7f, "");
    class_17505392838a5ddf8a16f3bdbb8f586b.staticmethod("classof");

    if(autowig::Held< class ::clang::AtomicType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::AtomicType >::Type, autowig::Held< class ::clang::Type >::Type >();
    }

}