#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_7a0922211d1a5f6bb52def66e2db78ad()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::CXXMethodDecl  * (*method_pointer_595327f19c9b52619d756cc485889f45)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXMethodDecl::CreateDeserialized;
    void  (::clang::CXXMethodDecl::*method_pointer_21a0a0fd311d5e9c8dde7ff102c7b27d)(class ::clang::CXXMethodDecl  const *) = &::clang::CXXMethodDecl::addOverriddenMethod;
    bool  (*method_pointer_17b7e5e05f8d55b890e0c5d865c861c2)(class ::clang::Decl  const *) = ::clang::CXXMethodDecl::classof;
    bool  (*method_pointer_c7cfdf421a9b59f9ad2820329821eb34)(enum ::clang::Decl::Kind ) = ::clang::CXXMethodDecl::classofKind;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_82b8d2cfe6555429bd43ed695def37c1)() const = &::clang::CXXMethodDecl::getCanonicalDecl;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_8ed1a3c7b00f55c88c44cf8dbc6a69b7)() = &::clang::CXXMethodDecl::getCanonicalDecl;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_89f93e44a4b3509aa0c87bd0d5ef080a)(class ::clang::CXXRecordDecl  const *, bool ) = &::clang::CXXMethodDecl::getCorrespondingMethodInClass;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_5016fb9d394959528c8dcbfd52f3776f)(class ::clang::CXXRecordDecl  const *, bool ) const = &::clang::CXXMethodDecl::getCorrespondingMethodInClass;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_f9d81b055a2b534893ae7bb03d08de45)() = &::clang::CXXMethodDecl::getMostRecentDecl;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_74f21c3d2ae15c5f8ebd0d9efb602e49)() const = &::clang::CXXMethodDecl::getMostRecentDecl;
    class ::clang::CXXRecordDecl  * (::clang::CXXMethodDecl::*method_pointer_329b9237e139577a94c1135be44017ed)() = &::clang::CXXMethodDecl::getParent;
    class ::clang::CXXRecordDecl  const * (::clang::CXXMethodDecl::*method_pointer_0214b2207ab75a2aac772e0c3b6a1113)() const = &::clang::CXXMethodDecl::getParent;
    unsigned int  (::clang::CXXMethodDecl::*method_pointer_e646b08a7c5251a6909f195eef9c2186)() const = &::clang::CXXMethodDecl::getTypeQualifiers;
    bool  (::clang::CXXMethodDecl::*method_pointer_d74e18aee5cd52f390563ad789541d0e)() const = &::clang::CXXMethodDecl::hasInlineBody;
    bool  (::clang::CXXMethodDecl::*method_pointer_d757a24cd16c5c5aa76b8ba8dae99d94)() const = &::clang::CXXMethodDecl::isConst;
    bool  (::clang::CXXMethodDecl::*method_pointer_0a2ad3004cc05630844ea33a0320335f)() const = &::clang::CXXMethodDecl::isCopyAssignmentOperator;
    bool  (::clang::CXXMethodDecl::*method_pointer_6f41239c2ef65cb0b3bb0b636fd2467d)() const = &::clang::CXXMethodDecl::isInstance;
    bool  (::clang::CXXMethodDecl::*method_pointer_4b1f54991748591f9aa3ac614d03cf94)() const = &::clang::CXXMethodDecl::isLambdaStaticInvoker;
    bool  (::clang::CXXMethodDecl::*method_pointer_08fe117baaab5e93ace3f9cb3444a1ab)() const = &::clang::CXXMethodDecl::isMoveAssignmentOperator;
    bool  (::clang::CXXMethodDecl::*method_pointer_e01d3c2fc5a45cbab050c28cd77ec73b)() const = &::clang::CXXMethodDecl::isStatic;
    bool  (::clang::CXXMethodDecl::*method_pointer_203398e3af485bf0be011761e4f8d80a)() const = &::clang::CXXMethodDecl::isUserProvided;
    bool  (::clang::CXXMethodDecl::*method_pointer_0108ec9288a15b318207b34a168a927a)() const = &::clang::CXXMethodDecl::isUsualDeallocationFunction;
    bool  (::clang::CXXMethodDecl::*method_pointer_404d3214e8045e8aba5005bbcac85431)() const = &::clang::CXXMethodDecl::isVirtual;
    bool  (::clang::CXXMethodDecl::*method_pointer_e565bc94130e5d70b562446e73087dc9)() const = &::clang::CXXMethodDecl::isVolatile;
    unsigned int  (::clang::CXXMethodDecl::*method_pointer_fd43cda373c15197b7a7279a97cd8a63)() const = &::clang::CXXMethodDecl::size_overridden_methods;
    boost::python::class_< class ::clang::CXXMethodDecl, autowig::HeldType< class ::clang::CXXMethodDecl >, boost::python::bases< class ::clang::FunctionDecl >, boost::noncopyable > class_7a0922211d1a5f6bb52def66e2db78ad("CXXMethodDecl", "", boost::python::no_init);
    class_7a0922211d1a5f6bb52def66e2db78ad.def("create_deserialized", method_pointer_595327f19c9b52619d756cc485889f45, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("add_overridden_method", method_pointer_21a0a0fd311d5e9c8dde7ff102c7b27d, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("classof", method_pointer_17b7e5e05f8d55b890e0c5d865c861c2, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("classof_kind", method_pointer_c7cfdf421a9b59f9ad2820329821eb34, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_canonical_decl", method_pointer_82b8d2cfe6555429bd43ed695def37c1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_canonical_decl", method_pointer_8ed1a3c7b00f55c88c44cf8dbc6a69b7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_corresponding_method_in_class", method_pointer_89f93e44a4b3509aa0c87bd0d5ef080a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_corresponding_method_in_class", method_pointer_5016fb9d394959528c8dcbfd52f3776f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_most_recent_decl", method_pointer_f9d81b055a2b534893ae7bb03d08de45, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_most_recent_decl", method_pointer_74f21c3d2ae15c5f8ebd0d9efb602e49, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_parent", method_pointer_329b9237e139577a94c1135be44017ed, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_parent", method_pointer_0214b2207ab75a2aac772e0c3b6a1113, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_type_qualifiers", method_pointer_e646b08a7c5251a6909f195eef9c2186, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("has_inline_body", method_pointer_d74e18aee5cd52f390563ad789541d0e, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_const", method_pointer_d757a24cd16c5c5aa76b8ba8dae99d94, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_copy_assignment_operator", method_pointer_0a2ad3004cc05630844ea33a0320335f, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_instance", method_pointer_6f41239c2ef65cb0b3bb0b636fd2467d, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_lambda_static_invoker", method_pointer_4b1f54991748591f9aa3ac614d03cf94, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_move_assignment_operator", method_pointer_08fe117baaab5e93ace3f9cb3444a1ab, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_static", method_pointer_e01d3c2fc5a45cbab050c28cd77ec73b, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_user_provided", method_pointer_203398e3af485bf0be011761e4f8d80a, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_usual_deallocation_function", method_pointer_0108ec9288a15b318207b34a168a927a, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_virtual", method_pointer_404d3214e8045e8aba5005bbcac85431, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_volatile", method_pointer_e565bc94130e5d70b562446e73087dc9, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("size_overridden_methods", method_pointer_fd43cda373c15197b7a7279a97cd8a63, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("classof_kind");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("create_deserialized");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXMethodDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXMethodDecl >, autowig::HeldType< class ::clang::FunctionDecl > >();
    }

}