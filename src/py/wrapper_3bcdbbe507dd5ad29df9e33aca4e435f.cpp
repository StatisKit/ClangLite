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
    class ::clang::QualType  (::clang::QualType::*method_pointer_be002dc102b35e4298bf48a0735b7563)() const = &::clang::QualType::IgnoreParens;
    void  (::clang::QualType::*method_pointer_b468f79281d651a6b51c5ba289720ec0)() = &::clang::QualType::addConst;
    void  (::clang::QualType::*method_pointer_abcdab0496ce57f1b581f959bfdd206e)(unsigned int ) = &::clang::QualType::addFastQualifiers;
    void  (::clang::QualType::*method_pointer_f5ba8fc473775cd182f921132270eb8f)() = &::clang::QualType::addRestrict;
    void  (::clang::QualType::*method_pointer_5d0dd70841ac559a96e6108a9e987a64)() = &::clang::QualType::addVolatile;
    void  (::clang::QualType::*method_pointer_280f5c918c9552cbb9e698e188e8c223)() const = &::clang::QualType::dump;
    unsigned int  (::clang::QualType::*method_pointer_58725c0084885d20af51e841710ed290)() const = &::clang::QualType::getAddressSpace;
    unsigned int  (::clang::QualType::*method_pointer_b76ab051cc7b53e480de7e5cb47d37c3)() const = &::clang::QualType::getCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_9eef37bbfd285410808a6e0e5333aa17)() const = &::clang::QualType::getCanonicalType;
    unsigned int  (::clang::QualType::*method_pointer_3b40d61275ca598c933d6497fb1fdec0)() const = &::clang::QualType::getLocalCVRQualifiers;
    unsigned int  (::clang::QualType::*method_pointer_77fa1260a2f15efab9ae15d9548d8be5)() const = &::clang::QualType::getLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_8880bfbb12bb50eabc2a7dd0749f0881)() const = &::clang::QualType::getLocalUnqualifiedType;
    class ::clang::QualType  (::clang::QualType::*method_pointer_1cb0df5449ef5262bea883fe5e98ed68)() const = &::clang::QualType::getNonReferenceType;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_941d79479f8451299f59421fd45c3102)() const = &::clang::QualType::getTypePtr;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_658679a7b3e657fcb9e5c86ed20adf28)() const = &::clang::QualType::getTypePtrOrNull;
    class ::clang::QualType  (::clang::QualType::*method_pointer_6774f43244185a3cbf33eb2df2394dbb)() const = &::clang::QualType::getUnqualifiedType;
    bool  (::clang::QualType::*method_pointer_735eb79754575e2a9598bd2d3e984312)() const = &::clang::QualType::hasLocalNonFastQualifiers;
    bool  (::clang::QualType::*method_pointer_9a67b682f50a5704b59a608431b45756)() const = &::clang::QualType::hasLocalQualifiers;
    bool  (::clang::QualType::*method_pointer_6caa736a04975823b90b6fab1ff030f3)() const = &::clang::QualType::hasNonTrivialObjCLifetime;
    bool  (::clang::QualType::*method_pointer_c35936a780175747846268d742bfab09)() const = &::clang::QualType::hasQualifiers;
    bool  (::clang::QualType::*method_pointer_c005aea7a6d85dcca3d47f568c177da2)() const = &::clang::QualType::hasStrongOrWeakObjCLifetime;
    bool  (::clang::QualType::*method_pointer_2a546aca82985a05a9f8855ae629a1e8)(class ::clang::QualType ) const = &::clang::QualType::isAtLeastAsQualifiedAs;
    bool  (::clang::QualType::*method_pointer_f1fe6aab2e4f5e7a83fcb5e3e514493c)() const = &::clang::QualType::isCForbiddenLValueType;
    bool  (::clang::QualType::*method_pointer_acd9e6b283405e10a60100d69b8d979c)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX11PODType;
    bool  (::clang::QualType::*method_pointer_c2bb5a2b4db3515496628f551279bc3c)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX98PODType;
    bool  (::clang::QualType::*method_pointer_cf5fcd8f23905fe4afcb21e688a77eaf)() const = &::clang::QualType::isCanonical;
    bool  (::clang::QualType::*method_pointer_c654a7d6bb6a503aa7806f4229298963)() const = &::clang::QualType::isCanonicalAsParam;
    bool  (::clang::QualType::*method_pointer_7948e2b7522f536f9b1872c06d2e5bf4)() const = &::clang::QualType::isConstQualified;
    bool  (::clang::QualType::*method_pointer_95bae63fcefe5f80992aa2c98d1ce8b3)(class ::clang::ASTContext  &) const = &::clang::QualType::isConstant;
    bool  (::clang::QualType::*method_pointer_b6e557473f025abbb5f1c47b814512a3)() const = &::clang::QualType::isLocalConstQualified;
    bool  (::clang::QualType::*method_pointer_d89f652938b251a2a645e295fdbb90e5)() const = &::clang::QualType::isLocalRestrictQualified;
    bool  (::clang::QualType::*method_pointer_e0782a86383c56668405494d0ee524bd)() const = &::clang::QualType::isLocalVolatileQualified;
    bool  (::clang::QualType::*method_pointer_1817a123cae95fe48b087108cb1001b4)(class ::clang::QualType ) const = &::clang::QualType::isMoreQualifiedThan;
    bool  (::clang::QualType::*method_pointer_50dc4bd663595454b5ffd8d82232c965)() const = &::clang::QualType::isNull;
    bool  (::clang::QualType::*method_pointer_afb8bfdb96635b7b9b2733b7982ce403)() const = &::clang::QualType::isObjCGCStrong;
    bool  (::clang::QualType::*method_pointer_c08d9816eae4508b9b1392ac62653b6e)() const = &::clang::QualType::isObjCGCWeak;
    bool  (::clang::QualType::*method_pointer_77866e07531d517ea20ec988b823657c)(class ::clang::ASTContext  &) const = &::clang::QualType::isPODType;
    bool  (::clang::QualType::*method_pointer_63073cd156d55c20bef858216c69accf)() const = &::clang::QualType::isRestrictQualified;
    bool  (::clang::QualType::*method_pointer_25e8cf5e8035522d940231bf719f4b15)(class ::clang::ASTContext  &) const = &::clang::QualType::isTrivialType;
    bool  (::clang::QualType::*method_pointer_5f0d4271591a51049422f5b6a7745caa)(class ::clang::ASTContext  &) const = &::clang::QualType::isTriviallyCopyableType;
    bool  (::clang::QualType::*method_pointer_a1fffe08b7825d69950dccfc8b80c675)() const = &::clang::QualType::isVolatileQualified;
    void  (::clang::QualType::*method_pointer_a883e616c0105a0bb3af57199580be70)(unsigned int ) = &::clang::QualType::removeLocalCVRQualifiers;
    void  (::clang::QualType::*method_pointer_c8354265b5385778b07587e67b5c7279)() = &::clang::QualType::removeLocalConst;
    void  (::clang::QualType::*method_pointer_d64f90195b75516d9c7387df5f0890fb)(unsigned int ) = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_7410e1f0bac956babd27082d1ce468e3)() = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_793c3e0ae5c755c2a01eaff2309d9cf6)() = &::clang::QualType::removeLocalRestrict;
    void  (::clang::QualType::*method_pointer_2d016a3b36455f23a7d3edaf7700559b)() = &::clang::QualType::removeLocalVolatile;
    void  (::clang::QualType::*method_pointer_6e075b1e6645506c98e21af2c54cdffc)(unsigned int ) = &::clang::QualType::setLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_e45185a4c6f8570481b4aba49f498490)(unsigned int ) const = &::clang::QualType::withCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_446772991181533d8edb92365933bda3)() const = &::clang::QualType::withConst;
    class ::clang::QualType  (::clang::QualType::*method_pointer_16e73f5dc53e5b7f80a7dc23218e75c9)(unsigned int ) const = &::clang::QualType::withExactLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_6f1214d15e285e4088a98c11f2b81d29)(unsigned int ) const = &::clang::QualType::withFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_6ac93a97149852f99fca684353e11c5c)() const = &::clang::QualType::withRestrict;
    class ::clang::QualType  (::clang::QualType::*method_pointer_db0f0977520b547babb0ba732b6e18ed)() const = &::clang::QualType::withVolatile;
    class ::clang::QualType  (::clang::QualType::*method_pointer_adaf266eb5c956aaa8588d6483ec07d1)() const = &::clang::QualType::withoutLocalFastQualifiers;
    boost::python::class_< class ::clang::QualType, autowig::HeldType< class ::clang::QualType > > class_3bcdbbe507dd5ad29df9e33aca4e435f("QualType", "", boost::python::no_init);
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("ignore_parens", method_pointer_be002dc102b35e4298bf48a0735b7563, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_const", method_pointer_b468f79281d651a6b51c5ba289720ec0, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_fast_qualifiers", method_pointer_abcdab0496ce57f1b581f959bfdd206e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_restrict", method_pointer_f5ba8fc473775cd182f921132270eb8f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_volatile", method_pointer_5d0dd70841ac559a96e6108a9e987a64, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("dump", method_pointer_280f5c918c9552cbb9e698e188e8c223, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_address_space", method_pointer_58725c0084885d20af51e841710ed290, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_cvr_qualifiers", method_pointer_b76ab051cc7b53e480de7e5cb47d37c3, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_canonical_type", method_pointer_9eef37bbfd285410808a6e0e5333aa17, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_cvr_qualifiers", method_pointer_3b40d61275ca598c933d6497fb1fdec0, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_fast_qualifiers", method_pointer_77fa1260a2f15efab9ae15d9548d8be5, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_unqualified_type", method_pointer_8880bfbb12bb50eabc2a7dd0749f0881, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_non_reference_type", method_pointer_1cb0df5449ef5262bea883fe5e98ed68, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr", method_pointer_941d79479f8451299f59421fd45c3102, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr_or_null", method_pointer_658679a7b3e657fcb9e5c86ed20adf28, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_unqualified_type", method_pointer_6774f43244185a3cbf33eb2df2394dbb, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_non_fast_qualifiers", method_pointer_735eb79754575e2a9598bd2d3e984312, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_qualifiers", method_pointer_9a67b682f50a5704b59a608431b45756, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_non_trivial_obj_c_lifetime", method_pointer_6caa736a04975823b90b6fab1ff030f3, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_qualifiers", method_pointer_c35936a780175747846268d742bfab09, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_strong_or_weak_obj_c_lifetime", method_pointer_c005aea7a6d85dcca3d47f568c177da2, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_at_least_as_qualified_as", method_pointer_2a546aca82985a05a9f8855ae629a1e8, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_c_forbidden_l_value_type", method_pointer_f1fe6aab2e4f5e7a83fcb5e3e514493c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx11pod_type", method_pointer_acd9e6b283405e10a60100d69b8d979c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx98pod_type", method_pointer_c2bb5a2b4db3515496628f551279bc3c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical", method_pointer_cf5fcd8f23905fe4afcb21e688a77eaf, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical_as_param", method_pointer_c654a7d6bb6a503aa7806f4229298963, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_const_qualified", method_pointer_7948e2b7522f536f9b1872c06d2e5bf4, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_constant", method_pointer_95bae63fcefe5f80992aa2c98d1ce8b3, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_const_qualified", method_pointer_b6e557473f025abbb5f1c47b814512a3, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_restrict_qualified", method_pointer_d89f652938b251a2a645e295fdbb90e5, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_volatile_qualified", method_pointer_e0782a86383c56668405494d0ee524bd, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_more_qualified_than", method_pointer_1817a123cae95fe48b087108cb1001b4, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_null", method_pointer_50dc4bd663595454b5ffd8d82232c965, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_strong", method_pointer_afb8bfdb96635b7b9b2733b7982ce403, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_weak", method_pointer_c08d9816eae4508b9b1392ac62653b6e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_pod_type", method_pointer_77866e07531d517ea20ec988b823657c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_restrict_qualified", method_pointer_63073cd156d55c20bef858216c69accf, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivial_type", method_pointer_25e8cf5e8035522d940231bf719f4b15, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivially_copyable_type", method_pointer_5f0d4271591a51049422f5b6a7745caa, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_volatile_qualified", method_pointer_a1fffe08b7825d69950dccfc8b80c675, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_cvr_qualifiers", method_pointer_a883e616c0105a0bb3af57199580be70, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_const", method_pointer_c8354265b5385778b07587e67b5c7279, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_d64f90195b75516d9c7387df5f0890fb, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_7410e1f0bac956babd27082d1ce468e3, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_restrict", method_pointer_793c3e0ae5c755c2a01eaff2309d9cf6, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_volatile", method_pointer_2d016a3b36455f23a7d3edaf7700559b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("set_local_fast_qualifiers", method_pointer_6e075b1e6645506c98e21af2c54cdffc, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_cvr_qualifiers", method_pointer_e45185a4c6f8570481b4aba49f498490, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_const", method_pointer_446772991181533d8edb92365933bda3, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_exact_local_fast_qualifiers", method_pointer_16e73f5dc53e5b7f80a7dc23218e75c9, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_fast_qualifiers", method_pointer_6f1214d15e285e4088a98c11f2b81d29, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_restrict", method_pointer_6ac93a97149852f99fca684353e11c5c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_volatile", method_pointer_db0f0977520b547babb0ba732b6e18ed, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("without_local_fast_qualifiers", method_pointer_adaf266eb5c956aaa8588d6483ec07d1, "");

}