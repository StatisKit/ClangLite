#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_6d094fa53b15516db85a0d4b3b7fd665()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    enum ::clang::AccessSpecifier  (*method_pointer_fbf55214c549559884d76c94a3860dd7)(enum ::clang::AccessSpecifier , enum ::clang::AccessSpecifier ) = ::clang::CXXRecordDecl::MergeAccess;
    bool  (*method_pointer_cc5125243cc358a5a2059b3127cedf79)(class ::clang::Decl  const *) = ::clang::CXXRecordDecl::classof;
    bool  (*method_pointer_5245fe96007f5b71a707f1a6fdb50963)(enum ::clang::Decl::Kind ) = ::clang::CXXRecordDecl::classofKind;
    void  (::clang::CXXRecordDecl::*method_pointer_77dc27070fa554cdb5a882a06991c917)() = &::clang::CXXRecordDecl::completeDefinition;
    bool  (::clang::CXXRecordDecl::*method_pointer_2331ea2205c9553784875abb87300efd)() const = &::clang::CXXRecordDecl::defaultedDefaultConstructorIsConstexpr;
    void  (::clang::CXXRecordDecl::*method_pointer_a8e6aaf9aeda53f699490d2b7853f90d)(class ::clang::CXXMethodDecl  *) = &::clang::CXXRecordDecl::finishedDefaultedOrDeletedMember;
    class ::clang::CXXRecordDecl  const * (::clang::CXXRecordDecl::*method_pointer_218f3247932d529f80bf784a166a5d93)() const = &::clang::CXXRecordDecl::getCanonicalDecl;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_48ffcfc104125a22b9c43ac720bd5dd7)() = &::clang::CXXRecordDecl::getCanonicalDecl;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_763a8802f4d0531caac3906a5d0bf939)() const = &::clang::CXXRecordDecl::getDefinition;
    class ::clang::ClassTemplateDecl  * (::clang::CXXRecordDecl::*method_pointer_f53df75f6c3c53379385fe151cfa7f7d)() const = &::clang::CXXRecordDecl::getDescribedClassTemplate;
    class ::clang::CXXDestructorDecl  * (::clang::CXXRecordDecl::*method_pointer_88005f47f9ae5c1e86b26f5794440d58)() const = &::clang::CXXRecordDecl::getDestructor;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_b7af10de9c085d2cb93141dfee5488ef)() const = &::clang::CXXRecordDecl::getInstantiatedFromMemberClass;
    class ::clang::CXXMethodDecl  * (::clang::CXXRecordDecl::*method_pointer_0a5c111542af5d5fbaca57091c329c48)() const = &::clang::CXXRecordDecl::getLambdaCallOperator;
    class ::clang::Decl  * (::clang::CXXRecordDecl::*method_pointer_fae9428bc5dc543c93c96e2775d734fe)() const = &::clang::CXXRecordDecl::getLambdaContextDecl;
    unsigned int  (::clang::CXXRecordDecl::*method_pointer_d802366138725399a0114457af7dcd41)() const = &::clang::CXXRecordDecl::getLambdaManglingNumber;
    class ::clang::CXXMethodDecl  * (::clang::CXXRecordDecl::*method_pointer_6c6d49d9abc951ffbb5e319aa536be3e)() const = &::clang::CXXRecordDecl::getLambdaStaticInvoker;
    class ::clang::CXXRecordDecl  const * (::clang::CXXRecordDecl::*method_pointer_70b46286fe67577fa15b6255553ce3c8)() const = &::clang::CXXRecordDecl::getMostRecentDecl;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_7ca6eb4bad915a41b4ccee020f93fc4f)() = &::clang::CXXRecordDecl::getMostRecentDecl;
    unsigned int  (::clang::CXXRecordDecl::*method_pointer_ad74d4a58f67512dab7bcdaa8760a17a)() const = &::clang::CXXRecordDecl::getNumBases;
    unsigned int  (::clang::CXXRecordDecl::*method_pointer_3080285d94c05fcfb943a26f1840bd17)() const = &::clang::CXXRecordDecl::getNumVBases;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_5573c1e327945ae0a107acc046a4b83d)() = &::clang::CXXRecordDecl::getPreviousDecl;
    class ::clang::CXXRecordDecl  const * (::clang::CXXRecordDecl::*method_pointer_94871fbe98a356e8a74b91b144e75cd0)() const = &::clang::CXXRecordDecl::getPreviousDecl;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_cbae47b03be85842b6e19ef8e5cacdd1)() = &::clang::CXXRecordDecl::getTemplateInstantiationPattern;
    class ::clang::CXXRecordDecl  const * (::clang::CXXRecordDecl::*method_pointer_38d8af6701d358db84604ee82c776ae1)() const = &::clang::CXXRecordDecl::getTemplateInstantiationPattern;
    bool  (::clang::CXXRecordDecl::*method_pointer_b1bb45f5af5f525a86b5ef9c41c75fe4)() const = &::clang::CXXRecordDecl::hasAnyDependentBases;
    bool  (::clang::CXXRecordDecl::*method_pointer_7cb06ef00195569aa021de31cbc86533)() const = &::clang::CXXRecordDecl::hasConstexprDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_61d500bfba5d5ad0b0a5ac69fb2534c7)() const = &::clang::CXXRecordDecl::hasConstexprNonCopyMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_e6e4b9fd4e95542ebfd5708c433bd242)() const = &::clang::CXXRecordDecl::hasCopyAssignmentWithConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_58799f60f1ce5e798295d602af3fd923)() const = &::clang::CXXRecordDecl::hasCopyConstructorWithConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_5ad2c681483d50cd9bfde0bca2201179)() const = &::clang::CXXRecordDecl::hasDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_ff4380e07b3c5a5e9b387bb7944bf81a)() const = &::clang::CXXRecordDecl::hasDefinition;
    bool  (::clang::CXXRecordDecl::*method_pointer_d6417b297d9e5f198638e9ae104da40a)() const = &::clang::CXXRecordDecl::hasFriends;
    bool  (::clang::CXXRecordDecl::*method_pointer_7963ed99532059eeaa0bedcffbbcd320)() const = &::clang::CXXRecordDecl::hasInClassInitializer;
    bool  (::clang::CXXRecordDecl::*method_pointer_d71683d7f26757fa8060a458a8da972e)() const = &::clang::CXXRecordDecl::hasIrrelevantDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_2ce197126b8952c7af9f3e8a20e14460)() const = &::clang::CXXRecordDecl::hasMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_a3a4f0cbe2d95fde8452a9c304eabca0)() const = &::clang::CXXRecordDecl::hasMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_cb2224e9e1035f4198d21c2d8b9c2e55)() const = &::clang::CXXRecordDecl::hasMutableFields;
    bool  (::clang::CXXRecordDecl::*method_pointer_f129dc5205d25c0482876a4cfd649609)() const = &::clang::CXXRecordDecl::hasNonLiteralTypeFieldsOrBases;
    bool  (::clang::CXXRecordDecl::*method_pointer_1a03f7e81e3e58208aa846a4f4e685f9)() const = &::clang::CXXRecordDecl::hasNonTrivialCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_0d50219bd0525b5a90dc52dc8b8a843e)() const = &::clang::CXXRecordDecl::hasNonTrivialCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_520a98da13185c96bc7ac58a2caf54f2)() const = &::clang::CXXRecordDecl::hasNonTrivialDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_d52aafc8948254e3a7e10f6149e31aab)() const = &::clang::CXXRecordDecl::hasNonTrivialDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_57991c35043c5058b59f11fa860c3684)() const = &::clang::CXXRecordDecl::hasNonTrivialMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_ac9b039edefd5a1ba7cb5dd75fe0521a)() const = &::clang::CXXRecordDecl::hasNonTrivialMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_af817354fc6d5c1c9a90ec478bcc0f64)() const = &::clang::CXXRecordDecl::hasSimpleDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_c6dc40079e575760977eaffc5724c212)() const = &::clang::CXXRecordDecl::hasSimpleMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_a024a23242005e8bb06bd04025e7a482)() const = &::clang::CXXRecordDecl::hasSimpleMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_8352a2e0b2a35a578fd44ff8bb703c92)() const = &::clang::CXXRecordDecl::hasTrivialCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_70a0b40fb7965e158a567074f7136b26)() const = &::clang::CXXRecordDecl::hasTrivialCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_e8a533fd39af58328422dc31b29197c0)() const = &::clang::CXXRecordDecl::hasTrivialDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_4a9c317772d5580cb1f3b10fc2930c19)() const = &::clang::CXXRecordDecl::hasTrivialDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_7ad654a9d52e5e299538a1def3fac14f)() const = &::clang::CXXRecordDecl::hasTrivialMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_ebeb7ad2b6a152c6a1e59fa33b21c8a0)() const = &::clang::CXXRecordDecl::hasTrivialMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_2fb8b855058556cab7a7e43149d73231)() const = &::clang::CXXRecordDecl::hasUninitializedReferenceMember;
    bool  (::clang::CXXRecordDecl::*method_pointer_983cd7475a2d582081dfd68569c68ad4)() const = &::clang::CXXRecordDecl::hasUserDeclaredConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_3200a3cd76d75836ae1bfae2ca7dc706)() const = &::clang::CXXRecordDecl::hasUserDeclaredCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_d9997c606f725cb29cf01294865be645)() const = &::clang::CXXRecordDecl::hasUserDeclaredCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_8b459c15e0b95a31b76b10cb0851877f)() const = &::clang::CXXRecordDecl::hasUserDeclaredDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_a0ced017bd3c5b4f8fb94c17a793fba9)() const = &::clang::CXXRecordDecl::hasUserDeclaredMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_7064d5bc9b055e898c7c3d0a814630ab)() const = &::clang::CXXRecordDecl::hasUserDeclaredMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_be5bbae1dfb55bd99c18dc498ad8f431)() const = &::clang::CXXRecordDecl::hasUserDeclaredMoveOperation;
    bool  (::clang::CXXRecordDecl::*method_pointer_bbcb54432c155b9bb4a164a5f53af0f4)() const = &::clang::CXXRecordDecl::hasUserProvidedDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_e2a9ba7425bd556b8d7851e1b686ed28)() const = &::clang::CXXRecordDecl::hasVariantMembers;
    bool  (::clang::CXXRecordDecl::*method_pointer_28b046e8b4095586a2136bd4cec6601d)() const = &::clang::CXXRecordDecl::implicitCopyAssignmentHasConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_ec83f3960dd358de842970585ada900d)() const = &::clang::CXXRecordDecl::implicitCopyConstructorHasConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_8cbece2280c2583bb540c783a05ba61e)() const = &::clang::CXXRecordDecl::isAbstract;
    bool  (::clang::CXXRecordDecl::*method_pointer_4417841e38f659f6a3633d19dbce11ea)() const = &::clang::CXXRecordDecl::isAggregate;
    bool  (::clang::CXXRecordDecl::*method_pointer_e4a4dfef18f3538dbee2309e1057de49)() const = &::clang::CXXRecordDecl::isAnyDestructorNoReturn;
    bool  (::clang::CXXRecordDecl::*method_pointer_9d5f6e1bd5fd548db7e049a49abf4d25)() const = &::clang::CXXRecordDecl::isCLike;
    bool  (::clang::CXXRecordDecl::*method_pointer_a708da68e0d55e0c9c1b3090de938fcf)(class ::clang::DeclContext  const *) const = &::clang::CXXRecordDecl::isCurrentInstantiation;
    bool  (::clang::CXXRecordDecl::*method_pointer_0d8a870579ad5ffab1263f28143270e8)() const = &::clang::CXXRecordDecl::isDependentLambda;
    bool  (::clang::CXXRecordDecl::*method_pointer_0dd38ff0923454289f7b9c9b00f3c662)(class ::clang::CXXRecordDecl  const *) const = &::clang::CXXRecordDecl::isDerivedFrom;
    bool  (::clang::CXXRecordDecl::*method_pointer_d95dba2d26e45df39e53f2207bb2a5b9)() const = &::clang::CXXRecordDecl::isDynamicClass;
    bool  (::clang::CXXRecordDecl::*method_pointer_9442a43e4b215642bfdecc80bffaf8d2)() const = &::clang::CXXRecordDecl::isEmpty;
    bool  (::clang::CXXRecordDecl::*method_pointer_cb92ef337cbd5320855e638d57890b02)() const = &::clang::CXXRecordDecl::isGenericLambda;
    bool  (::clang::CXXRecordDecl::*method_pointer_20ff6979eee1512ab793589d8d601fc5)() const = &::clang::CXXRecordDecl::isLambda;
    bool  (::clang::CXXRecordDecl::*method_pointer_979b9d221f3154ff8ea7ed9b7f507900)() const = &::clang::CXXRecordDecl::isLiteral;
    class ::clang::FunctionDecl  const * (::clang::CXXRecordDecl::*method_pointer_754bef12c6685c86bcbe1a1fe775c3e9)() const = &::clang::CXXRecordDecl::isLocalClass;
    class ::clang::FunctionDecl  * (::clang::CXXRecordDecl::*method_pointer_fe126c0a4aff59699d4f8d949e08cea9)() = &::clang::CXXRecordDecl::isLocalClass;
    bool  (::clang::CXXRecordDecl::*method_pointer_babf29b4193958f8a84f1f8244ddc858)() const = &::clang::CXXRecordDecl::isPOD;
    bool  (::clang::CXXRecordDecl::*method_pointer_b85f5aa83af751fbaaf8c79063a80067)() const = &::clang::CXXRecordDecl::isParsingBaseSpecifiers;
    bool  (::clang::CXXRecordDecl::*method_pointer_c4367b858127555db237320da544812f)() const = &::clang::CXXRecordDecl::isPolymorphic;
    bool  (::clang::CXXRecordDecl::*method_pointer_be977b56986054bb97b99b6c1f3b38c9)(class ::clang::CXXRecordDecl  const *) const = &::clang::CXXRecordDecl::isProvablyNotDerivedFrom;
    bool  (::clang::CXXRecordDecl::*method_pointer_84f0d694e13f5e5499ba96826527f496)() const = &::clang::CXXRecordDecl::isStandardLayout;
    bool  (::clang::CXXRecordDecl::*method_pointer_41be2d9e163a56ba92f82c3d3998f05c)() const = &::clang::CXXRecordDecl::isTrivial;
    bool  (::clang::CXXRecordDecl::*method_pointer_092939a463f755f1a307bd74133a8e0c)() const = &::clang::CXXRecordDecl::isTriviallyCopyable;
    bool  (::clang::CXXRecordDecl::*method_pointer_67652841bbfa5546bad1167746f88725)(class ::clang::CXXRecordDecl  const *) const = &::clang::CXXRecordDecl::isVirtuallyDerivedFrom;
    bool  (::clang::CXXRecordDecl::*method_pointer_412f0dd067675298b2d7d977c68162d2)() const = &::clang::CXXRecordDecl::mayBeAbstract;
    bool  (::clang::CXXRecordDecl::*method_pointer_5f308b4b65ad5ba990c65bc80c5de255)() const = &::clang::CXXRecordDecl::needsImplicitCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_8087fdf387dc5141b3f74844f4acff2d)() const = &::clang::CXXRecordDecl::needsImplicitCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_5faf985d0a055bba8782746d25317b79)() const = &::clang::CXXRecordDecl::needsImplicitDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_9a8f27debac258ef9bd742610dc26d30)() const = &::clang::CXXRecordDecl::needsImplicitDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_57fe03fdfe1c579280daecab936bacf5)() const = &::clang::CXXRecordDecl::needsImplicitMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_3abc210419b15e40bf26cd472df9b613)() const = &::clang::CXXRecordDecl::needsImplicitMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_eb34a9baee755e0287e32e5f9e8b84e1)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_ef70c28d717d53ec8ecf1ce7f72306b3)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_11933da897e35dd3a02b578993a1bcc7)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_ccc12900b4665afc8ab2dd7096f0e297)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_0328cb8041b655e58174a1df89a1d354)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_11b5067044555bb8845fe6aabb8147e3)() const = &::clang::CXXRecordDecl::nullFieldOffsetIsZero;
    void  (::clang::CXXRecordDecl::*method_pointer_abbf0e3a55985a549aab872069db3b86)(class ::clang::FriendDecl  *) = &::clang::CXXRecordDecl::pushFriendDecl;
    void  (::clang::CXXRecordDecl::*method_pointer_8a28bf2986b95607a8d2d3cfe7a20acf)(class ::clang::NamedDecl  const *) = &::clang::CXXRecordDecl::removeConversion;
    void  (::clang::CXXRecordDecl::*method_pointer_be328f5459885867ac2b0fc247043b9d)(class ::clang::ClassTemplateDecl  *) = &::clang::CXXRecordDecl::setDescribedClassTemplate;
    void  (::clang::CXXRecordDecl::*method_pointer_ecac57ee9b7959dbb832e771da58ab8f)() = &::clang::CXXRecordDecl::setImplicitMoveAssignmentIsDeleted;
    void  (::clang::CXXRecordDecl::*method_pointer_512c8a3439df5f8d8522f86aaaaf4f49)() = &::clang::CXXRecordDecl::setImplicitMoveConstructorIsDeleted;
    void  (::clang::CXXRecordDecl::*method_pointer_5604efa010735ab8b5a23acdaa4dbc48)() = &::clang::CXXRecordDecl::setIsParsingBaseSpecifiers;
    void  (::clang::CXXRecordDecl::*method_pointer_8189d06b0b5f539f9359b978d887b52f)(unsigned int , class ::clang::Decl  *) = &::clang::CXXRecordDecl::setLambdaMangling;
    void  (::clang::CXXRecordDecl::*method_pointer_6a0aaf241b5150aaa9770a907dd41b35)(class ::clang::ASTContext  &) const = &::clang::CXXRecordDecl::viewInheritance;
    struct function_group
    {
        static class ::boost::python::list  function_b6366f8f29a15fc19361835a3959b009(class ::clang::CXXRecordDecl  & parameter_0)
        { return ::clanglite::get_bases(parameter_0); }
        static class ::boost::python::list  function_e6f17733e81851e09d4f39b74343d346(class ::clang::CXXRecordDecl  & parameter_0)
        { return ::clanglite::get_constructors(parameter_0); }
        static class ::boost::python::list  function_2903a6d8de8356da84f6e88e66177215(class ::clang::CXXRecordDecl  & parameter_0)
        { return ::clanglite::get_virtual_bases(parameter_0); }
    };
    boost::python::class_< class ::clang::CXXRecordDecl, autowig::HeldType< class ::clang::CXXRecordDecl >, boost::python::bases< class ::clang::RecordDecl >, boost::noncopyable > class_6d094fa53b15516db85a0d4b3b7fd665("CXXRecordDecl", "", boost::python::no_init);
    class_6d094fa53b15516db85a0d4b3b7fd665.def("merge_access", method_pointer_fbf55214c549559884d76c94a3860dd7, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("classof", method_pointer_cc5125243cc358a5a2059b3127cedf79, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("classof_kind", method_pointer_5245fe96007f5b71a707f1a6fdb50963, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("complete_definition", method_pointer_77dc27070fa554cdb5a882a06991c917, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("defaulted_default_constructor_is_constexpr", method_pointer_2331ea2205c9553784875abb87300efd, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("finished_defaulted_or_deleted_member", method_pointer_a8e6aaf9aeda53f699490d2b7853f90d, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_canonical_decl", method_pointer_218f3247932d529f80bf784a166a5d93, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_canonical_decl", method_pointer_48ffcfc104125a22b9c43ac720bd5dd7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_definition", method_pointer_763a8802f4d0531caac3906a5d0bf939, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_described_class_template", method_pointer_f53df75f6c3c53379385fe151cfa7f7d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_destructor", method_pointer_88005f47f9ae5c1e86b26f5794440d58, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_instantiated_from_member_class", method_pointer_b7af10de9c085d2cb93141dfee5488ef, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_call_operator", method_pointer_0a5c111542af5d5fbaca57091c329c48, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_context_decl", method_pointer_fae9428bc5dc543c93c96e2775d734fe, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_mangling_number", method_pointer_d802366138725399a0114457af7dcd41, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_static_invoker", method_pointer_6c6d49d9abc951ffbb5e319aa536be3e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_most_recent_decl", method_pointer_70b46286fe67577fa15b6255553ce3c8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_most_recent_decl", method_pointer_7ca6eb4bad915a41b4ccee020f93fc4f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_num_bases", method_pointer_ad74d4a58f67512dab7bcdaa8760a17a, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_num_v_bases", method_pointer_3080285d94c05fcfb943a26f1840bd17, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_previous_decl", method_pointer_5573c1e327945ae0a107acc046a4b83d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_previous_decl", method_pointer_94871fbe98a356e8a74b91b144e75cd0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_template_instantiation_pattern", method_pointer_cbae47b03be85842b6e19ef8e5cacdd1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_template_instantiation_pattern", method_pointer_38d8af6701d358db84604ee82c776ae1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_any_dependent_bases", method_pointer_b1bb45f5af5f525a86b5ef9c41c75fe4, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_constexpr_default_constructor", method_pointer_7cb06ef00195569aa021de31cbc86533, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_constexpr_non_copy_move_constructor", method_pointer_61d500bfba5d5ad0b0a5ac69fb2534c7, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_copy_assignment_with_const_param", method_pointer_e6e4b9fd4e95542ebfd5708c433bd242, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_copy_constructor_with_const_param", method_pointer_58799f60f1ce5e798295d602af3fd923, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_default_constructor", method_pointer_5ad2c681483d50cd9bfde0bca2201179, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_definition", method_pointer_ff4380e07b3c5a5e9b387bb7944bf81a, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_friends", method_pointer_d6417b297d9e5f198638e9ae104da40a, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_in_class_initializer", method_pointer_7963ed99532059eeaa0bedcffbbcd320, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_irrelevant_destructor", method_pointer_d71683d7f26757fa8060a458a8da972e, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_move_assignment", method_pointer_2ce197126b8952c7af9f3e8a20e14460, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_move_constructor", method_pointer_a3a4f0cbe2d95fde8452a9c304eabca0, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_mutable_fields", method_pointer_cb2224e9e1035f4198d21c2d8b9c2e55, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_literal_type_fields_or_bases", method_pointer_f129dc5205d25c0482876a4cfd649609, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_copy_assignment", method_pointer_1a03f7e81e3e58208aa846a4f4e685f9, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_copy_constructor", method_pointer_0d50219bd0525b5a90dc52dc8b8a843e, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_default_constructor", method_pointer_520a98da13185c96bc7ac58a2caf54f2, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_destructor", method_pointer_d52aafc8948254e3a7e10f6149e31aab, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_move_assignment", method_pointer_57991c35043c5058b59f11fa860c3684, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_move_constructor", method_pointer_ac9b039edefd5a1ba7cb5dd75fe0521a, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_simple_destructor", method_pointer_af817354fc6d5c1c9a90ec478bcc0f64, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_simple_move_assignment", method_pointer_c6dc40079e575760977eaffc5724c212, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_simple_move_constructor", method_pointer_a024a23242005e8bb06bd04025e7a482, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_copy_assignment", method_pointer_8352a2e0b2a35a578fd44ff8bb703c92, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_copy_constructor", method_pointer_70a0b40fb7965e158a567074f7136b26, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_default_constructor", method_pointer_e8a533fd39af58328422dc31b29197c0, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_destructor", method_pointer_4a9c317772d5580cb1f3b10fc2930c19, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_move_assignment", method_pointer_7ad654a9d52e5e299538a1def3fac14f, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_move_constructor", method_pointer_ebeb7ad2b6a152c6a1e59fa33b21c8a0, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_uninitialized_reference_member", method_pointer_2fb8b855058556cab7a7e43149d73231, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_constructor", method_pointer_983cd7475a2d582081dfd68569c68ad4, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_copy_assignment", method_pointer_3200a3cd76d75836ae1bfae2ca7dc706, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_copy_constructor", method_pointer_d9997c606f725cb29cf01294865be645, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_destructor", method_pointer_8b459c15e0b95a31b76b10cb0851877f, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_move_assignment", method_pointer_a0ced017bd3c5b4f8fb94c17a793fba9, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_move_constructor", method_pointer_7064d5bc9b055e898c7c3d0a814630ab, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_move_operation", method_pointer_be5bbae1dfb55bd99c18dc498ad8f431, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_provided_default_constructor", method_pointer_bbcb54432c155b9bb4a164a5f53af0f4, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_variant_members", method_pointer_e2a9ba7425bd556b8d7851e1b686ed28, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("implicit_copy_assignment_has_const_param", method_pointer_28b046e8b4095586a2136bd4cec6601d, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("implicit_copy_constructor_has_const_param", method_pointer_ec83f3960dd358de842970585ada900d, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_abstract", method_pointer_8cbece2280c2583bb540c783a05ba61e, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_aggregate", method_pointer_4417841e38f659f6a3633d19dbce11ea, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_any_destructor_no_return", method_pointer_e4a4dfef18f3538dbee2309e1057de49, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_c_like", method_pointer_9d5f6e1bd5fd548db7e049a49abf4d25, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_current_instantiation", method_pointer_a708da68e0d55e0c9c1b3090de938fcf, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_dependent_lambda", method_pointer_0d8a870579ad5ffab1263f28143270e8, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_derived_from", method_pointer_0dd38ff0923454289f7b9c9b00f3c662, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_dynamic_class", method_pointer_d95dba2d26e45df39e53f2207bb2a5b9, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_empty", method_pointer_9442a43e4b215642bfdecc80bffaf8d2, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_generic_lambda", method_pointer_cb92ef337cbd5320855e638d57890b02, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_lambda", method_pointer_20ff6979eee1512ab793589d8d601fc5, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_literal", method_pointer_979b9d221f3154ff8ea7ed9b7f507900, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_local_class", method_pointer_754bef12c6685c86bcbe1a1fe775c3e9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_local_class", method_pointer_fe126c0a4aff59699d4f8d949e08cea9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_pod", method_pointer_babf29b4193958f8a84f1f8244ddc858, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_parsing_base_specifiers", method_pointer_b85f5aa83af751fbaaf8c79063a80067, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_polymorphic", method_pointer_c4367b858127555db237320da544812f, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_provably_not_derived_from", method_pointer_be977b56986054bb97b99b6c1f3b38c9, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_standard_layout", method_pointer_84f0d694e13f5e5499ba96826527f496, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_trivial", method_pointer_41be2d9e163a56ba92f82c3d3998f05c, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_trivially_copyable", method_pointer_092939a463f755f1a307bd74133a8e0c, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_virtually_derived_from", method_pointer_67652841bbfa5546bad1167746f88725, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("may_be_abstract", method_pointer_412f0dd067675298b2d7d977c68162d2, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_copy_assignment", method_pointer_5f308b4b65ad5ba990c65bc80c5de255, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_copy_constructor", method_pointer_8087fdf387dc5141b3f74844f4acff2d, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_default_constructor", method_pointer_5faf985d0a055bba8782746d25317b79, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_destructor", method_pointer_9a8f27debac258ef9bd742610dc26d30, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_move_assignment", method_pointer_57fe03fdfe1c579280daecab936bacf5, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_move_constructor", method_pointer_3abc210419b15e40bf26cd472df9b613, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_copy_assignment", method_pointer_eb34a9baee755e0287e32e5f9e8b84e1, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_copy_constructor", method_pointer_ef70c28d717d53ec8ecf1ce7f72306b3, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_destructor", method_pointer_11933da897e35dd3a02b578993a1bcc7, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_move_assignment", method_pointer_ccc12900b4665afc8ab2dd7096f0e297, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_move_constructor", method_pointer_0328cb8041b655e58174a1df89a1d354, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("null_field_offset_is_zero", method_pointer_11b5067044555bb8845fe6aabb8147e3, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("push_friend_decl", method_pointer_abbf0e3a55985a549aab872069db3b86, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("remove_conversion", method_pointer_8a28bf2986b95607a8d2d3cfe7a20acf, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_described_class_template", method_pointer_be328f5459885867ac2b0fc247043b9d, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_implicit_move_assignment_is_deleted", method_pointer_ecac57ee9b7959dbb832e771da58ab8f, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_implicit_move_constructor_is_deleted", method_pointer_512c8a3439df5f8d8522f86aaaaf4f49, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_is_parsing_base_specifiers", method_pointer_5604efa010735ab8b5a23acdaa4dbc48, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_lambda_mangling", method_pointer_8189d06b0b5f539f9359b978d887b52f, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("view_inheritance", method_pointer_6a0aaf241b5150aaa9770a907dd41b35, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.staticmethod("classof_kind");
    class_6d094fa53b15516db85a0d4b3b7fd665.staticmethod("merge_access");
    class_6d094fa53b15516db85a0d4b3b7fd665.staticmethod("classof");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_bases", function_group::function_b6366f8f29a15fc19361835a3959b009, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_constructors", function_group::function_e6f17733e81851e09d4f39b74343d346, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_virtual_bases", function_group::function_2903a6d8de8356da84f6e88e66177215, "");

    if(std::is_class< autowig::HeldType< class ::clang::CXXRecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXRecordDecl >, autowig::HeldType< class ::clang::RecordDecl > >();
    }

}