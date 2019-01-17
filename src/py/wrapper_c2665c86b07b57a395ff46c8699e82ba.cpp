#include "_clanglite.h"



void wrapper_c2665c86b07b57a395ff46c8699e82ba(pybind11::module& module)
{

    pybind11::class_<class ::clang::DependentDecltypeType, autowig::HolderType< class ::clang::DependentDecltypeType >::Type, class ::clang::DecltypeType > class_c2665c86b07b57a395ff46c8699e82ba(module, "DependentDecltypeType", "Internal representation of canonical, dependent decltype(expr) types.\n\nThis class is used internally by the ASTContext to manage canonical,\ndependent types, only. Clients will only see instances of this class via\nDecltypeType nodes.\n\n");

}