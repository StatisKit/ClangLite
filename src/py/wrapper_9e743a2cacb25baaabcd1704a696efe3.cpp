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
    template <> class ::clang::DependentTemplateSpecializationType const volatile * get_pointer<class ::clang::DependentTemplateSpecializationType const volatile >(class ::clang::DependentTemplateSpecializationType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_9e743a2cacb25baaabcd1704a696efe3()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TemplateArgument const * (::clang::DependentTemplateSpecializationType::*method_pointer_4dda21f9c2565253833dbaeaa960ea0f)() const = &::clang::DependentTemplateSpecializationType::getArgs;
    unsigned int  (::clang::DependentTemplateSpecializationType::*method_pointer_e43f459b2df452168010f43e6706dc32)() const = &::clang::DependentTemplateSpecializationType::getNumArgs;
    class ::clang::TemplateArgument const & (::clang::DependentTemplateSpecializationType::*method_pointer_32813aebf4505644a3898aa7bf614afa)(unsigned int ) const = &::clang::DependentTemplateSpecializationType::getArg;
    ::clang::DependentTemplateSpecializationType::iterator  (::clang::DependentTemplateSpecializationType::*method_pointer_af2ba50c86d65bd79c725e6c36cb335a)() const = &::clang::DependentTemplateSpecializationType::begin;
    ::clang::DependentTemplateSpecializationType::iterator  (::clang::DependentTemplateSpecializationType::*method_pointer_8310724ae7585ffbb0e3a187fc3f0edd)() const = &::clang::DependentTemplateSpecializationType::end;
    bool  (::clang::DependentTemplateSpecializationType::*method_pointer_203b5d22fc4859608a86edc82748a7ba)() const = &::clang::DependentTemplateSpecializationType::isSugared;
    class ::clang::QualType  (::clang::DependentTemplateSpecializationType::*method_pointer_4b9387990b81543389290f78b5e9639e)() const = &::clang::DependentTemplateSpecializationType::desugar;
    bool  (*method_pointer_4a1c60cb16d95a8d8474395526fbf6fc)(class ::clang::Type const *) = ::clang::DependentTemplateSpecializationType::classof;
    boost::python::class_< class ::clang::DependentTemplateSpecializationType, autowig::Held< class ::clang::DependentTemplateSpecializationType >::Type, boost::python::bases< class ::clang::TypeWithKeyword >, boost::noncopyable > class_9e743a2cacb25baaabcd1704a696efe3("DependentTemplateSpecializationType", "", boost::python::no_init);
    class_9e743a2cacb25baaabcd1704a696efe3.def("get_args", method_pointer_4dda21f9c2565253833dbaeaa960ea0f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieve the template arguments.\n\n:Return Type:\n    :py:class:`clanglite.clang.TemplateArgument`\n\n");
    class_9e743a2cacb25baaabcd1704a696efe3.def("get_num_args", method_pointer_e43f459b2df452168010f43e6706dc32, "Retrieve the number of template arguments.\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_9e743a2cacb25baaabcd1704a696efe3.def("get_arg", method_pointer_32813aebf4505644a3898aa7bf614afa, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("begin", method_pointer_af2ba50c86d65bd79c725e6c36cb335a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("end", method_pointer_8310724ae7585ffbb0e3a187fc3f0edd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("is_sugared", method_pointer_203b5d22fc4859608a86edc82748a7ba, "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("desugar", method_pointer_4b9387990b81543389290f78b5e9639e, "");
    class_9e743a2cacb25baaabcd1704a696efe3.def("classof", method_pointer_4a1c60cb16d95a8d8474395526fbf6fc, "");
    class_9e743a2cacb25baaabcd1704a696efe3.staticmethod("classof");

    if(autowig::Held< class ::clang::DependentTemplateSpecializationType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::DependentTemplateSpecializationType >::Type, autowig::Held< class ::clang::TypeWithKeyword >::Type >();
    }

}