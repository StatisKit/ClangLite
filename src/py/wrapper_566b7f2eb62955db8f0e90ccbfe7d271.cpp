#include "_clanglite.h"

class ::clang::QualType  (::clang::LocInfoType::*method_pointer_17ad20496426564296186df2d35a6ec8)()const= &::clang::LocInfoType::getType;
bool  (*method_pointer_da558ebce5c65d4db67332b50c26fe29)(class ::clang::Type const *)= ::clang::LocInfoType::classof;

namespace autowig {
}

void wrapper_566b7f2eb62955db8f0e90ccbfe7d271(pybind11::module& module)
{

    pybind11::class_<class ::clang::LocInfoType, autowig::HolderType< class ::clang::LocInfoType >::Type, class ::clang::Type > class_566b7f2eb62955db8f0e90ccbfe7d271(module, "LocInfoType", "Holds a QualType and a TypeSourceInfo\\* that came out of a declarator\nparsing.\n\nLocInfoType is a “transient” type, only needed for passing to/from\nParser and Sema, when we want to preserve type source info for a parsed\ntype. It will not participate in the type system semantics in any way.\n\n");
    class_566b7f2eb62955db8f0e90ccbfe7d271.def("get_type", method_pointer_17ad20496426564296186df2d35a6ec8, "");
    class_566b7f2eb62955db8f0e90ccbfe7d271.def_static("classof", method_pointer_da558ebce5c65d4db67332b50c26fe29, "");

}