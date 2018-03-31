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
    template <> class ::clang::DecompositionDecl const volatile * get_pointer<class ::clang::DecompositionDecl const volatile >(class ::clang::DecompositionDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_dc571eff37b95ae9b2dec9805c38004c()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::DecompositionDecl * (*method_pointer_c58a9e1353b0544b8424320841d69374)(class ::clang::ASTContext &, unsigned int , unsigned int ) = ::clang::DecompositionDecl::CreateDeserialized;
    bool  (*method_pointer_edd4a175743959229790327667d8cd37)(class ::clang::Decl const *) = ::clang::DecompositionDecl::classof;
    bool  (*method_pointer_505ddc8044a35ce0a7087e7069165665)(enum ::clang::Decl::Kind ) = ::clang::DecompositionDecl::classofKind;
    boost::python::class_< class ::clang::DecompositionDecl, autowig::Held< class ::clang::DecompositionDecl >::Type, boost::python::bases< class ::clang::VarDecl >, boost::noncopyable > class_dc571eff37b95ae9b2dec9805c38004c("DecompositionDecl", "", boost::python::no_init);
    class_dc571eff37b95ae9b2dec9805c38004c.def("create_deserialized", method_pointer_c58a9e1353b0544b8424320841d69374, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_dc571eff37b95ae9b2dec9805c38004c.def("classof", method_pointer_edd4a175743959229790327667d8cd37, "");
    class_dc571eff37b95ae9b2dec9805c38004c.def("classof_kind", method_pointer_505ddc8044a35ce0a7087e7069165665, "");
    class_dc571eff37b95ae9b2dec9805c38004c.staticmethod("classof_kind");
    class_dc571eff37b95ae9b2dec9805c38004c.staticmethod("create_deserialized");
    class_dc571eff37b95ae9b2dec9805c38004c.staticmethod("classof");

    if(autowig::Held< class ::clang::DecompositionDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::DecompositionDecl >::Type, autowig::Held< class ::clang::VarDecl >::Type >();
    }

}