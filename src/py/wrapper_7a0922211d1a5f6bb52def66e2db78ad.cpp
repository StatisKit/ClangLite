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
    class ::clang::CXXMethodDecl  * (*method_pointer_e3841ad64bee509c9bf680b19be125fb)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXMethodDecl::CreateDeserialized;
    void  (::clang::CXXMethodDecl::*method_pointer_73aa0560bc745785ad8e00c44aa16c78)(class ::clang::CXXMethodDecl  const *) = &::clang::CXXMethodDecl::addOverriddenMethod;
    bool  (*method_pointer_8a9559f6125e558a8f4741e45b0d212c)(class ::clang::Decl  const *) = ::clang::CXXMethodDecl::classof;
    bool  (*method_pointer_93d647bfbdfb5b9fa52b1281caeb5069)(enum ::clang::Decl::Kind ) = ::clang::CXXMethodDecl::classofKind;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_16b382f7f0825fd2b02dc4b0518feb42)() = &::clang::CXXMethodDecl::getCanonicalDecl;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_68ef14eb629654eb81020960f276a519)() const = &::clang::CXXMethodDecl::getCanonicalDecl;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_9b40b52ec85a565a849bf556ae820d2d)(class ::clang::CXXRecordDecl  const *, bool ) const = &::clang::CXXMethodDecl::getCorrespondingMethodInClass;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_d22afba882f35044b925063bbd54a217)(class ::clang::CXXRecordDecl  const *, bool ) = &::clang::CXXMethodDecl::getCorrespondingMethodInClass;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_a094be6d8161560eba3eb5dd1b7630b9)() = &::clang::CXXMethodDecl::getMostRecentDecl;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_2fb4643664e850f98b14a0e55b0c2c12)() const = &::clang::CXXMethodDecl::getMostRecentDecl;
    class ::clang::CXXRecordDecl  const * (::clang::CXXMethodDecl::*method_pointer_f62ec4bf4147579d8bd4ab0debce1db5)() const = &::clang::CXXMethodDecl::getParent;
    class ::clang::CXXRecordDecl  * (::clang::CXXMethodDecl::*method_pointer_0ed6fc489aea5951b47104114364ac5c)() = &::clang::CXXMethodDecl::getParent;
    class ::clang::QualType  (::clang::CXXMethodDecl::*method_pointer_fb6befa4b029548e97a0a9128ada3310)(class ::clang::ASTContext  &) const = &::clang::CXXMethodDecl::getThisType;
    unsigned int  (::clang::CXXMethodDecl::*method_pointer_4304cc4e8f7156e49d6eea313a9113f7)() const = &::clang::CXXMethodDecl::getTypeQualifiers;
    bool  (::clang::CXXMethodDecl::*method_pointer_233ba64ee01151f0ae2fdf1c4f46c227)() const = &::clang::CXXMethodDecl::hasInlineBody;
    bool  (::clang::CXXMethodDecl::*method_pointer_11662a7c5bcb5caa88298b37647c2e0c)() const = &::clang::CXXMethodDecl::isConst;
    bool  (::clang::CXXMethodDecl::*method_pointer_965ea82b2ffe5f43854c471c51d2990b)() const = &::clang::CXXMethodDecl::isCopyAssignmentOperator;
    bool  (::clang::CXXMethodDecl::*method_pointer_208e4cef855f5e1b8fa4296b77d16afa)() const = &::clang::CXXMethodDecl::isInstance;
    bool  (::clang::CXXMethodDecl::*method_pointer_f7dd6cda55c652f9947c1be0f40d6a47)() const = &::clang::CXXMethodDecl::isLambdaStaticInvoker;
    bool  (::clang::CXXMethodDecl::*method_pointer_bb747107ddc75ed1baf5edbdbdf92593)() const = &::clang::CXXMethodDecl::isMoveAssignmentOperator;
    bool  (::clang::CXXMethodDecl::*method_pointer_96038fd900a45b07ac1a24724bf8deac)() const = &::clang::CXXMethodDecl::isStatic;
    bool  (::clang::CXXMethodDecl::*method_pointer_434eea911bba5e9eb59c36dfcc364f74)() const = &::clang::CXXMethodDecl::isUserProvided;
    bool  (::clang::CXXMethodDecl::*method_pointer_a96dd054f80458c1bdfb16bf9d91c74a)() const = &::clang::CXXMethodDecl::isUsualDeallocationFunction;
    bool  (::clang::CXXMethodDecl::*method_pointer_dc5f4cb4f2b75f958cd8752bcae7fbcf)() const = &::clang::CXXMethodDecl::isVirtual;
    bool  (::clang::CXXMethodDecl::*method_pointer_ed952c36206a591582ee77249084092c)() const = &::clang::CXXMethodDecl::isVolatile;
    unsigned int  (::clang::CXXMethodDecl::*method_pointer_10f2c11339665dce88183595ab8b11c1)() const = &::clang::CXXMethodDecl::size_overridden_methods;
    boost::python::class_< class ::clang::CXXMethodDecl, autowig::HeldType< class ::clang::CXXMethodDecl >, boost::python::bases< class ::clang::FunctionDecl >, boost::noncopyable > class_7a0922211d1a5f6bb52def66e2db78ad("CXXMethodDecl", "", boost::python::no_init);
    class_7a0922211d1a5f6bb52def66e2db78ad.def("create_deserialized", method_pointer_e3841ad64bee509c9bf680b19be125fb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("add_overridden_method", method_pointer_73aa0560bc745785ad8e00c44aa16c78, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("classof", method_pointer_8a9559f6125e558a8f4741e45b0d212c, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("classof_kind", method_pointer_93d647bfbdfb5b9fa52b1281caeb5069, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_canonical_decl", method_pointer_16b382f7f0825fd2b02dc4b0518feb42, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_canonical_decl", method_pointer_68ef14eb629654eb81020960f276a519, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_corresponding_method_in_class", method_pointer_9b40b52ec85a565a849bf556ae820d2d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_corresponding_method_in_class", method_pointer_d22afba882f35044b925063bbd54a217, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_most_recent_decl", method_pointer_a094be6d8161560eba3eb5dd1b7630b9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_most_recent_decl", method_pointer_2fb4643664e850f98b14a0e55b0c2c12, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_parent", method_pointer_f62ec4bf4147579d8bd4ab0debce1db5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_parent", method_pointer_0ed6fc489aea5951b47104114364ac5c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_this_type", method_pointer_fb6befa4b029548e97a0a9128ada3310, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_type_qualifiers", method_pointer_4304cc4e8f7156e49d6eea313a9113f7, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("has_inline_body", method_pointer_233ba64ee01151f0ae2fdf1c4f46c227, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_const", method_pointer_11662a7c5bcb5caa88298b37647c2e0c, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_copy_assignment_operator", method_pointer_965ea82b2ffe5f43854c471c51d2990b, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_instance", method_pointer_208e4cef855f5e1b8fa4296b77d16afa, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_lambda_static_invoker", method_pointer_f7dd6cda55c652f9947c1be0f40d6a47, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_move_assignment_operator", method_pointer_bb747107ddc75ed1baf5edbdbdf92593, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_static", method_pointer_96038fd900a45b07ac1a24724bf8deac, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_user_provided", method_pointer_434eea911bba5e9eb59c36dfcc364f74, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_usual_deallocation_function", method_pointer_a96dd054f80458c1bdfb16bf9d91c74a, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_virtual", method_pointer_dc5f4cb4f2b75f958cd8752bcae7fbcf, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_volatile", method_pointer_ed952c36206a591582ee77249084092c, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("size_overridden_methods", method_pointer_10f2c11339665dce88183595ab8b11c1, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("classof_kind");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("create_deserialized");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXMethodDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXMethodDecl >, autowig::HeldType< class ::clang::FunctionDecl > >();
    }

}