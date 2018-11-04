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
    template <> class ::clang::SubstTemplateTypeParmPackType const volatile * get_pointer<class ::clang::SubstTemplateTypeParmPackType const volatile >(class ::clang::SubstTemplateTypeParmPackType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_8c3d682fda725ecaa6f62d0cc71e3761()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TemplateTypeParmType const * (::clang::SubstTemplateTypeParmPackType::*method_pointer_0c33fc3517115f639c8ea0769f7d69c5)() const = &::clang::SubstTemplateTypeParmPackType::getReplacedParameter;
    bool  (::clang::SubstTemplateTypeParmPackType::*method_pointer_7a9bf362ddf45fc6a7104f6204416ac9)() const = &::clang::SubstTemplateTypeParmPackType::isSugared;
    class ::clang::QualType  (::clang::SubstTemplateTypeParmPackType::*method_pointer_5e37981f84d754189d29f8d079a463c8)() const = &::clang::SubstTemplateTypeParmPackType::desugar;
    class ::clang::TemplateArgument  (::clang::SubstTemplateTypeParmPackType::*method_pointer_2c5f487b719c5c99aea2ed69b3e96137)() const = &::clang::SubstTemplateTypeParmPackType::getArgumentPack;
    bool  (*method_pointer_82c9b3a123945f5eb1fac41ee0810bae)(class ::clang::Type const *) = ::clang::SubstTemplateTypeParmPackType::classof;
    boost::python::class_< class ::clang::SubstTemplateTypeParmPackType, autowig::Held< class ::clang::SubstTemplateTypeParmPackType >::Type, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_8c3d682fda725ecaa6f62d0cc71e3761("SubstTemplateTypeParmPackType", "Represents the result of substituting a set of types for a template type\nparameter pack.\n\nWhen a pack expansion in the source code contains multiple parameter\npacks and those parameter packs correspond to different levels of\ntemplate parameter lists, this type node is used to represent a template\ntype parameter pack from an outer level, which has already had its\nargument pack substituted but that still lives within a pack expansion\nthat itself could not be instantiated. When actually performing a\nsubstitution into that pack expansion (e.g., when all template\nparameters have corresponding arguments), this type will be replaced\nwith the :raw-latex:`\\c S`ubstTemplateTypeParmType at the current pack\nsubstitution index.\n\n", boost::python::no_init);
    class_8c3d682fda725ecaa6f62d0cc71e3761.def("get_replaced_parameter", method_pointer_0c33fc3517115f639c8ea0769f7d69c5, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.TemplateTypeParmType`\n\n");
    class_8c3d682fda725ecaa6f62d0cc71e3761.def("is_sugared", method_pointer_7a9bf362ddf45fc6a7104f6204416ac9, "");
    class_8c3d682fda725ecaa6f62d0cc71e3761.def("desugar", method_pointer_5e37981f84d754189d29f8d079a463c8, "");
    class_8c3d682fda725ecaa6f62d0cc71e3761.def("get_argument_pack", method_pointer_2c5f487b719c5c99aea2ed69b3e96137, "");
    class_8c3d682fda725ecaa6f62d0cc71e3761.def("classof", method_pointer_82c9b3a123945f5eb1fac41ee0810bae, "");
    class_8c3d682fda725ecaa6f62d0cc71e3761.staticmethod("classof");

    if(autowig::Held< class ::clang::SubstTemplateTypeParmPackType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::SubstTemplateTypeParmPackType >::Type, autowig::Held< class ::clang::Type >::Type >();
    }

}