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
    class ::clang::QualType  (::clang::QualType::*method_pointer_5e81b45b5ae95da6875e257b4b331478)() const = &::clang::QualType::IgnoreParens;
    void  (::clang::QualType::*method_pointer_89cae40883bd5df1a62f5728a4a6525f)() = &::clang::QualType::addConst;
    void  (::clang::QualType::*method_pointer_4c5c52c972735d5ea1695fb54fcc96d7)(unsigned int ) = &::clang::QualType::addFastQualifiers;
    void  (::clang::QualType::*method_pointer_5c10d12626275067a2b149bd17ee7958)() = &::clang::QualType::addRestrict;
    void  (::clang::QualType::*method_pointer_0e390abe23bb5068b754231560b6b526)() = &::clang::QualType::addVolatile;
    void  (::clang::QualType::*method_pointer_d391111806f552a5bfb6be7ea47d7a69)() const = &::clang::QualType::dump;
    unsigned int  (::clang::QualType::*method_pointer_de1425b433de5597b8be74938b3502c8)() const = &::clang::QualType::getAddressSpace;
    unsigned int  (::clang::QualType::*method_pointer_4691e8db558055ce8a9d6b65fe6a5dd0)() const = &::clang::QualType::getCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_6ccb7ca11e0551d5a97c4f78cd8ac938)() const = &::clang::QualType::getCanonicalType;
    unsigned int  (::clang::QualType::*method_pointer_5cec56ade3ea5a69bbd1e5e9ca9887db)() const = &::clang::QualType::getLocalCVRQualifiers;
    unsigned int  (::clang::QualType::*method_pointer_434b4b57be985297b09c546ebfd8f0fa)() const = &::clang::QualType::getLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_1c78c05a44b356378b2772fa8e9adf7d)() const = &::clang::QualType::getLocalUnqualifiedType;
    class ::clang::QualType  (::clang::QualType::*method_pointer_ce42b2c1e8045202a14a247b5a25800a)() const = &::clang::QualType::getNonReferenceType;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_5abd09fac4c156f3b1b2a221bc8b102f)() const = &::clang::QualType::getTypePtr;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_d7a622dd2f9751398aa43951003c0918)() const = &::clang::QualType::getTypePtrOrNull;
    class ::clang::QualType  (::clang::QualType::*method_pointer_dcef2d30128157bbb2bf405af6a8d44e)() const = &::clang::QualType::getUnqualifiedType;
    bool  (::clang::QualType::*method_pointer_ec8c7c3b84315b2192f57dc32e67ab89)() const = &::clang::QualType::hasLocalNonFastQualifiers;
    bool  (::clang::QualType::*method_pointer_788349a49d545b4b80bf26bfab63daf1)() const = &::clang::QualType::hasLocalQualifiers;
    bool  (::clang::QualType::*method_pointer_79ea62554b4b5b53a9913589d1159424)() const = &::clang::QualType::hasNonTrivialObjCLifetime;
    bool  (::clang::QualType::*method_pointer_818478817d4655a1863eeb25be692126)() const = &::clang::QualType::hasQualifiers;
    bool  (::clang::QualType::*method_pointer_5319c109ad5d5567a49cb1c38f20242f)() const = &::clang::QualType::hasStrongOrWeakObjCLifetime;
    bool  (::clang::QualType::*method_pointer_42030c41dc275359b26929b38bc3d3d9)(class ::clang::QualType ) const = &::clang::QualType::isAtLeastAsQualifiedAs;
    bool  (::clang::QualType::*method_pointer_8584cb69d52758d391cc870fdd20aa27)() const = &::clang::QualType::isCForbiddenLValueType;
    bool  (::clang::QualType::*method_pointer_8cc05ea1cfc15323bf877b60124c9808)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX11PODType;
    bool  (::clang::QualType::*method_pointer_6f2e820dd6335e9a8fe09e69c3ded3a0)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX98PODType;
    bool  (::clang::QualType::*method_pointer_2e44f5e3436750e8946767b1d214236c)() const = &::clang::QualType::isCanonical;
    bool  (::clang::QualType::*method_pointer_2d40114d03565ca7aa89bb3a37ba4fa3)() const = &::clang::QualType::isCanonicalAsParam;
    bool  (::clang::QualType::*method_pointer_64af029bce7950f79c25308bfbabc64b)() const = &::clang::QualType::isConstQualified;
    bool  (::clang::QualType::*method_pointer_e1f21057d1f95ef5b183f761b08feb26)(class ::clang::ASTContext  &) const = &::clang::QualType::isConstant;
    bool  (::clang::QualType::*method_pointer_2862887da89056b587b61c824ec7a87c)() const = &::clang::QualType::isLocalConstQualified;
    bool  (::clang::QualType::*method_pointer_1273d42b890a583183c1e04755c42fd4)() const = &::clang::QualType::isLocalRestrictQualified;
    bool  (::clang::QualType::*method_pointer_0fee0e9689255ddebff336169358548b)() const = &::clang::QualType::isLocalVolatileQualified;
    bool  (::clang::QualType::*method_pointer_068e91f012b1579c9fb33281211dddcd)(class ::clang::QualType ) const = &::clang::QualType::isMoreQualifiedThan;
    bool  (::clang::QualType::*method_pointer_62a0df444c555460a9732b2ad7ca397a)() const = &::clang::QualType::isNull;
    bool  (::clang::QualType::*method_pointer_7018be860677557f835b9afe24aec969)() const = &::clang::QualType::isObjCGCStrong;
    bool  (::clang::QualType::*method_pointer_61679c25b12c51a8ac35dbf211ef95dc)() const = &::clang::QualType::isObjCGCWeak;
    bool  (::clang::QualType::*method_pointer_e9108428bf39591f897ab024344dd474)(class ::clang::ASTContext  &) const = &::clang::QualType::isPODType;
    bool  (::clang::QualType::*method_pointer_aaa8f693dd025b149c0fb930e0185bb5)() const = &::clang::QualType::isRestrictQualified;
    bool  (::clang::QualType::*method_pointer_db699496b5605f04b9f41553d6970244)(class ::clang::ASTContext  &) const = &::clang::QualType::isTrivialType;
    bool  (::clang::QualType::*method_pointer_85b6d1e623c35d1eb2e3d829f233f061)(class ::clang::ASTContext  &) const = &::clang::QualType::isTriviallyCopyableType;
    bool  (::clang::QualType::*method_pointer_acf0744cb6265da8987bc6a740dc438f)() const = &::clang::QualType::isVolatileQualified;
    void  (::clang::QualType::*method_pointer_b027763177495822960eee684239ff28)(unsigned int ) = &::clang::QualType::removeLocalCVRQualifiers;
    void  (::clang::QualType::*method_pointer_cae83025a4f45d1ab08260235a8e2f5c)() = &::clang::QualType::removeLocalConst;
    void  (::clang::QualType::*method_pointer_1916aa0bb5075dd7b7315fb6fa36be3e)(unsigned int ) = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_e5ade0699ee65faea7abaffdb82d8454)() = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_ed899d99a2b1521f96c284b06a83c12c)() = &::clang::QualType::removeLocalRestrict;
    void  (::clang::QualType::*method_pointer_eaf47a9b8cb55550839789a26c06cba3)() = &::clang::QualType::removeLocalVolatile;
    void  (::clang::QualType::*method_pointer_e4d51c5b4d2c53359bc9ce6048413050)(unsigned int ) = &::clang::QualType::setLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_88296fbfbbca519ca86fd3ef9abf650b)(unsigned int ) const = &::clang::QualType::withCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_86bd819f3fea581fa225b96f7accb0f6)() const = &::clang::QualType::withConst;
    class ::clang::QualType  (::clang::QualType::*method_pointer_1df6f2e010735ced879dc625b44a9c15)(unsigned int ) const = &::clang::QualType::withExactLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_385d67e4d5bd5eb7873fbefcf7448e91)(unsigned int ) const = &::clang::QualType::withFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_16eebf17c5f550c3a49fec1cd1a36715)() const = &::clang::QualType::withRestrict;
    class ::clang::QualType  (::clang::QualType::*method_pointer_9375aa44930f5bd2bfe834b275f31ef6)() const = &::clang::QualType::withVolatile;
    class ::clang::QualType  (::clang::QualType::*method_pointer_418c3fef9d0d5605abe3395263f96693)() const = &::clang::QualType::withoutLocalFastQualifiers;
    boost::python::class_< class ::clang::QualType, autowig::HeldType< class ::clang::QualType > > class_3bcdbbe507dd5ad29df9e33aca4e435f("QualType", "", boost::python::no_init);
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("ignore_parens", method_pointer_5e81b45b5ae95da6875e257b4b331478, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_const", method_pointer_89cae40883bd5df1a62f5728a4a6525f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_fast_qualifiers", method_pointer_4c5c52c972735d5ea1695fb54fcc96d7, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_restrict", method_pointer_5c10d12626275067a2b149bd17ee7958, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_volatile", method_pointer_0e390abe23bb5068b754231560b6b526, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("dump", method_pointer_d391111806f552a5bfb6be7ea47d7a69, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_address_space", method_pointer_de1425b433de5597b8be74938b3502c8, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_cvr_qualifiers", method_pointer_4691e8db558055ce8a9d6b65fe6a5dd0, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_canonical_type", method_pointer_6ccb7ca11e0551d5a97c4f78cd8ac938, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_cvr_qualifiers", method_pointer_5cec56ade3ea5a69bbd1e5e9ca9887db, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_fast_qualifiers", method_pointer_434b4b57be985297b09c546ebfd8f0fa, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_unqualified_type", method_pointer_1c78c05a44b356378b2772fa8e9adf7d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_non_reference_type", method_pointer_ce42b2c1e8045202a14a247b5a25800a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr", method_pointer_5abd09fac4c156f3b1b2a221bc8b102f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr_or_null", method_pointer_d7a622dd2f9751398aa43951003c0918, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_unqualified_type", method_pointer_dcef2d30128157bbb2bf405af6a8d44e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_non_fast_qualifiers", method_pointer_ec8c7c3b84315b2192f57dc32e67ab89, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_qualifiers", method_pointer_788349a49d545b4b80bf26bfab63daf1, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_non_trivial_obj_c_lifetime", method_pointer_79ea62554b4b5b53a9913589d1159424, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_qualifiers", method_pointer_818478817d4655a1863eeb25be692126, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_strong_or_weak_obj_c_lifetime", method_pointer_5319c109ad5d5567a49cb1c38f20242f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_at_least_as_qualified_as", method_pointer_42030c41dc275359b26929b38bc3d3d9, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_c_forbidden_l_value_type", method_pointer_8584cb69d52758d391cc870fdd20aa27, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx11pod_type", method_pointer_8cc05ea1cfc15323bf877b60124c9808, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx98pod_type", method_pointer_6f2e820dd6335e9a8fe09e69c3ded3a0, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical", method_pointer_2e44f5e3436750e8946767b1d214236c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical_as_param", method_pointer_2d40114d03565ca7aa89bb3a37ba4fa3, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_const_qualified", method_pointer_64af029bce7950f79c25308bfbabc64b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_constant", method_pointer_e1f21057d1f95ef5b183f761b08feb26, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_const_qualified", method_pointer_2862887da89056b587b61c824ec7a87c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_restrict_qualified", method_pointer_1273d42b890a583183c1e04755c42fd4, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_volatile_qualified", method_pointer_0fee0e9689255ddebff336169358548b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_more_qualified_than", method_pointer_068e91f012b1579c9fb33281211dddcd, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_null", method_pointer_62a0df444c555460a9732b2ad7ca397a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_strong", method_pointer_7018be860677557f835b9afe24aec969, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_weak", method_pointer_61679c25b12c51a8ac35dbf211ef95dc, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_pod_type", method_pointer_e9108428bf39591f897ab024344dd474, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_restrict_qualified", method_pointer_aaa8f693dd025b149c0fb930e0185bb5, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivial_type", method_pointer_db699496b5605f04b9f41553d6970244, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivially_copyable_type", method_pointer_85b6d1e623c35d1eb2e3d829f233f061, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_volatile_qualified", method_pointer_acf0744cb6265da8987bc6a740dc438f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_cvr_qualifiers", method_pointer_b027763177495822960eee684239ff28, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_const", method_pointer_cae83025a4f45d1ab08260235a8e2f5c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_1916aa0bb5075dd7b7315fb6fa36be3e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_e5ade0699ee65faea7abaffdb82d8454, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_restrict", method_pointer_ed899d99a2b1521f96c284b06a83c12c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_volatile", method_pointer_eaf47a9b8cb55550839789a26c06cba3, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("set_local_fast_qualifiers", method_pointer_e4d51c5b4d2c53359bc9ce6048413050, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_cvr_qualifiers", method_pointer_88296fbfbbca519ca86fd3ef9abf650b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_const", method_pointer_86bd819f3fea581fa225b96f7accb0f6, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_exact_local_fast_qualifiers", method_pointer_1df6f2e010735ced879dc625b44a9c15, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_fast_qualifiers", method_pointer_385d67e4d5bd5eb7873fbefcf7448e91, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_restrict", method_pointer_16eebf17c5f550c3a49fec1cd1a36715, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_volatile", method_pointer_9375aa44930f5bd2bfe834b275f31ef6, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("without_local_fast_qualifiers", method_pointer_418c3fef9d0d5605abe3395263f96693, "");

}