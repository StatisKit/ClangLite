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
    enum ::clang::AccessSpecifier  (*method_pointer_42e90eadc6b75c3a9a75db31f41c8da3)(enum ::clang::AccessSpecifier , enum ::clang::AccessSpecifier ) = ::clang::CXXRecordDecl::MergeAccess;
    bool  (*method_pointer_2329d52e7aa8553089373f99bcae70d4)(class ::clang::Decl  const *) = ::clang::CXXRecordDecl::classof;
    bool  (*method_pointer_751ed00b53e15e19a0cc4026a56e072d)(enum ::clang::Decl::Kind ) = ::clang::CXXRecordDecl::classofKind;
    void  (::clang::CXXRecordDecl::*method_pointer_6d348686aada52f6b976a1e1613de0d4)() = &::clang::CXXRecordDecl::completeDefinition;
    bool  (::clang::CXXRecordDecl::*method_pointer_01973e5d816659bb9e4b6c285045617f)() const = &::clang::CXXRecordDecl::defaultedDefaultConstructorIsConstexpr;
    void  (::clang::CXXRecordDecl::*method_pointer_69b4cf375a675a0194e24058450ffae7)(class ::clang::CXXMethodDecl  *) = &::clang::CXXRecordDecl::finishedDefaultedOrDeletedMember;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_eac412a7e3605f9081eacd50269784c5)() = &::clang::CXXRecordDecl::getCanonicalDecl;
    class ::clang::CXXRecordDecl  const * (::clang::CXXRecordDecl::*method_pointer_7e69a8b228c652faa20082040b17ded8)() const = &::clang::CXXRecordDecl::getCanonicalDecl;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_f191eeb194e654e59032e968093f0ef0)() const = &::clang::CXXRecordDecl::getDefinition;
    class ::clang::ClassTemplateDecl  * (::clang::CXXRecordDecl::*method_pointer_cd4051c9bef4594d914ef406a7727b92)() const = &::clang::CXXRecordDecl::getDescribedClassTemplate;
    class ::clang::CXXDestructorDecl  * (::clang::CXXRecordDecl::*method_pointer_92740ce4fbd55e8389853de5b5910d45)() const = &::clang::CXXRecordDecl::getDestructor;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_5529ccb622ed5b28b96a8b150cc88453)() const = &::clang::CXXRecordDecl::getInstantiatedFromMemberClass;
    class ::clang::CXXMethodDecl  * (::clang::CXXRecordDecl::*method_pointer_ba10e8bf556d5cfb84ac32bef7510ab3)() const = &::clang::CXXRecordDecl::getLambdaCallOperator;
    class ::clang::Decl  * (::clang::CXXRecordDecl::*method_pointer_ceca481934565769bfff23a4d5a442d2)() const = &::clang::CXXRecordDecl::getLambdaContextDecl;
    unsigned int  (::clang::CXXRecordDecl::*method_pointer_6363bff4368d5eb0b4df82742cfc14f9)() const = &::clang::CXXRecordDecl::getLambdaManglingNumber;
    class ::clang::CXXMethodDecl  * (::clang::CXXRecordDecl::*method_pointer_f5fa22b24d8659ce89711d97a231914d)() const = &::clang::CXXRecordDecl::getLambdaStaticInvoker;
    class ::clang::CXXRecordDecl  const * (::clang::CXXRecordDecl::*method_pointer_9465f4c6d1e157dbb40cef4a3e5158e2)() const = &::clang::CXXRecordDecl::getMostRecentDecl;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_2a774a61257153a9ae04bedae8b08389)() = &::clang::CXXRecordDecl::getMostRecentDecl;
    unsigned int  (::clang::CXXRecordDecl::*method_pointer_d6ab757c3a365b4b9916c5e73f0ef899)() const = &::clang::CXXRecordDecl::getNumBases;
    unsigned int  (::clang::CXXRecordDecl::*method_pointer_b28816443bbd5d14b89d18ee241c336b)() const = &::clang::CXXRecordDecl::getNumVBases;
    class ::clang::CXXRecordDecl  const * (::clang::CXXRecordDecl::*method_pointer_4ea8cdb511ca543bba5ceb048e912bc4)() const = &::clang::CXXRecordDecl::getPreviousDecl;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_526e2f609b70524b86c4c65cec2b2e28)() = &::clang::CXXRecordDecl::getPreviousDecl;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_2673850aa16655c1917c6ee43582a30f)() = &::clang::CXXRecordDecl::getTemplateInstantiationPattern;
    class ::clang::CXXRecordDecl  const * (::clang::CXXRecordDecl::*method_pointer_688face238345ab28efe39063c54e8dd)() const = &::clang::CXXRecordDecl::getTemplateInstantiationPattern;
    bool  (::clang::CXXRecordDecl::*method_pointer_dcbd7556bb5456f195b01610ea94f1c6)() const = &::clang::CXXRecordDecl::hasAnyDependentBases;
    bool  (::clang::CXXRecordDecl::*method_pointer_987a91710c5f5dca8e61554281106c0b)() const = &::clang::CXXRecordDecl::hasConstexprDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_8f02b1e4cdcc512295f22b9324e0397c)() const = &::clang::CXXRecordDecl::hasConstexprNonCopyMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_50876a3cfc7652f6ae42c864c303e2f0)() const = &::clang::CXXRecordDecl::hasCopyAssignmentWithConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_56db92252e195f7599fa8f7c1938d011)() const = &::clang::CXXRecordDecl::hasCopyConstructorWithConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_c813cd378efd53afacef860f78a87871)() const = &::clang::CXXRecordDecl::hasDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_ef0bec30e97a5413b9fd701d05ec5490)() const = &::clang::CXXRecordDecl::hasDefinition;
    bool  (::clang::CXXRecordDecl::*method_pointer_8a9c73a791795015a3f8e4e9316413dc)() const = &::clang::CXXRecordDecl::hasFriends;
    bool  (::clang::CXXRecordDecl::*method_pointer_ddbf4d013f2d533cb80b4a9d09356edd)() const = &::clang::CXXRecordDecl::hasInClassInitializer;
    bool  (::clang::CXXRecordDecl::*method_pointer_26a7a29e2ad0525684e7997accab204f)() const = &::clang::CXXRecordDecl::hasIrrelevantDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_d4e62c84894752bc9fe0725cb81bfcf3)() const = &::clang::CXXRecordDecl::hasMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_624df74dba5755f19e1558c98898cb61)() const = &::clang::CXXRecordDecl::hasMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_c07e752f86bc57ef870f1c5ca5b96e85)() const = &::clang::CXXRecordDecl::hasMutableFields;
    bool  (::clang::CXXRecordDecl::*method_pointer_fcb6339e60ce5a7082e8597805dbb857)() const = &::clang::CXXRecordDecl::hasNonLiteralTypeFieldsOrBases;
    bool  (::clang::CXXRecordDecl::*method_pointer_d85fc1152392548484b3adf2c6776f28)() const = &::clang::CXXRecordDecl::hasNonTrivialCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_2332b2495d1356f29b0dc4bfc1820aaa)() const = &::clang::CXXRecordDecl::hasNonTrivialCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_98ab309719b4578eb9df0c6516d2edb6)() const = &::clang::CXXRecordDecl::hasNonTrivialDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_db631cf4f9a55b9883434724ead9121b)() const = &::clang::CXXRecordDecl::hasNonTrivialDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_d3a387b9aa465afab4a55ece5e44a34e)() const = &::clang::CXXRecordDecl::hasNonTrivialMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_9a19a527da5e5df3a20621a435cfa7fd)() const = &::clang::CXXRecordDecl::hasNonTrivialMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_989343b83f4a5f21ae6ed944fa7126ce)() const = &::clang::CXXRecordDecl::hasSimpleDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_3eef0177c33958e682aeb29b258ef389)() const = &::clang::CXXRecordDecl::hasSimpleMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_ea70334ddd9c57d8967cfd63bc0a571c)() const = &::clang::CXXRecordDecl::hasSimpleMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_44024f5e6da8551d92ccd095eef31b5a)() const = &::clang::CXXRecordDecl::hasTrivialCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_fd51b41e681251709760569f3b442642)() const = &::clang::CXXRecordDecl::hasTrivialCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_8fcd83352e4f540ea9491aaf50892a06)() const = &::clang::CXXRecordDecl::hasTrivialDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_c3acb036996e5fe585a30fa0e8a6c325)() const = &::clang::CXXRecordDecl::hasTrivialDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_e8c2ae993a1a5c19a3170601882e1381)() const = &::clang::CXXRecordDecl::hasTrivialMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_ccebf15fdedf55a8a19b383c07c4c158)() const = &::clang::CXXRecordDecl::hasTrivialMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_093846bf5f085ce892c5a56c7fd31141)() const = &::clang::CXXRecordDecl::hasUninitializedReferenceMember;
    bool  (::clang::CXXRecordDecl::*method_pointer_8038456b0e5756c8a2cbb6b853fe0198)() const = &::clang::CXXRecordDecl::hasUserDeclaredConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_5d8e183e4f3955e3bbf411b87497cf3d)() const = &::clang::CXXRecordDecl::hasUserDeclaredCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_ebf214c5b87f5d96bfa8d3c27a1820a0)() const = &::clang::CXXRecordDecl::hasUserDeclaredCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_4d440699e45b59298201aaf87c0cdd1b)() const = &::clang::CXXRecordDecl::hasUserDeclaredDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_916fb8915fd150adb53eb6cfb411dff3)() const = &::clang::CXXRecordDecl::hasUserDeclaredMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_c6e73d0e0dad5b3ea98dbcf9c6ce2e74)() const = &::clang::CXXRecordDecl::hasUserDeclaredMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_6ee9be9c0f88529c9b9bdab901462e7a)() const = &::clang::CXXRecordDecl::hasUserDeclaredMoveOperation;
    bool  (::clang::CXXRecordDecl::*method_pointer_dbfd6e710bf85f43b6ffc3228666f8e1)() const = &::clang::CXXRecordDecl::hasUserProvidedDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_af345851f2c8569598751a64c5b1bad8)() const = &::clang::CXXRecordDecl::hasVariantMembers;
    bool  (::clang::CXXRecordDecl::*method_pointer_83d3d83e040857adb3bc451d65116237)() const = &::clang::CXXRecordDecl::implicitCopyAssignmentHasConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_4b72314d08105999b91aa8faed3e73f5)() const = &::clang::CXXRecordDecl::implicitCopyConstructorHasConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_e81d95d4840f5aafa1fe873fabf2b3e8)() const = &::clang::CXXRecordDecl::isAbstract;
    bool  (::clang::CXXRecordDecl::*method_pointer_d8aadc61389f5fe29e7aa39f6a528f13)() const = &::clang::CXXRecordDecl::isAggregate;
    bool  (::clang::CXXRecordDecl::*method_pointer_2af0ea7edb065e0bbdaca1169ba439b1)() const = &::clang::CXXRecordDecl::isAnyDestructorNoReturn;
    bool  (::clang::CXXRecordDecl::*method_pointer_980c7227a9ba52eb9fffba096b8ecba7)() const = &::clang::CXXRecordDecl::isCLike;
    bool  (::clang::CXXRecordDecl::*method_pointer_0eeba50d41fc5e61a1a1f6513ea0bdd5)(class ::clang::DeclContext  const *) const = &::clang::CXXRecordDecl::isCurrentInstantiation;
    bool  (::clang::CXXRecordDecl::*method_pointer_6f6cfc9fab2e50858e17d13f5793b5d0)() const = &::clang::CXXRecordDecl::isDependentLambda;
    bool  (::clang::CXXRecordDecl::*method_pointer_9fa85922181e58c0b482e4c01169b92e)(class ::clang::CXXRecordDecl  const *) const = &::clang::CXXRecordDecl::isDerivedFrom;
    bool  (::clang::CXXRecordDecl::*method_pointer_74b7a56480e65cb98f9eaf9850936da1)() const = &::clang::CXXRecordDecl::isDynamicClass;
    bool  (::clang::CXXRecordDecl::*method_pointer_979e48506b4d51c1bc94319e7aaa70e9)() const = &::clang::CXXRecordDecl::isEmpty;
    bool  (::clang::CXXRecordDecl::*method_pointer_9c785851310e54629b9a9d34e3976ba1)() const = &::clang::CXXRecordDecl::isGenericLambda;
    bool  (::clang::CXXRecordDecl::*method_pointer_8262af85b94557f0b5b421793f4998a3)() const = &::clang::CXXRecordDecl::isLambda;
    bool  (::clang::CXXRecordDecl::*method_pointer_1f4cbe12c54151d6a91db6aa7dede2b5)() const = &::clang::CXXRecordDecl::isLiteral;
    class ::clang::FunctionDecl  const * (::clang::CXXRecordDecl::*method_pointer_7438d029352e59dba45c69d3b3674d84)() const = &::clang::CXXRecordDecl::isLocalClass;
    class ::clang::FunctionDecl  * (::clang::CXXRecordDecl::*method_pointer_39cbff80fb975df189ce71d2183fd69a)() = &::clang::CXXRecordDecl::isLocalClass;
    bool  (::clang::CXXRecordDecl::*method_pointer_fffeb1379c5250d2848ce69c03e70b79)() const = &::clang::CXXRecordDecl::isPOD;
    bool  (::clang::CXXRecordDecl::*method_pointer_0f5a484c2a275eaa8e1664078cb57167)() const = &::clang::CXXRecordDecl::isParsingBaseSpecifiers;
    bool  (::clang::CXXRecordDecl::*method_pointer_f969b5253dc55701a842e165ab4524e6)() const = &::clang::CXXRecordDecl::isPolymorphic;
    bool  (::clang::CXXRecordDecl::*method_pointer_e151e098ac2050d5816866ae1b673918)(class ::clang::CXXRecordDecl  const *) const = &::clang::CXXRecordDecl::isProvablyNotDerivedFrom;
    bool  (::clang::CXXRecordDecl::*method_pointer_4c7d828af31a5459953149cb9ea91a05)() const = &::clang::CXXRecordDecl::isStandardLayout;
    bool  (::clang::CXXRecordDecl::*method_pointer_3d407bb6aa465cc6b1af0e1a37b219f3)() const = &::clang::CXXRecordDecl::isTrivial;
    bool  (::clang::CXXRecordDecl::*method_pointer_09e69769420555f38deea42e2a682ffd)() const = &::clang::CXXRecordDecl::isTriviallyCopyable;
    bool  (::clang::CXXRecordDecl::*method_pointer_cd71028c437c5231bb9fb6327e28c209)(class ::clang::CXXRecordDecl  const *) const = &::clang::CXXRecordDecl::isVirtuallyDerivedFrom;
    bool  (::clang::CXXRecordDecl::*method_pointer_82c3b6102f695ccf82587988e80d00f1)() const = &::clang::CXXRecordDecl::mayBeAbstract;
    bool  (::clang::CXXRecordDecl::*method_pointer_0fe2aabbdad754cea6471ed6d809088b)() const = &::clang::CXXRecordDecl::needsImplicitCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_aaa3dd7535c65fa2bd4c1f795d089834)() const = &::clang::CXXRecordDecl::needsImplicitCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_3d191dc0f97e51acbb063f14a77a9d51)() const = &::clang::CXXRecordDecl::needsImplicitDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_c62a7f0d40705fa0b3729854715876fd)() const = &::clang::CXXRecordDecl::needsImplicitDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_5c1b0c975ddc5b29a8529f48d497af0f)() const = &::clang::CXXRecordDecl::needsImplicitMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_a9fcc11e650d55a1af159a0f06fb1cf6)() const = &::clang::CXXRecordDecl::needsImplicitMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_94f3f931ba9c5ffab7440eb055027d40)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_4f03b64f414355b59d3e3849fe989209)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_d522801cfe105fb2acaeeedef5ab89f7)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_589ace4b72ca5a229089a30e7fe928f6)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_65659ce909ef533ab8ff4b4f1e82a6d8)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_da4fdadda75e55348e91ed0dfafc361c)() const = &::clang::CXXRecordDecl::nullFieldOffsetIsZero;
    void  (::clang::CXXRecordDecl::*method_pointer_e3449f25b85e5f1b8c40b966f75fbb0c)(class ::clang::FriendDecl  *) = &::clang::CXXRecordDecl::pushFriendDecl;
    void  (::clang::CXXRecordDecl::*method_pointer_f5c6223a5f9e521b9edff9059c645dd8)(class ::clang::NamedDecl  const *) = &::clang::CXXRecordDecl::removeConversion;
    void  (::clang::CXXRecordDecl::*method_pointer_3accd4a22ff158bc87d39b5f30ebe3f5)(class ::clang::ClassTemplateDecl  *) = &::clang::CXXRecordDecl::setDescribedClassTemplate;
    void  (::clang::CXXRecordDecl::*method_pointer_a975868ee3185fe1a1c4dea98aa43452)() = &::clang::CXXRecordDecl::setImplicitMoveAssignmentIsDeleted;
    void  (::clang::CXXRecordDecl::*method_pointer_ef222185a7555f0bb6bc69699b282ef3)() = &::clang::CXXRecordDecl::setImplicitMoveConstructorIsDeleted;
    void  (::clang::CXXRecordDecl::*method_pointer_3d644af5416159769d4911a4d5ab1bb7)() = &::clang::CXXRecordDecl::setIsParsingBaseSpecifiers;
    void  (::clang::CXXRecordDecl::*method_pointer_21c79523df4f54838e94d46f4d1f3a3c)(unsigned int , class ::clang::Decl  *) = &::clang::CXXRecordDecl::setLambdaMangling;
    void  (::clang::CXXRecordDecl::*method_pointer_ea4c4f85179e56538d4db81a02d0f435)(class ::clang::ASTContext  &) const = &::clang::CXXRecordDecl::viewInheritance;
    struct function_group
    {
        static class ::boost::python::list  function_58878ffbbf9f578da85a4e0b29e11085(class ::clang::CXXRecordDecl  & parameter_0)
        { return ::clanglite::get_bases(parameter_0); }
        static class ::boost::python::list  function_06ffcd284a505bf6a284c78882ab83c2(class ::clang::CXXRecordDecl  & parameter_0)
        { return ::clanglite::get_constructors(parameter_0); }
        static class ::boost::python::list  function_c7b6b2ae8ad0534c88830b63ef8d97f7(class ::clang::CXXRecordDecl  & parameter_0)
        { return ::clanglite::get_virtual_bases(parameter_0); }
    };
    boost::python::class_< class ::clang::CXXRecordDecl, autowig::HeldType< class ::clang::CXXRecordDecl >, boost::python::bases< class ::clang::RecordDecl >, boost::noncopyable > class_6d094fa53b15516db85a0d4b3b7fd665("CXXRecordDecl", "", boost::python::no_init);
    class_6d094fa53b15516db85a0d4b3b7fd665.def("merge_access", method_pointer_42e90eadc6b75c3a9a75db31f41c8da3, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("classof", method_pointer_2329d52e7aa8553089373f99bcae70d4, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("classof_kind", method_pointer_751ed00b53e15e19a0cc4026a56e072d, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("complete_definition", method_pointer_6d348686aada52f6b976a1e1613de0d4, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("defaulted_default_constructor_is_constexpr", method_pointer_01973e5d816659bb9e4b6c285045617f, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("finished_defaulted_or_deleted_member", method_pointer_69b4cf375a675a0194e24058450ffae7, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_canonical_decl", method_pointer_eac412a7e3605f9081eacd50269784c5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_canonical_decl", method_pointer_7e69a8b228c652faa20082040b17ded8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_definition", method_pointer_f191eeb194e654e59032e968093f0ef0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_described_class_template", method_pointer_cd4051c9bef4594d914ef406a7727b92, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_destructor", method_pointer_92740ce4fbd55e8389853de5b5910d45, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_instantiated_from_member_class", method_pointer_5529ccb622ed5b28b96a8b150cc88453, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_call_operator", method_pointer_ba10e8bf556d5cfb84ac32bef7510ab3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_context_decl", method_pointer_ceca481934565769bfff23a4d5a442d2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_mangling_number", method_pointer_6363bff4368d5eb0b4df82742cfc14f9, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_static_invoker", method_pointer_f5fa22b24d8659ce89711d97a231914d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_most_recent_decl", method_pointer_9465f4c6d1e157dbb40cef4a3e5158e2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_most_recent_decl", method_pointer_2a774a61257153a9ae04bedae8b08389, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_num_bases", method_pointer_d6ab757c3a365b4b9916c5e73f0ef899, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_num_v_bases", method_pointer_b28816443bbd5d14b89d18ee241c336b, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_previous_decl", method_pointer_4ea8cdb511ca543bba5ceb048e912bc4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_previous_decl", method_pointer_526e2f609b70524b86c4c65cec2b2e28, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_template_instantiation_pattern", method_pointer_2673850aa16655c1917c6ee43582a30f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_template_instantiation_pattern", method_pointer_688face238345ab28efe39063c54e8dd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_any_dependent_bases", method_pointer_dcbd7556bb5456f195b01610ea94f1c6, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_constexpr_default_constructor", method_pointer_987a91710c5f5dca8e61554281106c0b, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_constexpr_non_copy_move_constructor", method_pointer_8f02b1e4cdcc512295f22b9324e0397c, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_copy_assignment_with_const_param", method_pointer_50876a3cfc7652f6ae42c864c303e2f0, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_copy_constructor_with_const_param", method_pointer_56db92252e195f7599fa8f7c1938d011, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_default_constructor", method_pointer_c813cd378efd53afacef860f78a87871, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_definition", method_pointer_ef0bec30e97a5413b9fd701d05ec5490, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_friends", method_pointer_8a9c73a791795015a3f8e4e9316413dc, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_in_class_initializer", method_pointer_ddbf4d013f2d533cb80b4a9d09356edd, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_irrelevant_destructor", method_pointer_26a7a29e2ad0525684e7997accab204f, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_move_assignment", method_pointer_d4e62c84894752bc9fe0725cb81bfcf3, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_move_constructor", method_pointer_624df74dba5755f19e1558c98898cb61, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_mutable_fields", method_pointer_c07e752f86bc57ef870f1c5ca5b96e85, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_literal_type_fields_or_bases", method_pointer_fcb6339e60ce5a7082e8597805dbb857, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_copy_assignment", method_pointer_d85fc1152392548484b3adf2c6776f28, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_copy_constructor", method_pointer_2332b2495d1356f29b0dc4bfc1820aaa, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_default_constructor", method_pointer_98ab309719b4578eb9df0c6516d2edb6, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_destructor", method_pointer_db631cf4f9a55b9883434724ead9121b, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_move_assignment", method_pointer_d3a387b9aa465afab4a55ece5e44a34e, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_move_constructor", method_pointer_9a19a527da5e5df3a20621a435cfa7fd, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_simple_destructor", method_pointer_989343b83f4a5f21ae6ed944fa7126ce, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_simple_move_assignment", method_pointer_3eef0177c33958e682aeb29b258ef389, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_simple_move_constructor", method_pointer_ea70334ddd9c57d8967cfd63bc0a571c, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_copy_assignment", method_pointer_44024f5e6da8551d92ccd095eef31b5a, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_copy_constructor", method_pointer_fd51b41e681251709760569f3b442642, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_default_constructor", method_pointer_8fcd83352e4f540ea9491aaf50892a06, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_destructor", method_pointer_c3acb036996e5fe585a30fa0e8a6c325, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_move_assignment", method_pointer_e8c2ae993a1a5c19a3170601882e1381, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_move_constructor", method_pointer_ccebf15fdedf55a8a19b383c07c4c158, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_uninitialized_reference_member", method_pointer_093846bf5f085ce892c5a56c7fd31141, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_constructor", method_pointer_8038456b0e5756c8a2cbb6b853fe0198, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_copy_assignment", method_pointer_5d8e183e4f3955e3bbf411b87497cf3d, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_copy_constructor", method_pointer_ebf214c5b87f5d96bfa8d3c27a1820a0, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_destructor", method_pointer_4d440699e45b59298201aaf87c0cdd1b, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_move_assignment", method_pointer_916fb8915fd150adb53eb6cfb411dff3, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_move_constructor", method_pointer_c6e73d0e0dad5b3ea98dbcf9c6ce2e74, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_move_operation", method_pointer_6ee9be9c0f88529c9b9bdab901462e7a, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_provided_default_constructor", method_pointer_dbfd6e710bf85f43b6ffc3228666f8e1, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_variant_members", method_pointer_af345851f2c8569598751a64c5b1bad8, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("implicit_copy_assignment_has_const_param", method_pointer_83d3d83e040857adb3bc451d65116237, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("implicit_copy_constructor_has_const_param", method_pointer_4b72314d08105999b91aa8faed3e73f5, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_abstract", method_pointer_e81d95d4840f5aafa1fe873fabf2b3e8, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_aggregate", method_pointer_d8aadc61389f5fe29e7aa39f6a528f13, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_any_destructor_no_return", method_pointer_2af0ea7edb065e0bbdaca1169ba439b1, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_c_like", method_pointer_980c7227a9ba52eb9fffba096b8ecba7, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_current_instantiation", method_pointer_0eeba50d41fc5e61a1a1f6513ea0bdd5, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_dependent_lambda", method_pointer_6f6cfc9fab2e50858e17d13f5793b5d0, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_derived_from", method_pointer_9fa85922181e58c0b482e4c01169b92e, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_dynamic_class", method_pointer_74b7a56480e65cb98f9eaf9850936da1, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_empty", method_pointer_979e48506b4d51c1bc94319e7aaa70e9, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_generic_lambda", method_pointer_9c785851310e54629b9a9d34e3976ba1, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_lambda", method_pointer_8262af85b94557f0b5b421793f4998a3, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_literal", method_pointer_1f4cbe12c54151d6a91db6aa7dede2b5, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_local_class", method_pointer_7438d029352e59dba45c69d3b3674d84, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_local_class", method_pointer_39cbff80fb975df189ce71d2183fd69a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_pod", method_pointer_fffeb1379c5250d2848ce69c03e70b79, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_parsing_base_specifiers", method_pointer_0f5a484c2a275eaa8e1664078cb57167, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_polymorphic", method_pointer_f969b5253dc55701a842e165ab4524e6, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_provably_not_derived_from", method_pointer_e151e098ac2050d5816866ae1b673918, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_standard_layout", method_pointer_4c7d828af31a5459953149cb9ea91a05, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_trivial", method_pointer_3d407bb6aa465cc6b1af0e1a37b219f3, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_trivially_copyable", method_pointer_09e69769420555f38deea42e2a682ffd, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_virtually_derived_from", method_pointer_cd71028c437c5231bb9fb6327e28c209, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("may_be_abstract", method_pointer_82c3b6102f695ccf82587988e80d00f1, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_copy_assignment", method_pointer_0fe2aabbdad754cea6471ed6d809088b, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_copy_constructor", method_pointer_aaa3dd7535c65fa2bd4c1f795d089834, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_default_constructor", method_pointer_3d191dc0f97e51acbb063f14a77a9d51, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_destructor", method_pointer_c62a7f0d40705fa0b3729854715876fd, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_move_assignment", method_pointer_5c1b0c975ddc5b29a8529f48d497af0f, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_move_constructor", method_pointer_a9fcc11e650d55a1af159a0f06fb1cf6, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_copy_assignment", method_pointer_94f3f931ba9c5ffab7440eb055027d40, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_copy_constructor", method_pointer_4f03b64f414355b59d3e3849fe989209, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_destructor", method_pointer_d522801cfe105fb2acaeeedef5ab89f7, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_move_assignment", method_pointer_589ace4b72ca5a229089a30e7fe928f6, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_move_constructor", method_pointer_65659ce909ef533ab8ff4b4f1e82a6d8, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("null_field_offset_is_zero", method_pointer_da4fdadda75e55348e91ed0dfafc361c, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("push_friend_decl", method_pointer_e3449f25b85e5f1b8c40b966f75fbb0c, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("remove_conversion", method_pointer_f5c6223a5f9e521b9edff9059c645dd8, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_described_class_template", method_pointer_3accd4a22ff158bc87d39b5f30ebe3f5, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_implicit_move_assignment_is_deleted", method_pointer_a975868ee3185fe1a1c4dea98aa43452, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_implicit_move_constructor_is_deleted", method_pointer_ef222185a7555f0bb6bc69699b282ef3, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_is_parsing_base_specifiers", method_pointer_3d644af5416159769d4911a4d5ab1bb7, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_lambda_mangling", method_pointer_21c79523df4f54838e94d46f4d1f3a3c, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("view_inheritance", method_pointer_ea4c4f85179e56538d4db81a02d0f435, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.staticmethod("classof_kind");
    class_6d094fa53b15516db85a0d4b3b7fd665.staticmethod("merge_access");
    class_6d094fa53b15516db85a0d4b3b7fd665.staticmethod("classof");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_bases", function_group::function_58878ffbbf9f578da85a4e0b29e11085, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_constructors", function_group::function_06ffcd284a505bf6a284c78882ab83c2, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_virtual_bases", function_group::function_c7b6b2ae8ad0534c88830b63ef8d97f7, "");

    if(std::is_class< autowig::HeldType< class ::clang::CXXRecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXRecordDecl >, autowig::HeldType< class ::clang::RecordDecl > >();
    }

}