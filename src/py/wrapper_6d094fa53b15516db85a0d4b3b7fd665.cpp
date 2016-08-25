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
    enum ::clang::AccessSpecifier  (*method_pointer_26e849a817265be8b0ec86d1f0b4ee90)(enum ::clang::AccessSpecifier , enum ::clang::AccessSpecifier ) = ::clang::CXXRecordDecl::MergeAccess;
    bool  (*method_pointer_eb99961b741e5eedb26af556d3ddcf9c)(class ::clang::Decl  const *) = ::clang::CXXRecordDecl::classof;
    bool  (*method_pointer_cbc29a16ca755b0782ab36d27062d246)(enum ::clang::Decl::Kind ) = ::clang::CXXRecordDecl::classofKind;
    void  (::clang::CXXRecordDecl::*method_pointer_51b74fd5ce84515db511f9f82b865f60)() = &::clang::CXXRecordDecl::completeDefinition;
    bool  (::clang::CXXRecordDecl::*method_pointer_22695a627b335c64bc48e5d3c52763f5)() const = &::clang::CXXRecordDecl::defaultedDefaultConstructorIsConstexpr;
    void  (::clang::CXXRecordDecl::*method_pointer_74f4420d86d75910b57ca988b262df59)(class ::clang::CXXMethodDecl  *) = &::clang::CXXRecordDecl::finishedDefaultedOrDeletedMember;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_1543ba6bbc1d526686a4dbfdb0ebc014)() = &::clang::CXXRecordDecl::getCanonicalDecl;
    class ::clang::CXXRecordDecl  const * (::clang::CXXRecordDecl::*method_pointer_017e1492fbae5ab4a8a6ee2ef1d6efd0)() const = &::clang::CXXRecordDecl::getCanonicalDecl;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_a328134b09f354d7b07e46b1d86be90e)() const = &::clang::CXXRecordDecl::getDefinition;
    class ::clang::ClassTemplateDecl  * (::clang::CXXRecordDecl::*method_pointer_3e79d26c8b3b51e0baba361090cf2f65)() const = &::clang::CXXRecordDecl::getDescribedClassTemplate;
    class ::clang::CXXDestructorDecl  * (::clang::CXXRecordDecl::*method_pointer_994fc6bf676254c5a5316ba5ddb424b6)() const = &::clang::CXXRecordDecl::getDestructor;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_89d0809a88e75356935df52aa28aad55)() const = &::clang::CXXRecordDecl::getInstantiatedFromMemberClass;
    class ::clang::CXXMethodDecl  * (::clang::CXXRecordDecl::*method_pointer_a03a02871bb254689cb25efceeead0c4)() const = &::clang::CXXRecordDecl::getLambdaCallOperator;
    class ::clang::Decl  * (::clang::CXXRecordDecl::*method_pointer_6e3afeaf4d6c5133b74c1b4b038d6e47)() const = &::clang::CXXRecordDecl::getLambdaContextDecl;
    unsigned int  (::clang::CXXRecordDecl::*method_pointer_c2675b5232c05395b2997def8f391470)() const = &::clang::CXXRecordDecl::getLambdaManglingNumber;
    class ::clang::CXXMethodDecl  * (::clang::CXXRecordDecl::*method_pointer_d03ff535926159f5b88b5a4ebb70956d)() const = &::clang::CXXRecordDecl::getLambdaStaticInvoker;
    class ::clang::CXXRecordDecl  const * (::clang::CXXRecordDecl::*method_pointer_c50d843fb11856f894315a038133235b)() const = &::clang::CXXRecordDecl::getMostRecentDecl;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_6a5efed03dfa5ab3b45075cd13b1b4e9)() = &::clang::CXXRecordDecl::getMostRecentDecl;
    unsigned int  (::clang::CXXRecordDecl::*method_pointer_baf39342ccfa5d449fa40f4b8c88a6f6)() const = &::clang::CXXRecordDecl::getNumBases;
    unsigned int  (::clang::CXXRecordDecl::*method_pointer_70de5602f7d955dc87af6247218017a8)() const = &::clang::CXXRecordDecl::getNumVBases;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_a7ca037df43a5694b29855c09bb2d350)() = &::clang::CXXRecordDecl::getPreviousDecl;
    class ::clang::CXXRecordDecl  const * (::clang::CXXRecordDecl::*method_pointer_836d2b9d59db5123af1644e22185a80e)() const = &::clang::CXXRecordDecl::getPreviousDecl;
    class ::clang::CXXRecordDecl  const * (::clang::CXXRecordDecl::*method_pointer_b13951502205542fa69e3dbb43d79e44)() const = &::clang::CXXRecordDecl::getTemplateInstantiationPattern;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_5b9af13cf3a4557f8d7334c2bfb51edc)() = &::clang::CXXRecordDecl::getTemplateInstantiationPattern;
    bool  (::clang::CXXRecordDecl::*method_pointer_d96936f29e6a529088162d1e469193d7)() const = &::clang::CXXRecordDecl::hasAnyDependentBases;
    bool  (::clang::CXXRecordDecl::*method_pointer_d98d2d875fc8518c8b43e636707c7355)() const = &::clang::CXXRecordDecl::hasConstexprDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_a940d5fe468d576984fb4427876580d1)() const = &::clang::CXXRecordDecl::hasConstexprNonCopyMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_cebac90299c358f78131db2eba687ee0)() const = &::clang::CXXRecordDecl::hasCopyAssignmentWithConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_a5d15f12859b5c0aa214db1d4964da00)() const = &::clang::CXXRecordDecl::hasCopyConstructorWithConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_8bdeaacacc6d5ff7b9cc6066a40dd2a4)() const = &::clang::CXXRecordDecl::hasDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_0f0c134e575a5bf899df331204f4e14e)() const = &::clang::CXXRecordDecl::hasDefinition;
    bool  (::clang::CXXRecordDecl::*method_pointer_5cee02d7e7b15534b2c5d7ced7d86aa5)() const = &::clang::CXXRecordDecl::hasFriends;
    bool  (::clang::CXXRecordDecl::*method_pointer_752416bd4b285503b3b6b247f924382f)() const = &::clang::CXXRecordDecl::hasInClassInitializer;
    bool  (::clang::CXXRecordDecl::*method_pointer_6da656ab0d3855e7bc74f99348017b63)() const = &::clang::CXXRecordDecl::hasIrrelevantDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_7998e7fe24ed502ca38c7db7427443ac)() const = &::clang::CXXRecordDecl::hasMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_d6114c112e7d59208f4e8e7eb6b4db94)() const = &::clang::CXXRecordDecl::hasMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_ed78d1b5f7565207a3fb9c1023c5164a)() const = &::clang::CXXRecordDecl::hasMutableFields;
    bool  (::clang::CXXRecordDecl::*method_pointer_06a86d540d11588e8af703f8842d1cb5)() const = &::clang::CXXRecordDecl::hasNonLiteralTypeFieldsOrBases;
    bool  (::clang::CXXRecordDecl::*method_pointer_d4fbb6f70c7c5365b2669be11e12270d)() const = &::clang::CXXRecordDecl::hasNonTrivialCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_951355864930556186e6de29070acd28)() const = &::clang::CXXRecordDecl::hasNonTrivialCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_d45c51b76139596e8d3fcd63b693605b)() const = &::clang::CXXRecordDecl::hasNonTrivialDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_5980d45d50485c8aa231d2227401f840)() const = &::clang::CXXRecordDecl::hasNonTrivialDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_c0baa011704a56aba2e2116790ca9a7a)() const = &::clang::CXXRecordDecl::hasNonTrivialMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_9908218bc8f752068bfd16f3eedc866a)() const = &::clang::CXXRecordDecl::hasNonTrivialMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_7350c857825353629c3b854714ed0861)() const = &::clang::CXXRecordDecl::hasSimpleDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_c5028c8f9a435f9b9dd22187fe150e60)() const = &::clang::CXXRecordDecl::hasSimpleMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_08408827ac74500eb58101e9c5b3054a)() const = &::clang::CXXRecordDecl::hasSimpleMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_f83ed16e3c42502aab4df2398c44e134)() const = &::clang::CXXRecordDecl::hasTrivialCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_971966cf616358f4a3910f3e9bdfb3cc)() const = &::clang::CXXRecordDecl::hasTrivialCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_680ac31ac5fb5bc69ac8ac91c46bd7e2)() const = &::clang::CXXRecordDecl::hasTrivialDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_852d8afa9503513e8ebaef96e37031d1)() const = &::clang::CXXRecordDecl::hasTrivialDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_468146406040594bb5c7987c889ac312)() const = &::clang::CXXRecordDecl::hasTrivialMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_cfa595eed564591f90db9360967f0ddb)() const = &::clang::CXXRecordDecl::hasTrivialMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_0785b70d34ce539481be476f30629ee2)() const = &::clang::CXXRecordDecl::hasUninitializedReferenceMember;
    bool  (::clang::CXXRecordDecl::*method_pointer_e40d44dbde64520685c610a5049cee91)() const = &::clang::CXXRecordDecl::hasUserDeclaredConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_5b9f505d98705898bad53f116b8c82dd)() const = &::clang::CXXRecordDecl::hasUserDeclaredCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_ae80483b2c315e53941fa24cb20298d1)() const = &::clang::CXXRecordDecl::hasUserDeclaredCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_8f8b1fd4bc025d1987684baf64e0c0ed)() const = &::clang::CXXRecordDecl::hasUserDeclaredDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_836bf5bc0481574883a81bc1f3d975e9)() const = &::clang::CXXRecordDecl::hasUserDeclaredMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_04ff94ffdfca55368f45b161afcd8a2e)() const = &::clang::CXXRecordDecl::hasUserDeclaredMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_73c1801230dd53078c15e706980d566a)() const = &::clang::CXXRecordDecl::hasUserDeclaredMoveOperation;
    bool  (::clang::CXXRecordDecl::*method_pointer_82e0ff93aed350328d4a6cda80e6e2a0)() const = &::clang::CXXRecordDecl::hasUserProvidedDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_2f70ef9956725e14b857d4ab8e7795bc)() const = &::clang::CXXRecordDecl::hasVariantMembers;
    bool  (::clang::CXXRecordDecl::*method_pointer_a4765ac8bdca56949f51470136942b30)() const = &::clang::CXXRecordDecl::implicitCopyAssignmentHasConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_3d818b2da6d850da8adee164b9be4c2d)() const = &::clang::CXXRecordDecl::implicitCopyConstructorHasConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_e8b15b9d4b635e969835f8c386c9b7bc)() const = &::clang::CXXRecordDecl::isAbstract;
    bool  (::clang::CXXRecordDecl::*method_pointer_508ee4e769295cb6a9af3c1db4bb1c0b)() const = &::clang::CXXRecordDecl::isAggregate;
    bool  (::clang::CXXRecordDecl::*method_pointer_9b7881064ad85ce4bd0dd8423a5dc25a)() const = &::clang::CXXRecordDecl::isAnyDestructorNoReturn;
    bool  (::clang::CXXRecordDecl::*method_pointer_94019cf8794d5a30b675fe3d2cb4ce33)() const = &::clang::CXXRecordDecl::isCLike;
    bool  (::clang::CXXRecordDecl::*method_pointer_57cc1e57b9c655d7903daa46ff8ef0e2)(class ::clang::DeclContext  const *) const = &::clang::CXXRecordDecl::isCurrentInstantiation;
    bool  (::clang::CXXRecordDecl::*method_pointer_331453e63c34526b955c428619c3b425)() const = &::clang::CXXRecordDecl::isDependentLambda;
    bool  (::clang::CXXRecordDecl::*method_pointer_b8cd85e5854d53d886c1db0132578ee3)(class ::clang::CXXRecordDecl  const *) const = &::clang::CXXRecordDecl::isDerivedFrom;
    bool  (::clang::CXXRecordDecl::*method_pointer_1bd90955f7cf50a8bb73997b3481fbe7)() const = &::clang::CXXRecordDecl::isDynamicClass;
    bool  (::clang::CXXRecordDecl::*method_pointer_3cce593276315272b89f090ab4ca9f48)() const = &::clang::CXXRecordDecl::isEmpty;
    bool  (::clang::CXXRecordDecl::*method_pointer_ab2002de3a60550fa5831267a438aa4a)() const = &::clang::CXXRecordDecl::isGenericLambda;
    bool  (::clang::CXXRecordDecl::*method_pointer_eb322c101d2553238da9ab5040bb3c22)() const = &::clang::CXXRecordDecl::isLambda;
    bool  (::clang::CXXRecordDecl::*method_pointer_c252d4cbd5b556d8ae40be680241a5de)() const = &::clang::CXXRecordDecl::isLiteral;
    class ::clang::FunctionDecl  * (::clang::CXXRecordDecl::*method_pointer_12b8067b3c2e5d5682fa4b0a9f60a02c)() = &::clang::CXXRecordDecl::isLocalClass;
    class ::clang::FunctionDecl  const * (::clang::CXXRecordDecl::*method_pointer_926195de72ec5d58ac29161e8d195425)() const = &::clang::CXXRecordDecl::isLocalClass;
    bool  (::clang::CXXRecordDecl::*method_pointer_c4ec985c5d7251b3b09f6087771cb896)() const = &::clang::CXXRecordDecl::isPOD;
    bool  (::clang::CXXRecordDecl::*method_pointer_0c7c77a0302c5889a59fb886582590ad)() const = &::clang::CXXRecordDecl::isParsingBaseSpecifiers;
    bool  (::clang::CXXRecordDecl::*method_pointer_c74183b4fd9b5f9ead9d7ca3f6f1692d)() const = &::clang::CXXRecordDecl::isPolymorphic;
    bool  (::clang::CXXRecordDecl::*method_pointer_59c1937353d15ea7886344c8cd17b967)(class ::clang::CXXRecordDecl  const *) const = &::clang::CXXRecordDecl::isProvablyNotDerivedFrom;
    bool  (::clang::CXXRecordDecl::*method_pointer_bb3a215cc47657fbb51f5a69b1fbdc77)() const = &::clang::CXXRecordDecl::isStandardLayout;
    bool  (::clang::CXXRecordDecl::*method_pointer_5cae98886c305eeda016e7c970fc5a83)() const = &::clang::CXXRecordDecl::isTrivial;
    bool  (::clang::CXXRecordDecl::*method_pointer_d631154a6e2158b2b13cb146c9b9a12d)() const = &::clang::CXXRecordDecl::isTriviallyCopyable;
    bool  (::clang::CXXRecordDecl::*method_pointer_824880fca41d5efebce758a68e04de91)(class ::clang::CXXRecordDecl  const *) const = &::clang::CXXRecordDecl::isVirtuallyDerivedFrom;
    bool  (::clang::CXXRecordDecl::*method_pointer_9fe413319c6a5f299b2620a14e3bfeba)() const = &::clang::CXXRecordDecl::mayBeAbstract;
    bool  (::clang::CXXRecordDecl::*method_pointer_6928c2bca6de5caeb47b04cc01e13029)() const = &::clang::CXXRecordDecl::needsImplicitCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_bca32033b60551f0b6e80162e7f2eed9)() const = &::clang::CXXRecordDecl::needsImplicitCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_657c5247353f59329b102e79de6c3ac6)() const = &::clang::CXXRecordDecl::needsImplicitDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_7ad7c29f39c3520d80a353b73ec00c72)() const = &::clang::CXXRecordDecl::needsImplicitDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_f24715b650315b1fbe967d85a7d182bb)() const = &::clang::CXXRecordDecl::needsImplicitMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_7da8a114471c55c39d23f11fc61cb431)() const = &::clang::CXXRecordDecl::needsImplicitMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_f087b18fc3075922ad4b0925f9d44516)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_91aa962dd3485be495d86362e6f83b9f)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_5add2d4fdaaa57768aaf4986504ec287)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_00730cb0e2e45a30844776ed7332f328)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_28b8598fb7e35ac789da7dc69e1d5266)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_b54dc2e045665a49a0136e18618a7342)() const = &::clang::CXXRecordDecl::nullFieldOffsetIsZero;
    void  (::clang::CXXRecordDecl::*method_pointer_0862560a65a65aaa90e9590d5837e6b9)(class ::clang::FriendDecl  *) = &::clang::CXXRecordDecl::pushFriendDecl;
    void  (::clang::CXXRecordDecl::*method_pointer_b7968a2dc8c35eaa83ba6e55625ab292)(class ::clang::NamedDecl  const *) = &::clang::CXXRecordDecl::removeConversion;
    void  (::clang::CXXRecordDecl::*method_pointer_d841ba3b31875527a2f47086686c8283)(class ::clang::ClassTemplateDecl  *) = &::clang::CXXRecordDecl::setDescribedClassTemplate;
    void  (::clang::CXXRecordDecl::*method_pointer_66f34c2b258a5c62b884ae454238eb7b)() = &::clang::CXXRecordDecl::setImplicitMoveAssignmentIsDeleted;
    void  (::clang::CXXRecordDecl::*method_pointer_890bab68ca5b5f7ca8c29cacf2c2e4be)() = &::clang::CXXRecordDecl::setImplicitMoveConstructorIsDeleted;
    void  (::clang::CXXRecordDecl::*method_pointer_d58395fe81295c6e87065407276a24db)() = &::clang::CXXRecordDecl::setIsParsingBaseSpecifiers;
    void  (::clang::CXXRecordDecl::*method_pointer_84c3f747400f5829b00e7d0990115a35)(unsigned int , class ::clang::Decl  *) = &::clang::CXXRecordDecl::setLambdaMangling;
    void  (::clang::CXXRecordDecl::*method_pointer_9192cafef2d259efb19458589d828f54)(class ::clang::ASTContext  &) const = &::clang::CXXRecordDecl::viewInheritance;
    struct function_group
    {
        static class ::boost::python::list  function_0807e81d85a7503f9856e1ed8019b375(class ::clang::CXXRecordDecl  & parameter_0)
        { return ::clanglite::get_bases(parameter_0); }
        static class ::boost::python::list  function_6a9b5d3826995981ac28e9af03005554(class ::clang::CXXRecordDecl  & parameter_0)
        { return ::clanglite::get_constructors(parameter_0); }
        static class ::boost::python::list  function_3ba02f781de053d1805459ec212c96c6(class ::clang::CXXRecordDecl  & parameter_0)
        { return ::clanglite::get_virtual_bases(parameter_0); }
    };
    boost::python::class_< class ::clang::CXXRecordDecl, autowig::HeldType< class ::clang::CXXRecordDecl >, boost::python::bases< class ::clang::RecordDecl >, boost::noncopyable > class_6d094fa53b15516db85a0d4b3b7fd665("CXXRecordDecl", "", boost::python::no_init);
    class_6d094fa53b15516db85a0d4b3b7fd665.def("merge_access", method_pointer_26e849a817265be8b0ec86d1f0b4ee90, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("classof", method_pointer_eb99961b741e5eedb26af556d3ddcf9c, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("classof_kind", method_pointer_cbc29a16ca755b0782ab36d27062d246, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("complete_definition", method_pointer_51b74fd5ce84515db511f9f82b865f60, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("defaulted_default_constructor_is_constexpr", method_pointer_22695a627b335c64bc48e5d3c52763f5, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("finished_defaulted_or_deleted_member", method_pointer_74f4420d86d75910b57ca988b262df59, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_canonical_decl", method_pointer_1543ba6bbc1d526686a4dbfdb0ebc014, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_canonical_decl", method_pointer_017e1492fbae5ab4a8a6ee2ef1d6efd0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_definition", method_pointer_a328134b09f354d7b07e46b1d86be90e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_described_class_template", method_pointer_3e79d26c8b3b51e0baba361090cf2f65, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_destructor", method_pointer_994fc6bf676254c5a5316ba5ddb424b6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_instantiated_from_member_class", method_pointer_89d0809a88e75356935df52aa28aad55, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_call_operator", method_pointer_a03a02871bb254689cb25efceeead0c4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_context_decl", method_pointer_6e3afeaf4d6c5133b74c1b4b038d6e47, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_mangling_number", method_pointer_c2675b5232c05395b2997def8f391470, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_static_invoker", method_pointer_d03ff535926159f5b88b5a4ebb70956d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_most_recent_decl", method_pointer_c50d843fb11856f894315a038133235b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_most_recent_decl", method_pointer_6a5efed03dfa5ab3b45075cd13b1b4e9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_num_bases", method_pointer_baf39342ccfa5d449fa40f4b8c88a6f6, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_num_v_bases", method_pointer_70de5602f7d955dc87af6247218017a8, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_previous_decl", method_pointer_a7ca037df43a5694b29855c09bb2d350, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_previous_decl", method_pointer_836d2b9d59db5123af1644e22185a80e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_template_instantiation_pattern", method_pointer_b13951502205542fa69e3dbb43d79e44, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_template_instantiation_pattern", method_pointer_5b9af13cf3a4557f8d7334c2bfb51edc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_any_dependent_bases", method_pointer_d96936f29e6a529088162d1e469193d7, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_constexpr_default_constructor", method_pointer_d98d2d875fc8518c8b43e636707c7355, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_constexpr_non_copy_move_constructor", method_pointer_a940d5fe468d576984fb4427876580d1, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_copy_assignment_with_const_param", method_pointer_cebac90299c358f78131db2eba687ee0, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_copy_constructor_with_const_param", method_pointer_a5d15f12859b5c0aa214db1d4964da00, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_default_constructor", method_pointer_8bdeaacacc6d5ff7b9cc6066a40dd2a4, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_definition", method_pointer_0f0c134e575a5bf899df331204f4e14e, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_friends", method_pointer_5cee02d7e7b15534b2c5d7ced7d86aa5, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_in_class_initializer", method_pointer_752416bd4b285503b3b6b247f924382f, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_irrelevant_destructor", method_pointer_6da656ab0d3855e7bc74f99348017b63, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_move_assignment", method_pointer_7998e7fe24ed502ca38c7db7427443ac, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_move_constructor", method_pointer_d6114c112e7d59208f4e8e7eb6b4db94, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_mutable_fields", method_pointer_ed78d1b5f7565207a3fb9c1023c5164a, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_literal_type_fields_or_bases", method_pointer_06a86d540d11588e8af703f8842d1cb5, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_copy_assignment", method_pointer_d4fbb6f70c7c5365b2669be11e12270d, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_copy_constructor", method_pointer_951355864930556186e6de29070acd28, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_default_constructor", method_pointer_d45c51b76139596e8d3fcd63b693605b, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_destructor", method_pointer_5980d45d50485c8aa231d2227401f840, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_move_assignment", method_pointer_c0baa011704a56aba2e2116790ca9a7a, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_move_constructor", method_pointer_9908218bc8f752068bfd16f3eedc866a, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_simple_destructor", method_pointer_7350c857825353629c3b854714ed0861, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_simple_move_assignment", method_pointer_c5028c8f9a435f9b9dd22187fe150e60, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_simple_move_constructor", method_pointer_08408827ac74500eb58101e9c5b3054a, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_copy_assignment", method_pointer_f83ed16e3c42502aab4df2398c44e134, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_copy_constructor", method_pointer_971966cf616358f4a3910f3e9bdfb3cc, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_default_constructor", method_pointer_680ac31ac5fb5bc69ac8ac91c46bd7e2, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_destructor", method_pointer_852d8afa9503513e8ebaef96e37031d1, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_move_assignment", method_pointer_468146406040594bb5c7987c889ac312, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_move_constructor", method_pointer_cfa595eed564591f90db9360967f0ddb, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_uninitialized_reference_member", method_pointer_0785b70d34ce539481be476f30629ee2, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_constructor", method_pointer_e40d44dbde64520685c610a5049cee91, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_copy_assignment", method_pointer_5b9f505d98705898bad53f116b8c82dd, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_copy_constructor", method_pointer_ae80483b2c315e53941fa24cb20298d1, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_destructor", method_pointer_8f8b1fd4bc025d1987684baf64e0c0ed, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_move_assignment", method_pointer_836bf5bc0481574883a81bc1f3d975e9, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_move_constructor", method_pointer_04ff94ffdfca55368f45b161afcd8a2e, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_move_operation", method_pointer_73c1801230dd53078c15e706980d566a, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_provided_default_constructor", method_pointer_82e0ff93aed350328d4a6cda80e6e2a0, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_variant_members", method_pointer_2f70ef9956725e14b857d4ab8e7795bc, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("implicit_copy_assignment_has_const_param", method_pointer_a4765ac8bdca56949f51470136942b30, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("implicit_copy_constructor_has_const_param", method_pointer_3d818b2da6d850da8adee164b9be4c2d, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_abstract", method_pointer_e8b15b9d4b635e969835f8c386c9b7bc, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_aggregate", method_pointer_508ee4e769295cb6a9af3c1db4bb1c0b, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_any_destructor_no_return", method_pointer_9b7881064ad85ce4bd0dd8423a5dc25a, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_c_like", method_pointer_94019cf8794d5a30b675fe3d2cb4ce33, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_current_instantiation", method_pointer_57cc1e57b9c655d7903daa46ff8ef0e2, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_dependent_lambda", method_pointer_331453e63c34526b955c428619c3b425, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_derived_from", method_pointer_b8cd85e5854d53d886c1db0132578ee3, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_dynamic_class", method_pointer_1bd90955f7cf50a8bb73997b3481fbe7, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_empty", method_pointer_3cce593276315272b89f090ab4ca9f48, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_generic_lambda", method_pointer_ab2002de3a60550fa5831267a438aa4a, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_lambda", method_pointer_eb322c101d2553238da9ab5040bb3c22, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_literal", method_pointer_c252d4cbd5b556d8ae40be680241a5de, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_local_class", method_pointer_12b8067b3c2e5d5682fa4b0a9f60a02c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_local_class", method_pointer_926195de72ec5d58ac29161e8d195425, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_pod", method_pointer_c4ec985c5d7251b3b09f6087771cb896, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_parsing_base_specifiers", method_pointer_0c7c77a0302c5889a59fb886582590ad, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_polymorphic", method_pointer_c74183b4fd9b5f9ead9d7ca3f6f1692d, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_provably_not_derived_from", method_pointer_59c1937353d15ea7886344c8cd17b967, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_standard_layout", method_pointer_bb3a215cc47657fbb51f5a69b1fbdc77, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_trivial", method_pointer_5cae98886c305eeda016e7c970fc5a83, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_trivially_copyable", method_pointer_d631154a6e2158b2b13cb146c9b9a12d, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_virtually_derived_from", method_pointer_824880fca41d5efebce758a68e04de91, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("may_be_abstract", method_pointer_9fe413319c6a5f299b2620a14e3bfeba, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_copy_assignment", method_pointer_6928c2bca6de5caeb47b04cc01e13029, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_copy_constructor", method_pointer_bca32033b60551f0b6e80162e7f2eed9, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_default_constructor", method_pointer_657c5247353f59329b102e79de6c3ac6, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_destructor", method_pointer_7ad7c29f39c3520d80a353b73ec00c72, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_move_assignment", method_pointer_f24715b650315b1fbe967d85a7d182bb, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_move_constructor", method_pointer_7da8a114471c55c39d23f11fc61cb431, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_copy_assignment", method_pointer_f087b18fc3075922ad4b0925f9d44516, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_copy_constructor", method_pointer_91aa962dd3485be495d86362e6f83b9f, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_destructor", method_pointer_5add2d4fdaaa57768aaf4986504ec287, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_move_assignment", method_pointer_00730cb0e2e45a30844776ed7332f328, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_move_constructor", method_pointer_28b8598fb7e35ac789da7dc69e1d5266, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("null_field_offset_is_zero", method_pointer_b54dc2e045665a49a0136e18618a7342, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("push_friend_decl", method_pointer_0862560a65a65aaa90e9590d5837e6b9, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("remove_conversion", method_pointer_b7968a2dc8c35eaa83ba6e55625ab292, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_described_class_template", method_pointer_d841ba3b31875527a2f47086686c8283, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_implicit_move_assignment_is_deleted", method_pointer_66f34c2b258a5c62b884ae454238eb7b, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_implicit_move_constructor_is_deleted", method_pointer_890bab68ca5b5f7ca8c29cacf2c2e4be, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_is_parsing_base_specifiers", method_pointer_d58395fe81295c6e87065407276a24db, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_lambda_mangling", method_pointer_84c3f747400f5829b00e7d0990115a35, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("view_inheritance", method_pointer_9192cafef2d259efb19458589d828f54, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.staticmethod("classof_kind");
    class_6d094fa53b15516db85a0d4b3b7fd665.staticmethod("merge_access");
    class_6d094fa53b15516db85a0d4b3b7fd665.staticmethod("classof");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_bases", function_group::function_0807e81d85a7503f9856e1ed8019b375, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_constructors", function_group::function_6a9b5d3826995981ac28e9af03005554, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_virtual_bases", function_group::function_3ba02f781de053d1805459ec212c96c6, "");

    if(std::is_class< autowig::HeldType< class ::clang::CXXRecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXRecordDecl >, autowig::HeldType< class ::clang::RecordDecl > >();
    }

}