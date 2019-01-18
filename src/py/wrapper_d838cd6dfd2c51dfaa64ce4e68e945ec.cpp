#include "_clanglite.h"

class ::clang::SourceLocation  (::clang::CXXBaseSpecifier::*method_pointer_a94b4bec65225a86b8dc6a902fc30ad4)()const= &::clang::CXXBaseSpecifier::getLocStart;
class ::clang::SourceLocation  (::clang::CXXBaseSpecifier::*method_pointer_e237d666a088519c94bbaf60bf69ec20)()const= &::clang::CXXBaseSpecifier::getLocEnd;
bool  (::clang::CXXBaseSpecifier::*method_pointer_81fbb335c9f45902946ad7f217deaf8a)()const= &::clang::CXXBaseSpecifier::isVirtual;
bool  (::clang::CXXBaseSpecifier::*method_pointer_bb69a109b8d554f6b7b336c1821cc050)()const= &::clang::CXXBaseSpecifier::isBaseOfClass;
bool  (::clang::CXXBaseSpecifier::*method_pointer_b1a565eb6c065479bfedd6912b7f26b8)()const= &::clang::CXXBaseSpecifier::isPackExpansion;
bool  (::clang::CXXBaseSpecifier::*method_pointer_9dbd21fad4205f7b93dff289cfb54094)()const= &::clang::CXXBaseSpecifier::getInheritConstructors;
void  (::clang::CXXBaseSpecifier::*method_pointer_dc13bb087b515b14a66fb970ae8a3f5a)(bool )= &::clang::CXXBaseSpecifier::setInheritConstructors;
class ::clang::SourceLocation  (::clang::CXXBaseSpecifier::*method_pointer_2b94360235845e6fbb379ef96acc0b2d)()const= &::clang::CXXBaseSpecifier::getEllipsisLoc;
enum ::clang::AccessSpecifier  (::clang::CXXBaseSpecifier::*method_pointer_85a57697a6fd5abf8eb666ed604be448)()const= &::clang::CXXBaseSpecifier::getAccessSpecifier;
enum ::clang::AccessSpecifier  (::clang::CXXBaseSpecifier::*method_pointer_a2a99055813757b791073c3913d86f8e)()const= &::clang::CXXBaseSpecifier::getAccessSpecifierAsWritten;
class ::clang::QualType  (::clang::CXXBaseSpecifier::*method_pointer_dae61ee019e45bb69a652468baf9999d)()const= &::clang::CXXBaseSpecifier::getType;

namespace autowig {
}

void wrapper_d838cd6dfd2c51dfaa64ce4e68e945ec(pybind11::module& module)
{

    pybind11::class_<class ::clang::CXXBaseSpecifier, autowig::HolderType< class ::clang::CXXBaseSpecifier >::Type > class_d838cd6dfd2c51dfaa64ce4e68e945ec(module, "CXXBaseSpecifier", "Represents a base class of a C++ class.\n\nEach CXXBaseSpecifier represents a single, direct base class (or struct)\nof a C++ class (or struct). It specifies the type of that base class,\nwhether it is a virtual or non-virtual base, and what level of access\n(public, protected, private) is used for the derivation. For example:\n\n");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_loc_start", method_pointer_a94b4bec65225a86b8dc6a902fc30ad4, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_loc_end", method_pointer_e237d666a088519c94bbaf60bf69ec20, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("is_virtual", method_pointer_81fbb335c9f45902946ad7f217deaf8a, "Determines whether the base class is a virtual base class (or not).\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("is_base_of_class", method_pointer_bb69a109b8d554f6b7b336c1821cc050, "Determine whether this base class is a base of a class declared with the\n‘class’ keyword (vs. one declared with the ‘struct’ keyword).\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("is_pack_expansion", method_pointer_b1a565eb6c065479bfedd6912b7f26b8, "Determine whether this base specifier is a pack expansion.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_inherit_constructors", method_pointer_9dbd21fad4205f7b93dff289cfb54094, "Determine whether this base class’s constructors get inherited.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("set_inherit_constructors", method_pointer_dc13bb087b515b14a66fb970ae8a3f5a, "Set that this base class’s constructors should be inherited.\n\n:Parameter:\n    `Inherit` (:cpp:any:`bool`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_ellipsis_loc", method_pointer_2b94360235845e6fbb379ef96acc0b2d, "For a pack expansion, determine the location of the ellipsis.\n\n:Return Type:\n    :cpp:class:`::clang::SourceLocation`\n\n");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_access_specifier", method_pointer_85a57697a6fd5abf8eb666ed604be448, "Returns the access specifier for this base specifier.\n\nThis is the actual base specifier as used for semantic analysis, so the\nresult can never be AS_none. To retrieve the access specifier as written\nin the source code, use getAccessSpecifierAsWritten().\n\n:Return Type:\n    :cpp:enumerator:`::clang::AccessSpecifier`\n\n");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_access_specifier_as_written", method_pointer_a2a99055813757b791073c3913d86f8e, "Retrieves the access specifier as written in the source code (which may\nmean that no access specifier was explicitly written).\n\nUse getAccessSpecifier() to retrieve the access specifier for use in\nsemantic analysis.\n\n:Return Type:\n    :cpp:enumerator:`::clang::AccessSpecifier`\n\n");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_type", method_pointer_dae61ee019e45bb69a652468baf9999d, "Retrieves the type of the base class.\n\nThis type will always be an unqualified class type.\n\n:Return Type:\n    :cpp:class:`::clang::QualType`\n\n");

}