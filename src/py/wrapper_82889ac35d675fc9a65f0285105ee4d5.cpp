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
    template <> class ::clang::ObjCImplDecl const volatile * get_pointer<class ::clang::ObjCImplDecl const volatile >(class ::clang::ObjCImplDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_82889ac35d675fc9a65f0285105ee4d5()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCInterfaceDecl const * (::clang::ObjCImplDecl::*method_pointer_3f3ecb64e9db5423a0d102c53142adb8)() const = &::clang::ObjCImplDecl::getClassInterface;
    class ::clang::ObjCInterfaceDecl * (::clang::ObjCImplDecl::*method_pointer_7344a61bd83e59ff927edaa1c0cd5c5a)() = &::clang::ObjCImplDecl::getClassInterface;
    void  (::clang::ObjCImplDecl::*method_pointer_063f8a1b043b508083edfce553a9cf84)(class ::clang::ObjCInterfaceDecl *) = &::clang::ObjCImplDecl::setClassInterface;
    void  (::clang::ObjCImplDecl::*method_pointer_51463a9c8d8d543385183e395b07829e)(class ::clang::ObjCMethodDecl *) = &::clang::ObjCImplDecl::addInstanceMethod;
    void  (::clang::ObjCImplDecl::*method_pointer_a18506ac263b5f3aa3e283e3a68732c3)(class ::clang::ObjCMethodDecl *) = &::clang::ObjCImplDecl::addClassMethod;
    void  (::clang::ObjCImplDecl::*method_pointer_9a9faeaaf2dc57b9859ef949a9b9b184)(class ::clang::ObjCPropertyImplDecl *) = &::clang::ObjCImplDecl::addPropertyImplementation;
    bool  (*method_pointer_31dfaf4c51e25e258f17baa0c2a2b9ee)(class ::clang::Decl const *) = ::clang::ObjCImplDecl::classof;
    bool  (*method_pointer_136f3f3567be5fd09ad1a161d3992c67)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplDecl::classofKind;
    boost::python::class_< class ::clang::ObjCImplDecl, autowig::Held< class ::clang::ObjCImplDecl >::Type, boost::python::bases< class ::clang::ObjCContainerDecl >, boost::noncopyable > class_82889ac35d675fc9a65f0285105ee4d5("ObjCImplDecl", "", boost::python::no_init);
    class_82889ac35d675fc9a65f0285105ee4d5.def("get_class_interface", method_pointer_3f3ecb64e9db5423a0d102c53142adb8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("get_class_interface", method_pointer_7344a61bd83e59ff927edaa1c0cd5c5a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("set_class_interface", method_pointer_063f8a1b043b508083edfce553a9cf84, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("add_instance_method", method_pointer_51463a9c8d8d543385183e395b07829e, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("add_class_method", method_pointer_a18506ac263b5f3aa3e283e3a68732c3, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("add_property_implementation", method_pointer_9a9faeaaf2dc57b9859ef949a9b9b184, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("classof", method_pointer_31dfaf4c51e25e258f17baa0c2a2b9ee, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("classof_kind", method_pointer_136f3f3567be5fd09ad1a161d3992c67, "");
    class_82889ac35d675fc9a65f0285105ee4d5.staticmethod("classof_kind");
    class_82889ac35d675fc9a65f0285105ee4d5.staticmethod("classof");

    if(autowig::Held< class ::clang::ObjCImplDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::ObjCImplDecl >::Type, autowig::Held< class ::clang::ObjCContainerDecl >::Type >();
    }

}