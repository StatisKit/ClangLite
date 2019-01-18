#include "_clanglite.h"

bool  (::clang::SourceLocation::*method_pointer_21279fca4c3f53f4985d56d96a4c9cd9)()const= &::clang::SourceLocation::isFileID;
bool  (::clang::SourceLocation::*method_pointer_21d49a200cdd5455827bfe9d90776317)()const= &::clang::SourceLocation::isMacroID;
bool  (::clang::SourceLocation::*method_pointer_b1d10d2dd0cb5102b8ce711f82e0712b)()const= &::clang::SourceLocation::isValid;
bool  (::clang::SourceLocation::*method_pointer_ecd3459425b154f7927f92b3724d7ac1)()const= &::clang::SourceLocation::isInvalid;
class ::clang::SourceLocation  (::clang::SourceLocation::*method_pointer_5da0f9529d6755a8ab2c23b998ed4118)(int )const= &::clang::SourceLocation::getLocWithOffset;
unsigned int  (::clang::SourceLocation::*method_pointer_5da491564f50546982618486de33b742)()const= &::clang::SourceLocation::getRawEncoding;
class ::clang::SourceLocation  (*method_pointer_ca91b7d4c2745be58c5d73e9cf326ceb)(unsigned int )= ::clang::SourceLocation::getFromRawEncoding;

namespace autowig {
}

void wrapper_3bb72e110333506a85ff3706c82d0672(pybind11::module& module)
{

    pybind11::class_<class ::clang::SourceLocation, autowig::HolderType< class ::clang::SourceLocation >::Type > class_3bb72e110333506a85ff3706c82d0672(module, "SourceLocation", "Encodes a location in the source. The SourceManager can decode this to\nget at the full include stack, line and column information.\n\nTechnically, a source location is simply an offset into the manager’s\nview of the input source, which is all input buffers (including macro\nexpansions) concatenated in an effectively arbitrary order. The manager\nactually maintains two blocks of input buffers. One, starting at offset\n0 and growing upwards, contains all buffers from this module. The other,\nstarting at the highest possible offset and growing downwards, contains\nbuffers of loaded modules.\n\nIn addition, one bit of SourceLocation is used for quick access to the\ninformation whether the location is in a file or a macro expansion.\n\nIt is important that this type remains small. It is currently 32 bits\nwide.\n\n");
    class_3bb72e110333506a85ff3706c82d0672.def("is_file_id", method_pointer_21279fca4c3f53f4985d56d96a4c9cd9, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_macro_id", method_pointer_21d49a200cdd5455827bfe9d90776317, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_valid", method_pointer_b1d10d2dd0cb5102b8ce711f82e0712b, "Return true if this is a valid SourceLocation object.\n\nInvalid SourceLocations are often used when events have no corresponding\nlocation in the source (e.g. a diagnostic is required for a command line\noption).\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_3bb72e110333506a85ff3706c82d0672.def("is_invalid", method_pointer_ecd3459425b154f7927f92b3724d7ac1, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_loc_with_offset", method_pointer_5da0f9529d6755a8ab2c23b998ed4118, "Return a source location with the specified offset from this\nSourceLocation.\n\n:Parameter:\n    `Offset` (:cpp:any:`int`) - Undocumented\n\n:Return Type:\n    :cpp:class:`::clang::SourceLocation`\n\n");
    class_3bb72e110333506a85ff3706c82d0672.def("get_raw_encoding", method_pointer_5da491564f50546982618486de33b742, "When a SourceLocation itself cannot be used, this returns an (opaque)\n32-bit integer encoding for it.\n\nThis should only be passed to SourceLocation::getFromRawEncoding, it\nshould not be inspected directly.\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_3bb72e110333506a85ff3706c82d0672.def_static("get_from_raw_encoding", method_pointer_ca91b7d4c2745be58c5d73e9cf326ceb, "Turn a raw encoding of a SourceLocation object into a real\nSourceLocation.\n\n:Parameter:\n    `Encoding` (:cpp:any:`unsigned` int) - Undocumented\n\n:Return Type:\n    :cpp:class:`::clang::SourceLocation`\n\n.. seealso::\n\n    getRawEncoding.\n\n");

}