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
    class ::clang::QualType  (::clang::QualType::*method_pointer_649ead6940ea553caf6831163f447fd0)() const = &::clang::QualType::IgnoreParens;
    void  (::clang::QualType::*method_pointer_1b9d23cc04565fc3bb5b2c2b8c0c03ff)() = &::clang::QualType::addConst;
    void  (::clang::QualType::*method_pointer_df73735d00385e4a86dc236cd7cebc89)(unsigned int ) = &::clang::QualType::addFastQualifiers;
    void  (::clang::QualType::*method_pointer_39e7fea9639559d1a9b96e545bd73209)() = &::clang::QualType::addRestrict;
    void  (::clang::QualType::*method_pointer_f1a79ea041095b88a5c63fe79c1991aa)() = &::clang::QualType::addVolatile;
    void  (::clang::QualType::*method_pointer_3311d6b6070f5dca8080e85b0339329e)() const = &::clang::QualType::dump;
    unsigned int  (::clang::QualType::*method_pointer_6ac3ca5d1c4855d7b313439af86f023e)() const = &::clang::QualType::getAddressSpace;
    unsigned int  (::clang::QualType::*method_pointer_ba0bbfbe56875383a5d3c51bbd113177)() const = &::clang::QualType::getCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_24542c8356d050a599f9ef1abd6920ee)() const = &::clang::QualType::getCanonicalType;
    unsigned int  (::clang::QualType::*method_pointer_6e63d9c1720a52b0a1e4774d17ece162)() const = &::clang::QualType::getLocalCVRQualifiers;
    unsigned int  (::clang::QualType::*method_pointer_3854eaddb1fa560e9739c73f2321cb02)() const = &::clang::QualType::getLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_98a8decdffd05f43a379b5a3cf51d1cf)() const = &::clang::QualType::getLocalUnqualifiedType;
    class ::clang::QualType  (::clang::QualType::*method_pointer_6ba47f2c4227598692b041178095f409)() const = &::clang::QualType::getNonReferenceType;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_b7312ce62f5d5222b0c4cfe6cf13d2bc)() const = &::clang::QualType::getTypePtr;
    class ::clang::Type  const * (::clang::QualType::*method_pointer_04e23e1128f9558491971dd4c24082e9)() const = &::clang::QualType::getTypePtrOrNull;
    class ::clang::QualType  (::clang::QualType::*method_pointer_7f2baa18dccb5945b1053d69b81c654f)() const = &::clang::QualType::getUnqualifiedType;
    bool  (::clang::QualType::*method_pointer_028c6495b79a50f2b16ecac796034b18)() const = &::clang::QualType::hasLocalNonFastQualifiers;
    bool  (::clang::QualType::*method_pointer_0da70c111f9956efa95cca1fa3cd63fe)() const = &::clang::QualType::hasLocalQualifiers;
    bool  (::clang::QualType::*method_pointer_f71d9967cf63583f987d515555d9c508)() const = &::clang::QualType::hasNonTrivialObjCLifetime;
    bool  (::clang::QualType::*method_pointer_83308e36ca4c531cb134c4e79f66fb48)() const = &::clang::QualType::hasQualifiers;
    bool  (::clang::QualType::*method_pointer_79f8b410614d5de5adaf3f3e7543e45f)() const = &::clang::QualType::hasStrongOrWeakObjCLifetime;
    bool  (::clang::QualType::*method_pointer_100df2164f9253b6956ad58e2848b5d9)(class ::clang::QualType ) const = &::clang::QualType::isAtLeastAsQualifiedAs;
    bool  (::clang::QualType::*method_pointer_21412c6545085c7a8245a81260a1ab1e)() const = &::clang::QualType::isCForbiddenLValueType;
    bool  (::clang::QualType::*method_pointer_e6727dd90ce3532680fed3df8579a2ff)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX11PODType;
    bool  (::clang::QualType::*method_pointer_91d14c16b4ec5518988224840b58a2e5)(class ::clang::ASTContext  &) const = &::clang::QualType::isCXX98PODType;
    bool  (::clang::QualType::*method_pointer_19285ade91465fc0971f0f5fc9fe6f09)() const = &::clang::QualType::isCanonical;
    bool  (::clang::QualType::*method_pointer_a82d2f55ec015715bd21f21439cf5f79)() const = &::clang::QualType::isCanonicalAsParam;
    bool  (::clang::QualType::*method_pointer_3a2d3c7b55c65ae982830d1d3c4149d5)() const = &::clang::QualType::isConstQualified;
    bool  (::clang::QualType::*method_pointer_911a2c2d455055469179d93f67988f7b)(class ::clang::ASTContext  &) const = &::clang::QualType::isConstant;
    bool  (::clang::QualType::*method_pointer_d5eacd38e83e57b9aa6e4fbaa9723ba2)() const = &::clang::QualType::isLocalConstQualified;
    bool  (::clang::QualType::*method_pointer_8a00a7847af656d6bff62f34e72659ec)() const = &::clang::QualType::isLocalRestrictQualified;
    bool  (::clang::QualType::*method_pointer_7dc79620f82554939cd0054855577903)() const = &::clang::QualType::isLocalVolatileQualified;
    bool  (::clang::QualType::*method_pointer_f9f95c1889ee535b8d6c4a72a816fa26)(class ::clang::QualType ) const = &::clang::QualType::isMoreQualifiedThan;
    bool  (::clang::QualType::*method_pointer_6c18048dc94252579b468cff9db27978)() const = &::clang::QualType::isNull;
    bool  (::clang::QualType::*method_pointer_2625fbe34cdc5b79b1b20464c2e65f64)() const = &::clang::QualType::isObjCGCStrong;
    bool  (::clang::QualType::*method_pointer_fc4c78ee8a785276b5eaaadc84622af9)() const = &::clang::QualType::isObjCGCWeak;
    bool  (::clang::QualType::*method_pointer_bc1309e7a20c5a99b79efd29499f89b6)(class ::clang::ASTContext  &) const = &::clang::QualType::isPODType;
    bool  (::clang::QualType::*method_pointer_866cb4c2d9f251149f658d594fa51c09)() const = &::clang::QualType::isRestrictQualified;
    bool  (::clang::QualType::*method_pointer_1832b38bd7eb5d07bee12fe3ad82e55a)(class ::clang::ASTContext  &) const = &::clang::QualType::isTrivialType;
    bool  (::clang::QualType::*method_pointer_4589533eb1ea589089f785d79ae9a80b)(class ::clang::ASTContext  &) const = &::clang::QualType::isTriviallyCopyableType;
    bool  (::clang::QualType::*method_pointer_ce24b945cbe653b0957e9e8c19439e55)() const = &::clang::QualType::isVolatileQualified;
    void  (::clang::QualType::*method_pointer_6d6b49a876ab5feab742ed5e5a48e570)(unsigned int ) = &::clang::QualType::removeLocalCVRQualifiers;
    void  (::clang::QualType::*method_pointer_0a03d6e1dcf9598e97a5c0eb6223d344)() = &::clang::QualType::removeLocalConst;
    void  (::clang::QualType::*method_pointer_e553fb966c4d52a1815d19844fc830f8)() = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_96d1850a17105455ba3ba5930d6fb8c0)(unsigned int ) = &::clang::QualType::removeLocalFastQualifiers;
    void  (::clang::QualType::*method_pointer_0d95115427d3533a92e62adc6b5e9916)() = &::clang::QualType::removeLocalRestrict;
    void  (::clang::QualType::*method_pointer_72f69397992b5b01b8c96202ececcc63)() = &::clang::QualType::removeLocalVolatile;
    void  (::clang::QualType::*method_pointer_5afd0464423c5c4b9eb3b128980804e9)(unsigned int ) = &::clang::QualType::setLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_6e85b4871afd568c8624f0a988e2280a)(unsigned int ) const = &::clang::QualType::withCVRQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_075e51b3bca35e49b713580d48722202)() const = &::clang::QualType::withConst;
    class ::clang::QualType  (::clang::QualType::*method_pointer_16acbfdd00205687976facdb1a9e37c0)(unsigned int ) const = &::clang::QualType::withExactLocalFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_2c4b797ff7b95e3f840cad84a493ddb9)(unsigned int ) const = &::clang::QualType::withFastQualifiers;
    class ::clang::QualType  (::clang::QualType::*method_pointer_f277a490f5965f9c9b109c54b78273f0)() const = &::clang::QualType::withRestrict;
    class ::clang::QualType  (::clang::QualType::*method_pointer_81df266525e15b43a70145da530b4f59)() const = &::clang::QualType::withVolatile;
    class ::clang::QualType  (::clang::QualType::*method_pointer_2e8cafe534ae5d11b77a409a883b6e68)() const = &::clang::QualType::withoutLocalFastQualifiers;
    boost::python::class_< class ::clang::QualType, autowig::HeldType< class ::clang::QualType > > class_3bcdbbe507dd5ad29df9e33aca4e435f("QualType", "", boost::python::no_init);
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("ignore_parens", method_pointer_649ead6940ea553caf6831163f447fd0, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_const", method_pointer_1b9d23cc04565fc3bb5b2c2b8c0c03ff, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_fast_qualifiers", method_pointer_df73735d00385e4a86dc236cd7cebc89, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_restrict", method_pointer_39e7fea9639559d1a9b96e545bd73209, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("add_volatile", method_pointer_f1a79ea041095b88a5c63fe79c1991aa, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("dump", method_pointer_3311d6b6070f5dca8080e85b0339329e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_address_space", method_pointer_6ac3ca5d1c4855d7b313439af86f023e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_cvr_qualifiers", method_pointer_ba0bbfbe56875383a5d3c51bbd113177, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_canonical_type", method_pointer_24542c8356d050a599f9ef1abd6920ee, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_cvr_qualifiers", method_pointer_6e63d9c1720a52b0a1e4774d17ece162, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_fast_qualifiers", method_pointer_3854eaddb1fa560e9739c73f2321cb02, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_local_unqualified_type", method_pointer_98a8decdffd05f43a379b5a3cf51d1cf, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_non_reference_type", method_pointer_6ba47f2c4227598692b041178095f409, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr", method_pointer_b7312ce62f5d5222b0c4cfe6cf13d2bc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_type_ptr_or_null", method_pointer_04e23e1128f9558491971dd4c24082e9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("get_unqualified_type", method_pointer_7f2baa18dccb5945b1053d69b81c654f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_non_fast_qualifiers", method_pointer_028c6495b79a50f2b16ecac796034b18, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_local_qualifiers", method_pointer_0da70c111f9956efa95cca1fa3cd63fe, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_non_trivial_obj_c_lifetime", method_pointer_f71d9967cf63583f987d515555d9c508, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_qualifiers", method_pointer_83308e36ca4c531cb134c4e79f66fb48, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("has_strong_or_weak_obj_c_lifetime", method_pointer_79f8b410614d5de5adaf3f3e7543e45f, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_at_least_as_qualified_as", method_pointer_100df2164f9253b6956ad58e2848b5d9, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_c_forbidden_l_value_type", method_pointer_21412c6545085c7a8245a81260a1ab1e, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx11pod_type", method_pointer_e6727dd90ce3532680fed3df8579a2ff, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_cxx98pod_type", method_pointer_91d14c16b4ec5518988224840b58a2e5, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical", method_pointer_19285ade91465fc0971f0f5fc9fe6f09, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_canonical_as_param", method_pointer_a82d2f55ec015715bd21f21439cf5f79, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_const_qualified", method_pointer_3a2d3c7b55c65ae982830d1d3c4149d5, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_constant", method_pointer_911a2c2d455055469179d93f67988f7b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_const_qualified", method_pointer_d5eacd38e83e57b9aa6e4fbaa9723ba2, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_restrict_qualified", method_pointer_8a00a7847af656d6bff62f34e72659ec, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_local_volatile_qualified", method_pointer_7dc79620f82554939cd0054855577903, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_more_qualified_than", method_pointer_f9f95c1889ee535b8d6c4a72a816fa26, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_null", method_pointer_6c18048dc94252579b468cff9db27978, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_strong", method_pointer_2625fbe34cdc5b79b1b20464c2e65f64, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_obj_cgc_weak", method_pointer_fc4c78ee8a785276b5eaaadc84622af9, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_pod_type", method_pointer_bc1309e7a20c5a99b79efd29499f89b6, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_restrict_qualified", method_pointer_866cb4c2d9f251149f658d594fa51c09, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivial_type", method_pointer_1832b38bd7eb5d07bee12fe3ad82e55a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_trivially_copyable_type", method_pointer_4589533eb1ea589089f785d79ae9a80b, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("is_volatile_qualified", method_pointer_ce24b945cbe653b0957e9e8c19439e55, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_cvr_qualifiers", method_pointer_6d6b49a876ab5feab742ed5e5a48e570, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_const", method_pointer_0a03d6e1dcf9598e97a5c0eb6223d344, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_e553fb966c4d52a1815d19844fc830f8, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_fast_qualifiers", method_pointer_96d1850a17105455ba3ba5930d6fb8c0, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_restrict", method_pointer_0d95115427d3533a92e62adc6b5e9916, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("remove_local_volatile", method_pointer_72f69397992b5b01b8c96202ececcc63, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("set_local_fast_qualifiers", method_pointer_5afd0464423c5c4b9eb3b128980804e9, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_cvr_qualifiers", method_pointer_6e85b4871afd568c8624f0a988e2280a, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_const", method_pointer_075e51b3bca35e49b713580d48722202, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_exact_local_fast_qualifiers", method_pointer_16acbfdd00205687976facdb1a9e37c0, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_fast_qualifiers", method_pointer_2c4b797ff7b95e3f840cad84a493ddb9, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_restrict", method_pointer_f277a490f5965f9c9b109c54b78273f0, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("with_volatile", method_pointer_81df266525e15b43a70145da530b4f59, "");
    class_3bcdbbe507dd5ad29df9e33aca4e435f.def("without_local_fast_qualifiers", method_pointer_2e8cafe534ae5d11b77a409a883b6e68, "");

}