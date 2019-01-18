#include "_clanglite.h"

class ::clang::QualType  (::clang::MemberPointerType::*method_pointer_2312c5863e1e5b8ea300ed2ca0e9c6d8)()const= &::clang::MemberPointerType::getPointeeType;
bool  (::clang::MemberPointerType::*method_pointer_6e26f84b50eb5397a94f7d40d3c53d3e)()const= &::clang::MemberPointerType::isMemberFunctionPointer;
bool  (::clang::MemberPointerType::*method_pointer_86ea463eb281550a9b20abc567441e68)()const= &::clang::MemberPointerType::isMemberDataPointer;
class ::clang::Type const * (::clang::MemberPointerType::*method_pointer_da95e96e24a85a9784cf7bd8950cf3cc)()const= &::clang::MemberPointerType::getClass;
class ::clang::CXXRecordDecl * (::clang::MemberPointerType::*method_pointer_0d08fa2be25b572d9718e05a6d3cc316)()const= &::clang::MemberPointerType::getMostRecentCXXRecordDecl;
bool  (::clang::MemberPointerType::*method_pointer_2922d768a09a5046adb567daeed2305c)()const= &::clang::MemberPointerType::isSugared;
class ::clang::QualType  (::clang::MemberPointerType::*method_pointer_c375c71eb4985eccb6a80cc07a575707)()const= &::clang::MemberPointerType::desugar;
bool  (*method_pointer_35ed1d80743257938884b3484499193e)(class ::clang::Type const *)= ::clang::MemberPointerType::classof;

namespace autowig {
}

void wrapper_8d01556e36c3546b8e1c01fbdb3d882d(pybind11::module& module)
{

    pybind11::class_<class ::clang::MemberPointerType, autowig::HolderType< class ::clang::MemberPointerType >::Type, class ::clang::Type > class_8d01556e36c3546b8e1c01fbdb3d882d(module, "MemberPointerType", "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("get_pointee_type", method_pointer_2312c5863e1e5b8ea300ed2ca0e9c6d8, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("is_member_function_pointer", method_pointer_6e26f84b50eb5397a94f7d40d3c53d3e, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("is_member_data_pointer", method_pointer_86ea463eb281550a9b20abc567441e68, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("get_class", method_pointer_da95e96e24a85a9784cf7bd8950cf3cc, pybind11::return_value_policy::reference_internal, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("get_most_recent_cxx_record_decl", method_pointer_0d08fa2be25b572d9718e05a6d3cc316, pybind11::return_value_policy::reference_internal, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("is_sugared", method_pointer_2922d768a09a5046adb567daeed2305c, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def("desugar", method_pointer_c375c71eb4985eccb6a80cc07a575707, "");
    class_8d01556e36c3546b8e1c01fbdb3d882d.def_static("classof", method_pointer_35ed1d80743257938884b3484499193e, "");

}