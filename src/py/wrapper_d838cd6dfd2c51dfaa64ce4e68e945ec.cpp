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
    template <> class ::clang::CXXBaseSpecifier const volatile * get_pointer<class ::clang::CXXBaseSpecifier const volatile >(class ::clang::CXXBaseSpecifier const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_d838cd6dfd2c51dfaa64ce4e68e945ec()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::SourceLocation  (::clang::CXXBaseSpecifier::*method_pointer_a94b4bec65225a86b8dc6a902fc30ad4)() const = &::clang::CXXBaseSpecifier::getLocStart;
    class ::clang::SourceLocation  (::clang::CXXBaseSpecifier::*method_pointer_e237d666a088519c94bbaf60bf69ec20)() const = &::clang::CXXBaseSpecifier::getLocEnd;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_81fbb335c9f45902946ad7f217deaf8a)() const = &::clang::CXXBaseSpecifier::isVirtual;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_bb69a109b8d554f6b7b336c1821cc050)() const = &::clang::CXXBaseSpecifier::isBaseOfClass;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_b1a565eb6c065479bfedd6912b7f26b8)() const = &::clang::CXXBaseSpecifier::isPackExpansion;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_9dbd21fad4205f7b93dff289cfb54094)() const = &::clang::CXXBaseSpecifier::getInheritConstructors;
    void  (::clang::CXXBaseSpecifier::*method_pointer_dc13bb087b515b14a66fb970ae8a3f5a)(bool ) = &::clang::CXXBaseSpecifier::setInheritConstructors;
    class ::clang::SourceLocation  (::clang::CXXBaseSpecifier::*method_pointer_2b94360235845e6fbb379ef96acc0b2d)() const = &::clang::CXXBaseSpecifier::getEllipsisLoc;
    enum ::clang::AccessSpecifier  (::clang::CXXBaseSpecifier::*method_pointer_85a57697a6fd5abf8eb666ed604be448)() const = &::clang::CXXBaseSpecifier::getAccessSpecifier;
    enum ::clang::AccessSpecifier  (::clang::CXXBaseSpecifier::*method_pointer_a2a99055813757b791073c3913d86f8e)() const = &::clang::CXXBaseSpecifier::getAccessSpecifierAsWritten;
    class ::clang::QualType  (::clang::CXXBaseSpecifier::*method_pointer_dae61ee019e45bb69a652468baf9999d)() const = &::clang::CXXBaseSpecifier::getType;
    boost::python::class_< class ::clang::CXXBaseSpecifier, autowig::Held< class ::clang::CXXBaseSpecifier >::Type > class_d838cd6dfd2c51dfaa64ce4e68e945ec("CXXBaseSpecifier", "Represents a base class of a C++ class.\n\nEach CXXBaseSpecifier represents a single, direct base class (or struct)\nof a C++ class (or struct). It specifies the type of that base class,\nwhether it is a virtual or non-virtual base, and what level of access\n(public, protected, private) is used for the derivation. For example:\n\n", boost::python::no_init);
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def(boost::python::init<  >(""));
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def(boost::python::init< class ::clang::CXXBaseSpecifier const & >(""));
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_loc_start", method_pointer_a94b4bec65225a86b8dc6a902fc30ad4, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_loc_end", method_pointer_e237d666a088519c94bbaf60bf69ec20, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("is_virtual", method_pointer_81fbb335c9f45902946ad7f217deaf8a, "Determines whether the base class is a virtual base class (or not).\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("is_base_of_class", method_pointer_bb69a109b8d554f6b7b336c1821cc050, "Determine whether this base class is a base of a class declared with the\n'class' keyword (vs. one declared with the 'struct' keyword).\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("is_pack_expansion", method_pointer_b1a565eb6c065479bfedd6912b7f26b8, "Determine whether this base specifier is a pack expansion.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_inherit_constructors", method_pointer_9dbd21fad4205f7b93dff289cfb54094, "Determine whether this base class's constructors get inherited.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("set_inherit_constructors", method_pointer_dc13bb087b515b14a66fb970ae8a3f5a, "Set that this base class's constructors should be inherited.\n\n:Parameter:\n    `Inherit` (:cpp:any:`bool`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_ellipsis_loc", method_pointer_2b94360235845e6fbb379ef96acc0b2d, "For a pack expansion, determine the location of the ellipsis.\n\n:Return Type:\n    :py:class:`clanglite.clang.SourceLocation`\n\n");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_access_specifier", method_pointer_85a57697a6fd5abf8eb666ed604be448, "Returns the access specifier for this base specifier.\n\nThis is the actual base specifier as used for semantic analysis, so the\nresult can never be AS\\_none. To retrieve the access specifier as\nwritten in the source code, use getAccessSpecifierAsWritten().\n\n:Return Type:\n    :py:obj:`clanglite.clang.access_specifier`\n\n");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_access_specifier_as_written", method_pointer_a2a99055813757b791073c3913d86f8e, "Retrieves the access specifier as written in the source code (which may\nmean that no access specifier was explicitly written).\n\nUse getAccessSpecifier() to retrieve the access specifier for use in\nsemantic analysis.\n\n:Return Type:\n    :py:obj:`clanglite.clang.access_specifier`\n\n");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_type", method_pointer_dae61ee019e45bb69a652468baf9999d, "Retrieves the type of the base class.\n\nThis type will always be an unqualified class type.\n\n:Return Type:\n    :py:class:`clanglite.clang.QualType`\n\n");

}