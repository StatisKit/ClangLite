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
    template <> class ::clang::PackExpansionType const volatile * get_pointer<class ::clang::PackExpansionType const volatile >(class ::clang::PackExpansionType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_134a185b7d1855029390fd1393cbf65e()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::QualType  (::clang::PackExpansionType::*method_pointer_335f27f516245d3097eeef59a1e23c7b)() const = &::clang::PackExpansionType::getPattern;
    bool  (::clang::PackExpansionType::*method_pointer_28f749ff5d9f530cb0c6d2693caed6f6)() const = &::clang::PackExpansionType::isSugared;
    class ::clang::QualType  (::clang::PackExpansionType::*method_pointer_5629ef6e9abe572ba60f32a22b9f4ba0)() const = &::clang::PackExpansionType::desugar;
    bool  (*method_pointer_713aa00810ab5a67843d281bbfaa4da5)(class ::clang::Type const *) = ::clang::PackExpansionType::classof;
    boost::python::class_< class ::clang::PackExpansionType, autowig::Held< class ::clang::PackExpansionType >::Type, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_134a185b7d1855029390fd1393cbf65e("PackExpansionType", "Represents a pack expansion of types.\n\nPack expansions are part of C++11 variadic templates. A pack expansion\ncontains a pattern, which itself contains one or more 'unexpanded'\nparameter packs. When instantiated, a pack expansion produces a series\nof types, each instantiated from the pattern of the expansion, where the\nIth instantiation of the pattern uses the Ith arguments bound to each of\nthe unexpanded parameter packs. The pack expansion is considered to\n'expand' these unexpanded parameter packs.\n\n", boost::python::no_init);
    class_134a185b7d1855029390fd1393cbf65e.def("get_pattern", method_pointer_335f27f516245d3097eeef59a1e23c7b, "Retrieve the pattern of this pack expansion, which is the type that will\nbe repeatedly instantiated when instantiating the pack expansion itself.\n\n:Return Type:\n    :py:class:`clanglite.clang.QualType`\n\n");
    class_134a185b7d1855029390fd1393cbf65e.def("is_sugared", method_pointer_28f749ff5d9f530cb0c6d2693caed6f6, "");
    class_134a185b7d1855029390fd1393cbf65e.def("desugar", method_pointer_5629ef6e9abe572ba60f32a22b9f4ba0, "");
    class_134a185b7d1855029390fd1393cbf65e.def("classof", method_pointer_713aa00810ab5a67843d281bbfaa4da5, "");
    class_134a185b7d1855029390fd1393cbf65e.staticmethod("classof");

    if(autowig::Held< class ::clang::PackExpansionType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::PackExpansionType >::Type, autowig::Held< class ::clang::Type >::Type >();
    }

}