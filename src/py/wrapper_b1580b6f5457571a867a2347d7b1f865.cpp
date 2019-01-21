#include "_clanglite.h"

bool  (::clang::FileID::*method_pointer_a2de043c5e1b5973bd96085e9ca023a7)()const= &::clang::FileID::isValid;
bool  (::clang::FileID::*method_pointer_8bf8694510d856cf9efe8860ebb4a64f)()const= &::clang::FileID::isInvalid;
class ::clang::FileID  (*method_pointer_aab4faec1936510eb177541ad22621a6)()= ::clang::FileID::getSentinel;
unsigned int  (::clang::FileID::*method_pointer_c9e884cb5b3e578a9ab51a03e5baa5b5)()const= &::clang::FileID::getHashValue;

namespace autowig {
}

void wrapper_b1580b6f5457571a867a2347d7b1f865(pybind11::module& module)
{

    pybind11::class_<class ::clang::FileID, autowig::HolderType< class ::clang::FileID >::Type > class_b1580b6f5457571a867a2347d7b1f865(module, "FileID", "An opaque identifier used by SourceManager which refers to a source file\n(MemoryBuffer) along with its #include path and #line data.\n\n");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_valid", method_pointer_a2de043c5e1b5973bd96085e9ca023a7, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_invalid", method_pointer_8bf8694510d856cf9efe8860ebb4a64f, "");
    class_b1580b6f5457571a867a2347d7b1f865.def_static("get_sentinel", method_pointer_aab4faec1936510eb177541ad22621a6, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("get_hash_value", method_pointer_c9e884cb5b3e578a9ab51a03e5baa5b5, "");

}