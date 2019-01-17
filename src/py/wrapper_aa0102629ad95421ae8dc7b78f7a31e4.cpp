#include "_clanglite.h"

unsigned int  (::clang::TemplateTypeParmType::*method_pointer_7177104d9f54572abc9749faf9e21e45)()const= &::clang::TemplateTypeParmType::getDepth;
unsigned int  (::clang::TemplateTypeParmType::*method_pointer_0445e1f1588059cf912c3cc358c133ad)()const= &::clang::TemplateTypeParmType::getIndex;
bool  (::clang::TemplateTypeParmType::*method_pointer_36e1b7c36f3457409aeb05b1157df72d)()const= &::clang::TemplateTypeParmType::isParameterPack;
class ::clang::TemplateTypeParmDecl * (::clang::TemplateTypeParmType::*method_pointer_caa7fc2944845056a7f334ab4c8a203f)()const= &::clang::TemplateTypeParmType::getDecl;
bool  (::clang::TemplateTypeParmType::*method_pointer_dd2e3cd08d2f5b469895f9b2d853deb6)()const= &::clang::TemplateTypeParmType::isSugared;
class ::clang::QualType  (::clang::TemplateTypeParmType::*method_pointer_97a651b6302e52dcb70019799a1bc803)()const= &::clang::TemplateTypeParmType::desugar;
bool  (*method_pointer_7941f0c121e75eacbbc1b0266fe13c77)(class ::clang::Type const *)= ::clang::TemplateTypeParmType::classof;


void wrapper_aa0102629ad95421ae8dc7b78f7a31e4(pybind11::module& module)
{

    pybind11::class_<class ::clang::TemplateTypeParmType, autowig::HolderType< class ::clang::TemplateTypeParmType >::Type, class ::clang::Type > class_aa0102629ad95421ae8dc7b78f7a31e4(module, "TemplateTypeParmType", "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("get_depth", method_pointer_7177104d9f54572abc9749faf9e21e45, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("get_index", method_pointer_0445e1f1588059cf912c3cc358c133ad, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("is_parameter_pack", method_pointer_36e1b7c36f3457409aeb05b1157df72d, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("get_decl", method_pointer_caa7fc2944845056a7f334ab4c8a203f, pybind11::return_value_policy::reference_internal, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("is_sugared", method_pointer_dd2e3cd08d2f5b469895f9b2d853deb6, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def("desugar", method_pointer_97a651b6302e52dcb70019799a1bc803, "");
    class_aa0102629ad95421ae8dc7b78f7a31e4.def_static("classof", method_pointer_7941f0c121e75eacbbc1b0266fe13c77, "");

}