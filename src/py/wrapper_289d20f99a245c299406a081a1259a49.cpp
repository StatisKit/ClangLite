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
    template <> class ::clang::DependentTypeOfExprType const volatile * get_pointer<class ::clang::DependentTypeOfExprType const volatile >(class ::clang::DependentTypeOfExprType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_289d20f99a245c299406a081a1259a49()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    boost::python::class_< class ::clang::DependentTypeOfExprType, autowig::Held< class ::clang::DependentTypeOfExprType >::Type, boost::python::bases< class ::clang::TypeOfExprType >, boost::noncopyable > class_289d20f99a245c299406a081a1259a49("DependentTypeOfExprType", "Internal representation of canonical, dependent ``typeof(expr)`` types.\n\nThis class is used internally by the ASTContext to manage canonical,\ndependent types, only. Clients will only see instances of this class via\nTypeOfExprType nodes.\n\n", boost::python::no_init);

    if(autowig::Held< class ::clang::DependentTypeOfExprType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::DependentTypeOfExprType >::Type, autowig::Held< class ::clang::TypeOfExprType >::Type >();
    }

}