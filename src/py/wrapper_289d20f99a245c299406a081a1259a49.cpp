#include "_clanglite.h"



void wrapper_289d20f99a245c299406a081a1259a49(pybind11::module& module)
{

    pybind11::class_<class ::clang::DependentTypeOfExprType, autowig::HolderType< class ::clang::DependentTypeOfExprType >::Type, class ::clang::TypeOfExprType > class_289d20f99a245c299406a081a1259a49(module, "DependentTypeOfExprType", "Internal representation of canonical, dependent ``typeof(expr)`` types.\n\nThis class is used internally by the ASTContext to manage canonical,\ndependent types, only. Clients will only see instances of this class via\nTypeOfExprType nodes.\n\n");

}