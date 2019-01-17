#include "_clanglite.h"

class ::clang::ObjCIvarDecl * (*method_pointer_2daefdc491b75748bf48b6beafbda5ec)(class ::clang::ASTContext &, unsigned int )= ::clang::ObjCIvarDecl::CreateDeserialized;
class ::clang::ObjCInterfaceDecl const * (::clang::ObjCIvarDecl::*method_pointer_d388ab5c98ba5ddebd43d23d4e163fe5)()const= &::clang::ObjCIvarDecl::getContainingInterface;
class ::clang::ObjCIvarDecl * (::clang::ObjCIvarDecl::*method_pointer_154245794a475d6e9ea26bb0158bf7e4)()= &::clang::ObjCIvarDecl::getNextIvar;
class ::clang::ObjCIvarDecl const * (::clang::ObjCIvarDecl::*method_pointer_0d00d22fe565528fa4ba00ba6509cf2c)()const= &::clang::ObjCIvarDecl::getNextIvar;
void  (::clang::ObjCIvarDecl::*method_pointer_257958772a615eb291a32854c1d8d67d)(class ::clang::ObjCIvarDecl *)= &::clang::ObjCIvarDecl::setNextIvar;
void  (::clang::ObjCIvarDecl::*method_pointer_7742954bdb905c6a8752dd661f0da4a3)(bool )= &::clang::ObjCIvarDecl::setSynthesize;
bool  (::clang::ObjCIvarDecl::*method_pointer_42312de989605595a099ea0fd8a549a2)()const= &::clang::ObjCIvarDecl::getSynthesize;
class ::clang::QualType  (::clang::ObjCIvarDecl::*method_pointer_704850bf32225f97811da2617e534e94)(class ::clang::QualType )const= &::clang::ObjCIvarDecl::getUsageType;
bool  (*method_pointer_ecbbafd6fbd0585691540a965665dd7e)(class ::clang::Decl const *)= ::clang::ObjCIvarDecl::classof;
bool  (*method_pointer_8ced530df45653a284c101dbfeeb1614)(enum ::clang::Decl::Kind )= ::clang::ObjCIvarDecl::classofKind;


void wrapper_41db8c9435975db59206c5f1329984a4(pybind11::module& module)
{

    pybind11::class_<class ::clang::ObjCIvarDecl, autowig::HolderType< class ::clang::ObjCIvarDecl >::Type, class ::clang::FieldDecl > class_41db8c9435975db59206c5f1329984a4(module, "ObjCIvarDecl", "");
    class_41db8c9435975db59206c5f1329984a4.def_static("create_deserialized", method_pointer_2daefdc491b75748bf48b6beafbda5ec, pybind11::return_value_policy::reference_internal, "");
    class_41db8c9435975db59206c5f1329984a4.def("get_containing_interface", method_pointer_d388ab5c98ba5ddebd43d23d4e163fe5, pybind11::return_value_policy::reference_internal, "Return the class interface that this ivar is logically contained in;\nthis is either the interface where the ivar was declared, or the\ninterface the ivar is conceptually a part of in the case of synthesized\nivars.\n\n:Return Type:\n    :cpp:class:`::clang::ObjCInterfaceDecl`\n\n");
    class_41db8c9435975db59206c5f1329984a4.def("get_next_ivar", method_pointer_154245794a475d6e9ea26bb0158bf7e4, pybind11::return_value_policy::reference_internal, "");
    class_41db8c9435975db59206c5f1329984a4.def("get_next_ivar", method_pointer_0d00d22fe565528fa4ba00ba6509cf2c, pybind11::return_value_policy::reference_internal, "");
    class_41db8c9435975db59206c5f1329984a4.def("set_next_ivar", method_pointer_257958772a615eb291a32854c1d8d67d, "");
    class_41db8c9435975db59206c5f1329984a4.def("set_synthesize", method_pointer_7742954bdb905c6a8752dd661f0da4a3, "");
    class_41db8c9435975db59206c5f1329984a4.def("get_synthesize", method_pointer_42312de989605595a099ea0fd8a549a2, "");
    class_41db8c9435975db59206c5f1329984a4.def("get_usage_type", method_pointer_704850bf32225f97811da2617e534e94, ":Parameter:\n    `objectType` (:cpp:class:`::clang::QualType`) - Undocumented\n\n:Return Type:\n    :cpp:class:`::clang::QualType`\n\n");
    class_41db8c9435975db59206c5f1329984a4.def_static("classof", method_pointer_ecbbafd6fbd0585691540a965665dd7e, "");
    class_41db8c9435975db59206c5f1329984a4.def_static("classof_kind", method_pointer_8ced530df45653a284c101dbfeeb1614, "");

}