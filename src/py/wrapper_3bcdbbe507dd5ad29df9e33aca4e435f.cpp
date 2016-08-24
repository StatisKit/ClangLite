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
    class ::clang::QualType  (::clang::QualType::*method_pointer_976ae24a9b105acea4742fa238d96623)() const = &::clang::QualType::IgnoreParens;
    void  (::clang::QualType::*method_pointer_3c8962fa36ff550dbcfcae2e668c2536)() = &::clang::QualType::addConst;
    void  (::clang::QualType::*method_pointer_30f8b951aee25212ae141bdbadcb009f)(unsigned int ) = &::clang::QualType::addFastQualifiers;
    void  (::clang::QualType::*method_pointer_f8791b07e7535276a990cf287326fb89)() = &::clang::QualType::addRestrict;
    void  (::clang::QualType::*method_pointer_c9fec8d3320c5a7986d297d2014652ef)() = &::clang::QualType::addVolatile;
    void  (::clang::QualType::*method_pointer_45ca9505f31b5a60b5a0cd86661efa23)() const = &::clang::QualType::dump;
    unsigned int  (::clang::QualType::*method_pointer_ce3c494e468a54189e817a78ea6d94ea)() const = &::clang::QualType::getAddressSpace;
    unsigned int  (::clang::QualType::*method_pointer_61c861f7c0e752c3a01dde8598b2012d)() const = &::clang::QualType::getCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_c40b5c2842705d8fb57faf0288c8e84b)() const = &::clang::QualType::getCanonicalType;
    unsigned int  (::clang::QualType::*method_pointer_da2689ee1c6a586baa95a79ef458b99c)() const = &::clang::QualType::getLocalCVRQualifiers;
    unsigned int  (::clang::QualType::*method_pointer_a58010f6df205348abc27a67de972b71)() const = &::clang::QualType::getLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_ef6bb9575c0c5929ab32ac69598c3c5e)() const = &::clang::QualType::getLocalUnqualifiedType;
    class ::clang::QualType  (::clang::QualType::*method_pointer_5a2af384ba8051bf8ee0baeda11ba174)() const = &::clang::QualType::getNonReferenceType;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_1bc84cdcb1bc51b59cb1ebc29e180c00)() const = &::clang::QualType::getTypePtr;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_c7acc251a5745b2aa14a4789d5c2a44c)() const = &::clang::QualType::getTypePtrOrNull;
    class ::clang::QualType  (::clang::QualType::*method_pointer_96e483815ac75c3c8939f505604c4b08)() const = &::clang::QualType::getUnqualifiedType;
    bool  (::clang::QualType::*method_pointer_0aad985f2d255901abeb2d1843296ec5)() const = &::clang::QualType::hasLocalNonFastQualifiers;
    bool  (::clang::QualType::*method_pointer_acf8af6ebb1751ff9786a68369c4400e)() const = &::clang::QualType::hasLocalQualifiers;
    bool  (::clang::QualType::*method_pointer_84179a9c9d5b5b92b42dce1f9a041407)() const = &::clang::QualType::hasNonTrivialObjCLifetime;
    bool  (::clang::QualType::*method_pointer_a1885f3cf7d35e4d8dae7d4a60cc6694)() const = &::clang::QualType::hasQualifiers;
    bool  (::clang::QualType::*method_pointer_8248aa006b6a50b4adf9556458d09ddb)() const = &::clang::QualType::hasStrongOrWeakObjCLifetime;
    bool  (::clang::QualType::*method_pointer_857da99b861a57fabad13080da7b2d4b)(class ::clang::QualType ) const = &::clang::QualType::isAtLeastAsQualifiedAs;
    bool  (::clang::QualType::*method_pointer_d5eaa45209655460a033cb3bb4df06ea)() const = &::clang::QualType::isCForbiddenLValueType;
    bool  (::clang::QualType::*method_pointer_8581b599eb7a5a1f82e57ccb8bc8b8e3)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX11PODType;
    bool  (::clang::QualType::*method_pointer_ff79ab65ffc45ef48c1db0cd8560dff9)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX98PODType;
    bool  (::clang::QualType::*method_pointer_cf31de023913518dafa9450a50dda3d1)() const = &::clang::QualType::isCanonical;
    bool  (::clang::QualType::*method_pointer_74efbe0db7925fe484022630167f77e9)() const = &::clang::QualType::isCanonicalAsParam;
    bool  (::clang::QualType::*method_pointer_323a7f7980a25cd788b87a09a248acd1)() const = &::clang::QualType::isConstQualified;
    bool  (::clang::QualType::*method_pointer_95446dc7c09551419650b48f240ad0ce)(class ::clang::ASTContext  &) const = &::clang::QualType::isConstant;
    bool  (::clang::QualType::*method_pointer_311b3a5b97d957078bdb43cdd7279c7e)() const = &::clang::QualType::isLocalConstQualified;
    bool  (::clang::QualType::*method_pointer_87b6b1cf5a9c5a8db737381f468b60bb)() const = &::clang::QualType::isLocalRestrictQualified;
    bool  (::clang::QualType::*method_pointer_5b4d3ad49b8f578eba2c30eaebd9698e)() const = &::clang::QualType::isLocalVolatileQualified;
    bool  (::clang::QualType::*method_pointer_61c4da06276850b28e5f7ee6b84e7c8e)(class ::clang::QualType ) const = &::clang::QualType::isMoreQualifiedThan;
    bool  (::clang::QualType::*method_pointer_29479c85a967566ebfa14770d70b4449)() const = &::clang::QualType::isNull;
    bool  (::clang::QualType::*method_pointer_4c59a023cda55720b0a7230ecea8b038)() const = &::clang::QualType::isObjCGCStrong;
    bool  (::clang::QualType::*method_pointer_bb683f4069f45d50a32badaa41527710)() const = &::clang::QualType::isObjCGCWeak;
    bool  (::clang::QualType::*method_pointer_4ef7a8281c9e5aada1ae9351a817145b)(class ::clang::ASTContext  &) const = &::clang::QualType::isPODType;
    bool  (::clang::QualType::*method_pointer_c18dc82036335be9a8147fb4cfe4c896)() const = &::clang::QualType::isRestrictQualified;
    bool  (::clang::QualType::*method_pointer_3f633265031c5ef7ae85810607210467)(class ::clang::ASTContext  &) const = &::clang::QualType::isTrivialType;
    bool  (::clang::QualType::*method_pointer_4d236afa94d95aa29754f1b78796efb8)(class ::clang::ASTContext  &) const = &::clang::QualType::isTriviallyCopyableType;
    bool  (::clang::QualType::*method_pointer_5a20ae1e965c5be389cf2be5f3c1971c)() const = &::clang::QualType::isVolatileQualified;
    void  (::clang::QualType::*method_pointer_d646a323c50b52ccb330de48e641d2e1)(unsigned int ) = &::clang::QualType::removeLocalCVRQualifiers;
    void  (::clang::QualType::*method_pointer_a51e9ea296d95d92b7235856f177c046)() = &::clang::QualType::removeLocalConst;
    void  (::clang::QualType::*method_pointer_97521c7b53a1578f9952d9bbbce17541)(unsigned int ) = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_a60a8df4ebc35ee38eec29805069f9d5)() = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_a1ba31750b7d5fb880ec2fb23d300cf6)() = &::clang::QualType::removeLocalRestrict;
    void  (::clang::QualType::*method_pointer_3c42aaa4237e5b6bbc282b660aa988ec)() = &::clang::QualType::removeLocalVolatile;
    void  (::clang::QualType::*method_pointer_35e3d81fa321559794de8977d636aeee)(unsigned int ) = &::clang::QualType::setLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_e4de6ae23cdb5759a722bffa07bc92de)(unsigned int ) const = &::clang::QualType::withCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_10f3f922a999531abdd8000f3d85d9cc)() const = &::clang::QualType::withConst;
    class ::clang::QualType  (::clang::QualType::*method_pointer_5ba080d090d45f1fa260a82b3699e2fd)(unsigned int ) const = &::clang::QualType::withExactLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_559285c4cb1c562ba5adc8c08f4eb748)(unsigned int ) const = &::clang::QualType::withFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_511603d4fe385151abd92bf3fb20aa70)() const = &::clang::QualType::withRestrict;
    class ::clang::QualType  (::clang::QualType::*method_pointer_ac4cfb9f370f58b38b26794eb8ef5d6d)() const = &::clang::QualType::withVolatile;
    class ::clang::QualType  (::clang::QualType::*method_pointer_1b2e6a4fb8fc5c7fbc357759b9ae2e8e)() const = &::clang::QualType::withoutLocalFastQualifiers;
    boost::python::class_< class ::clang::QualType, autowig::HeldType< class ::clang::QualType > > class_3bcdbbe507dd5ad29df9e33aca4e435f("QualType", "", boost::python::no_init);
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("ignore_parens", method_pointer_976ae24a9b105acea4742fa238d96623, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_const", method_pointer_3c8962fa36ff550dbcfcae2e668c2536, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_fast_qualifiers", method_pointer_30f8b951aee25212ae141bdbadcb009f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_restrict", method_pointer_f8791b07e7535276a990cf287326fb89, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_volatile", method_pointer_c9fec8d3320c5a7986d297d2014652ef, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("dump", method_pointer_45ca9505f31b5a60b5a0cd86661efa23, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_address_space", method_pointer_ce3c494e468a54189e817a78ea6d94ea, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_cvr_qualifiers", method_pointer_61c861f7c0e752c3a01dde8598b2012d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_canonical_type", method_pointer_c40b5c2842705d8fb57faf0288c8e84b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_cvr_qualifiers", method_pointer_da2689ee1c6a586baa95a79ef458b99c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_fast_qualifiers", method_pointer_a58010f6df205348abc27a67de972b71, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_unqualified_type", method_pointer_ef6bb9575c0c5929ab32ac69598c3c5e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_non_reference_type", method_pointer_5a2af384ba8051bf8ee0baeda11ba174, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr", method_pointer_1bc84cdcb1bc51b59cb1ebc29e180c00, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr_or_null", method_pointer_c7acc251a5745b2aa14a4789d5c2a44c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_unqualified_type", method_pointer_96e483815ac75c3c8939f505604c4b08, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_non_fast_qualifiers", method_pointer_0aad985f2d255901abeb2d1843296ec5, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_qualifiers", method_pointer_acf8af6ebb1751ff9786a68369c4400e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_non_trivial_obj_c_lifetime", method_pointer_84179a9c9d5b5b92b42dce1f9a041407, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_qualifiers", method_pointer_a1885f3cf7d35e4d8dae7d4a60cc6694, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_strong_or_weak_obj_c_lifetime", method_pointer_8248aa006b6a50b4adf9556458d09ddb, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_at_least_as_qualified_as", method_pointer_857da99b861a57fabad13080da7b2d4b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_c_forbidden_l_value_type", method_pointer_d5eaa45209655460a033cb3bb4df06ea, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx11pod_type", method_pointer_8581b599eb7a5a1f82e57ccb8bc8b8e3, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx98pod_type", method_pointer_ff79ab65ffc45ef48c1db0cd8560dff9, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical", method_pointer_cf31de023913518dafa9450a50dda3d1, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical_as_param", method_pointer_74efbe0db7925fe484022630167f77e9, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_const_qualified", method_pointer_323a7f7980a25cd788b87a09a248acd1, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_constant", method_pointer_95446dc7c09551419650b48f240ad0ce, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_const_qualified", method_pointer_311b3a5b97d957078bdb43cdd7279c7e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_restrict_qualified", method_pointer_87b6b1cf5a9c5a8db737381f468b60bb, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_volatile_qualified", method_pointer_5b4d3ad49b8f578eba2c30eaebd9698e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_more_qualified_than", method_pointer_61c4da06276850b28e5f7ee6b84e7c8e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_null", method_pointer_29479c85a967566ebfa14770d70b4449, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_strong", method_pointer_4c59a023cda55720b0a7230ecea8b038, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_weak", method_pointer_bb683f4069f45d50a32badaa41527710, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_pod_type", method_pointer_4ef7a8281c9e5aada1ae9351a817145b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_restrict_qualified", method_pointer_c18dc82036335be9a8147fb4cfe4c896, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivial_type", method_pointer_3f633265031c5ef7ae85810607210467, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivially_copyable_type", method_pointer_4d236afa94d95aa29754f1b78796efb8, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_volatile_qualified", method_pointer_5a20ae1e965c5be389cf2be5f3c1971c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_cvr_qualifiers", method_pointer_d646a323c50b52ccb330de48e641d2e1, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_const", method_pointer_a51e9ea296d95d92b7235856f177c046, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_97521c7b53a1578f9952d9bbbce17541, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_a60a8df4ebc35ee38eec29805069f9d5, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_restrict", method_pointer_a1ba31750b7d5fb880ec2fb23d300cf6, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_volatile", method_pointer_3c42aaa4237e5b6bbc282b660aa988ec, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("set_local_fast_qualifiers", method_pointer_35e3d81fa321559794de8977d636aeee, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_cvr_qualifiers", method_pointer_e4de6ae23cdb5759a722bffa07bc92de, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_const", method_pointer_10f3f922a999531abdd8000f3d85d9cc, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_exact_local_fast_qualifiers", method_pointer_5ba080d090d45f1fa260a82b3699e2fd, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_fast_qualifiers", method_pointer_559285c4cb1c562ba5adc8c08f4eb748, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_restrict", method_pointer_511603d4fe385151abd92bf3fb20aa70, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_volatile", method_pointer_ac4cfb9f370f58b38b26794eb8ef5d6d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("without_local_fast_qualifiers", method_pointer_1b2e6a4fb8fc5c7fbc357759b9ae2e8e, "");

}