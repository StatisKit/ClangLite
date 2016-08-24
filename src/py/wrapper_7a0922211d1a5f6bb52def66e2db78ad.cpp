#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_7a0922211d1a5f6bb52def66e2db78ad()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::CXXMethodDecl  * (*method_pointer_a676cc8a8b885842a4dafba3b84f9d3d)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXMethodDecl::CreateDeserialized;
    void  (::clang::CXXMethodDecl::*method_pointer_4848c4faf214552bacdc05ed0425b81e)(class ::clang::CXXMethodDecl  const *) = &::clang::CXXMethodDecl::addOverriddenMethod;
    bool  (*method_pointer_9671f8a09a9d55c5b6310e73f3ba09ac)(class ::clang::Decl  const *) = ::clang::CXXMethodDecl::classof;
    bool  (*method_pointer_28bdd85f74a157238747dc338bc1be68)(enum ::clang::Decl::Kind ) = ::clang::CXXMethodDecl::classofKind;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_110148be77105eac98675f8f463c9476)() const = &::clang::CXXMethodDecl::getCanonicalDecl;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_922cd9fb178952879263357ec6b3f63a)() = &::clang::CXXMethodDecl::getCanonicalDecl;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_51f5197d0c055e1586510c4316571ea4)(class ::clang::CXXRecordDecl  const *, bool ) = &::clang::CXXMethodDecl::getCorrespondingMethodInClass;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_d359f78cacd355368787eb3433f758c4)(class ::clang::CXXRecordDecl  const *, bool ) const = &::clang::CXXMethodDecl::getCorrespondingMethodInClass;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_8ccc854e29a75cf686a591fa1dfa7f51)() const = &::clang::CXXMethodDecl::getMostRecentDecl;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_e88ada58855454a39d09d9a4d52e8653)() = &::clang::CXXMethodDecl::getMostRecentDecl;
    class ::clang::CXXRecordDecl  const * (::clang::CXXMethodDecl::*method_pointer_c95406f373bb5cebb01caf7094dea4f3)() const = &::clang::CXXMethodDecl::getParent;
    class ::clang::CXXRecordDecl  * (::clang::CXXMethodDecl::*method_pointer_ee966d4784a45eadaa12d4e9c8328d40)() = &::clang::CXXMethodDecl::getParent;
    class ::clang::QualType  (::clang::CXXMethodDecl::*method_pointer_00e8dc60ed115b90bdd9013ebb6623c9)(class ::clang::ASTContext  &) const = &::clang::CXXMethodDecl::getThisType;
    unsigned int  (::clang::CXXMethodDecl::*method_pointer_540399ff43675f579648147e357e4e35)() const = &::clang::CXXMethodDecl::getTypeQualifiers;
    bool  (::clang::CXXMethodDecl::*method_pointer_d56a6e55e5d453cfaf42cee6d056a019)() const = &::clang::CXXMethodDecl::hasInlineBody;
    bool  (::clang::CXXMethodDecl::*method_pointer_d5581a46661459d6a006ac926783fcb1)() const = &::clang::CXXMethodDecl::isConst;
    bool  (::clang::CXXMethodDecl::*method_pointer_111316e534e8598fa2d54228c92131ad)() const = &::clang::CXXMethodDecl::isCopyAssignmentOperator;
    bool  (::clang::CXXMethodDecl::*method_pointer_76948d269e075dec9adf07ba2564d7b7)() const = &::clang::CXXMethodDecl::isInstance;
    bool  (::clang::CXXMethodDecl::*method_pointer_071161acac6f589f8bc0e17c0272e5b0)() const = &::clang::CXXMethodDecl::isLambdaStaticInvoker;
    bool  (::clang::CXXMethodDecl::*method_pointer_fbc15db3c23b59e0b59eed8104995f10)() const = &::clang::CXXMethodDecl::isMoveAssignmentOperator;
    bool  (::clang::CXXMethodDecl::*method_pointer_07af57b7b6c0574887adaf3efda7a516)() const = &::clang::CXXMethodDecl::isStatic;
    bool  (::clang::CXXMethodDecl::*method_pointer_714bd4c556a15f68b3aaaf9a5e776016)() const = &::clang::CXXMethodDecl::isUserProvided;
    bool  (::clang::CXXMethodDecl::*method_pointer_28132ee7e8845d1ba53fee36f0700051)() const = &::clang::CXXMethodDecl::isUsualDeallocationFunction;
    bool  (::clang::CXXMethodDecl::*method_pointer_076e9157a35255138dc6daa5a80d5fc0)() const = &::clang::CXXMethodDecl::isVirtual;
    bool  (::clang::CXXMethodDecl::*method_pointer_8a8eab9e36925e0ba3036118756da5c0)() const = &::clang::CXXMethodDecl::isVolatile;
    unsigned int  (::clang::CXXMethodDecl::*method_pointer_84a6a4b76a275d4daf66117e78e85d6f)() const = &::clang::CXXMethodDecl::size_overridden_methods;
    boost::python::class_< class ::clang::CXXMethodDecl, autowig::HeldType< class ::clang::CXXMethodDecl >, boost::python::bases< class ::clang::FunctionDecl >, boost::noncopyable > class_7a0922211d1a5f6bb52def66e2db78ad("CXXMethodDecl", "", boost::python::no_init);
    class_7a0922211d1a5f6bb52def66e2db78ad.def("create_deserialized", method_pointer_a676cc8a8b885842a4dafba3b84f9d3d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("add_overridden_method", method_pointer_4848c4faf214552bacdc05ed0425b81e, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("classof", method_pointer_9671f8a09a9d55c5b6310e73f3ba09ac, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("classof_kind", method_pointer_28bdd85f74a157238747dc338bc1be68, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_canonical_decl", method_pointer_110148be77105eac98675f8f463c9476, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_canonical_decl", method_pointer_922cd9fb178952879263357ec6b3f63a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_corresponding_method_in_class", method_pointer_51f5197d0c055e1586510c4316571ea4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_corresponding_method_in_class", method_pointer_d359f78cacd355368787eb3433f758c4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_most_recent_decl", method_pointer_8ccc854e29a75cf686a591fa1dfa7f51, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_most_recent_decl", method_pointer_e88ada58855454a39d09d9a4d52e8653, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_parent", method_pointer_c95406f373bb5cebb01caf7094dea4f3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_parent", method_pointer_ee966d4784a45eadaa12d4e9c8328d40, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_this_type", method_pointer_00e8dc60ed115b90bdd9013ebb6623c9, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_type_qualifiers", method_pointer_540399ff43675f579648147e357e4e35, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("has_inline_body", method_pointer_d56a6e55e5d453cfaf42cee6d056a019, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_const", method_pointer_d5581a46661459d6a006ac926783fcb1, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_copy_assignment_operator", method_pointer_111316e534e8598fa2d54228c92131ad, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_instance", method_pointer_76948d269e075dec9adf07ba2564d7b7, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_lambda_static_invoker", method_pointer_071161acac6f589f8bc0e17c0272e5b0, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_move_assignment_operator", method_pointer_fbc15db3c23b59e0b59eed8104995f10, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_static", method_pointer_07af57b7b6c0574887adaf3efda7a516, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_user_provided", method_pointer_714bd4c556a15f68b3aaaf9a5e776016, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_usual_deallocation_function", method_pointer_28132ee7e8845d1ba53fee36f0700051, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_virtual", method_pointer_076e9157a35255138dc6daa5a80d5fc0, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_volatile", method_pointer_8a8eab9e36925e0ba3036118756da5c0, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("size_overridden_methods", method_pointer_84a6a4b76a275d4daf66117e78e85d6f, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("classof_kind");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("create_deserialized");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXMethodDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXMethodDecl >, autowig::HeldType< class ::clang::FunctionDecl > >();
    }

}