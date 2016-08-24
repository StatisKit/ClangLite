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
    enum ::clang::AccessSpecifier  (*method_pointer_87170795cefb5da7b6c8cf72cabe9e3a)(enum ::clang::AccessSpecifier , enum ::clang::AccessSpecifier ) = ::clang::CXXRecordDecl::MergeAccess;
    bool  (*method_pointer_ea6e20f1280358bb873d6e4551d2e7cd)(class ::clang::Decl  const *) = ::clang::CXXRecordDecl::classof;
    bool  (*method_pointer_0f7ed778c38550c383fbc1fc402216ce)(enum ::clang::Decl::Kind ) = ::clang::CXXRecordDecl::classofKind;
    void  (::clang::CXXRecordDecl::*method_pointer_0b14fb82de8c59108071a49a8e546e09)() = &::clang::CXXRecordDecl::completeDefinition;
    bool  (::clang::CXXRecordDecl::*method_pointer_31447e5d082d5a94bb83081dd7774b67)() const = &::clang::CXXRecordDecl::defaultedDefaultConstructorIsConstexpr;
    void  (::clang::CXXRecordDecl::*method_pointer_9bf2dded70ed5741a342b67e7b11c692)(class ::clang::CXXMethodDecl  *) = &::clang::CXXRecordDecl::finishedDefaultedOrDeletedMember;
    class ::clang::CXXRecordDecl  const * (::clang::CXXRecordDecl::*method_pointer_d6bd582c4dd15527a519eafb18cad3fb)() const = &::clang::CXXRecordDecl::getCanonicalDecl;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_51ee1f268671526caebdc752f377f384)() = &::clang::CXXRecordDecl::getCanonicalDecl;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_0a3604988a86520caace9f00a142896c)() const = &::clang::CXXRecordDecl::getDefinition;
    class ::clang::ClassTemplateDecl  * (::clang::CXXRecordDecl::*method_pointer_227475379909577cb79b6fea3090e6bd)() const = &::clang::CXXRecordDecl::getDescribedClassTemplate;
    class ::clang::CXXDestructorDecl  * (::clang::CXXRecordDecl::*method_pointer_7e380cc9a698588e94723dbb4833b9c1)() const = &::clang::CXXRecordDecl::getDestructor;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_e8949c82bed75933bdb437e2398f88ca)() const = &::clang::CXXRecordDecl::getInstantiatedFromMemberClass;
    class ::clang::CXXMethodDecl  * (::clang::CXXRecordDecl::*method_pointer_0984f081af2f572fb419f8d66a49204a)() const = &::clang::CXXRecordDecl::getLambdaCallOperator;
    class ::clang::Decl  * (::clang::CXXRecordDecl::*method_pointer_769240a058a95e4784a08757c92d7ab6)() const = &::clang::CXXRecordDecl::getLambdaContextDecl;
    unsigned int  (::clang::CXXRecordDecl::*method_pointer_5ca20edcd91559c8aa984b5ef6cd929a)() const = &::clang::CXXRecordDecl::getLambdaManglingNumber;
    class ::clang::CXXMethodDecl  * (::clang::CXXRecordDecl::*method_pointer_12f16890028e560aa4851e3fd5603042)() const = &::clang::CXXRecordDecl::getLambdaStaticInvoker;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_851656a4b40e5cf58a6381334f0de11a)() = &::clang::CXXRecordDecl::getMostRecentDecl;
    class ::clang::CXXRecordDecl  const * (::clang::CXXRecordDecl::*method_pointer_9a7cb2cc8d6c5492a80daea8367ad392)() const = &::clang::CXXRecordDecl::getMostRecentDecl;
    unsigned int  (::clang::CXXRecordDecl::*method_pointer_e7d3a569b982523380a4b08ed07aa28e)() const = &::clang::CXXRecordDecl::getNumBases;
    unsigned int  (::clang::CXXRecordDecl::*method_pointer_3b17d5b0babc5ff4849beb16ed5650ae)() const = &::clang::CXXRecordDecl::getNumVBases;
    class ::clang::CXXRecordDecl  const * (::clang::CXXRecordDecl::*method_pointer_b373465c217756d28997a16ca5f7e924)() const = &::clang::CXXRecordDecl::getPreviousDecl;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_47cc3d6f407c541587af40eb714bad72)() = &::clang::CXXRecordDecl::getPreviousDecl;
    class ::clang::CXXRecordDecl  const * (::clang::CXXRecordDecl::*method_pointer_c1e90c7b38bc5df6a06e4960316cb84f)() const = &::clang::CXXRecordDecl::getTemplateInstantiationPattern;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_572283ff3e4d53e1a9deb556cb4cb123)() = &::clang::CXXRecordDecl::getTemplateInstantiationPattern;
    bool  (::clang::CXXRecordDecl::*method_pointer_a3f037df349e500d8f12f499a75aec86)() const = &::clang::CXXRecordDecl::hasAnyDependentBases;
    bool  (::clang::CXXRecordDecl::*method_pointer_842371be63675d0ba0f1f3f72c741baf)() const = &::clang::CXXRecordDecl::hasConstexprDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_80c695a5e4c55cf18bbf22a833427943)() const = &::clang::CXXRecordDecl::hasConstexprNonCopyMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_f925cb0206f052c3be0176783a7fd74e)() const = &::clang::CXXRecordDecl::hasCopyAssignmentWithConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_f7a8b8685a64578eb1eaf003266bee80)() const = &::clang::CXXRecordDecl::hasCopyConstructorWithConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_e9ff18b22c7159d1a8ab8525ed345e85)() const = &::clang::CXXRecordDecl::hasDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_d0665e4e4a835664a6e8386d487732e3)() const = &::clang::CXXRecordDecl::hasDefinition;
    bool  (::clang::CXXRecordDecl::*method_pointer_5deee7725a045448b4d415987fe20c11)() const = &::clang::CXXRecordDecl::hasFriends;
    bool  (::clang::CXXRecordDecl::*method_pointer_ca4e3ad4342356c1a415b26889cb43c3)() const = &::clang::CXXRecordDecl::hasInClassInitializer;
    bool  (::clang::CXXRecordDecl::*method_pointer_a285e197dc635d11adfb4cc577909378)() const = &::clang::CXXRecordDecl::hasIrrelevantDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_5e7e5b4053d55271aca04908881ce534)() const = &::clang::CXXRecordDecl::hasMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_75b8d2b0bc4d5368bf9348d8d54410f8)() const = &::clang::CXXRecordDecl::hasMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_8a04c8acf6b754348abcab0321572b48)() const = &::clang::CXXRecordDecl::hasMutableFields;
    bool  (::clang::CXXRecordDecl::*method_pointer_b4f7371c29b15ebe887669490dcda054)() const = &::clang::CXXRecordDecl::hasNonLiteralTypeFieldsOrBases;
    bool  (::clang::CXXRecordDecl::*method_pointer_703634f85b4b5c4d8755aef16eae2d6d)() const = &::clang::CXXRecordDecl::hasNonTrivialCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_b36cca86b42f58988c35004f59581917)() const = &::clang::CXXRecordDecl::hasNonTrivialCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_e7f506f6c2df54e7b4cb4ccd1ff262ac)() const = &::clang::CXXRecordDecl::hasNonTrivialDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_fb1f3168ca6f5e11aebb0796c3e5d15b)() const = &::clang::CXXRecordDecl::hasNonTrivialDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_0d77220bc1e458ae90ea912d7df09a9c)() const = &::clang::CXXRecordDecl::hasNonTrivialMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_e1a3690311c35dac82cb55dcb64f315b)() const = &::clang::CXXRecordDecl::hasNonTrivialMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_0179236147805385817eb2de6fff5066)() const = &::clang::CXXRecordDecl::hasSimpleDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_f6e0c19ee18c5dc483140343c7991319)() const = &::clang::CXXRecordDecl::hasSimpleMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_2ff7498ed6bb58f08f7d724329e3ff27)() const = &::clang::CXXRecordDecl::hasSimpleMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_56dc8b90658f574f8a62d4723e38e69f)() const = &::clang::CXXRecordDecl::hasTrivialCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_b749f72f3623538ca218ac0ce053b424)() const = &::clang::CXXRecordDecl::hasTrivialCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_b28c6b9cd8ae5cf5ac9f33fe0c61300b)() const = &::clang::CXXRecordDecl::hasTrivialDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_14c175997e2450a0a3740c3912b1118d)() const = &::clang::CXXRecordDecl::hasTrivialDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_fee600c0c0545498b12ed06394209519)() const = &::clang::CXXRecordDecl::hasTrivialMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_2ffec83bae6859088d0a85fd65b2a6b0)() const = &::clang::CXXRecordDecl::hasTrivialMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_f92f5a8dc4495e4b81c06c124cad33f5)() const = &::clang::CXXRecordDecl::hasUninitializedReferenceMember;
    bool  (::clang::CXXRecordDecl::*method_pointer_771aa1b3b3b45af7a08ab7b19631deb1)() const = &::clang::CXXRecordDecl::hasUserDeclaredConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_e5dd48fd41de52ffa42d691c8651cb6e)() const = &::clang::CXXRecordDecl::hasUserDeclaredCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_da36031251915aed8a0b4d0d80b4d06f)() const = &::clang::CXXRecordDecl::hasUserDeclaredCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_91b7598b9283578a8f14a23fec75d724)() const = &::clang::CXXRecordDecl::hasUserDeclaredDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_bcd70d43181f57219472a2015d60a2ea)() const = &::clang::CXXRecordDecl::hasUserDeclaredMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_b327b715c2b65cf791c9ad1bbac753fd)() const = &::clang::CXXRecordDecl::hasUserDeclaredMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_80f78920bfd6508caaf5fd883f73c9d2)() const = &::clang::CXXRecordDecl::hasUserDeclaredMoveOperation;
    bool  (::clang::CXXRecordDecl::*method_pointer_3d71a8aea0cd54c78b7e3d44d2ec03a0)() const = &::clang::CXXRecordDecl::hasUserProvidedDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_813cb37a7756526dbd4af6df763c7052)() const = &::clang::CXXRecordDecl::hasVariantMembers;
    bool  (::clang::CXXRecordDecl::*method_pointer_6d79bb828c8b53f9a950b8a3b8924d59)() const = &::clang::CXXRecordDecl::implicitCopyAssignmentHasConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_a850735cebd050219751423fbd217785)() const = &::clang::CXXRecordDecl::implicitCopyConstructorHasConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_b3879d032ef452719f421a5fc31a749f)() const = &::clang::CXXRecordDecl::isAbstract;
    bool  (::clang::CXXRecordDecl::*method_pointer_fdf72e5fc01659d78a93bb4d322a991a)() const = &::clang::CXXRecordDecl::isAggregate;
    bool  (::clang::CXXRecordDecl::*method_pointer_b721d0bdf18c5b42b48427f2e61e3c78)() const = &::clang::CXXRecordDecl::isAnyDestructorNoReturn;
    bool  (::clang::CXXRecordDecl::*method_pointer_4a1cb883375855a28b2a7365b8ded625)() const = &::clang::CXXRecordDecl::isCLike;
    bool  (::clang::CXXRecordDecl::*method_pointer_862b4d261cd65320b38f72e5927ecaf2)(class ::clang::DeclContext  const *) const = &::clang::CXXRecordDecl::isCurrentInstantiation;
    bool  (::clang::CXXRecordDecl::*method_pointer_ae8f90354d195ed3a07edb170619a831)() const = &::clang::CXXRecordDecl::isDependentLambda;
    bool  (::clang::CXXRecordDecl::*method_pointer_aa90c2e802d15905943a1e63380def4f)(class ::clang::CXXRecordDecl  const *) const = &::clang::CXXRecordDecl::isDerivedFrom;
    bool  (::clang::CXXRecordDecl::*method_pointer_033cdf14c8cf5674b0c62cc8a5fab1e9)() const = &::clang::CXXRecordDecl::isDynamicClass;
    bool  (::clang::CXXRecordDecl::*method_pointer_976a4d38fce95b92a002a9fdfb32a75b)() const = &::clang::CXXRecordDecl::isEmpty;
    bool  (::clang::CXXRecordDecl::*method_pointer_e2009d9f6a645682b6c1a7ea1f0ec46e)() const = &::clang::CXXRecordDecl::isGenericLambda;
    bool  (::clang::CXXRecordDecl::*method_pointer_dbf90845efaf5aec81f135fecc738005)() const = &::clang::CXXRecordDecl::isLambda;
    bool  (::clang::CXXRecordDecl::*method_pointer_e7126af946f7559a99fd42aae3ca5b21)() const = &::clang::CXXRecordDecl::isLiteral;
    class ::clang::FunctionDecl  * (::clang::CXXRecordDecl::*method_pointer_c769094704ae53fe8c5a639dc0c11531)() = &::clang::CXXRecordDecl::isLocalClass;
    class ::clang::FunctionDecl  const * (::clang::CXXRecordDecl::*method_pointer_17d97e3d518b50d2a459c06dad26e11c)() const = &::clang::CXXRecordDecl::isLocalClass;
    bool  (::clang::CXXRecordDecl::*method_pointer_48749a842eca56bd8794f3589cd365fc)() const = &::clang::CXXRecordDecl::isPOD;
    bool  (::clang::CXXRecordDecl::*method_pointer_35c645fd8855590a80be56bb63d5448c)() const = &::clang::CXXRecordDecl::isParsingBaseSpecifiers;
    bool  (::clang::CXXRecordDecl::*method_pointer_752d3c4ef1955979b6048e515c91b0dd)() const = &::clang::CXXRecordDecl::isPolymorphic;
    bool  (::clang::CXXRecordDecl::*method_pointer_6feb3d2d462756d39ceb8c1d435dba04)(class ::clang::CXXRecordDecl  const *) const = &::clang::CXXRecordDecl::isProvablyNotDerivedFrom;
    bool  (::clang::CXXRecordDecl::*method_pointer_ed7a5b4f9dea58a1acf76806cec656cc)() const = &::clang::CXXRecordDecl::isStandardLayout;
    bool  (::clang::CXXRecordDecl::*method_pointer_bd22c3c172dc5582b53045d4c26380b8)() const = &::clang::CXXRecordDecl::isTrivial;
    bool  (::clang::CXXRecordDecl::*method_pointer_c338d2d978d85678b18c03e8dfd50244)() const = &::clang::CXXRecordDecl::isTriviallyCopyable;
    bool  (::clang::CXXRecordDecl::*method_pointer_20077a3f3c9e547cad4c54b91c0362da)(class ::clang::CXXRecordDecl  const *) const = &::clang::CXXRecordDecl::isVirtuallyDerivedFrom;
    bool  (::clang::CXXRecordDecl::*method_pointer_d1406f43e61459eab73cdb7cfcb3ba2b)() const = &::clang::CXXRecordDecl::mayBeAbstract;
    bool  (::clang::CXXRecordDecl::*method_pointer_95b8627d604d5d238d353b7079bd8e8d)() const = &::clang::CXXRecordDecl::needsImplicitCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_e91b79d52326550eb59d861088915c48)() const = &::clang::CXXRecordDecl::needsImplicitCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_1500855842f95f06ab999d9aa0bdd9cb)() const = &::clang::CXXRecordDecl::needsImplicitDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_f9097e94561c5fc1b6a5c48adc972b15)() const = &::clang::CXXRecordDecl::needsImplicitDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_c5f063cbca4354c2b744a22eecdcd265)() const = &::clang::CXXRecordDecl::needsImplicitMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_a84b90ee5b755cf685cb88fa1aa5ae4e)() const = &::clang::CXXRecordDecl::needsImplicitMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_49b8b1f256335fe58db3bd59255dff7e)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_0861bbe15c07533b971606b564e3aded)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_c38700141a9c53edb3d3b9df31e1e10c)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_6fb6c9e234bb56c6b9df6781917828ab)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_03d1555eb1535c50b079652732a75885)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_c521ded784bf55c5ab490bac47d54ee8)() const = &::clang::CXXRecordDecl::nullFieldOffsetIsZero;
    void  (::clang::CXXRecordDecl::*method_pointer_8651eb53dce458158b2fa6f4b0475b80)(class ::clang::FriendDecl  *) = &::clang::CXXRecordDecl::pushFriendDecl;
    void  (::clang::CXXRecordDecl::*method_pointer_ace7b84097f95f55a17f4f087f128fbe)(class ::clang::NamedDecl  const *) = &::clang::CXXRecordDecl::removeConversion;
    void  (::clang::CXXRecordDecl::*method_pointer_76ecbea54ac75da2bdc04766c5fee146)(class ::clang::ClassTemplateDecl  *) = &::clang::CXXRecordDecl::setDescribedClassTemplate;
    void  (::clang::CXXRecordDecl::*method_pointer_8a4ca6d4ea0859308686084d131c5292)() = &::clang::CXXRecordDecl::setImplicitMoveAssignmentIsDeleted;
    void  (::clang::CXXRecordDecl::*method_pointer_0b53fa22050a59c988718a1dd774886c)() = &::clang::CXXRecordDecl::setImplicitMoveConstructorIsDeleted;
    void  (::clang::CXXRecordDecl::*method_pointer_51a2e4c95b9d58ceb83a5d857e3f5016)() = &::clang::CXXRecordDecl::setIsParsingBaseSpecifiers;
    void  (::clang::CXXRecordDecl::*method_pointer_4ac20c40d76f57bf92db45385088d9c1)(unsigned int , class ::clang::Decl  *) = &::clang::CXXRecordDecl::setLambdaMangling;
    void  (::clang::CXXRecordDecl::*method_pointer_f829341ab7d65d149c6a01bcb0d91001)(class ::clang::ASTContext  &) const = &::clang::CXXRecordDecl::viewInheritance;
    struct function_group
    {
        static class ::boost::python::list  function_36e1bdf31fc85d02a3da859a3c84ee99(class ::clang::CXXRecordDecl  & parameter_0)
        { return ::clanglite::get_bases(parameter_0); }
        static class ::boost::python::list  function_19efaa224a4d517ba8a37899d7d42a25(class ::clang::CXXRecordDecl  & parameter_0)
        { return ::clanglite::get_constructors(parameter_0); }
        static class ::boost::python::list  function_82eb4c6c3ca95f7d9b7561d5a137e63a(class ::clang::CXXRecordDecl  & parameter_0)
        { return ::clanglite::get_virtual_bases(parameter_0); }
    };
    boost::python::class_< class ::clang::CXXRecordDecl, autowig::HeldType< class ::clang::CXXRecordDecl >, boost::python::bases< class ::clang::RecordDecl >, boost::noncopyable > class_6d094fa53b15516db85a0d4b3b7fd665("CXXRecordDecl", "", boost::python::no_init);
    class_6d094fa53b15516db85a0d4b3b7fd665.def("merge_access", method_pointer_87170795cefb5da7b6c8cf72cabe9e3a, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("classof", method_pointer_ea6e20f1280358bb873d6e4551d2e7cd, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("classof_kind", method_pointer_0f7ed778c38550c383fbc1fc402216ce, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("complete_definition", method_pointer_0b14fb82de8c59108071a49a8e546e09, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("defaulted_default_constructor_is_constexpr", method_pointer_31447e5d082d5a94bb83081dd7774b67, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("finished_defaulted_or_deleted_member", method_pointer_9bf2dded70ed5741a342b67e7b11c692, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_canonical_decl", method_pointer_d6bd582c4dd15527a519eafb18cad3fb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_canonical_decl", method_pointer_51ee1f268671526caebdc752f377f384, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_definition", method_pointer_0a3604988a86520caace9f00a142896c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_described_class_template", method_pointer_227475379909577cb79b6fea3090e6bd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_destructor", method_pointer_7e380cc9a698588e94723dbb4833b9c1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_instantiated_from_member_class", method_pointer_e8949c82bed75933bdb437e2398f88ca, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_call_operator", method_pointer_0984f081af2f572fb419f8d66a49204a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_context_decl", method_pointer_769240a058a95e4784a08757c92d7ab6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_mangling_number", method_pointer_5ca20edcd91559c8aa984b5ef6cd929a, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_static_invoker", method_pointer_12f16890028e560aa4851e3fd5603042, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_most_recent_decl", method_pointer_851656a4b40e5cf58a6381334f0de11a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_most_recent_decl", method_pointer_9a7cb2cc8d6c5492a80daea8367ad392, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_num_bases", method_pointer_e7d3a569b982523380a4b08ed07aa28e, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_num_v_bases", method_pointer_3b17d5b0babc5ff4849beb16ed5650ae, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_previous_decl", method_pointer_b373465c217756d28997a16ca5f7e924, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_previous_decl", method_pointer_47cc3d6f407c541587af40eb714bad72, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_template_instantiation_pattern", method_pointer_c1e90c7b38bc5df6a06e4960316cb84f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_template_instantiation_pattern", method_pointer_572283ff3e4d53e1a9deb556cb4cb123, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_any_dependent_bases", method_pointer_a3f037df349e500d8f12f499a75aec86, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_constexpr_default_constructor", method_pointer_842371be63675d0ba0f1f3f72c741baf, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_constexpr_non_copy_move_constructor", method_pointer_80c695a5e4c55cf18bbf22a833427943, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_copy_assignment_with_const_param", method_pointer_f925cb0206f052c3be0176783a7fd74e, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_copy_constructor_with_const_param", method_pointer_f7a8b8685a64578eb1eaf003266bee80, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_default_constructor", method_pointer_e9ff18b22c7159d1a8ab8525ed345e85, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_definition", method_pointer_d0665e4e4a835664a6e8386d487732e3, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_friends", method_pointer_5deee7725a045448b4d415987fe20c11, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_in_class_initializer", method_pointer_ca4e3ad4342356c1a415b26889cb43c3, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_irrelevant_destructor", method_pointer_a285e197dc635d11adfb4cc577909378, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_move_assignment", method_pointer_5e7e5b4053d55271aca04908881ce534, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_move_constructor", method_pointer_75b8d2b0bc4d5368bf9348d8d54410f8, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_mutable_fields", method_pointer_8a04c8acf6b754348abcab0321572b48, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_literal_type_fields_or_bases", method_pointer_b4f7371c29b15ebe887669490dcda054, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_copy_assignment", method_pointer_703634f85b4b5c4d8755aef16eae2d6d, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_copy_constructor", method_pointer_b36cca86b42f58988c35004f59581917, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_default_constructor", method_pointer_e7f506f6c2df54e7b4cb4ccd1ff262ac, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_destructor", method_pointer_fb1f3168ca6f5e11aebb0796c3e5d15b, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_move_assignment", method_pointer_0d77220bc1e458ae90ea912d7df09a9c, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_move_constructor", method_pointer_e1a3690311c35dac82cb55dcb64f315b, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_simple_destructor", method_pointer_0179236147805385817eb2de6fff5066, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_simple_move_assignment", method_pointer_f6e0c19ee18c5dc483140343c7991319, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_simple_move_constructor", method_pointer_2ff7498ed6bb58f08f7d724329e3ff27, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_copy_assignment", method_pointer_56dc8b90658f574f8a62d4723e38e69f, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_copy_constructor", method_pointer_b749f72f3623538ca218ac0ce053b424, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_default_constructor", method_pointer_b28c6b9cd8ae5cf5ac9f33fe0c61300b, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_destructor", method_pointer_14c175997e2450a0a3740c3912b1118d, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_move_assignment", method_pointer_fee600c0c0545498b12ed06394209519, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_move_constructor", method_pointer_2ffec83bae6859088d0a85fd65b2a6b0, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_uninitialized_reference_member", method_pointer_f92f5a8dc4495e4b81c06c124cad33f5, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_constructor", method_pointer_771aa1b3b3b45af7a08ab7b19631deb1, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_copy_assignment", method_pointer_e5dd48fd41de52ffa42d691c8651cb6e, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_copy_constructor", method_pointer_da36031251915aed8a0b4d0d80b4d06f, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_destructor", method_pointer_91b7598b9283578a8f14a23fec75d724, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_move_assignment", method_pointer_bcd70d43181f57219472a2015d60a2ea, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_move_constructor", method_pointer_b327b715c2b65cf791c9ad1bbac753fd, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_move_operation", method_pointer_80f78920bfd6508caaf5fd883f73c9d2, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_provided_default_constructor", method_pointer_3d71a8aea0cd54c78b7e3d44d2ec03a0, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_variant_members", method_pointer_813cb37a7756526dbd4af6df763c7052, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("implicit_copy_assignment_has_const_param", method_pointer_6d79bb828c8b53f9a950b8a3b8924d59, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("implicit_copy_constructor_has_const_param", method_pointer_a850735cebd050219751423fbd217785, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_abstract", method_pointer_b3879d032ef452719f421a5fc31a749f, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_aggregate", method_pointer_fdf72e5fc01659d78a93bb4d322a991a, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_any_destructor_no_return", method_pointer_b721d0bdf18c5b42b48427f2e61e3c78, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_c_like", method_pointer_4a1cb883375855a28b2a7365b8ded625, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_current_instantiation", method_pointer_862b4d261cd65320b38f72e5927ecaf2, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_dependent_lambda", method_pointer_ae8f90354d195ed3a07edb170619a831, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_derived_from", method_pointer_aa90c2e802d15905943a1e63380def4f, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_dynamic_class", method_pointer_033cdf14c8cf5674b0c62cc8a5fab1e9, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_empty", method_pointer_976a4d38fce95b92a002a9fdfb32a75b, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_generic_lambda", method_pointer_e2009d9f6a645682b6c1a7ea1f0ec46e, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_lambda", method_pointer_dbf90845efaf5aec81f135fecc738005, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_literal", method_pointer_e7126af946f7559a99fd42aae3ca5b21, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_local_class", method_pointer_c769094704ae53fe8c5a639dc0c11531, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_local_class", method_pointer_17d97e3d518b50d2a459c06dad26e11c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_pod", method_pointer_48749a842eca56bd8794f3589cd365fc, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_parsing_base_specifiers", method_pointer_35c645fd8855590a80be56bb63d5448c, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_polymorphic", method_pointer_752d3c4ef1955979b6048e515c91b0dd, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_provably_not_derived_from", method_pointer_6feb3d2d462756d39ceb8c1d435dba04, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_standard_layout", method_pointer_ed7a5b4f9dea58a1acf76806cec656cc, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_trivial", method_pointer_bd22c3c172dc5582b53045d4c26380b8, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_trivially_copyable", method_pointer_c338d2d978d85678b18c03e8dfd50244, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_virtually_derived_from", method_pointer_20077a3f3c9e547cad4c54b91c0362da, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("may_be_abstract", method_pointer_d1406f43e61459eab73cdb7cfcb3ba2b, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_copy_assignment", method_pointer_95b8627d604d5d238d353b7079bd8e8d, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_copy_constructor", method_pointer_e91b79d52326550eb59d861088915c48, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_default_constructor", method_pointer_1500855842f95f06ab999d9aa0bdd9cb, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_destructor", method_pointer_f9097e94561c5fc1b6a5c48adc972b15, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_move_assignment", method_pointer_c5f063cbca4354c2b744a22eecdcd265, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_move_constructor", method_pointer_a84b90ee5b755cf685cb88fa1aa5ae4e, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_copy_assignment", method_pointer_49b8b1f256335fe58db3bd59255dff7e, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_copy_constructor", method_pointer_0861bbe15c07533b971606b564e3aded, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_destructor", method_pointer_c38700141a9c53edb3d3b9df31e1e10c, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_move_assignment", method_pointer_6fb6c9e234bb56c6b9df6781917828ab, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_move_constructor", method_pointer_03d1555eb1535c50b079652732a75885, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("null_field_offset_is_zero", method_pointer_c521ded784bf55c5ab490bac47d54ee8, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("push_friend_decl", method_pointer_8651eb53dce458158b2fa6f4b0475b80, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("remove_conversion", method_pointer_ace7b84097f95f55a17f4f087f128fbe, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_described_class_template", method_pointer_76ecbea54ac75da2bdc04766c5fee146, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_implicit_move_assignment_is_deleted", method_pointer_8a4ca6d4ea0859308686084d131c5292, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_implicit_move_constructor_is_deleted", method_pointer_0b53fa22050a59c988718a1dd774886c, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_is_parsing_base_specifiers", method_pointer_51a2e4c95b9d58ceb83a5d857e3f5016, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_lambda_mangling", method_pointer_4ac20c40d76f57bf92db45385088d9c1, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("view_inheritance", method_pointer_f829341ab7d65d149c6a01bcb0d91001, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.staticmethod("classof_kind");
    class_6d094fa53b15516db85a0d4b3b7fd665.staticmethod("merge_access");
    class_6d094fa53b15516db85a0d4b3b7fd665.staticmethod("classof");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_bases", function_group::function_36e1bdf31fc85d02a3da859a3c84ee99, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_constructors", function_group::function_19efaa224a4d517ba8a37899d7d42a25, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_virtual_bases", function_group::function_82eb4c6c3ca95f7d9b7561d5a137e63a, "");

    if(std::is_class< autowig::HeldType< class ::clang::CXXRecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXRecordDecl >, autowig::HeldType< class ::clang::RecordDecl > >();
    }

}