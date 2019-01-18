#include "_clanglite.h"

bool  (::clang::FileID::*method_pointer_a2de043c5e1b5973bd96085e9ca023a7)()const= &::clang::FileID::isValid;
bool  (::clang::FileID::*method_pointer_8bf8694510d856cf9efe8860ebb4a64f)()const= &::clang::FileID::isInvalid;
bool  (::clang::FileID::*method_pointer_5bd9b6b07b4256a49da1384ce2ff036b)(class ::clang::FileID const &)const= &::clang::FileID::operator==;
bool  (::clang::FileID::*method_pointer_7567e012b0485fa2990a536eca0bf364)(class ::clang::FileID const &)const= &::clang::FileID::operator<;
bool  (::clang::FileID::*method_pointer_b28453fdc8205bbf809a7a262508d636)(class ::clang::FileID const &)const= &::clang::FileID::operator<=;
bool  (::clang::FileID::*method_pointer_5bb96d0bbe9e548b9eec893efeb32b9e)(class ::clang::FileID const &)const= &::clang::FileID::operator!=;
bool  (::clang::FileID::*method_pointer_3cc8e98de315577f980ea291f2a029c6)(class ::clang::FileID const &)const= &::clang::FileID::operator>;
bool  (::clang::FileID::*method_pointer_9afacb81ce2c5d3da794c38debddd0f0)(class ::clang::FileID const &)const= &::clang::FileID::operator>=;
class ::clang::FileID  (*method_pointer_aab4faec1936510eb177541ad22621a6)()= ::clang::FileID::getSentinel;
unsigned int  (::clang::FileID::*method_pointer_c9e884cb5b3e578a9ab51a03e5baa5b5)()const= &::clang::FileID::getHashValue;

namespace autowig {
}

void wrapper_b1580b6f5457571a867a2347d7b1f865(pybind11::module& module)
{

    pybind11::class_<class ::clang::FileID, autowig::HolderType< class ::clang::FileID >::Type > class_b1580b6f5457571a867a2347d7b1f865(module, "FileID", "An opaque identifier used by SourceManager which refers to a source file\n(MemoryBuffer) along with its #include path and #line data.\n\n");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_valid", method_pointer_a2de043c5e1b5973bd96085e9ca023a7, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_invalid", method_pointer_8bf8694510d856cf9efe8860ebb4a64f, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__eq__", method_pointer_5bd9b6b07b4256a49da1384ce2ff036b, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__lt__", method_pointer_7567e012b0485fa2990a536eca0bf364, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__le__", method_pointer_b28453fdc8205bbf809a7a262508d636, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__neq__", method_pointer_5bb96d0bbe9e548b9eec893efeb32b9e, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__gt__", method_pointer_3cc8e98de315577f980ea291f2a029c6, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__ge__", method_pointer_9afacb81ce2c5d3da794c38debddd0f0, "");
    class_b1580b6f5457571a867a2347d7b1f865.def_static("get_sentinel", method_pointer_aab4faec1936510eb177541ad22621a6, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("get_hash_value", method_pointer_c9e884cb5b3e578a9ab51a03e5baa5b5, "");

}