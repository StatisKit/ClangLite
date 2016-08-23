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
    class ::clang::QualType  (::clang::QualType::*method_pointer_7c218a3c38b45519831c1b4e71d49698)() const = &::clang::QualType::IgnoreParens;
    void  (::clang::QualType::*method_pointer_6d910405c67f5157b3f00ea6109acc5c)() = &::clang::QualType::addConst;
    void  (::clang::QualType::*method_pointer_2bfc45f60b1c56458643afa99b3924a7)(unsigned int ) = &::clang::QualType::addFastQualifiers;
    void  (::clang::QualType::*method_pointer_b83e47ba89b85c02ab8bce3e0036722b)() = &::clang::QualType::addRestrict;
    void  (::clang::QualType::*method_pointer_4bd3e472f8425d5cad532a5d1e2d4ede)() = &::clang::QualType::addVolatile;
    void  (::clang::QualType::*method_pointer_15c287372524591990b0dc71c6472d81)() const = &::clang::QualType::dump;
    unsigned int  (::clang::QualType::*method_pointer_d7e45fba93075573a21c059fc9f9e88e)() const = &::clang::QualType::getAddressSpace;
    unsigned int  (::clang::QualType::*method_pointer_5a72a9581c8f51e096ee9dae1d2348c7)() const = &::clang::QualType::getCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_c581557a77c25474b501497314eda49a)() const = &::clang::QualType::getCanonicalType;
    unsigned int  (::clang::QualType::*method_pointer_2453f904200e5e149a11fa4adac945c2)() const = &::clang::QualType::getLocalCVRQualifiers;
    unsigned int  (::clang::QualType::*method_pointer_5d3a00c0c8a25ee88f2159d71d9ebe79)() const = &::clang::QualType::getLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_4c83d17ff3685d129c6eb1acc40e0e8a)() const = &::clang::QualType::getLocalUnqualifiedType;
    class ::clang::QualType  (::clang::QualType::*method_pointer_8d753f525a16529bb17eff2be6b0928b)() const = &::clang::QualType::getNonReferenceType;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_0b3329610fb05b0da299720418a02160)() const = &::clang::QualType::getTypePtr;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_dc565d501a96564aa0dc261050a8a455)() const = &::clang::QualType::getTypePtrOrNull;
    class ::clang::QualType  (::clang::QualType::*method_pointer_ed679e53282753aabe999affdd54f0e3)() const = &::clang::QualType::getUnqualifiedType;
    bool  (::clang::QualType::*method_pointer_12d0360e0547501396c4dfc5058a0a0d)() const = &::clang::QualType::hasLocalNonFastQualifiers;
    bool  (::clang::QualType::*method_pointer_d664183120c15527996467686b08b206)() const = &::clang::QualType::hasLocalQualifiers;
    bool  (::clang::QualType::*method_pointer_cc99ed40b8b8538ca21be5ae6aa52079)() const = &::clang::QualType::hasNonTrivialObjCLifetime;
    bool  (::clang::QualType::*method_pointer_882021d5c4c15a85b8ed9a72bd437158)() const = &::clang::QualType::hasQualifiers;
    bool  (::clang::QualType::*method_pointer_1c8f674c5b9b5c3ea32aefbdfdec6f1f)() const = &::clang::QualType::hasStrongOrWeakObjCLifetime;
    bool  (::clang::QualType::*method_pointer_8f7c385a6cff5e3ab08fe54a92e94b5e)(class ::clang::QualType ) const = &::clang::QualType::isAtLeastAsQualifiedAs;
    bool  (::clang::QualType::*method_pointer_3906c97497f15039a2eef7818f033b3f)() const = &::clang::QualType::isCForbiddenLValueType;
    bool  (::clang::QualType::*method_pointer_8a8fb55a1e3556fe885f542c3f3d1f0a)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX11PODType;
    bool  (::clang::QualType::*method_pointer_5fd0f72767ab52af9858f8820d4c3b2b)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX98PODType;
    bool  (::clang::QualType::*method_pointer_ab808dc01f7754e6b2f4f54c4d1016b5)() const = &::clang::QualType::isCanonical;
    bool  (::clang::QualType::*method_pointer_57732a877b0b5e8c81324a48419a4b00)() const = &::clang::QualType::isCanonicalAsParam;
    bool  (::clang::QualType::*method_pointer_3f627232afe35c7c99716afb6ec27373)() const = &::clang::QualType::isConstQualified;
    bool  (::clang::QualType::*method_pointer_4affb04665285c6f8c514a3b97cf3353)(class ::clang::ASTContext  &) const = &::clang::QualType::isConstant;
    bool  (::clang::QualType::*method_pointer_8f19f002526c596ab9a1abc5a739be65)() const = &::clang::QualType::isLocalConstQualified;
    bool  (::clang::QualType::*method_pointer_f059e069131358cd8e6bc8656456c91a)() const = &::clang::QualType::isLocalRestrictQualified;
    bool  (::clang::QualType::*method_pointer_f06b1edef08d5b01b6688d293cf18586)() const = &::clang::QualType::isLocalVolatileQualified;
    bool  (::clang::QualType::*method_pointer_c6ba1920711a5aa5b2a9757e55e1f5b4)(class ::clang::QualType ) const = &::clang::QualType::isMoreQualifiedThan;
    bool  (::clang::QualType::*method_pointer_2a47a383192351569afebb597cd1a3e7)() const = &::clang::QualType::isNull;
    bool  (::clang::QualType::*method_pointer_5435ac13c626549fbc6c2c93bf5e0da3)() const = &::clang::QualType::isObjCGCStrong;
    bool  (::clang::QualType::*method_pointer_98c94e1de7fa54388ede8be1a54e807a)() const = &::clang::QualType::isObjCGCWeak;
    bool  (::clang::QualType::*method_pointer_e4b2511cf498520a8a50a7ff207ee596)(class ::clang::ASTContext  &) const = &::clang::QualType::isPODType;
    bool  (::clang::QualType::*method_pointer_6db954a008f6560e91ccb9ebbacf2a90)() const = &::clang::QualType::isRestrictQualified;
    bool  (::clang::QualType::*method_pointer_7f527fbfeecf58c09cfda7f9c758aa85)(class ::clang::ASTContext  &) const = &::clang::QualType::isTrivialType;
    bool  (::clang::QualType::*method_pointer_78b109890a105166acea744ec4378de9)(class ::clang::ASTContext  &) const = &::clang::QualType::isTriviallyCopyableType;
    bool  (::clang::QualType::*method_pointer_218d48401901597db7ee03cad5454773)() const = &::clang::QualType::isVolatileQualified;
    void  (::clang::QualType::*method_pointer_dab3231c85d75f438c1ca57bfe60c099)(unsigned int ) = &::clang::QualType::removeLocalCVRQualifiers;
    void  (::clang::QualType::*method_pointer_dffa379a1e4c56a49ac1c4bb170e4755)() = &::clang::QualType::removeLocalConst;
    void  (::clang::QualType::*method_pointer_5a139cfb6ade5781954f47a2e73ce3ac)() = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_aea1a3ceb700553584c034b43bec39f8)(unsigned int ) = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_4a6ef3b53b815619b0ae6f561136e049)() = &::clang::QualType::removeLocalRestrict;
    void  (::clang::QualType::*method_pointer_96402a2f1a4552ed8104215ac8880ed6)() = &::clang::QualType::removeLocalVolatile;
    void  (::clang::QualType::*method_pointer_ec204abdbd15580b9ab3b62832730ea3)(unsigned int ) = &::clang::QualType::setLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_242db229707b57ed82e5626adbc9f2db)(unsigned int ) const = &::clang::QualType::withCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_d1bef50689fc53be8b1fed87cb1065f0)() const = &::clang::QualType::withConst;
    class ::clang::QualType  (::clang::QualType::*method_pointer_08e5fb341fd350d3b78275771d730bf7)(unsigned int ) const = &::clang::QualType::withExactLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_b5d2335905965b26ac68d7eae4a29be1)(unsigned int ) const = &::clang::QualType::withFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_6c73e16085f55ed09eaf4a60b136504c)() const = &::clang::QualType::withRestrict;
    class ::clang::QualType  (::clang::QualType::*method_pointer_8aae4731daea5e24ae731cc3133394b4)() const = &::clang::QualType::withVolatile;
    class ::clang::QualType  (::clang::QualType::*method_pointer_1ca48c15d3125c968f2278212c5741c9)() const = &::clang::QualType::withoutLocalFastQualifiers;
    boost::python::class_< class ::clang::QualType, autowig::HeldType< class ::clang::QualType >, boost::noncopyable > class_3bcdbbe507dd5ad29df9e33aca4e435f("QualType", "", boost::python::no_init);
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("ignore_parens", method_pointer_7c218a3c38b45519831c1b4e71d49698, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_const", method_pointer_6d910405c67f5157b3f00ea6109acc5c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_fast_qualifiers", method_pointer_2bfc45f60b1c56458643afa99b3924a7, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_restrict", method_pointer_b83e47ba89b85c02ab8bce3e0036722b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_volatile", method_pointer_4bd3e472f8425d5cad532a5d1e2d4ede, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("dump", method_pointer_15c287372524591990b0dc71c6472d81, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_address_space", method_pointer_d7e45fba93075573a21c059fc9f9e88e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_cvr_qualifiers", method_pointer_5a72a9581c8f51e096ee9dae1d2348c7, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_canonical_type", method_pointer_c581557a77c25474b501497314eda49a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_cvr_qualifiers", method_pointer_2453f904200e5e149a11fa4adac945c2, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_fast_qualifiers", method_pointer_5d3a00c0c8a25ee88f2159d71d9ebe79, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_unqualified_type", method_pointer_4c83d17ff3685d129c6eb1acc40e0e8a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_non_reference_type", method_pointer_8d753f525a16529bb17eff2be6b0928b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr", method_pointer_0b3329610fb05b0da299720418a02160, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr_or_null", method_pointer_dc565d501a96564aa0dc261050a8a455, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_unqualified_type", method_pointer_ed679e53282753aabe999affdd54f0e3, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_non_fast_qualifiers", method_pointer_12d0360e0547501396c4dfc5058a0a0d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_qualifiers", method_pointer_d664183120c15527996467686b08b206, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_non_trivial_obj_c_lifetime", method_pointer_cc99ed40b8b8538ca21be5ae6aa52079, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_qualifiers", method_pointer_882021d5c4c15a85b8ed9a72bd437158, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_strong_or_weak_obj_c_lifetime", method_pointer_1c8f674c5b9b5c3ea32aefbdfdec6f1f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_at_least_as_qualified_as", method_pointer_8f7c385a6cff5e3ab08fe54a92e94b5e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_c_forbidden_l_value_type", method_pointer_3906c97497f15039a2eef7818f033b3f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx11pod_type", method_pointer_8a8fb55a1e3556fe885f542c3f3d1f0a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx98pod_type", method_pointer_5fd0f72767ab52af9858f8820d4c3b2b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical", method_pointer_ab808dc01f7754e6b2f4f54c4d1016b5, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical_as_param", method_pointer_57732a877b0b5e8c81324a48419a4b00, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_const_qualified", method_pointer_3f627232afe35c7c99716afb6ec27373, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_constant", method_pointer_4affb04665285c6f8c514a3b97cf3353, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_const_qualified", method_pointer_8f19f002526c596ab9a1abc5a739be65, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_restrict_qualified", method_pointer_f059e069131358cd8e6bc8656456c91a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_volatile_qualified", method_pointer_f06b1edef08d5b01b6688d293cf18586, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_more_qualified_than", method_pointer_c6ba1920711a5aa5b2a9757e55e1f5b4, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_null", method_pointer_2a47a383192351569afebb597cd1a3e7, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_strong", method_pointer_5435ac13c626549fbc6c2c93bf5e0da3, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_weak", method_pointer_98c94e1de7fa54388ede8be1a54e807a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_pod_type", method_pointer_e4b2511cf498520a8a50a7ff207ee596, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_restrict_qualified", method_pointer_6db954a008f6560e91ccb9ebbacf2a90, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivial_type", method_pointer_7f527fbfeecf58c09cfda7f9c758aa85, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivially_copyable_type", method_pointer_78b109890a105166acea744ec4378de9, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_volatile_qualified", method_pointer_218d48401901597db7ee03cad5454773, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_cvr_qualifiers", method_pointer_dab3231c85d75f438c1ca57bfe60c099, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_const", method_pointer_dffa379a1e4c56a49ac1c4bb170e4755, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_5a139cfb6ade5781954f47a2e73ce3ac, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_aea1a3ceb700553584c034b43bec39f8, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_restrict", method_pointer_4a6ef3b53b815619b0ae6f561136e049, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_volatile", method_pointer_96402a2f1a4552ed8104215ac8880ed6, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("set_local_fast_qualifiers", method_pointer_ec204abdbd15580b9ab3b62832730ea3, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_cvr_qualifiers", method_pointer_242db229707b57ed82e5626adbc9f2db, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_const", method_pointer_d1bef50689fc53be8b1fed87cb1065f0, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_exact_local_fast_qualifiers", method_pointer_08e5fb341fd350d3b78275771d730bf7, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_fast_qualifiers", method_pointer_b5d2335905965b26ac68d7eae4a29be1, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_restrict", method_pointer_6c73e16085f55ed09eaf4a60b136504c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_volatile", method_pointer_8aae4731daea5e24ae731cc3133394b4, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("without_local_fast_qualifiers", method_pointer_1ca48c15d3125c968f2278212c5741c9, "");

}