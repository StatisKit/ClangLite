#include "_clanglite.h"

class ::clang::CXXDestructorDecl * (*method_pointer_7a3a3fd36078500fb04e1cebf6f6a273)(class ::clang::ASTContext &, unsigned int )= ::clang::CXXDestructorDecl::CreateDeserialized;
void  (::clang::CXXDestructorDecl::*method_pointer_800374bc619a5b969b1fdbd1923c918e)(class ::clang::FunctionDecl *)= &::clang::CXXDestructorDecl::setOperatorDelete;
class ::clang::FunctionDecl const * (::clang::CXXDestructorDecl::*method_pointer_2f82f9f293bd57d1894749fb45852a55)()const= &::clang::CXXDestructorDecl::getOperatorDelete;
bool  (*method_pointer_3897906730a05a9e8fbbec332c0f5765)(class ::clang::Decl const *)= ::clang::CXXDestructorDecl::classof;
bool  (*method_pointer_6790c11d18f453f38e3e15b87ef4dbdc)(enum ::clang::Decl::Kind )= ::clang::CXXDestructorDecl::classofKind;

namespace autowig {
}

void wrapper_e74d86805e805e54bd75b42dea3808e2(pybind11::module& module)
{

    pybind11::class_<class ::clang::CXXDestructorDecl, autowig::HolderType< class ::clang::CXXDestructorDecl >::Type, class ::clang::CXXMethodDecl > class_e74d86805e805e54bd75b42dea3808e2(module, "CXXDestructorDecl", "Represents a C++ destructor within a class.\n\nFor example:\n\n");
    class_e74d86805e805e54bd75b42dea3808e2.def_static("create_deserialized", method_pointer_7a3a3fd36078500fb04e1cebf6f6a273, pybind11::return_value_policy::reference_internal, "");
    class_e74d86805e805e54bd75b42dea3808e2.def("set_operator_delete", method_pointer_800374bc619a5b969b1fdbd1923c918e, "");
    class_e74d86805e805e54bd75b42dea3808e2.def("get_operator_delete", method_pointer_2f82f9f293bd57d1894749fb45852a55, pybind11::return_value_policy::reference_internal, "");
    class_e74d86805e805e54bd75b42dea3808e2.def_static("classof", method_pointer_3897906730a05a9e8fbbec332c0f5765, "");
    class_e74d86805e805e54bd75b42dea3808e2.def_static("classof_kind", method_pointer_6790c11d18f453f38e3e15b87ef4dbdc, "");

}