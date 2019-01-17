#include "_clanglite.h"



void wrapper_ceecf94166465be786199d84d9487f07(pybind11::module& module)
{

    pybind11::class_<class ::clang::DependentUnaryTransformType, autowig::HolderType< class ::clang::DependentUnaryTransformType >::Type, class ::clang::UnaryTransformType > class_ceecf94166465be786199d84d9487f07(module, "DependentUnaryTransformType", "Internal representation of canonical, dependent \\__underlying_type(type)\ntypes.\n\nThis class is used internally by the ASTContext to manage canonical,\ndependent types, only. Clients will only see instances of this class via\nUnaryTransformType nodes.\n\n");

}