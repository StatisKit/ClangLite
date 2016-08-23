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
    class ::clang::QualType  (::clang::QualType::*method_pointer_7f71dde3e20e5a049b9c2db83682dfdf)() const = &::clang::QualType::IgnoreParens;
    void  (::clang::QualType::*method_pointer_f245113bd913596dab5be550434fcdde)() = &::clang::QualType::addConst;
    void  (::clang::QualType::*method_pointer_63cc1c213f51573d9c953a2454fc3650)(unsigned int ) = &::clang::QualType::addFastQualifiers;
    void  (::clang::QualType::*method_pointer_11ad41c265a05cf086eb2100ad9b307c)() = &::clang::QualType::addRestrict;
    void  (::clang::QualType::*method_pointer_aaea3ab437f75ed6834339a80a5e46fa)() = &::clang::QualType::addVolatile;
    void  (::clang::QualType::*method_pointer_cd1a8e7295a85e6d8e3bb98bcb5f13c8)() const = &::clang::QualType::dump;
    unsigned int  (::clang::QualType::*method_pointer_d21baa43913158adb4674a7bfe9bee5c)() const = &::clang::QualType::getAddressSpace;
    unsigned int  (::clang::QualType::*method_pointer_fdebc6a74e4f5b3ab2a31212c4e1e49c)() const = &::clang::QualType::getCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_2493e3db4e7b54889d538a12e4d7b143)() const = &::clang::QualType::getCanonicalType;
    unsigned int  (::clang::QualType::*method_pointer_c374ad0952c3512688b5936b6ce48295)() const = &::clang::QualType::getLocalCVRQualifiers;
    unsigned int  (::clang::QualType::*method_pointer_8d7cad1e7e055acf8777d8e131349b2b)() const = &::clang::QualType::getLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_32c3f3a28e5158b6ba25c4a95781fe12)() const = &::clang::QualType::getLocalUnqualifiedType;
    class ::clang::QualType  (::clang::QualType::*method_pointer_61b7499d8d335a82b0b286c3b99d1bc6)() const = &::clang::QualType::getNonReferenceType;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_abff5eeb1bfd530a863213351cf92bca)() const = &::clang::QualType::getTypePtr;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_7fc8bb7a030857878aa76047e843da4b)() const = &::clang::QualType::getTypePtrOrNull;
    class ::clang::QualType  (::clang::QualType::*method_pointer_0b9307ef105f54d78a6271f6d0a6b38b)() const = &::clang::QualType::getUnqualifiedType;
    bool  (::clang::QualType::*method_pointer_8375793cb9125b8cb7af9d60af4c9a0f)() const = &::clang::QualType::hasLocalNonFastQualifiers;
    bool  (::clang::QualType::*method_pointer_03cf1bf531de569e9ba989da99746178)() const = &::clang::QualType::hasLocalQualifiers;
    bool  (::clang::QualType::*method_pointer_d49a747c69ed54e6b146bf6633ff619a)() const = &::clang::QualType::hasNonTrivialObjCLifetime;
    bool  (::clang::QualType::*method_pointer_8601cc716b085876a1413f1a0cb9afba)() const = &::clang::QualType::hasQualifiers;
    bool  (::clang::QualType::*method_pointer_f92ce13194c0546ca306b7c71afe6a73)() const = &::clang::QualType::hasStrongOrWeakObjCLifetime;
    bool  (::clang::QualType::*method_pointer_cf7e60394e155fb7b6447b4351307083)(class ::clang::QualType ) const = &::clang::QualType::isAtLeastAsQualifiedAs;
    bool  (::clang::QualType::*method_pointer_6b69e90561be5df69d336be33f78c6ed)() const = &::clang::QualType::isCForbiddenLValueType;
    bool  (::clang::QualType::*method_pointer_795e423b72ba53e3a4105611349684b8)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX11PODType;
    bool  (::clang::QualType::*method_pointer_9d4d9de0bf1b5c96951f9874fbf4f092)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX98PODType;
    bool  (::clang::QualType::*method_pointer_ac17a0049c935ecfbb4c83f58f300740)() const = &::clang::QualType::isCanonical;
    bool  (::clang::QualType::*method_pointer_cddb6fc6b7ef5487b40d2290bfe6a26e)() const = &::clang::QualType::isCanonicalAsParam;
    bool  (::clang::QualType::*method_pointer_62b2a1d4d3ba560ea89f1c5a9a571dbd)() const = &::clang::QualType::isConstQualified;
    bool  (::clang::QualType::*method_pointer_e3cbed5e33f65dcc9aa9d74ff4147d5b)(class ::clang::ASTContext  &) const = &::clang::QualType::isConstant;
    bool  (::clang::QualType::*method_pointer_d1a5658f5dd2535d8678da891b6bd5d3)() const = &::clang::QualType::isLocalConstQualified;
    bool  (::clang::QualType::*method_pointer_335964895802529aa54d42cd2e89a875)() const = &::clang::QualType::isLocalRestrictQualified;
    bool  (::clang::QualType::*method_pointer_22372044e9465973b20f5a3f90bb7f38)() const = &::clang::QualType::isLocalVolatileQualified;
    bool  (::clang::QualType::*method_pointer_3e7d41135a9452698c45081ff9579cfa)(class ::clang::QualType ) const = &::clang::QualType::isMoreQualifiedThan;
    bool  (::clang::QualType::*method_pointer_eada5b9d92815a829b98881f9c803d8a)() const = &::clang::QualType::isNull;
    bool  (::clang::QualType::*method_pointer_98745aa6c74d5c1a8d912c5f293d8d8f)() const = &::clang::QualType::isObjCGCStrong;
    bool  (::clang::QualType::*method_pointer_d7423d1cd93e56eea70c80831c379484)() const = &::clang::QualType::isObjCGCWeak;
    bool  (::clang::QualType::*method_pointer_a6b494bb6edf51239b1a9afee7425f1d)(class ::clang::ASTContext  &) const = &::clang::QualType::isPODType;
    bool  (::clang::QualType::*method_pointer_b9064c152a34513e9e68dcee5a6d688a)() const = &::clang::QualType::isRestrictQualified;
    bool  (::clang::QualType::*method_pointer_cf3e05e40992599d808a2870fca61037)(class ::clang::ASTContext  &) const = &::clang::QualType::isTrivialType;
    bool  (::clang::QualType::*method_pointer_ad0c64db465f5383a62b7c5478ecd703)(class ::clang::ASTContext  &) const = &::clang::QualType::isTriviallyCopyableType;
    bool  (::clang::QualType::*method_pointer_f3d5eb3bcda65d298f477536844689cc)() const = &::clang::QualType::isVolatileQualified;
    void  (::clang::QualType::*method_pointer_969a1d12b7d056a88db9844230e68adb)(unsigned int ) = &::clang::QualType::removeLocalCVRQualifiers;
    void  (::clang::QualType::*method_pointer_7b98a23bc36355899c8d788c1251d7cd)() = &::clang::QualType::removeLocalConst;
    void  (::clang::QualType::*method_pointer_fdf4c0a68189593780284a6a832f71a2)(unsigned int ) = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_d33adc6e18545f89baf6e00c0f8624f9)() = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_3082f1789482503a815fb6fb6ba47799)() = &::clang::QualType::removeLocalRestrict;
    void  (::clang::QualType::*method_pointer_b71004a1649e58d0b8c92defc49921ea)() = &::clang::QualType::removeLocalVolatile;
    void  (::clang::QualType::*method_pointer_aabc5a33207359e0a8e8ddd3ef962c14)(unsigned int ) = &::clang::QualType::setLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_597b554dbd3b5dbfb4a709fe409b532d)(unsigned int ) const = &::clang::QualType::withCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_b36e58c9da7e5be38d1c1b9982e9c01b)() const = &::clang::QualType::withConst;
    class ::clang::QualType  (::clang::QualType::*method_pointer_25e60c11d5de5175b7895527d8f1313e)(unsigned int ) const = &::clang::QualType::withExactLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_bf5c589496965784bc55af18ac2b1b16)(unsigned int ) const = &::clang::QualType::withFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_77b1c793af2e5f3294b492768c26eac3)() const = &::clang::QualType::withRestrict;
    class ::clang::QualType  (::clang::QualType::*method_pointer_5b872abab0455531aa9c169dad8e3a69)() const = &::clang::QualType::withVolatile;
    class ::clang::QualType  (::clang::QualType::*method_pointer_a1f9e6131eaa5c7183833b9103e8ccba)() const = &::clang::QualType::withoutLocalFastQualifiers;
    boost::python::class_< class ::clang::QualType, autowig::HeldType< class ::clang::QualType > > class_3bcdbbe507dd5ad29df9e33aca4e435f("QualType", "", boost::python::no_init);
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("ignore_parens", method_pointer_7f71dde3e20e5a049b9c2db83682dfdf, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_const", method_pointer_f245113bd913596dab5be550434fcdde, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_fast_qualifiers", method_pointer_63cc1c213f51573d9c953a2454fc3650, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_restrict", method_pointer_11ad41c265a05cf086eb2100ad9b307c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_volatile", method_pointer_aaea3ab437f75ed6834339a80a5e46fa, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("dump", method_pointer_cd1a8e7295a85e6d8e3bb98bcb5f13c8, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_address_space", method_pointer_d21baa43913158adb4674a7bfe9bee5c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_cvr_qualifiers", method_pointer_fdebc6a74e4f5b3ab2a31212c4e1e49c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_canonical_type", method_pointer_2493e3db4e7b54889d538a12e4d7b143, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_cvr_qualifiers", method_pointer_c374ad0952c3512688b5936b6ce48295, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_fast_qualifiers", method_pointer_8d7cad1e7e055acf8777d8e131349b2b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_unqualified_type", method_pointer_32c3f3a28e5158b6ba25c4a95781fe12, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_non_reference_type", method_pointer_61b7499d8d335a82b0b286c3b99d1bc6, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr", method_pointer_abff5eeb1bfd530a863213351cf92bca, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr_or_null", method_pointer_7fc8bb7a030857878aa76047e843da4b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_unqualified_type", method_pointer_0b9307ef105f54d78a6271f6d0a6b38b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_non_fast_qualifiers", method_pointer_8375793cb9125b8cb7af9d60af4c9a0f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_qualifiers", method_pointer_03cf1bf531de569e9ba989da99746178, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_non_trivial_obj_c_lifetime", method_pointer_d49a747c69ed54e6b146bf6633ff619a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_qualifiers", method_pointer_8601cc716b085876a1413f1a0cb9afba, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_strong_or_weak_obj_c_lifetime", method_pointer_f92ce13194c0546ca306b7c71afe6a73, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_at_least_as_qualified_as", method_pointer_cf7e60394e155fb7b6447b4351307083, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_c_forbidden_l_value_type", method_pointer_6b69e90561be5df69d336be33f78c6ed, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx11pod_type", method_pointer_795e423b72ba53e3a4105611349684b8, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx98pod_type", method_pointer_9d4d9de0bf1b5c96951f9874fbf4f092, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical", method_pointer_ac17a0049c935ecfbb4c83f58f300740, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical_as_param", method_pointer_cddb6fc6b7ef5487b40d2290bfe6a26e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_const_qualified", method_pointer_62b2a1d4d3ba560ea89f1c5a9a571dbd, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_constant", method_pointer_e3cbed5e33f65dcc9aa9d74ff4147d5b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_const_qualified", method_pointer_d1a5658f5dd2535d8678da891b6bd5d3, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_restrict_qualified", method_pointer_335964895802529aa54d42cd2e89a875, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_volatile_qualified", method_pointer_22372044e9465973b20f5a3f90bb7f38, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_more_qualified_than", method_pointer_3e7d41135a9452698c45081ff9579cfa, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_null", method_pointer_eada5b9d92815a829b98881f9c803d8a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_strong", method_pointer_98745aa6c74d5c1a8d912c5f293d8d8f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_weak", method_pointer_d7423d1cd93e56eea70c80831c379484, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_pod_type", method_pointer_a6b494bb6edf51239b1a9afee7425f1d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_restrict_qualified", method_pointer_b9064c152a34513e9e68dcee5a6d688a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivial_type", method_pointer_cf3e05e40992599d808a2870fca61037, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivially_copyable_type", method_pointer_ad0c64db465f5383a62b7c5478ecd703, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_volatile_qualified", method_pointer_f3d5eb3bcda65d298f477536844689cc, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_cvr_qualifiers", method_pointer_969a1d12b7d056a88db9844230e68adb, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_const", method_pointer_7b98a23bc36355899c8d788c1251d7cd, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_fdf4c0a68189593780284a6a832f71a2, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_d33adc6e18545f89baf6e00c0f8624f9, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_restrict", method_pointer_3082f1789482503a815fb6fb6ba47799, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_volatile", method_pointer_b71004a1649e58d0b8c92defc49921ea, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("set_local_fast_qualifiers", method_pointer_aabc5a33207359e0a8e8ddd3ef962c14, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_cvr_qualifiers", method_pointer_597b554dbd3b5dbfb4a709fe409b532d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_const", method_pointer_b36e58c9da7e5be38d1c1b9982e9c01b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_exact_local_fast_qualifiers", method_pointer_25e60c11d5de5175b7895527d8f1313e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_fast_qualifiers", method_pointer_bf5c589496965784bc55af18ac2b1b16, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_restrict", method_pointer_77b1c793af2e5f3294b492768c26eac3, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_volatile", method_pointer_5b872abab0455531aa9c169dad8e3a69, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("without_local_fast_qualifiers", method_pointer_a1f9e6131eaa5c7183833b9103e8ccba, "");

}