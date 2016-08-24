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
    class ::clang::QualType  (::clang::QualType::*method_pointer_2fd30d973bc25031b777c8d569ae9eb2)() const = &::clang::QualType::IgnoreParens;
    void  (::clang::QualType::*method_pointer_effe7e77a41c58b58f49c38cc0ba48de)() = &::clang::QualType::addConst;
    void  (::clang::QualType::*method_pointer_610cf88f479056d1b87c170130486047)(unsigned int ) = &::clang::QualType::addFastQualifiers;
    void  (::clang::QualType::*method_pointer_100c4ba62caa5515aa012dd22ffdcb94)() = &::clang::QualType::addRestrict;
    void  (::clang::QualType::*method_pointer_f541eeeec83f5e20ab5c90f5ffeb4282)() = &::clang::QualType::addVolatile;
    void  (::clang::QualType::*method_pointer_172cf635b32255eeb11ea3a1e4cb8028)() const = &::clang::QualType::dump;
    unsigned int  (::clang::QualType::*method_pointer_dac15383197255daa15617ebddcfea84)() const = &::clang::QualType::getAddressSpace;
    unsigned int  (::clang::QualType::*method_pointer_9365a6fec02951f7a811cce9e5ee8cb9)() const = &::clang::QualType::getCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_c20385afc10959ce95c097c4ed59f8db)() const = &::clang::QualType::getCanonicalType;
    unsigned int  (::clang::QualType::*method_pointer_caae948511655a44943d8396aa60eb1a)() const = &::clang::QualType::getLocalCVRQualifiers;
    unsigned int  (::clang::QualType::*method_pointer_28fecab1d5a95a7384292fc721ec2f00)() const = &::clang::QualType::getLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_997e8a65718054ba9a8bb792086fad1c)() const = &::clang::QualType::getLocalUnqualifiedType;
    class ::clang::QualType  (::clang::QualType::*method_pointer_9277c4a9f83656b8b9caac6bcfb82fcc)() const = &::clang::QualType::getNonReferenceType;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_1241be58613e5e4abd043182b706197b)() const = &::clang::QualType::getTypePtr;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_22c81de7f53b574c805cc19ab15ad065)() const = &::clang::QualType::getTypePtrOrNull;
    class ::clang::QualType  (::clang::QualType::*method_pointer_ecba348786fb589aae7ce31e454be73b)() const = &::clang::QualType::getUnqualifiedType;
    bool  (::clang::QualType::*method_pointer_14fba7f73dc35203b20812bc045c8e7b)() const = &::clang::QualType::hasLocalNonFastQualifiers;
    bool  (::clang::QualType::*method_pointer_f27ff8209848589789c48ca0944b080f)() const = &::clang::QualType::hasLocalQualifiers;
    bool  (::clang::QualType::*method_pointer_1f14e7ea80c752d79a495bd399d43df3)() const = &::clang::QualType::hasNonTrivialObjCLifetime;
    bool  (::clang::QualType::*method_pointer_07f7665a1d0a5530bf3570cbe261f574)() const = &::clang::QualType::hasQualifiers;
    bool  (::clang::QualType::*method_pointer_9706a8b2227c5fa7a40a85bebba6465c)() const = &::clang::QualType::hasStrongOrWeakObjCLifetime;
    bool  (::clang::QualType::*method_pointer_c6f873abcfa055f7b3af1a70e4f026a9)(class ::clang::QualType ) const = &::clang::QualType::isAtLeastAsQualifiedAs;
    bool  (::clang::QualType::*method_pointer_56db50e2a7f4505c86f691aecd3eb5c6)() const = &::clang::QualType::isCForbiddenLValueType;
    bool  (::clang::QualType::*method_pointer_75452f10937b5548b64ff815814dcc86)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX11PODType;
    bool  (::clang::QualType::*method_pointer_509d60f5252e589aa8660b0ccc674fa8)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX98PODType;
    bool  (::clang::QualType::*method_pointer_19b78d091fdc5832991173d5b590967d)() const = &::clang::QualType::isCanonical;
    bool  (::clang::QualType::*method_pointer_3d6948c8beac5528ac256febfc14547a)() const = &::clang::QualType::isCanonicalAsParam;
    bool  (::clang::QualType::*method_pointer_a3b57059dc995678ac5c5d3f38eac754)() const = &::clang::QualType::isConstQualified;
    bool  (::clang::QualType::*method_pointer_9fddf70392465e3683424d7ff24d8918)(class ::clang::ASTContext  &) const = &::clang::QualType::isConstant;
    bool  (::clang::QualType::*method_pointer_c5fa7f319ec551698df23bcb84d1547b)() const = &::clang::QualType::isLocalConstQualified;
    bool  (::clang::QualType::*method_pointer_56b55f9bc76f5f3398c741bb40582a34)() const = &::clang::QualType::isLocalRestrictQualified;
    bool  (::clang::QualType::*method_pointer_6bbf7e4feb4b5edeb9a88f44c2d12b30)() const = &::clang::QualType::isLocalVolatileQualified;
    bool  (::clang::QualType::*method_pointer_49d80d40e8cb541d96abf0fc508f14d5)(class ::clang::QualType ) const = &::clang::QualType::isMoreQualifiedThan;
    bool  (::clang::QualType::*method_pointer_822e4fbc41ca50618886a9875fe2153f)() const = &::clang::QualType::isNull;
    bool  (::clang::QualType::*method_pointer_106054d64d755983a7ae5a4d1bd4db24)() const = &::clang::QualType::isObjCGCStrong;
    bool  (::clang::QualType::*method_pointer_b1a47a580f43503f92573fbd10d76af7)() const = &::clang::QualType::isObjCGCWeak;
    bool  (::clang::QualType::*method_pointer_96a1ae86dfb75ee999645576b5649af4)(class ::clang::ASTContext  &) const = &::clang::QualType::isPODType;
    bool  (::clang::QualType::*method_pointer_107576510e2f592bbd910da59236563f)() const = &::clang::QualType::isRestrictQualified;
    bool  (::clang::QualType::*method_pointer_9e1aaada640c51c6aeeee3b058f3eeef)(class ::clang::ASTContext  &) const = &::clang::QualType::isTrivialType;
    bool  (::clang::QualType::*method_pointer_c3d825f76de555fc8a421bff21334729)(class ::clang::ASTContext  &) const = &::clang::QualType::isTriviallyCopyableType;
    bool  (::clang::QualType::*method_pointer_4dd27ec7f29e59e4804636b722e74bd8)() const = &::clang::QualType::isVolatileQualified;
    void  (::clang::QualType::*method_pointer_cb1b79212be75c1db86b3f417727586c)(unsigned int ) = &::clang::QualType::removeLocalCVRQualifiers;
    void  (::clang::QualType::*method_pointer_46d0c344f1b15278ba9ba6243a6b62b3)() = &::clang::QualType::removeLocalConst;
    void  (::clang::QualType::*method_pointer_d0971dac606e589e8277318824075c74)() = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_0d8e66d77cb855f790c26cf89d4e0f89)(unsigned int ) = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_6d7022a8011f5ecbaff9ab3fd7c89c2b)() = &::clang::QualType::removeLocalRestrict;
    void  (::clang::QualType::*method_pointer_7b4b8c6a08ec56c9915a31dd2048d288)() = &::clang::QualType::removeLocalVolatile;
    void  (::clang::QualType::*method_pointer_1a09e74c80ba5e1298b2a460c0c6bbe3)(unsigned int ) = &::clang::QualType::setLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_372c976dad7c5181a68b855fde732e12)(unsigned int ) const = &::clang::QualType::withCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_39bc8e35df7f5a6b94b25f902c71eff5)() const = &::clang::QualType::withConst;
    class ::clang::QualType  (::clang::QualType::*method_pointer_da0f4d2f734e5388a0701e50efa41637)(unsigned int ) const = &::clang::QualType::withExactLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_75e0924f5fb9523185b56a086d4c1102)(unsigned int ) const = &::clang::QualType::withFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_ca048188a7d452a5ba8ab22fc5ede0e1)() const = &::clang::QualType::withRestrict;
    class ::clang::QualType  (::clang::QualType::*method_pointer_9c2676402ee35c8a8fa52506dcaac2a6)() const = &::clang::QualType::withVolatile;
    class ::clang::QualType  (::clang::QualType::*method_pointer_87b074394dab5928bc930450864de13a)() const = &::clang::QualType::withoutLocalFastQualifiers;
    boost::python::class_< class ::clang::QualType, autowig::HeldType< class ::clang::QualType > > class_3bcdbbe507dd5ad29df9e33aca4e435f("QualType", "", boost::python::no_init);
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("ignore_parens", method_pointer_2fd30d973bc25031b777c8d569ae9eb2, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_const", method_pointer_effe7e77a41c58b58f49c38cc0ba48de, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_fast_qualifiers", method_pointer_610cf88f479056d1b87c170130486047, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_restrict", method_pointer_100c4ba62caa5515aa012dd22ffdcb94, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_volatile", method_pointer_f541eeeec83f5e20ab5c90f5ffeb4282, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("dump", method_pointer_172cf635b32255eeb11ea3a1e4cb8028, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_address_space", method_pointer_dac15383197255daa15617ebddcfea84, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_cvr_qualifiers", method_pointer_9365a6fec02951f7a811cce9e5ee8cb9, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_canonical_type", method_pointer_c20385afc10959ce95c097c4ed59f8db, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_cvr_qualifiers", method_pointer_caae948511655a44943d8396aa60eb1a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_fast_qualifiers", method_pointer_28fecab1d5a95a7384292fc721ec2f00, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_unqualified_type", method_pointer_997e8a65718054ba9a8bb792086fad1c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_non_reference_type", method_pointer_9277c4a9f83656b8b9caac6bcfb82fcc, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr", method_pointer_1241be58613e5e4abd043182b706197b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr_or_null", method_pointer_22c81de7f53b574c805cc19ab15ad065, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_unqualified_type", method_pointer_ecba348786fb589aae7ce31e454be73b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_non_fast_qualifiers", method_pointer_14fba7f73dc35203b20812bc045c8e7b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_qualifiers", method_pointer_f27ff8209848589789c48ca0944b080f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_non_trivial_obj_c_lifetime", method_pointer_1f14e7ea80c752d79a495bd399d43df3, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_qualifiers", method_pointer_07f7665a1d0a5530bf3570cbe261f574, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_strong_or_weak_obj_c_lifetime", method_pointer_9706a8b2227c5fa7a40a85bebba6465c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_at_least_as_qualified_as", method_pointer_c6f873abcfa055f7b3af1a70e4f026a9, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_c_forbidden_l_value_type", method_pointer_56db50e2a7f4505c86f691aecd3eb5c6, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx11pod_type", method_pointer_75452f10937b5548b64ff815814dcc86, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx98pod_type", method_pointer_509d60f5252e589aa8660b0ccc674fa8, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical", method_pointer_19b78d091fdc5832991173d5b590967d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical_as_param", method_pointer_3d6948c8beac5528ac256febfc14547a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_const_qualified", method_pointer_a3b57059dc995678ac5c5d3f38eac754, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_constant", method_pointer_9fddf70392465e3683424d7ff24d8918, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_const_qualified", method_pointer_c5fa7f319ec551698df23bcb84d1547b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_restrict_qualified", method_pointer_56b55f9bc76f5f3398c741bb40582a34, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_volatile_qualified", method_pointer_6bbf7e4feb4b5edeb9a88f44c2d12b30, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_more_qualified_than", method_pointer_49d80d40e8cb541d96abf0fc508f14d5, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_null", method_pointer_822e4fbc41ca50618886a9875fe2153f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_strong", method_pointer_106054d64d755983a7ae5a4d1bd4db24, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_weak", method_pointer_b1a47a580f43503f92573fbd10d76af7, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_pod_type", method_pointer_96a1ae86dfb75ee999645576b5649af4, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_restrict_qualified", method_pointer_107576510e2f592bbd910da59236563f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivial_type", method_pointer_9e1aaada640c51c6aeeee3b058f3eeef, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivially_copyable_type", method_pointer_c3d825f76de555fc8a421bff21334729, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_volatile_qualified", method_pointer_4dd27ec7f29e59e4804636b722e74bd8, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_cvr_qualifiers", method_pointer_cb1b79212be75c1db86b3f417727586c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_const", method_pointer_46d0c344f1b15278ba9ba6243a6b62b3, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_d0971dac606e589e8277318824075c74, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_0d8e66d77cb855f790c26cf89d4e0f89, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_restrict", method_pointer_6d7022a8011f5ecbaff9ab3fd7c89c2b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_volatile", method_pointer_7b4b8c6a08ec56c9915a31dd2048d288, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("set_local_fast_qualifiers", method_pointer_1a09e74c80ba5e1298b2a460c0c6bbe3, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_cvr_qualifiers", method_pointer_372c976dad7c5181a68b855fde732e12, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_const", method_pointer_39bc8e35df7f5a6b94b25f902c71eff5, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_exact_local_fast_qualifiers", method_pointer_da0f4d2f734e5388a0701e50efa41637, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_fast_qualifiers", method_pointer_75e0924f5fb9523185b56a086d4c1102, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_restrict", method_pointer_ca048188a7d452a5ba8ab22fc5ede0e1, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_volatile", method_pointer_9c2676402ee35c8a8fa52506dcaac2a6, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("without_local_fast_qualifiers", method_pointer_87b074394dab5928bc930450864de13a, "");

}