#include "_clanglite.h"

class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_c69850bdb6035e14b28aaadaf92add30)()const= &::clang::ObjCObjectType::getBaseType;
bool  (::clang::ObjCObjectType::*method_pointer_858c1476c2ff58ce97cd96a09b052bb8)()const= &::clang::ObjCObjectType::isObjCId;
bool  (::clang::ObjCObjectType::*method_pointer_b699f6cbd19a5aaf87ce8a37e90f3ee0)()const= &::clang::ObjCObjectType::isObjCClass;
bool  (::clang::ObjCObjectType::*method_pointer_d5ea09489ade5465847db8a984ff8554)()const= &::clang::ObjCObjectType::isObjCUnqualifiedId;
bool  (::clang::ObjCObjectType::*method_pointer_0ced3057ed5b57008a21c7e235e823d1)()const= &::clang::ObjCObjectType::isObjCUnqualifiedClass;
bool  (::clang::ObjCObjectType::*method_pointer_690f2dfc6aea562a95dfd4bb780ed60d)()const= &::clang::ObjCObjectType::isObjCUnqualifiedIdOrClass;
bool  (::clang::ObjCObjectType::*method_pointer_ca585dbfc3775eba937c70ad6d57f014)()const= &::clang::ObjCObjectType::isObjCQualifiedId;
bool  (::clang::ObjCObjectType::*method_pointer_a30bc08db72f574d90f2777b60d9c233)()const= &::clang::ObjCObjectType::isObjCQualifiedClass;
class ::clang::ObjCInterfaceDecl * (::clang::ObjCObjectType::*method_pointer_d46b1c679ddd526ebe27b5419514b788)()const= &::clang::ObjCObjectType::getInterface;
bool  (::clang::ObjCObjectType::*method_pointer_b5728ee334b4571789a751612b4510d9)()const= &::clang::ObjCObjectType::isSpecialized;
bool  (::clang::ObjCObjectType::*method_pointer_0d433cdc8861568d85d40c47b27d8440)()const= &::clang::ObjCObjectType::isSpecializedAsWritten;
bool  (::clang::ObjCObjectType::*method_pointer_aa9b30a497095803888da24abb604ea2)()const= &::clang::ObjCObjectType::isUnspecialized;
bool  (::clang::ObjCObjectType::*method_pointer_d2f54aa11206546d80d7e9e1f7426cf3)()const= &::clang::ObjCObjectType::isUnspecializedAsWritten;
bool  (::clang::ObjCObjectType::*method_pointer_e188053337f85044a06ea083108bdb3c)()const= &::clang::ObjCObjectType::isKindOfTypeAsWritten;
bool  (::clang::ObjCObjectType::*method_pointer_f45d07ed55af5bc985b14a2234e6c983)()const= &::clang::ObjCObjectType::isKindOfType;
class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_f9a1b4534b5d52db9f1da0ca89604e85)()const= &::clang::ObjCObjectType::getSuperClassType;
bool  (::clang::ObjCObjectType::*method_pointer_f7deeb3ca61354c29a87ffd037b7487c)()const= &::clang::ObjCObjectType::isSugared;
class ::clang::QualType  (::clang::ObjCObjectType::*method_pointer_a8aec2ecab005157a4efb112ad7ccb05)()const= &::clang::ObjCObjectType::desugar;
bool  (*method_pointer_e33cfc74b7cf5b00b73240047090d9f2)(class ::clang::Type const *)= ::clang::ObjCObjectType::classof;


void wrapper_3980f13801db50f498b55d818463d500(pybind11::module& module)
{

    pybind11::class_<class ::clang::ObjCObjectType, autowig::HolderType< class ::clang::ObjCObjectType >::Type, class ::clang::Type > class_3980f13801db50f498b55d818463d500(module, "ObjCObjectType", "");
    class_3980f13801db50f498b55d818463d500.def("get_base_type", method_pointer_c69850bdb6035e14b28aaadaf92add30, ":Return Type:\n    :cpp:class:`::clang::QualType`\n\n");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_id", method_pointer_858c1476c2ff58ce97cd96a09b052bb8, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_class", method_pointer_b699f6cbd19a5aaf87ce8a37e90f3ee0, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id", method_pointer_d5ea09489ade5465847db8a984ff8554, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_class", method_pointer_0ced3057ed5b57008a21c7e235e823d1, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_unqualified_id_or_class", method_pointer_690f2dfc6aea562a95dfd4bb780ed60d, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_id", method_pointer_ca585dbfc3775eba937c70ad6d57f014, "");
    class_3980f13801db50f498b55d818463d500.def("is_obj_c_qualified_class", method_pointer_a30bc08db72f574d90f2777b60d9c233, "");
    class_3980f13801db50f498b55d818463d500.def("get_interface", method_pointer_d46b1c679ddd526ebe27b5419514b788, pybind11::return_value_policy::reference_internal, ":Return Type:\n    :cpp:class:`::clang::ObjCInterfaceDecl`\n\n");
    class_3980f13801db50f498b55d818463d500.def("is_specialized", method_pointer_b5728ee334b4571789a751612b4510d9, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_3980f13801db50f498b55d818463d500.def("is_specialized_as_written", method_pointer_0d433cdc8861568d85d40c47b27d8440, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized", method_pointer_aa9b30a497095803888da24abb604ea2, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_3980f13801db50f498b55d818463d500.def("is_unspecialized_as_written", method_pointer_d2f54aa11206546d80d7e9e1f7426cf3, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type_as_written", method_pointer_e188053337f85044a06ea083108bdb3c, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_3980f13801db50f498b55d818463d500.def("is_kind_of_type", method_pointer_f45d07ed55af5bc985b14a2234e6c983, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_3980f13801db50f498b55d818463d500.def("get_super_class_type", method_pointer_f9a1b4534b5d52db9f1da0ca89604e85, ":Return Type:\n    :cpp:class:`::clang::QualType`\n\n");
    class_3980f13801db50f498b55d818463d500.def("is_sugared", method_pointer_f7deeb3ca61354c29a87ffd037b7487c, "");
    class_3980f13801db50f498b55d818463d500.def("desugar", method_pointer_a8aec2ecab005157a4efb112ad7ccb05, "");
    class_3980f13801db50f498b55d818463d500.def_static("classof", method_pointer_e33cfc74b7cf5b00b73240047090d9f2, "");

}