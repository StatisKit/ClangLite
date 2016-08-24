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
    class ::clang::CXXMethodDecl  * (*method_pointer_47e5076872195eb88a0cb55588218128)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXMethodDecl::CreateDeserialized;
    void  (::clang::CXXMethodDecl::*method_pointer_79c0fc3db9c95d5a9b033a0f8412cc45)(class ::clang::CXXMethodDecl  const *) = &::clang::CXXMethodDecl::addOverriddenMethod;
    bool  (*method_pointer_3b6f357b10a759109522dfaa317f6bef)(class ::clang::Decl  const *) = ::clang::CXXMethodDecl::classof;
    bool  (*method_pointer_31319f0566e55c61970fdb24c3012c76)(enum ::clang::Decl::Kind ) = ::clang::CXXMethodDecl::classofKind;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_53f2030434745977a48dbc1da03fe14f)() = &::clang::CXXMethodDecl::getCanonicalDecl;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_33285d1f1c035674ba6dd498d3f1f7f6)() const = &::clang::CXXMethodDecl::getCanonicalDecl;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_19c15edbbdff5e788eb489477e5c98fb)(class ::clang::CXXRecordDecl  const *, bool ) = &::clang::CXXMethodDecl::getCorrespondingMethodInClass;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_cab3e7df47fe553e98648b13663bd80c)(class ::clang::CXXRecordDecl  const *, bool ) const = &::clang::CXXMethodDecl::getCorrespondingMethodInClass;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_5ae8a9dc90315cef8370892f84349b6f)() const = &::clang::CXXMethodDecl::getMostRecentDecl;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_672e50fb16a353858a4f6e3d7dcadfbf)() = &::clang::CXXMethodDecl::getMostRecentDecl;
    class ::clang::CXXRecordDecl  * (::clang::CXXMethodDecl::*method_pointer_4cab51c8b1195900bcca91cd5034b12f)() = &::clang::CXXMethodDecl::getParent;
    class ::clang::CXXRecordDecl  const * (::clang::CXXMethodDecl::*method_pointer_18c3ff7363b9571889fe70ae55f3cc8d)() const = &::clang::CXXMethodDecl::getParent;
    class ::clang::QualType  (::clang::CXXMethodDecl::*method_pointer_05ccc1f929d75c0e8525206a1f685009)(class ::clang::ASTContext  &) const = &::clang::CXXMethodDecl::getThisType;
    unsigned int  (::clang::CXXMethodDecl::*method_pointer_b3060bb35c05556e8af9d871fc438fae)() const = &::clang::CXXMethodDecl::getTypeQualifiers;
    bool  (::clang::CXXMethodDecl::*method_pointer_4d17d6a9d4095ff4ade9f5da89259449)() const = &::clang::CXXMethodDecl::hasInlineBody;
    bool  (::clang::CXXMethodDecl::*method_pointer_c57e2858079752eeab721c57ebe6d3e2)() const = &::clang::CXXMethodDecl::isConst;
    bool  (::clang::CXXMethodDecl::*method_pointer_2198c9f1c036504ca9dac3614b5e6640)() const = &::clang::CXXMethodDecl::isCopyAssignmentOperator;
    bool  (::clang::CXXMethodDecl::*method_pointer_9961251109805d399d4b24f076192867)() const = &::clang::CXXMethodDecl::isInstance;
    bool  (::clang::CXXMethodDecl::*method_pointer_e9672bcb8aad5cc48f3e2752786aa071)() const = &::clang::CXXMethodDecl::isLambdaStaticInvoker;
    bool  (::clang::CXXMethodDecl::*method_pointer_fb5ad08e15b752b695fb216beff13530)() const = &::clang::CXXMethodDecl::isMoveAssignmentOperator;
    bool  (::clang::CXXMethodDecl::*method_pointer_910261220d96597cb33ac58dc57fdbbc)() const = &::clang::CXXMethodDecl::isStatic;
    bool  (::clang::CXXMethodDecl::*method_pointer_ebe935c0a827591cb0bb937cdaa35b56)() const = &::clang::CXXMethodDecl::isUserProvided;
    bool  (::clang::CXXMethodDecl::*method_pointer_1de52a467cdf5d43b1e6dce62f389dc0)() const = &::clang::CXXMethodDecl::isUsualDeallocationFunction;
    bool  (::clang::CXXMethodDecl::*method_pointer_17a04fe8279c5c478197bda78fe9ba66)() const = &::clang::CXXMethodDecl::isVirtual;
    bool  (::clang::CXXMethodDecl::*method_pointer_400a8bb225d353f3bc807c0fb1e056bc)() const = &::clang::CXXMethodDecl::isVolatile;
    unsigned int  (::clang::CXXMethodDecl::*method_pointer_f6340110cbb35a25808509fdbece0568)() const = &::clang::CXXMethodDecl::size_overridden_methods;
    boost::python::class_< class ::clang::CXXMethodDecl, autowig::HeldType< class ::clang::CXXMethodDecl >, boost::python::bases< class ::clang::FunctionDecl >, boost::noncopyable > class_7a0922211d1a5f6bb52def66e2db78ad("CXXMethodDecl", "", boost::python::no_init);
    class_7a0922211d1a5f6bb52def66e2db78ad.def("create_deserialized", method_pointer_47e5076872195eb88a0cb55588218128, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("add_overridden_method", method_pointer_79c0fc3db9c95d5a9b033a0f8412cc45, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("classof", method_pointer_3b6f357b10a759109522dfaa317f6bef, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("classof_kind", method_pointer_31319f0566e55c61970fdb24c3012c76, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_canonical_decl", method_pointer_53f2030434745977a48dbc1da03fe14f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_canonical_decl", method_pointer_33285d1f1c035674ba6dd498d3f1f7f6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_corresponding_method_in_class", method_pointer_19c15edbbdff5e788eb489477e5c98fb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_corresponding_method_in_class", method_pointer_cab3e7df47fe553e98648b13663bd80c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_most_recent_decl", method_pointer_5ae8a9dc90315cef8370892f84349b6f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_most_recent_decl", method_pointer_672e50fb16a353858a4f6e3d7dcadfbf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_parent", method_pointer_4cab51c8b1195900bcca91cd5034b12f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_parent", method_pointer_18c3ff7363b9571889fe70ae55f3cc8d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_this_type", method_pointer_05ccc1f929d75c0e8525206a1f685009, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_type_qualifiers", method_pointer_b3060bb35c05556e8af9d871fc438fae, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("has_inline_body", method_pointer_4d17d6a9d4095ff4ade9f5da89259449, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_const", method_pointer_c57e2858079752eeab721c57ebe6d3e2, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_copy_assignment_operator", method_pointer_2198c9f1c036504ca9dac3614b5e6640, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_instance", method_pointer_9961251109805d399d4b24f076192867, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_lambda_static_invoker", method_pointer_e9672bcb8aad5cc48f3e2752786aa071, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_move_assignment_operator", method_pointer_fb5ad08e15b752b695fb216beff13530, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_static", method_pointer_910261220d96597cb33ac58dc57fdbbc, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_user_provided", method_pointer_ebe935c0a827591cb0bb937cdaa35b56, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_usual_deallocation_function", method_pointer_1de52a467cdf5d43b1e6dce62f389dc0, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_virtual", method_pointer_17a04fe8279c5c478197bda78fe9ba66, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_volatile", method_pointer_400a8bb225d353f3bc807c0fb1e056bc, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("size_overridden_methods", method_pointer_f6340110cbb35a25808509fdbece0568, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("classof_kind");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("create_deserialized");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXMethodDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXMethodDecl >, autowig::HeldType< class ::clang::FunctionDecl > >();
    }

}