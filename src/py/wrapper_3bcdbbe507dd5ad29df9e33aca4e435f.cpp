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
    class ::clang::QualType  (::clang::QualType::*method_pointer_62daed07953457fd96bcf3e842de3b5d)() const = &::clang::QualType::IgnoreParens;
    void  (::clang::QualType::*method_pointer_c03472dfbf5153da9777d695fd378c2c)() = &::clang::QualType::addConst;
    void  (::clang::QualType::*method_pointer_c01de131d87f530e99b46aff5ebb906a)(unsigned int ) = &::clang::QualType::addFastQualifiers;
    void  (::clang::QualType::*method_pointer_f0be214da30a535c9c8509e0a07d9b47)() = &::clang::QualType::addRestrict;
    void  (::clang::QualType::*method_pointer_483e677561755cf8b609445c74b9b309)() = &::clang::QualType::addVolatile;
    void  (::clang::QualType::*method_pointer_eb6d506ee57e598681ed65666f74e851)() const = &::clang::QualType::dump;
    unsigned int  (::clang::QualType::*method_pointer_0f55fa0f14565d0a93cefcceff204bbb)() const = &::clang::QualType::getAddressSpace;
    unsigned int  (::clang::QualType::*method_pointer_ae87d8a05c475eec94b2de746b90d79a)() const = &::clang::QualType::getCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_17969b3b27345321b48acb1385ea411d)() const = &::clang::QualType::getCanonicalType;
    unsigned int  (::clang::QualType::*method_pointer_061fac645a035fbbb1adac0b7f0a5cf8)() const = &::clang::QualType::getLocalCVRQualifiers;
    unsigned int  (::clang::QualType::*method_pointer_edc56277bdc85f93826ba7bf02802b33)() const = &::clang::QualType::getLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_604caf7dc6065744954b9a7fd06d5a1c)() const = &::clang::QualType::getLocalUnqualifiedType;
    class ::clang::QualType  (::clang::QualType::*method_pointer_cf8269d2b44854c49e7a597f9e60b884)() const = &::clang::QualType::getNonReferenceType;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_511db18baccd5c5ca60813f37984e435)() const = &::clang::QualType::getTypePtr;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_c513d0178dfc53c2bbc4d3cdb256d134)() const = &::clang::QualType::getTypePtrOrNull;
    class ::clang::QualType  (::clang::QualType::*method_pointer_5e3c902df3765a5d914d88eef628ce6e)() const = &::clang::QualType::getUnqualifiedType;
    bool  (::clang::QualType::*method_pointer_5e146cbe2fbd535dbb7f210dcc5e35a4)() const = &::clang::QualType::hasLocalNonFastQualifiers;
    bool  (::clang::QualType::*method_pointer_402afea2e65e51978ce27548be83c02c)() const = &::clang::QualType::hasLocalQualifiers;
    bool  (::clang::QualType::*method_pointer_61366c5b84ca561abc8c0ecad8c538d6)() const = &::clang::QualType::hasNonTrivialObjCLifetime;
    bool  (::clang::QualType::*method_pointer_2047a4c658b75ceb86c73cc7be388ca1)() const = &::clang::QualType::hasQualifiers;
    bool  (::clang::QualType::*method_pointer_ebaebdf04ed6590ba8c5211e30f14dde)() const = &::clang::QualType::hasStrongOrWeakObjCLifetime;
    bool  (::clang::QualType::*method_pointer_4e451854fe5c540c9f7f13b3fcf8541a)(class ::clang::QualType ) const = &::clang::QualType::isAtLeastAsQualifiedAs;
    bool  (::clang::QualType::*method_pointer_f75fc2160dee52a3b8cd29fe2d476a81)() const = &::clang::QualType::isCForbiddenLValueType;
    bool  (::clang::QualType::*method_pointer_663ef87e066255339bdd67bce25d4c2d)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX11PODType;
    bool  (::clang::QualType::*method_pointer_20d7dc9d761a5a2abab9c84efd1044e4)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX98PODType;
    bool  (::clang::QualType::*method_pointer_37a8bcb074ee5cfd8eacda3b41ead929)() const = &::clang::QualType::isCanonical;
    bool  (::clang::QualType::*method_pointer_6b67b0b45c175139bb170c2818d08482)() const = &::clang::QualType::isCanonicalAsParam;
    bool  (::clang::QualType::*method_pointer_1f56a646b7555b1f8851eccfd422ee17)() const = &::clang::QualType::isConstQualified;
    bool  (::clang::QualType::*method_pointer_9b0665977a6d528a85c0074b626dda4a)(class ::clang::ASTContext  &) const = &::clang::QualType::isConstant;
    bool  (::clang::QualType::*method_pointer_6c76946debdb54e48eadc19c936ca64e)() const = &::clang::QualType::isLocalConstQualified;
    bool  (::clang::QualType::*method_pointer_e00872bc996a51ecbe54781861a4c683)() const = &::clang::QualType::isLocalRestrictQualified;
    bool  (::clang::QualType::*method_pointer_d7b1703c594a53c9972e1c39a75a131a)() const = &::clang::QualType::isLocalVolatileQualified;
    bool  (::clang::QualType::*method_pointer_f4055471d0b55990b9be1154f9545e45)(class ::clang::QualType ) const = &::clang::QualType::isMoreQualifiedThan;
    bool  (::clang::QualType::*method_pointer_a2b4a3fa081f555a8199aad758de78b5)() const = &::clang::QualType::isNull;
    bool  (::clang::QualType::*method_pointer_f844c7b34ffe5c57b44da64e7c4ab888)() const = &::clang::QualType::isObjCGCStrong;
    bool  (::clang::QualType::*method_pointer_d0284580c0845af69dbab971e30f92f2)() const = &::clang::QualType::isObjCGCWeak;
    bool  (::clang::QualType::*method_pointer_84a2217c1ddc5193ab4fcc1c59ed0e46)(class ::clang::ASTContext  &) const = &::clang::QualType::isPODType;
    bool  (::clang::QualType::*method_pointer_8cf7ce29952358288c6837d6a099f18e)() const = &::clang::QualType::isRestrictQualified;
    bool  (::clang::QualType::*method_pointer_9e74b73458015b8781d0b29a5e09380d)(class ::clang::ASTContext  &) const = &::clang::QualType::isTrivialType;
    bool  (::clang::QualType::*method_pointer_f67ac021ec365db5b158202112a56b51)(class ::clang::ASTContext  &) const = &::clang::QualType::isTriviallyCopyableType;
    bool  (::clang::QualType::*method_pointer_33a69324a4045748853202100f87774f)() const = &::clang::QualType::isVolatileQualified;
    void  (::clang::QualType::*method_pointer_bc97ec557952592997376e7467f9c831)(unsigned int ) = &::clang::QualType::removeLocalCVRQualifiers;
    void  (::clang::QualType::*method_pointer_ebafd03956c6505385645f25414eb1ce)() = &::clang::QualType::removeLocalConst;
    void  (::clang::QualType::*method_pointer_30ee381ba10d52f281f4a68f63291275)() = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_45239109735858a5b9a4c3d350ce0d55)(unsigned int ) = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_8963d6e5ce425551873b557cd8dde502)() = &::clang::QualType::removeLocalRestrict;
    void  (::clang::QualType::*method_pointer_d3618148ddb35e83ac73d0163ba31f62)() = &::clang::QualType::removeLocalVolatile;
    void  (::clang::QualType::*method_pointer_0b3b7a9cd3725fd3b9e381b60b42c485)(unsigned int ) = &::clang::QualType::setLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_3ac933ceea3b50a78984a8719b73048f)(unsigned int ) const = &::clang::QualType::withCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_5371558a11e9577dafa120c05a45c0c3)() const = &::clang::QualType::withConst;
    class ::clang::QualType  (::clang::QualType::*method_pointer_fc0b0bced9a351748c172dde6f9d8a29)(unsigned int ) const = &::clang::QualType::withExactLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_43bf11ac84e45e8bb1ba30fe40dd4638)(unsigned int ) const = &::clang::QualType::withFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_aaa9e562e0e854e2bee16ae63ddbd570)() const = &::clang::QualType::withRestrict;
    class ::clang::QualType  (::clang::QualType::*method_pointer_4ee8ade42947588cbe6537e47155d69f)() const = &::clang::QualType::withVolatile;
    class ::clang::QualType  (::clang::QualType::*method_pointer_56549be64c3f59538e9483f99d4db248)() const = &::clang::QualType::withoutLocalFastQualifiers;
    boost::python::class_< class ::clang::QualType, autowig::HeldType< class ::clang::QualType > > class_3bcdbbe507dd5ad29df9e33aca4e435f("QualType", "", boost::python::no_init);
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("ignore_parens", method_pointer_62daed07953457fd96bcf3e842de3b5d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_const", method_pointer_c03472dfbf5153da9777d695fd378c2c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_fast_qualifiers", method_pointer_c01de131d87f530e99b46aff5ebb906a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_restrict", method_pointer_f0be214da30a535c9c8509e0a07d9b47, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_volatile", method_pointer_483e677561755cf8b609445c74b9b309, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("dump", method_pointer_eb6d506ee57e598681ed65666f74e851, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_address_space", method_pointer_0f55fa0f14565d0a93cefcceff204bbb, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_cvr_qualifiers", method_pointer_ae87d8a05c475eec94b2de746b90d79a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_canonical_type", method_pointer_17969b3b27345321b48acb1385ea411d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_cvr_qualifiers", method_pointer_061fac645a035fbbb1adac0b7f0a5cf8, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_fast_qualifiers", method_pointer_edc56277bdc85f93826ba7bf02802b33, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_unqualified_type", method_pointer_604caf7dc6065744954b9a7fd06d5a1c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_non_reference_type", method_pointer_cf8269d2b44854c49e7a597f9e60b884, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr", method_pointer_511db18baccd5c5ca60813f37984e435, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr_or_null", method_pointer_c513d0178dfc53c2bbc4d3cdb256d134, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_unqualified_type", method_pointer_5e3c902df3765a5d914d88eef628ce6e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_non_fast_qualifiers", method_pointer_5e146cbe2fbd535dbb7f210dcc5e35a4, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_qualifiers", method_pointer_402afea2e65e51978ce27548be83c02c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_non_trivial_obj_c_lifetime", method_pointer_61366c5b84ca561abc8c0ecad8c538d6, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_qualifiers", method_pointer_2047a4c658b75ceb86c73cc7be388ca1, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_strong_or_weak_obj_c_lifetime", method_pointer_ebaebdf04ed6590ba8c5211e30f14dde, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_at_least_as_qualified_as", method_pointer_4e451854fe5c540c9f7f13b3fcf8541a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_c_forbidden_l_value_type", method_pointer_f75fc2160dee52a3b8cd29fe2d476a81, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx11pod_type", method_pointer_663ef87e066255339bdd67bce25d4c2d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx98pod_type", method_pointer_20d7dc9d761a5a2abab9c84efd1044e4, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical", method_pointer_37a8bcb074ee5cfd8eacda3b41ead929, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical_as_param", method_pointer_6b67b0b45c175139bb170c2818d08482, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_const_qualified", method_pointer_1f56a646b7555b1f8851eccfd422ee17, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_constant", method_pointer_9b0665977a6d528a85c0074b626dda4a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_const_qualified", method_pointer_6c76946debdb54e48eadc19c936ca64e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_restrict_qualified", method_pointer_e00872bc996a51ecbe54781861a4c683, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_volatile_qualified", method_pointer_d7b1703c594a53c9972e1c39a75a131a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_more_qualified_than", method_pointer_f4055471d0b55990b9be1154f9545e45, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_null", method_pointer_a2b4a3fa081f555a8199aad758de78b5, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_strong", method_pointer_f844c7b34ffe5c57b44da64e7c4ab888, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_weak", method_pointer_d0284580c0845af69dbab971e30f92f2, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_pod_type", method_pointer_84a2217c1ddc5193ab4fcc1c59ed0e46, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_restrict_qualified", method_pointer_8cf7ce29952358288c6837d6a099f18e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivial_type", method_pointer_9e74b73458015b8781d0b29a5e09380d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivially_copyable_type", method_pointer_f67ac021ec365db5b158202112a56b51, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_volatile_qualified", method_pointer_33a69324a4045748853202100f87774f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_cvr_qualifiers", method_pointer_bc97ec557952592997376e7467f9c831, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_const", method_pointer_ebafd03956c6505385645f25414eb1ce, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_30ee381ba10d52f281f4a68f63291275, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_45239109735858a5b9a4c3d350ce0d55, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_restrict", method_pointer_8963d6e5ce425551873b557cd8dde502, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_volatile", method_pointer_d3618148ddb35e83ac73d0163ba31f62, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("set_local_fast_qualifiers", method_pointer_0b3b7a9cd3725fd3b9e381b60b42c485, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_cvr_qualifiers", method_pointer_3ac933ceea3b50a78984a8719b73048f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_const", method_pointer_5371558a11e9577dafa120c05a45c0c3, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_exact_local_fast_qualifiers", method_pointer_fc0b0bced9a351748c172dde6f9d8a29, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_fast_qualifiers", method_pointer_43bf11ac84e45e8bb1ba30fe40dd4638, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_restrict", method_pointer_aaa9e562e0e854e2bee16ae63ddbd570, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_volatile", method_pointer_4ee8ade42947588cbe6537e47155d69f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("without_local_fast_qualifiers", method_pointer_56549be64c3f59538e9483f99d4db248, "");

}