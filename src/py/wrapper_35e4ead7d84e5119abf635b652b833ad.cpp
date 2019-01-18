#include "_clanglite.h"

class ::clang::TagDecl * (::clang::TagType::*method_pointer_23ff12fb08e451f2871580f6e8f12fb2)()const= &::clang::TagType::getDecl;
bool  (::clang::TagType::*method_pointer_9b64d8c9e48b5e1698e4139ba9c602a8)()const= &::clang::TagType::isBeingDefined;
bool  (*method_pointer_d7a6e6d29b425ad680de53c8dbaca7ef)(class ::clang::Type const *)= ::clang::TagType::classof;

namespace autowig {
}

void wrapper_35e4ead7d84e5119abf635b652b833ad(pybind11::module& module)
{

    pybind11::class_<class ::clang::TagType, autowig::HolderType< class ::clang::TagType >::Type, class ::clang::Type > class_35e4ead7d84e5119abf635b652b833ad(module, "TagType", "");
    class_35e4ead7d84e5119abf635b652b833ad.def("get_decl", method_pointer_23ff12fb08e451f2871580f6e8f12fb2, pybind11::return_value_policy::reference_internal, "");
    class_35e4ead7d84e5119abf635b652b833ad.def("is_being_defined", method_pointer_9b64d8c9e48b5e1698e4139ba9c602a8, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_35e4ead7d84e5119abf635b652b833ad.def_static("classof", method_pointer_d7a6e6d29b425ad680de53c8dbaca7ef, "");

}