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
    enum ::clang::AccessSpecifier  (*method_pointer_fba96b8e686e5a07be5830c6bdc447d2)(enum ::clang::AccessSpecifier , enum ::clang::AccessSpecifier ) = ::clang::CXXRecordDecl::MergeAccess;
    bool  (*method_pointer_68aabdf3aae75fe5b8d57e5029c39cb0)(class ::clang::Decl  const *) = ::clang::CXXRecordDecl::classof;
    bool  (*method_pointer_7796b27a152b51e89ac36d33ef455e16)(enum ::clang::Decl::Kind ) = ::clang::CXXRecordDecl::classofKind;
    void  (::clang::CXXRecordDecl::*method_pointer_31df111ecfd55e3faef7f4c5c4737a67)() = &::clang::CXXRecordDecl::completeDefinition;
    bool  (::clang::CXXRecordDecl::*method_pointer_001e9592b9475abda2ca4c3ade09bae8)() const = &::clang::CXXRecordDecl::defaultedDefaultConstructorIsConstexpr;
    void  (::clang::CXXRecordDecl::*method_pointer_bd6de633497950fcab74f74b38cf4dc9)(class ::clang::CXXMethodDecl  *) = &::clang::CXXRecordDecl::finishedDefaultedOrDeletedMember;
    class ::clang::CXXRecordDecl  const * (::clang::CXXRecordDecl::*method_pointer_525f47400df85ee3b36e78ea56939acc)() const = &::clang::CXXRecordDecl::getCanonicalDecl;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_54850c1ef4455ca3a52f7a1d5143f7f8)() = &::clang::CXXRecordDecl::getCanonicalDecl;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_8a011d4eb1075f8b92441bf2d705fa92)() const = &::clang::CXXRecordDecl::getDefinition;
    class ::clang::ClassTemplateDecl  * (::clang::CXXRecordDecl::*method_pointer_73f3f1eebf5754c79cf144cf54f1251a)() const = &::clang::CXXRecordDecl::getDescribedClassTemplate;
    class ::clang::CXXDestructorDecl  * (::clang::CXXRecordDecl::*method_pointer_3e45d4ae386f5e0e9f676fd3e1663575)() const = &::clang::CXXRecordDecl::getDestructor;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_3ab84278a1815d44a9778c00a8fa25a7)() const = &::clang::CXXRecordDecl::getInstantiatedFromMemberClass;
    class ::clang::CXXMethodDecl  * (::clang::CXXRecordDecl::*method_pointer_4416f9bd0179591e8133bf4cd596c5d0)() const = &::clang::CXXRecordDecl::getLambdaCallOperator;
    class ::clang::Decl  * (::clang::CXXRecordDecl::*method_pointer_53a496f5a5485182b9e5966d9b5b4301)() const = &::clang::CXXRecordDecl::getLambdaContextDecl;
    unsigned int  (::clang::CXXRecordDecl::*method_pointer_5a62dd821a6b5306818fb01cf5e5b5e1)() const = &::clang::CXXRecordDecl::getLambdaManglingNumber;
    class ::clang::CXXMethodDecl  * (::clang::CXXRecordDecl::*method_pointer_893a4299fc205181803ec319eed3d13e)() const = &::clang::CXXRecordDecl::getLambdaStaticInvoker;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_71abdecae82c5c3db8a93c8bfe4a7301)() = &::clang::CXXRecordDecl::getMostRecentDecl;
    class ::clang::CXXRecordDecl  const * (::clang::CXXRecordDecl::*method_pointer_4394beaa20785c21af79b801bd3cddae)() const = &::clang::CXXRecordDecl::getMostRecentDecl;
    unsigned int  (::clang::CXXRecordDecl::*method_pointer_e01b2b0cab5c5f61baf9faa011ccac53)() const = &::clang::CXXRecordDecl::getNumBases;
    unsigned int  (::clang::CXXRecordDecl::*method_pointer_d2592feef0705b03b21a5cf88d605e4b)() const = &::clang::CXXRecordDecl::getNumVBases;
    class ::clang::CXXRecordDecl  const * (::clang::CXXRecordDecl::*method_pointer_61c3f38d9b265b108da2306d23bc614a)() const = &::clang::CXXRecordDecl::getPreviousDecl;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_63fa260f7ecd5e749d3c79c03848baeb)() = &::clang::CXXRecordDecl::getPreviousDecl;
    class ::clang::CXXRecordDecl  const * (::clang::CXXRecordDecl::*method_pointer_2cf8c83f103b580f990d96cc017821e6)() const = &::clang::CXXRecordDecl::getTemplateInstantiationPattern;
    class ::clang::CXXRecordDecl  * (::clang::CXXRecordDecl::*method_pointer_1e84e2d723575af09d0eaec50d47ff35)() = &::clang::CXXRecordDecl::getTemplateInstantiationPattern;
    bool  (::clang::CXXRecordDecl::*method_pointer_de70733e87c25b9dbea5204a39fdd2c8)() const = &::clang::CXXRecordDecl::hasAnyDependentBases;
    bool  (::clang::CXXRecordDecl::*method_pointer_645d4e1ebd7a5d0c9d06a3790417ee96)() const = &::clang::CXXRecordDecl::hasConstexprDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_2b187ce9f0025852a98971cf1d8ffbd6)() const = &::clang::CXXRecordDecl::hasConstexprNonCopyMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_62c49fc9bca65919abfc4feedacc2a30)() const = &::clang::CXXRecordDecl::hasCopyAssignmentWithConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_4c361ea1b0af561f9135d34d2082907e)() const = &::clang::CXXRecordDecl::hasCopyConstructorWithConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_818567ca64c952bfa927de9034b31b25)() const = &::clang::CXXRecordDecl::hasDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_5ec51fdd9c3e58c79f9556d7d6483464)() const = &::clang::CXXRecordDecl::hasDefinition;
    bool  (::clang::CXXRecordDecl::*method_pointer_5f4d05fc1e8c56228dfe7a1d4ff17f61)() const = &::clang::CXXRecordDecl::hasFriends;
    bool  (::clang::CXXRecordDecl::*method_pointer_dd5147bbf7645798a359977d0645d7c8)() const = &::clang::CXXRecordDecl::hasInClassInitializer;
    bool  (::clang::CXXRecordDecl::*method_pointer_588d3b143b2359689ce27da2f98906b6)() const = &::clang::CXXRecordDecl::hasIrrelevantDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_8eaf27f07e645dee8196a1c0962dda21)() const = &::clang::CXXRecordDecl::hasMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_df64dbdd3c825d5e8ee735f5f705b5f3)() const = &::clang::CXXRecordDecl::hasMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_09103d40b0c15b1b89f09212586fe10f)() const = &::clang::CXXRecordDecl::hasMutableFields;
    bool  (::clang::CXXRecordDecl::*method_pointer_21bc49b0f8d750f69c9629701bbd638d)() const = &::clang::CXXRecordDecl::hasNonLiteralTypeFieldsOrBases;
    bool  (::clang::CXXRecordDecl::*method_pointer_b1809906b6e05004ba41bad636681f4e)() const = &::clang::CXXRecordDecl::hasNonTrivialCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_4b1d7631699456d98a318e6f8ba3c5a3)() const = &::clang::CXXRecordDecl::hasNonTrivialCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_4ac03865d2c05d39a6e7619fb0519fc8)() const = &::clang::CXXRecordDecl::hasNonTrivialDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_4f35c4fe81d55b738beb791ca4eca0b2)() const = &::clang::CXXRecordDecl::hasNonTrivialDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_e7d1f89ec2a55edc8173312c12fe7130)() const = &::clang::CXXRecordDecl::hasNonTrivialMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_f8ce267e7a265455b22dd99105165595)() const = &::clang::CXXRecordDecl::hasNonTrivialMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_acc274cff76e5882a39fde6d94cda70b)() const = &::clang::CXXRecordDecl::hasSimpleDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_7da38082a94e558eb6ff1307734b2f2a)() const = &::clang::CXXRecordDecl::hasSimpleMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_76414bbbfcab5f3ba4535986a05c3d5f)() const = &::clang::CXXRecordDecl::hasSimpleMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_53299fdbfe9152cf8be2668196e83edb)() const = &::clang::CXXRecordDecl::hasTrivialCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_db7428f9152c52f59f1a891a5ce895cf)() const = &::clang::CXXRecordDecl::hasTrivialCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_502f1430087459708264ce3c0e7a9d85)() const = &::clang::CXXRecordDecl::hasTrivialDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_f161d69de4645be9ad84d3bc3599fa6f)() const = &::clang::CXXRecordDecl::hasTrivialDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_9e16e6c467da51eda8640f4a49194684)() const = &::clang::CXXRecordDecl::hasTrivialMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_e4a7dd52694a537690984f3765a97b84)() const = &::clang::CXXRecordDecl::hasTrivialMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_2e6b56d668c451d1a1c3696ac1917a84)() const = &::clang::CXXRecordDecl::hasUninitializedReferenceMember;
    bool  (::clang::CXXRecordDecl::*method_pointer_4d949d930a145380b91d3b9cea076c9a)() const = &::clang::CXXRecordDecl::hasUserDeclaredConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_c4e847649c7357a6b2a0472d8c731d75)() const = &::clang::CXXRecordDecl::hasUserDeclaredCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_06331704ac0d583895621511b60eee70)() const = &::clang::CXXRecordDecl::hasUserDeclaredCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_4144f371f36b500da873bfd856205181)() const = &::clang::CXXRecordDecl::hasUserDeclaredDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_991f86d6b0c955c6b5d8c41ae555a73c)() const = &::clang::CXXRecordDecl::hasUserDeclaredMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_6788bf85a377546a89b2143a02e17f1e)() const = &::clang::CXXRecordDecl::hasUserDeclaredMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_764c529ff2d65d48bb33f2b011eee4ef)() const = &::clang::CXXRecordDecl::hasUserDeclaredMoveOperation;
    bool  (::clang::CXXRecordDecl::*method_pointer_3a0633b788015c928ba50d1dfdb0a34c)() const = &::clang::CXXRecordDecl::hasUserProvidedDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_8fcc6d84d94c5e9a86af8e66357fd0bd)() const = &::clang::CXXRecordDecl::hasVariantMembers;
    bool  (::clang::CXXRecordDecl::*method_pointer_113758ccd71d5dddae930ee1e2e603a8)() const = &::clang::CXXRecordDecl::implicitCopyAssignmentHasConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_30953bc193b653498317ea8244e7d6bd)() const = &::clang::CXXRecordDecl::implicitCopyConstructorHasConstParam;
    bool  (::clang::CXXRecordDecl::*method_pointer_a19d66d7a2ca5512bd255e4ccd3f269c)() const = &::clang::CXXRecordDecl::isAbstract;
    bool  (::clang::CXXRecordDecl::*method_pointer_c3939b10299e554b8d7c432ed93976a3)() const = &::clang::CXXRecordDecl::isAggregate;
    bool  (::clang::CXXRecordDecl::*method_pointer_272427431990512c9c798abf8005da8b)() const = &::clang::CXXRecordDecl::isAnyDestructorNoReturn;
    bool  (::clang::CXXRecordDecl::*method_pointer_550061813c2754b8a9239da6fb51c510)() const = &::clang::CXXRecordDecl::isCLike;
    bool  (::clang::CXXRecordDecl::*method_pointer_ef353e6e894756f9b5c83998502bc215)(class ::clang::DeclContext  const *) const = &::clang::CXXRecordDecl::isCurrentInstantiation;
    bool  (::clang::CXXRecordDecl::*method_pointer_c942215d60d45074913f7274c7b55c4c)() const = &::clang::CXXRecordDecl::isDependentLambda;
    bool  (::clang::CXXRecordDecl::*method_pointer_f033b47004ab57478e1db4b1d7bbe4dd)(class ::clang::CXXRecordDecl  const *) const = &::clang::CXXRecordDecl::isDerivedFrom;
    bool  (::clang::CXXRecordDecl::*method_pointer_6f2aec2257d054edae38a4e4b46fe8c8)() const = &::clang::CXXRecordDecl::isDynamicClass;
    bool  (::clang::CXXRecordDecl::*method_pointer_6a7481e39acc55dcb51d5f3388654c0d)() const = &::clang::CXXRecordDecl::isEmpty;
    bool  (::clang::CXXRecordDecl::*method_pointer_8ce8da23211959518d2a2742675473c6)() const = &::clang::CXXRecordDecl::isGenericLambda;
    bool  (::clang::CXXRecordDecl::*method_pointer_92e8e40298a250d9adee967b4d16ed2a)() const = &::clang::CXXRecordDecl::isLambda;
    bool  (::clang::CXXRecordDecl::*method_pointer_d1175c96dff456ceb8deb5741454278a)() const = &::clang::CXXRecordDecl::isLiteral;
    class ::clang::FunctionDecl  * (::clang::CXXRecordDecl::*method_pointer_d41361e77b9b50228b435b3821e2ab00)() = &::clang::CXXRecordDecl::isLocalClass;
    class ::clang::FunctionDecl  const * (::clang::CXXRecordDecl::*method_pointer_daf6cb5deee5553ca850aae14070377a)() const = &::clang::CXXRecordDecl::isLocalClass;
    bool  (::clang::CXXRecordDecl::*method_pointer_ca6787174ac75458a822391ca771734c)() const = &::clang::CXXRecordDecl::isPOD;
    bool  (::clang::CXXRecordDecl::*method_pointer_efb759db9ee25f1bb9b616700ff9b448)() const = &::clang::CXXRecordDecl::isParsingBaseSpecifiers;
    bool  (::clang::CXXRecordDecl::*method_pointer_eaa045b1842e59d7bdfdff79b54be303)() const = &::clang::CXXRecordDecl::isPolymorphic;
    bool  (::clang::CXXRecordDecl::*method_pointer_33c895c9fd095c4d8b4690502bf6aefd)(class ::clang::CXXRecordDecl  const *) const = &::clang::CXXRecordDecl::isProvablyNotDerivedFrom;
    bool  (::clang::CXXRecordDecl::*method_pointer_ce19fe0af19355178e15fa9b6f9414f7)() const = &::clang::CXXRecordDecl::isStandardLayout;
    bool  (::clang::CXXRecordDecl::*method_pointer_ae97054615af54eaacef0e170ea2d4bd)() const = &::clang::CXXRecordDecl::isTrivial;
    bool  (::clang::CXXRecordDecl::*method_pointer_b674c726170959d2846120e0526ffbea)() const = &::clang::CXXRecordDecl::isTriviallyCopyable;
    bool  (::clang::CXXRecordDecl::*method_pointer_fff2cb14f066523c9c8135367208ee14)(class ::clang::CXXRecordDecl  const *) const = &::clang::CXXRecordDecl::isVirtuallyDerivedFrom;
    bool  (::clang::CXXRecordDecl::*method_pointer_1e981d9319835e6ba3f969c20849b8ec)() const = &::clang::CXXRecordDecl::mayBeAbstract;
    bool  (::clang::CXXRecordDecl::*method_pointer_692beac34bae5a0995f62b081c61fe3f)() const = &::clang::CXXRecordDecl::needsImplicitCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_5ff0918b15285c37b0225c00f5e214f3)() const = &::clang::CXXRecordDecl::needsImplicitCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_3b7d45ce8cd75eaa8061430f07c53ffe)() const = &::clang::CXXRecordDecl::needsImplicitDefaultConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_8ccb4f77343b5d57a6013efd79b98f63)() const = &::clang::CXXRecordDecl::needsImplicitDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_b3875ee567915223a30c832a583f1384)() const = &::clang::CXXRecordDecl::needsImplicitMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_75b2ecd670a85e43bae19519e22e8040)() const = &::clang::CXXRecordDecl::needsImplicitMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_895854480bdc5cc0869111055ba36577)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForCopyAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_c3fd41e4ad6f59ca8aecb2a5197c1c86)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForCopyConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_0957ae1971b35787b4a5ed5642523781)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForDestructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_204aa3c87bfb5715b7471e0bcd68bfe2)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForMoveAssignment;
    bool  (::clang::CXXRecordDecl::*method_pointer_5d5c2229f72953379fda7f513897cae0)() const = &::clang::CXXRecordDecl::needsOverloadResolutionForMoveConstructor;
    bool  (::clang::CXXRecordDecl::*method_pointer_0c25f22c7504582cb8de8bf36a729f2e)() const = &::clang::CXXRecordDecl::nullFieldOffsetIsZero;
    void  (::clang::CXXRecordDecl::*method_pointer_4f45dd7cd75057749c61d7ebdd510c39)(class ::clang::FriendDecl  *) = &::clang::CXXRecordDecl::pushFriendDecl;
    void  (::clang::CXXRecordDecl::*method_pointer_ed684e0ae1345ced9b2664e9c0691b96)(class ::clang::NamedDecl  const *) = &::clang::CXXRecordDecl::removeConversion;
    void  (::clang::CXXRecordDecl::*method_pointer_bf2f85dda1a75328846b450d4882a1d4)(class ::clang::ClassTemplateDecl  *) = &::clang::CXXRecordDecl::setDescribedClassTemplate;
    void  (::clang::CXXRecordDecl::*method_pointer_cb906e5f3f605c329961bff21dcf114c)() = &::clang::CXXRecordDecl::setImplicitMoveAssignmentIsDeleted;
    void  (::clang::CXXRecordDecl::*method_pointer_abcb41fc1188528ea7a77e1ae3118d3d)() = &::clang::CXXRecordDecl::setImplicitMoveConstructorIsDeleted;
    void  (::clang::CXXRecordDecl::*method_pointer_3f2bf1414cd051a4ad06cecc9b0ba6d1)() = &::clang::CXXRecordDecl::setIsParsingBaseSpecifiers;
    void  (::clang::CXXRecordDecl::*method_pointer_0afb1a698141545498e42125813ec95f)(unsigned int , class ::clang::Decl  *) = &::clang::CXXRecordDecl::setLambdaMangling;
    void  (::clang::CXXRecordDecl::*method_pointer_fa24969a7bae544c92c7d4a85b0d5000)(class ::clang::ASTContext  &) const = &::clang::CXXRecordDecl::viewInheritance;
    struct function_group
    {
        static class ::boost::python::list  function_8682f48025805dc19942bdd0925e30dd(class ::clang::CXXRecordDecl  & parameter_0)
        { return ::clanglite::get_bases(parameter_0); }
        static class ::boost::python::list  function_a9f2ce9dc75c5df18cab4eb4e2e95b89(class ::clang::CXXRecordDecl  & parameter_0)
        { return ::clanglite::get_constructors(parameter_0); }
        static class ::boost::python::list  function_674bfed5f9595a8ab740e18e4423ed12(class ::clang::CXXRecordDecl  & parameter_0)
        { return ::clanglite::get_virtual_bases(parameter_0); }
    };
    boost::python::class_< class ::clang::CXXRecordDecl, autowig::HeldType< class ::clang::CXXRecordDecl >, boost::python::bases< class ::clang::RecordDecl >, boost::noncopyable > class_6d094fa53b15516db85a0d4b3b7fd665("CXXRecordDecl", "", boost::python::no_init);
    class_6d094fa53b15516db85a0d4b3b7fd665.def("merge_access", method_pointer_fba96b8e686e5a07be5830c6bdc447d2, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("classof", method_pointer_68aabdf3aae75fe5b8d57e5029c39cb0, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("classof_kind", method_pointer_7796b27a152b51e89ac36d33ef455e16, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("complete_definition", method_pointer_31df111ecfd55e3faef7f4c5c4737a67, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("defaulted_default_constructor_is_constexpr", method_pointer_001e9592b9475abda2ca4c3ade09bae8, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("finished_defaulted_or_deleted_member", method_pointer_bd6de633497950fcab74f74b38cf4dc9, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_canonical_decl", method_pointer_525f47400df85ee3b36e78ea56939acc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_canonical_decl", method_pointer_54850c1ef4455ca3a52f7a1d5143f7f8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_definition", method_pointer_8a011d4eb1075f8b92441bf2d705fa92, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_described_class_template", method_pointer_73f3f1eebf5754c79cf144cf54f1251a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_destructor", method_pointer_3e45d4ae386f5e0e9f676fd3e1663575, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_instantiated_from_member_class", method_pointer_3ab84278a1815d44a9778c00a8fa25a7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_call_operator", method_pointer_4416f9bd0179591e8133bf4cd596c5d0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_context_decl", method_pointer_53a496f5a5485182b9e5966d9b5b4301, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_mangling_number", method_pointer_5a62dd821a6b5306818fb01cf5e5b5e1, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_lambda_static_invoker", method_pointer_893a4299fc205181803ec319eed3d13e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_most_recent_decl", method_pointer_71abdecae82c5c3db8a93c8bfe4a7301, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_most_recent_decl", method_pointer_4394beaa20785c21af79b801bd3cddae, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_num_bases", method_pointer_e01b2b0cab5c5f61baf9faa011ccac53, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_num_v_bases", method_pointer_d2592feef0705b03b21a5cf88d605e4b, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_previous_decl", method_pointer_61c3f38d9b265b108da2306d23bc614a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_previous_decl", method_pointer_63fa260f7ecd5e749d3c79c03848baeb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_template_instantiation_pattern", method_pointer_2cf8c83f103b580f990d96cc017821e6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_template_instantiation_pattern", method_pointer_1e84e2d723575af09d0eaec50d47ff35, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_any_dependent_bases", method_pointer_de70733e87c25b9dbea5204a39fdd2c8, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_constexpr_default_constructor", method_pointer_645d4e1ebd7a5d0c9d06a3790417ee96, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_constexpr_non_copy_move_constructor", method_pointer_2b187ce9f0025852a98971cf1d8ffbd6, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_copy_assignment_with_const_param", method_pointer_62c49fc9bca65919abfc4feedacc2a30, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_copy_constructor_with_const_param", method_pointer_4c361ea1b0af561f9135d34d2082907e, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_default_constructor", method_pointer_818567ca64c952bfa927de9034b31b25, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_definition", method_pointer_5ec51fdd9c3e58c79f9556d7d6483464, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_friends", method_pointer_5f4d05fc1e8c56228dfe7a1d4ff17f61, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_in_class_initializer", method_pointer_dd5147bbf7645798a359977d0645d7c8, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_irrelevant_destructor", method_pointer_588d3b143b2359689ce27da2f98906b6, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_move_assignment", method_pointer_8eaf27f07e645dee8196a1c0962dda21, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_move_constructor", method_pointer_df64dbdd3c825d5e8ee735f5f705b5f3, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_mutable_fields", method_pointer_09103d40b0c15b1b89f09212586fe10f, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_literal_type_fields_or_bases", method_pointer_21bc49b0f8d750f69c9629701bbd638d, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_copy_assignment", method_pointer_b1809906b6e05004ba41bad636681f4e, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_copy_constructor", method_pointer_4b1d7631699456d98a318e6f8ba3c5a3, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_default_constructor", method_pointer_4ac03865d2c05d39a6e7619fb0519fc8, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_destructor", method_pointer_4f35c4fe81d55b738beb791ca4eca0b2, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_move_assignment", method_pointer_e7d1f89ec2a55edc8173312c12fe7130, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_non_trivial_move_constructor", method_pointer_f8ce267e7a265455b22dd99105165595, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_simple_destructor", method_pointer_acc274cff76e5882a39fde6d94cda70b, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_simple_move_assignment", method_pointer_7da38082a94e558eb6ff1307734b2f2a, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_simple_move_constructor", method_pointer_76414bbbfcab5f3ba4535986a05c3d5f, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_copy_assignment", method_pointer_53299fdbfe9152cf8be2668196e83edb, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_copy_constructor", method_pointer_db7428f9152c52f59f1a891a5ce895cf, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_default_constructor", method_pointer_502f1430087459708264ce3c0e7a9d85, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_destructor", method_pointer_f161d69de4645be9ad84d3bc3599fa6f, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_move_assignment", method_pointer_9e16e6c467da51eda8640f4a49194684, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_trivial_move_constructor", method_pointer_e4a7dd52694a537690984f3765a97b84, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_uninitialized_reference_member", method_pointer_2e6b56d668c451d1a1c3696ac1917a84, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_constructor", method_pointer_4d949d930a145380b91d3b9cea076c9a, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_copy_assignment", method_pointer_c4e847649c7357a6b2a0472d8c731d75, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_copy_constructor", method_pointer_06331704ac0d583895621511b60eee70, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_destructor", method_pointer_4144f371f36b500da873bfd856205181, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_move_assignment", method_pointer_991f86d6b0c955c6b5d8c41ae555a73c, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_move_constructor", method_pointer_6788bf85a377546a89b2143a02e17f1e, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_declared_move_operation", method_pointer_764c529ff2d65d48bb33f2b011eee4ef, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_user_provided_default_constructor", method_pointer_3a0633b788015c928ba50d1dfdb0a34c, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("has_variant_members", method_pointer_8fcc6d84d94c5e9a86af8e66357fd0bd, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("implicit_copy_assignment_has_const_param", method_pointer_113758ccd71d5dddae930ee1e2e603a8, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("implicit_copy_constructor_has_const_param", method_pointer_30953bc193b653498317ea8244e7d6bd, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_abstract", method_pointer_a19d66d7a2ca5512bd255e4ccd3f269c, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_aggregate", method_pointer_c3939b10299e554b8d7c432ed93976a3, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_any_destructor_no_return", method_pointer_272427431990512c9c798abf8005da8b, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_c_like", method_pointer_550061813c2754b8a9239da6fb51c510, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_current_instantiation", method_pointer_ef353e6e894756f9b5c83998502bc215, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_dependent_lambda", method_pointer_c942215d60d45074913f7274c7b55c4c, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_derived_from", method_pointer_f033b47004ab57478e1db4b1d7bbe4dd, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_dynamic_class", method_pointer_6f2aec2257d054edae38a4e4b46fe8c8, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_empty", method_pointer_6a7481e39acc55dcb51d5f3388654c0d, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_generic_lambda", method_pointer_8ce8da23211959518d2a2742675473c6, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_lambda", method_pointer_92e8e40298a250d9adee967b4d16ed2a, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_literal", method_pointer_d1175c96dff456ceb8deb5741454278a, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_local_class", method_pointer_d41361e77b9b50228b435b3821e2ab00, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_local_class", method_pointer_daf6cb5deee5553ca850aae14070377a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_pod", method_pointer_ca6787174ac75458a822391ca771734c, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_parsing_base_specifiers", method_pointer_efb759db9ee25f1bb9b616700ff9b448, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_polymorphic", method_pointer_eaa045b1842e59d7bdfdff79b54be303, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_provably_not_derived_from", method_pointer_33c895c9fd095c4d8b4690502bf6aefd, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_standard_layout", method_pointer_ce19fe0af19355178e15fa9b6f9414f7, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_trivial", method_pointer_ae97054615af54eaacef0e170ea2d4bd, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_trivially_copyable", method_pointer_b674c726170959d2846120e0526ffbea, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("is_virtually_derived_from", method_pointer_fff2cb14f066523c9c8135367208ee14, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("may_be_abstract", method_pointer_1e981d9319835e6ba3f969c20849b8ec, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_copy_assignment", method_pointer_692beac34bae5a0995f62b081c61fe3f, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_copy_constructor", method_pointer_5ff0918b15285c37b0225c00f5e214f3, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_default_constructor", method_pointer_3b7d45ce8cd75eaa8061430f07c53ffe, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_destructor", method_pointer_8ccb4f77343b5d57a6013efd79b98f63, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_move_assignment", method_pointer_b3875ee567915223a30c832a583f1384, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_implicit_move_constructor", method_pointer_75b2ecd670a85e43bae19519e22e8040, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_copy_assignment", method_pointer_895854480bdc5cc0869111055ba36577, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_copy_constructor", method_pointer_c3fd41e4ad6f59ca8aecb2a5197c1c86, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_destructor", method_pointer_0957ae1971b35787b4a5ed5642523781, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_move_assignment", method_pointer_204aa3c87bfb5715b7471e0bcd68bfe2, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("needs_overload_resolution_for_move_constructor", method_pointer_5d5c2229f72953379fda7f513897cae0, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("null_field_offset_is_zero", method_pointer_0c25f22c7504582cb8de8bf36a729f2e, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("push_friend_decl", method_pointer_4f45dd7cd75057749c61d7ebdd510c39, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("remove_conversion", method_pointer_ed684e0ae1345ced9b2664e9c0691b96, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_described_class_template", method_pointer_bf2f85dda1a75328846b450d4882a1d4, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_implicit_move_assignment_is_deleted", method_pointer_cb906e5f3f605c329961bff21dcf114c, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_implicit_move_constructor_is_deleted", method_pointer_abcb41fc1188528ea7a77e1ae3118d3d, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_is_parsing_base_specifiers", method_pointer_3f2bf1414cd051a4ad06cecc9b0ba6d1, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("set_lambda_mangling", method_pointer_0afb1a698141545498e42125813ec95f, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("view_inheritance", method_pointer_fa24969a7bae544c92c7d4a85b0d5000, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.staticmethod("classof_kind");
    class_6d094fa53b15516db85a0d4b3b7fd665.staticmethod("merge_access");
    class_6d094fa53b15516db85a0d4b3b7fd665.staticmethod("classof");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_bases", function_group::function_8682f48025805dc19942bdd0925e30dd, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_constructors", function_group::function_a9f2ce9dc75c5df18cab4eb4e2e95b89, "");
    class_6d094fa53b15516db85a0d4b3b7fd665.def("get_virtual_bases", function_group::function_674bfed5f9595a8ab740e18e4423ed12, "");

    if(std::is_class< autowig::HeldType< class ::clang::CXXRecordDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXRecordDecl >, autowig::HeldType< class ::clang::RecordDecl > >();
    }

}