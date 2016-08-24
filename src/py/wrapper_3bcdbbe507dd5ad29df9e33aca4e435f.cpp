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
    class ::clang::QualType  (::clang::QualType::*method_pointer_9e5d61bb288b57de9c49f644666d8626)() const = &::clang::QualType::IgnoreParens;
    void  (::clang::QualType::*method_pointer_50b493c58ac75d3a98b00cd2127a1f9c)() = &::clang::QualType::addConst;
    void  (::clang::QualType::*method_pointer_39defc406ea85fb5a404d427d5cca3f4)(unsigned int ) = &::clang::QualType::addFastQualifiers;
    void  (::clang::QualType::*method_pointer_18c715b77f495dffba9b65f402fb5998)() = &::clang::QualType::addRestrict;
    void  (::clang::QualType::*method_pointer_e76d99996cf95613a1ede8f4dbf5b50f)() = &::clang::QualType::addVolatile;
    void  (::clang::QualType::*method_pointer_65deb51a684b5b95a321f37a0dc92a86)() const = &::clang::QualType::dump;
    unsigned int  (::clang::QualType::*method_pointer_78b4204381005b989fe1a63d910ed4ed)() const = &::clang::QualType::getAddressSpace;
    unsigned int  (::clang::QualType::*method_pointer_47ace5a5140f599ba6242860b0dd53ce)() const = &::clang::QualType::getCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_ab7e82d6c8a95d9091d81eb52446beec)() const = &::clang::QualType::getCanonicalType;
    unsigned int  (::clang::QualType::*method_pointer_799be808fcd55fe4bfb50225473020e1)() const = &::clang::QualType::getLocalCVRQualifiers;
    unsigned int  (::clang::QualType::*method_pointer_54feb35e7c2056c8a0ca209ba74529bb)() const = &::clang::QualType::getLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_02eb333b64bb582a9485532dca5e947d)() const = &::clang::QualType::getLocalUnqualifiedType;
    class ::clang::QualType  (::clang::QualType::*method_pointer_8ca01162d3a653ffa87df18b294e08c9)() const = &::clang::QualType::getNonReferenceType;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_7212362f9dd95aac8f2395a430aa88eb)() const = &::clang::QualType::getTypePtr;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_ea899ed28e56541b95bc0498e14e4acf)() const = &::clang::QualType::getTypePtrOrNull;
    class ::clang::QualType  (::clang::QualType::*method_pointer_ab113574d6e25f809b7b47d60ddf274e)() const = &::clang::QualType::getUnqualifiedType;
    bool  (::clang::QualType::*method_pointer_f496b10052b95001bc6b4746963ad0b3)() const = &::clang::QualType::hasLocalNonFastQualifiers;
    bool  (::clang::QualType::*method_pointer_d8d6c1ae7d8653128093b0c642a48f0b)() const = &::clang::QualType::hasLocalQualifiers;
    bool  (::clang::QualType::*method_pointer_89cdc694590b593a8c03a1243d4bf97b)() const = &::clang::QualType::hasNonTrivialObjCLifetime;
    bool  (::clang::QualType::*method_pointer_1a9900cbbf1f59d3a527ccf793b9282d)() const = &::clang::QualType::hasQualifiers;
    bool  (::clang::QualType::*method_pointer_6fa93fe2a02e56f088e245363a82d088)() const = &::clang::QualType::hasStrongOrWeakObjCLifetime;
    bool  (::clang::QualType::*method_pointer_72b4dcc6cbe6564b945d82c3acb0015c)(class ::clang::QualType ) const = &::clang::QualType::isAtLeastAsQualifiedAs;
    bool  (::clang::QualType::*method_pointer_1aaa588a516f5f92be354566bcd42a19)() const = &::clang::QualType::isCForbiddenLValueType;
    bool  (::clang::QualType::*method_pointer_1964d7eaa55f5722800e0e99a15ec88a)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX11PODType;
    bool  (::clang::QualType::*method_pointer_c7a226abb1dd56f191d2e174c56e20d9)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX98PODType;
    bool  (::clang::QualType::*method_pointer_d739b76acadb59339a173a43469f9114)() const = &::clang::QualType::isCanonical;
    bool  (::clang::QualType::*method_pointer_ead6a09f04195a3394c905a3dcc458cd)() const = &::clang::QualType::isCanonicalAsParam;
    bool  (::clang::QualType::*method_pointer_9e4ee97c7c73528c81009946b7f5973e)() const = &::clang::QualType::isConstQualified;
    bool  (::clang::QualType::*method_pointer_3e5bfdf9347a5c0db3107b7bdefaeac4)(class ::clang::ASTContext  &) const = &::clang::QualType::isConstant;
    bool  (::clang::QualType::*method_pointer_837fff8e8073528e916aa643cb869af9)() const = &::clang::QualType::isLocalConstQualified;
    bool  (::clang::QualType::*method_pointer_7edaf40b97d054829b1fa2ec0b31178d)() const = &::clang::QualType::isLocalRestrictQualified;
    bool  (::clang::QualType::*method_pointer_aab465638d48501c8a7552707055d7a0)() const = &::clang::QualType::isLocalVolatileQualified;
    bool  (::clang::QualType::*method_pointer_dcdebb49db3f5d9d986f59e77baf2b08)(class ::clang::QualType ) const = &::clang::QualType::isMoreQualifiedThan;
    bool  (::clang::QualType::*method_pointer_9938a60caf3f57d79cb55a3fcf81fbce)() const = &::clang::QualType::isNull;
    bool  (::clang::QualType::*method_pointer_41a4d08c417c516880337c74821c59a8)() const = &::clang::QualType::isObjCGCStrong;
    bool  (::clang::QualType::*method_pointer_e4ae785089515fe89bf7a02f410645ba)() const = &::clang::QualType::isObjCGCWeak;
    bool  (::clang::QualType::*method_pointer_22f80bbc2522517e9f27c2445c47b87f)(class ::clang::ASTContext  &) const = &::clang::QualType::isPODType;
    bool  (::clang::QualType::*method_pointer_a6f8b42ad95c52f98dea9d472e86786f)() const = &::clang::QualType::isRestrictQualified;
    bool  (::clang::QualType::*method_pointer_2a2e43212fda541381d078972ccde4f2)(class ::clang::ASTContext  &) const = &::clang::QualType::isTrivialType;
    bool  (::clang::QualType::*method_pointer_907e37dca9685df6bad260d5c5e96e05)(class ::clang::ASTContext  &) const = &::clang::QualType::isTriviallyCopyableType;
    bool  (::clang::QualType::*method_pointer_471ea2a5ed2c5be0a3d928919083ac7a)() const = &::clang::QualType::isVolatileQualified;
    void  (::clang::QualType::*method_pointer_41a13eadb0995e1c9debbce5d0c340f5)(unsigned int ) = &::clang::QualType::removeLocalCVRQualifiers;
    void  (::clang::QualType::*method_pointer_d8c22ddcf03a5a6e97a973a7190fc447)() = &::clang::QualType::removeLocalConst;
    void  (::clang::QualType::*method_pointer_acf982c67d8553b28546d69870cf21e9)(unsigned int ) = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_1ea2ea73148058308b682c7f8b805cdd)() = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_96fee7f8c4ab58839649160b9b0a936c)() = &::clang::QualType::removeLocalRestrict;
    void  (::clang::QualType::*method_pointer_e07b01f3e82d5d1d9000dd205553d491)() = &::clang::QualType::removeLocalVolatile;
    void  (::clang::QualType::*method_pointer_75e7d197e1eb51f49c4e7f81941a8754)(unsigned int ) = &::clang::QualType::setLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_632d53584a685857ac42051ac7fc3ca9)(unsigned int ) const = &::clang::QualType::withCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_6a56452106335f3f9d68d756d4b39ac5)() const = &::clang::QualType::withConst;
    class ::clang::QualType  (::clang::QualType::*method_pointer_9cb1c572291759398667b49741a69f9a)(unsigned int ) const = &::clang::QualType::withExactLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_51d8a3d55c2353c099d127cd710d399d)(unsigned int ) const = &::clang::QualType::withFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_b18a2a9835a05d3e97bdf083f42960a4)() const = &::clang::QualType::withRestrict;
    class ::clang::QualType  (::clang::QualType::*method_pointer_92c21d630e2557438aca8b360828184c)() const = &::clang::QualType::withVolatile;
    class ::clang::QualType  (::clang::QualType::*method_pointer_ce77da665ecd57559218c2db217e6020)() const = &::clang::QualType::withoutLocalFastQualifiers;
    boost::python::class_< class ::clang::QualType, autowig::HeldType< class ::clang::QualType > > class_3bcdbbe507dd5ad29df9e33aca4e435f("QualType", "", boost::python::no_init);
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("ignore_parens", method_pointer_9e5d61bb288b57de9c49f644666d8626, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_const", method_pointer_50b493c58ac75d3a98b00cd2127a1f9c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_fast_qualifiers", method_pointer_39defc406ea85fb5a404d427d5cca3f4, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_restrict", method_pointer_18c715b77f495dffba9b65f402fb5998, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_volatile", method_pointer_e76d99996cf95613a1ede8f4dbf5b50f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("dump", method_pointer_65deb51a684b5b95a321f37a0dc92a86, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_address_space", method_pointer_78b4204381005b989fe1a63d910ed4ed, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_cvr_qualifiers", method_pointer_47ace5a5140f599ba6242860b0dd53ce, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_canonical_type", method_pointer_ab7e82d6c8a95d9091d81eb52446beec, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_cvr_qualifiers", method_pointer_799be808fcd55fe4bfb50225473020e1, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_fast_qualifiers", method_pointer_54feb35e7c2056c8a0ca209ba74529bb, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_unqualified_type", method_pointer_02eb333b64bb582a9485532dca5e947d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_non_reference_type", method_pointer_8ca01162d3a653ffa87df18b294e08c9, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr", method_pointer_7212362f9dd95aac8f2395a430aa88eb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr_or_null", method_pointer_ea899ed28e56541b95bc0498e14e4acf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_unqualified_type", method_pointer_ab113574d6e25f809b7b47d60ddf274e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_non_fast_qualifiers", method_pointer_f496b10052b95001bc6b4746963ad0b3, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_qualifiers", method_pointer_d8d6c1ae7d8653128093b0c642a48f0b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_non_trivial_obj_c_lifetime", method_pointer_89cdc694590b593a8c03a1243d4bf97b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_qualifiers", method_pointer_1a9900cbbf1f59d3a527ccf793b9282d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_strong_or_weak_obj_c_lifetime", method_pointer_6fa93fe2a02e56f088e245363a82d088, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_at_least_as_qualified_as", method_pointer_72b4dcc6cbe6564b945d82c3acb0015c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_c_forbidden_l_value_type", method_pointer_1aaa588a516f5f92be354566bcd42a19, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx11pod_type", method_pointer_1964d7eaa55f5722800e0e99a15ec88a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx98pod_type", method_pointer_c7a226abb1dd56f191d2e174c56e20d9, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical", method_pointer_d739b76acadb59339a173a43469f9114, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical_as_param", method_pointer_ead6a09f04195a3394c905a3dcc458cd, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_const_qualified", method_pointer_9e4ee97c7c73528c81009946b7f5973e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_constant", method_pointer_3e5bfdf9347a5c0db3107b7bdefaeac4, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_const_qualified", method_pointer_837fff8e8073528e916aa643cb869af9, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_restrict_qualified", method_pointer_7edaf40b97d054829b1fa2ec0b31178d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_volatile_qualified", method_pointer_aab465638d48501c8a7552707055d7a0, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_more_qualified_than", method_pointer_dcdebb49db3f5d9d986f59e77baf2b08, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_null", method_pointer_9938a60caf3f57d79cb55a3fcf81fbce, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_strong", method_pointer_41a4d08c417c516880337c74821c59a8, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_weak", method_pointer_e4ae785089515fe89bf7a02f410645ba, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_pod_type", method_pointer_22f80bbc2522517e9f27c2445c47b87f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_restrict_qualified", method_pointer_a6f8b42ad95c52f98dea9d472e86786f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivial_type", method_pointer_2a2e43212fda541381d078972ccde4f2, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivially_copyable_type", method_pointer_907e37dca9685df6bad260d5c5e96e05, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_volatile_qualified", method_pointer_471ea2a5ed2c5be0a3d928919083ac7a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_cvr_qualifiers", method_pointer_41a13eadb0995e1c9debbce5d0c340f5, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_const", method_pointer_d8c22ddcf03a5a6e97a973a7190fc447, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_acf982c67d8553b28546d69870cf21e9, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_1ea2ea73148058308b682c7f8b805cdd, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_restrict", method_pointer_96fee7f8c4ab58839649160b9b0a936c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_volatile", method_pointer_e07b01f3e82d5d1d9000dd205553d491, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("set_local_fast_qualifiers", method_pointer_75e7d197e1eb51f49c4e7f81941a8754, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_cvr_qualifiers", method_pointer_632d53584a685857ac42051ac7fc3ca9, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_const", method_pointer_6a56452106335f3f9d68d756d4b39ac5, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_exact_local_fast_qualifiers", method_pointer_9cb1c572291759398667b49741a69f9a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_fast_qualifiers", method_pointer_51d8a3d55c2353c099d127cd710d399d, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_restrict", method_pointer_b18a2a9835a05d3e97bdf083f42960a4, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_volatile", method_pointer_92c21d630e2557438aca8b360828184c, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("without_local_fast_qualifiers", method_pointer_ce77da665ecd57559218c2db217e6020, "");

}