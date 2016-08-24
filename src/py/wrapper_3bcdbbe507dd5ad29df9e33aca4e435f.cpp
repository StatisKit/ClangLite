#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_3bcdbbe507dd5ad29df9e33aca4e435f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::QualType  (::clang::QualType::*method_pointer_7e718ec1e0e85b1296425e422f2773fc)() const = &::clang::QualType::IgnoreParens;
    void  (::clang::QualType::*method_pointer_48037d8fe2035c36b693c14f413fdf29)() = &::clang::QualType::addConst;
    void  (::clang::QualType::*method_pointer_e4c1532aa8dd541a9782fd12274118ea)(unsigned int ) = &::clang::QualType::addFastQualifiers;
    void  (::clang::QualType::*method_pointer_630dd648d66a5e9ebc59dec3fc7519b6)() = &::clang::QualType::addRestrict;
    void  (::clang::QualType::*method_pointer_36c300da2fab58748c4d6aaaa891d331)() = &::clang::QualType::addVolatile;
    void  (::clang::QualType::*method_pointer_88b4d83a981553b8bc48cc89faaa93c5)() const = &::clang::QualType::dump;
    unsigned int  (::clang::QualType::*method_pointer_c08a964ff90755968e5ae9f234ad68a0)() const = &::clang::QualType::getAddressSpace;
    unsigned int  (::clang::QualType::*method_pointer_fb03cbf751be51d68d752449cbcdf505)() const = &::clang::QualType::getCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_bfac2e3b06285633b3d10a9cb381aef9)() const = &::clang::QualType::getCanonicalType;
    unsigned int  (::clang::QualType::*method_pointer_620270da60f25217b37e1de0d4b56fbb)() const = &::clang::QualType::getLocalCVRQualifiers;
    unsigned int  (::clang::QualType::*method_pointer_0c88d13c060254519ec181496a10fcc3)() const = &::clang::QualType::getLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_5ce87e2b9c9e59c1816e9888e02a23f6)() const = &::clang::QualType::getLocalUnqualifiedType;
    class ::clang::QualType  (::clang::QualType::*method_pointer_07199785e6e95b0ca71e8c2b465cb2cc)() const = &::clang::QualType::getNonReferenceType;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_1ed7c3817c6052158235556b0e9a75e7)() const = &::clang::QualType::getTypePtr;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_7a46a677c9425b588404a03f6d39ec33)() const = &::clang::QualType::getTypePtrOrNull;
    class ::clang::QualType  (::clang::QualType::*method_pointer_bad19a10f5645eadb4ebc1e7fcc32dc0)() const = &::clang::QualType::getUnqualifiedType;
    bool  (::clang::QualType::*method_pointer_ee65308cf2635717a3562b66f7e26fc1)() const = &::clang::QualType::hasLocalNonFastQualifiers;
    bool  (::clang::QualType::*method_pointer_849c5e52c1ec526dac6a6532c8c993f6)() const = &::clang::QualType::hasLocalQualifiers;
    bool  (::clang::QualType::*method_pointer_931da3f43dce504cbaabe2580a72340d)() const = &::clang::QualType::hasNonTrivialObjCLifetime;
    bool  (::clang::QualType::*method_pointer_61e575af4fd255c2a711d811aa7c7968)() const = &::clang::QualType::hasQualifiers;
    bool  (::clang::QualType::*method_pointer_15d48ba52e285ad7b7e4d774d8c6258f)() const = &::clang::QualType::hasStrongOrWeakObjCLifetime;
    bool  (::clang::QualType::*method_pointer_be42aa8d75295daa934efa35f2f0f8da)(class ::clang::QualType ) const = &::clang::QualType::isAtLeastAsQualifiedAs;
    bool  (::clang::QualType::*method_pointer_1e039ece55ce5840b5694cbad53fd8ca)() const = &::clang::QualType::isCForbiddenLValueType;
    bool  (::clang::QualType::*method_pointer_a77cad0abaf75ea5aaa84492d7c61451)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX11PODType;
    bool  (::clang::QualType::*method_pointer_4312f237019752468b7586ee63924897)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX98PODType;
    bool  (::clang::QualType::*method_pointer_d44c9fc4e8ed5666a2e07bd4b454232d)() const = &::clang::QualType::isCanonical;
    bool  (::clang::QualType::*method_pointer_7b8915cd23ef5d6c8ae737ab6a929a86)() const = &::clang::QualType::isCanonicalAsParam;
    bool  (::clang::QualType::*method_pointer_de0cd61348b450179bd36cc22aa7384f)() const = &::clang::QualType::isConstQualified;
    bool  (::clang::QualType::*method_pointer_c1b9afbecdba5116aaa37cca06953da7)(class ::clang::ASTContext  &) const = &::clang::QualType::isConstant;
    bool  (::clang::QualType::*method_pointer_08684971dae85e39a7f4e0a0a7e9b482)() const = &::clang::QualType::isLocalConstQualified;
    bool  (::clang::QualType::*method_pointer_f2aabd30f89c535a9671b99158c94def)() const = &::clang::QualType::isLocalRestrictQualified;
    bool  (::clang::QualType::*method_pointer_5acdbc25b89f565ba7a7e853da96b76d)() const = &::clang::QualType::isLocalVolatileQualified;
    bool  (::clang::QualType::*method_pointer_19841ad282465dd599b742cf65baba5b)(class ::clang::QualType ) const = &::clang::QualType::isMoreQualifiedThan;
    bool  (::clang::QualType::*method_pointer_9e88292cb1465528945cb5ae77c621d5)() const = &::clang::QualType::isNull;
    bool  (::clang::QualType::*method_pointer_38780c113d3650eead1e36143282309b)() const = &::clang::QualType::isObjCGCStrong;
    bool  (::clang::QualType::*method_pointer_7d4d3471752a5a2881a4ca754d0307a2)() const = &::clang::QualType::isObjCGCWeak;
    bool  (::clang::QualType::*method_pointer_b79f12c75f3253dfbeed24d90ef96a62)(class ::clang::ASTContext  &) const = &::clang::QualType::isPODType;
    bool  (::clang::QualType::*method_pointer_75432913e96e5f09a22eb1af5e935148)() const = &::clang::QualType::isRestrictQualified;
    bool  (::clang::QualType::*method_pointer_e6534cced6d0553fb525666afee8efc1)(class ::clang::ASTContext  &) const = &::clang::QualType::isTrivialType;
    bool  (::clang::QualType::*method_pointer_39afd33070a3544c95f9b06afa66ff7d)(class ::clang::ASTContext  &) const = &::clang::QualType::isTriviallyCopyableType;
    bool  (::clang::QualType::*method_pointer_ea383c458eaf544e9ba940554c75513d)() const = &::clang::QualType::isVolatileQualified;
    void  (::clang::QualType::*method_pointer_0e158ea7f0c05433a3c8ec43c0d58fff)(unsigned int ) = &::clang::QualType::removeLocalCVRQualifiers;
    void  (::clang::QualType::*method_pointer_44219e2c91655200b324c0f5add40620)() = &::clang::QualType::removeLocalConst;
    void  (::clang::QualType::*method_pointer_1866ca0a9e2355a9bd5fee6be7c76d7c)(unsigned int ) = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_12c4c60c530e5053bd71717ab11d1be0)() = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_fda6bd81a3175c3fa6cca693ab0ba1ad)() = &::clang::QualType::removeLocalRestrict;
    void  (::clang::QualType::*method_pointer_068017f032835dee918dbef84ff270dc)() = &::clang::QualType::removeLocalVolatile;
    void  (::clang::QualType::*method_pointer_850fddfc88ee55f4b9f645c567f39fb5)(unsigned int ) = &::clang::QualType::setLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_08d517001e8556919536a21503363db0)(unsigned int ) const = &::clang::QualType::withCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_f849b5a0142355a8bba98d3c521c3ebb)() const = &::clang::QualType::withConst;
    class ::clang::QualType  (::clang::QualType::*method_pointer_5870d2b316f45287ac38415dbcb6f827)(unsigned int ) const = &::clang::QualType::withExactLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_7d35b44cc3175f7d851226b86bb33ea9)(unsigned int ) const = &::clang::QualType::withFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_f4edc6b670c45604b3990a9010768150)() const = &::clang::QualType::withRestrict;
    class ::clang::QualType  (::clang::QualType::*method_pointer_73ccf06dfc1858b7805cf6cb9873e6e0)() const = &::clang::QualType::withVolatile;
    class ::clang::QualType  (::clang::QualType::*method_pointer_12a07b1838105babba243c1683f43982)() const = &::clang::QualType::withoutLocalFastQualifiers;
    boost::python::class_< class ::clang::QualType, autowig::HeldType< class ::clang::QualType > > class_3bcdbbe507dd5ad29df9e33aca4e435f("QualType", "", boost::python::no_init);
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("ignore_parens", method_pointer_7e718ec1e0e85b1296425e422f2773fc, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_const", method_pointer_48037d8fe2035c36b693c14f413fdf29, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_fast_qualifiers", method_pointer_e4c1532aa8dd541a9782fd12274118ea, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_restrict", method_pointer_630dd648d66a5e9ebc59dec3fc7519b6, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_volatile", method_pointer_36c300da2fab58748c4d6aaaa891d331, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("dump", method_pointer_88b4d83a981553b8bc48cc89faaa93c5, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_address_space", method_pointer_c08a964ff90755968e5ae9f234ad68a0, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_cvr_qualifiers", method_pointer_fb03cbf751be51d68d752449cbcdf505, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_canonical_type", method_pointer_bfac2e3b06285633b3d10a9cb381aef9, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_cvr_qualifiers", method_pointer_620270da60f25217b37e1de0d4b56fbb, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_fast_qualifiers", method_pointer_0c88d13c060254519ec181496a10fcc3, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_unqualified_type", method_pointer_5ce87e2b9c9e59c1816e9888e02a23f6, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_non_reference_type", method_pointer_07199785e6e95b0ca71e8c2b465cb2cc, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr", method_pointer_1ed7c3817c6052158235556b0e9a75e7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr_or_null", method_pointer_7a46a677c9425b588404a03f6d39ec33, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_unqualified_type", method_pointer_bad19a10f5645eadb4ebc1e7fcc32dc0, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_non_fast_qualifiers", method_pointer_ee65308cf2635717a3562b66f7e26fc1, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_qualifiers", method_pointer_849c5e52c1ec526dac6a6532c8c993f6, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_non_trivial_obj_c_lifetime", method_pointer_931da3f43dce504cbaabe2580a72340d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_qualifiers", method_pointer_61e575af4fd255c2a711d811aa7c7968, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_strong_or_weak_obj_c_lifetime", method_pointer_15d48ba52e285ad7b7e4d774d8c6258f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_at_least_as_qualified_as", method_pointer_be42aa8d75295daa934efa35f2f0f8da, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_c_forbidden_l_value_type", method_pointer_1e039ece55ce5840b5694cbad53fd8ca, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx11pod_type", method_pointer_a77cad0abaf75ea5aaa84492d7c61451, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx98pod_type", method_pointer_4312f237019752468b7586ee63924897, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical", method_pointer_d44c9fc4e8ed5666a2e07bd4b454232d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical_as_param", method_pointer_7b8915cd23ef5d6c8ae737ab6a929a86, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_const_qualified", method_pointer_de0cd61348b450179bd36cc22aa7384f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_constant", method_pointer_c1b9afbecdba5116aaa37cca06953da7, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_const_qualified", method_pointer_08684971dae85e39a7f4e0a0a7e9b482, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_restrict_qualified", method_pointer_f2aabd30f89c535a9671b99158c94def, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_volatile_qualified", method_pointer_5acdbc25b89f565ba7a7e853da96b76d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_more_qualified_than", method_pointer_19841ad282465dd599b742cf65baba5b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_null", method_pointer_9e88292cb1465528945cb5ae77c621d5, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_strong", method_pointer_38780c113d3650eead1e36143282309b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_weak", method_pointer_7d4d3471752a5a2881a4ca754d0307a2, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_pod_type", method_pointer_b79f12c75f3253dfbeed24d90ef96a62, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_restrict_qualified", method_pointer_75432913e96e5f09a22eb1af5e935148, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivial_type", method_pointer_e6534cced6d0553fb525666afee8efc1, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivially_copyable_type", method_pointer_39afd33070a3544c95f9b06afa66ff7d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_volatile_qualified", method_pointer_ea383c458eaf544e9ba940554c75513d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_cvr_qualifiers", method_pointer_0e158ea7f0c05433a3c8ec43c0d58fff, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_const", method_pointer_44219e2c91655200b324c0f5add40620, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_1866ca0a9e2355a9bd5fee6be7c76d7c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_12c4c60c530e5053bd71717ab11d1be0, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_restrict", method_pointer_fda6bd81a3175c3fa6cca693ab0ba1ad, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_volatile", method_pointer_068017f032835dee918dbef84ff270dc, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("set_local_fast_qualifiers", method_pointer_850fddfc88ee55f4b9f645c567f39fb5, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_cvr_qualifiers", method_pointer_08d517001e8556919536a21503363db0, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_const", method_pointer_f849b5a0142355a8bba98d3c521c3ebb, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_exact_local_fast_qualifiers", method_pointer_5870d2b316f45287ac38415dbcb6f827, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_fast_qualifiers", method_pointer_7d35b44cc3175f7d851226b86bb33ea9, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_restrict", method_pointer_f4edc6b670c45604b3990a9010768150, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_volatile", method_pointer_73ccf06dfc1858b7805cf6cb9873e6e0, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("without_local_fast_qualifiers", method_pointer_12a07b1838105babba243c1683f43982, "");

}