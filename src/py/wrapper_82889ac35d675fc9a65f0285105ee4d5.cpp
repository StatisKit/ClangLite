#include "_clanglite.h"

class ::clang::ObjCInterfaceDecl const * (::clang::ObjCImplDecl::*method_pointer_3f3ecb64e9db5423a0d102c53142adb8)()const= &::clang::ObjCImplDecl::getClassInterface;
class ::clang::ObjCInterfaceDecl * (::clang::ObjCImplDecl::*method_pointer_7344a61bd83e59ff927edaa1c0cd5c5a)()= &::clang::ObjCImplDecl::getClassInterface;
void  (::clang::ObjCImplDecl::*method_pointer_063f8a1b043b508083edfce553a9cf84)(class ::clang::ObjCInterfaceDecl *)= &::clang::ObjCImplDecl::setClassInterface;
void  (::clang::ObjCImplDecl::*method_pointer_51463a9c8d8d543385183e395b07829e)(class ::clang::ObjCMethodDecl *)= &::clang::ObjCImplDecl::addInstanceMethod;
void  (::clang::ObjCImplDecl::*method_pointer_a18506ac263b5f3aa3e283e3a68732c3)(class ::clang::ObjCMethodDecl *)= &::clang::ObjCImplDecl::addClassMethod;
void  (::clang::ObjCImplDecl::*method_pointer_9a9faeaaf2dc57b9859ef949a9b9b184)(class ::clang::ObjCPropertyImplDecl *)= &::clang::ObjCImplDecl::addPropertyImplementation;
bool  (*method_pointer_31dfaf4c51e25e258f17baa0c2a2b9ee)(class ::clang::Decl const *)= ::clang::ObjCImplDecl::classof;
bool  (*method_pointer_136f3f3567be5fd09ad1a161d3992c67)(enum ::clang::Decl::Kind )= ::clang::ObjCImplDecl::classofKind;

namespace autowig {
}

void wrapper_82889ac35d675fc9a65f0285105ee4d5(pybind11::module& module)
{

    pybind11::class_<class ::clang::ObjCImplDecl, autowig::HolderType< class ::clang::ObjCImplDecl >::Type, class ::clang::ObjCContainerDecl > class_82889ac35d675fc9a65f0285105ee4d5(module, "ObjCImplDecl", "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("get_class_interface", method_pointer_3f3ecb64e9db5423a0d102c53142adb8, pybind11::return_value_policy::reference_internal, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("get_class_interface", method_pointer_7344a61bd83e59ff927edaa1c0cd5c5a, pybind11::return_value_policy::reference_internal, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("set_class_interface", method_pointer_063f8a1b043b508083edfce553a9cf84, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("add_instance_method", method_pointer_51463a9c8d8d543385183e395b07829e, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("add_class_method", method_pointer_a18506ac263b5f3aa3e283e3a68732c3, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def("add_property_implementation", method_pointer_9a9faeaaf2dc57b9859ef949a9b9b184, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def_static("classof", method_pointer_31dfaf4c51e25e258f17baa0c2a2b9ee, "");
    class_82889ac35d675fc9a65f0285105ee4d5.def_static("classof_kind", method_pointer_136f3f3567be5fd09ad1a161d3992c67, "");

}