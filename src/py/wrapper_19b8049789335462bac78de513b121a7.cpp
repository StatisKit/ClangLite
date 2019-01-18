#include "_clanglite.h"

class ::clang::ObjCPropertyImplDecl * (*method_pointer_35d4ec1ca4a65158977227acfc5ea324)(class ::clang::ASTContext &, unsigned int )= ::clang::ObjCPropertyImplDecl::CreateDeserialized;
class ::clang::SourceLocation  (::clang::ObjCPropertyImplDecl::*method_pointer_b17a68e8ce1a5993ac1c2f461c22eb54)()const= &::clang::ObjCPropertyImplDecl::getLocStart;
void  (::clang::ObjCPropertyImplDecl::*method_pointer_5a42b08f2b5c5646877f49230aa2a499)(class ::clang::SourceLocation )= &::clang::ObjCPropertyImplDecl::setAtLoc;
class ::clang::ObjCPropertyDecl * (::clang::ObjCPropertyImplDecl::*method_pointer_352baacce881584c9be94f636849f025)()const= &::clang::ObjCPropertyImplDecl::getPropertyDecl;
void  (::clang::ObjCPropertyImplDecl::*method_pointer_eb2e58982a005d93a7926f230e533b44)(class ::clang::ObjCPropertyDecl *)= &::clang::ObjCPropertyImplDecl::setPropertyDecl;
class ::clang::ObjCIvarDecl * (::clang::ObjCPropertyImplDecl::*method_pointer_0da1fa1d3f9b5c7d88a1e56a5b1c5558)()const= &::clang::ObjCPropertyImplDecl::getPropertyIvarDecl;
class ::clang::SourceLocation  (::clang::ObjCPropertyImplDecl::*method_pointer_4d0969817a595bd19b79eae96bd9425f)()const= &::clang::ObjCPropertyImplDecl::getPropertyIvarDeclLoc;
void  (::clang::ObjCPropertyImplDecl::*method_pointer_d9bef8551e885dfcb1dbce0355b47c54)(class ::clang::ObjCIvarDecl *, class ::clang::SourceLocation )= &::clang::ObjCPropertyImplDecl::setPropertyIvarDecl;
bool  (::clang::ObjCPropertyImplDecl::*method_pointer_774cc4638db35e7985906ef51bed057d)()const= &::clang::ObjCPropertyImplDecl::isIvarNameSpecified;
bool  (*method_pointer_5cfda90e8bb25dd18e0dba8126c21cbb)(class ::clang::Decl const *)= ::clang::ObjCPropertyImplDecl::classof;
bool  (*method_pointer_45abfdf03e2f5243a6f16654d62e0fb7)(enum ::clang::Decl::Kind )= ::clang::ObjCPropertyImplDecl::classofKind;

namespace autowig {
}

void wrapper_19b8049789335462bac78de513b121a7(pybind11::module& module)
{

    pybind11::class_<class ::clang::ObjCPropertyImplDecl, autowig::HolderType< class ::clang::ObjCPropertyImplDecl >::Type, class ::clang::Decl > class_19b8049789335462bac78de513b121a7(module, "ObjCPropertyImplDecl", "");
    class_19b8049789335462bac78de513b121a7.def_static("create_deserialized", method_pointer_35d4ec1ca4a65158977227acfc5ea324, pybind11::return_value_policy::reference_internal, "");
    class_19b8049789335462bac78de513b121a7.def("get_loc_start", method_pointer_b17a68e8ce1a5993ac1c2f461c22eb54, "");
    class_19b8049789335462bac78de513b121a7.def("set_at_loc", method_pointer_5a42b08f2b5c5646877f49230aa2a499, "");
    class_19b8049789335462bac78de513b121a7.def("get_property_decl", method_pointer_352baacce881584c9be94f636849f025, pybind11::return_value_policy::reference_internal, "");
    class_19b8049789335462bac78de513b121a7.def("set_property_decl", method_pointer_eb2e58982a005d93a7926f230e533b44, "");
    class_19b8049789335462bac78de513b121a7.def("get_property_ivar_decl", method_pointer_0da1fa1d3f9b5c7d88a1e56a5b1c5558, pybind11::return_value_policy::reference_internal, "");
    class_19b8049789335462bac78de513b121a7.def("get_property_ivar_decl_loc", method_pointer_4d0969817a595bd19b79eae96bd9425f, "");
    class_19b8049789335462bac78de513b121a7.def("set_property_ivar_decl", method_pointer_d9bef8551e885dfcb1dbce0355b47c54, "");
    class_19b8049789335462bac78de513b121a7.def("is_ivar_name_specified", method_pointer_774cc4638db35e7985906ef51bed057d, "For @synthesize, returns true if an ivar name was explicitly specified.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_19b8049789335462bac78de513b121a7.def_static("classof", method_pointer_5cfda90e8bb25dd18e0dba8126c21cbb, "");
    class_19b8049789335462bac78de513b121a7.def_static("classof_kind", method_pointer_45abfdf03e2f5243a6f16654d62e0fb7, "");

}