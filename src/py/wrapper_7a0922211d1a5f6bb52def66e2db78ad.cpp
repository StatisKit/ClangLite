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
    class ::clang::CXXMethodDecl  * (*method_pointer_ef6088017d6155169c4a815076a18307)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXMethodDecl::CreateDeserialized;
    void  (::clang::CXXMethodDecl::*method_pointer_78bcd2f940b85652af41806890416546)(class ::clang::CXXMethodDecl  const *) = &::clang::CXXMethodDecl::addOverriddenMethod;
    bool  (*method_pointer_a1fd8347e51c5ba28396a3da609da6f2)(class ::clang::Decl  const *) = ::clang::CXXMethodDecl::classof;
    bool  (*method_pointer_3b661349c5bf55d0ac6530fc7e782a33)(enum ::clang::Decl::Kind ) = ::clang::CXXMethodDecl::classofKind;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_c3064a1c638a59269e2ea060eb9d6fee)() = &::clang::CXXMethodDecl::getCanonicalDecl;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_215a0808912c5293813f7d263e46655a)() const = &::clang::CXXMethodDecl::getCanonicalDecl;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_899fb4bb2c625f63a10665415b840055)(class ::clang::CXXRecordDecl  const *, bool ) const = &::clang::CXXMethodDecl::getCorrespondingMethodInClass;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_5eef0968f73753a09daa0ed35a79c44f)(class ::clang::CXXRecordDecl  const *, bool ) = &::clang::CXXMethodDecl::getCorrespondingMethodInClass;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_9c70a231fa1b51c3b53b5906ddf7f8d8)() = &::clang::CXXMethodDecl::getMostRecentDecl;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_72a598c804505e0bb0c0da48dae41768)() const = &::clang::CXXMethodDecl::getMostRecentDecl;
    class ::clang::CXXRecordDecl  * (::clang::CXXMethodDecl::*method_pointer_9007d4a13bf5532a92c6d3fe8128105d)() = &::clang::CXXMethodDecl::getParent;
    class ::clang::CXXRecordDecl  const * (::clang::CXXMethodDecl::*method_pointer_9cffd0cdc19056538047717e20dc2585)() const = &::clang::CXXMethodDecl::getParent;
    class ::clang::QualType  (::clang::CXXMethodDecl::*method_pointer_2f9458f1e5605d6788fe12eb2c6c9e1e)(class ::clang::ASTContext  &) const = &::clang::CXXMethodDecl::getThisType;
    unsigned int  (::clang::CXXMethodDecl::*method_pointer_f18825c86bc35082b4d21c8ed0b51103)() const = &::clang::CXXMethodDecl::getTypeQualifiers;
    bool  (::clang::CXXMethodDecl::*method_pointer_1316e46f893e55e184ccbc89ec0c2399)() const = &::clang::CXXMethodDecl::hasInlineBody;
    bool  (::clang::CXXMethodDecl::*method_pointer_de3ba7e9f7305204a765fb9a61518f99)() const = &::clang::CXXMethodDecl::isConst;
    bool  (::clang::CXXMethodDecl::*method_pointer_dd2cf43e083954b9a0bf887c5c47eec1)() const = &::clang::CXXMethodDecl::isCopyAssignmentOperator;
    bool  (::clang::CXXMethodDecl::*method_pointer_4b2676f7b48e5340b564bd8595bbce44)() const = &::clang::CXXMethodDecl::isInstance;
    bool  (::clang::CXXMethodDecl::*method_pointer_13ba27af239157c2a679e31241cf6642)() const = &::clang::CXXMethodDecl::isLambdaStaticInvoker;
    bool  (::clang::CXXMethodDecl::*method_pointer_68d01bdf9c11594aa8fd6a8239ecb7f5)() const = &::clang::CXXMethodDecl::isMoveAssignmentOperator;
    bool  (::clang::CXXMethodDecl::*method_pointer_71a713e913fd56459592d311ed3b4954)() const = &::clang::CXXMethodDecl::isStatic;
    bool  (::clang::CXXMethodDecl::*method_pointer_13ddbddb174c5b179b88509619538bf4)() const = &::clang::CXXMethodDecl::isUserProvided;
    bool  (::clang::CXXMethodDecl::*method_pointer_5b1e6be007005bd78f06fe13d069370d)() const = &::clang::CXXMethodDecl::isUsualDeallocationFunction;
    bool  (::clang::CXXMethodDecl::*method_pointer_65985e82618156d1a0bacdf7f4a6b99e)() const = &::clang::CXXMethodDecl::isVirtual;
    bool  (::clang::CXXMethodDecl::*method_pointer_9fd31ad301d05811a4bed8c166dafbd8)() const = &::clang::CXXMethodDecl::isVolatile;
    unsigned int  (::clang::CXXMethodDecl::*method_pointer_dfae627cb19e5d448c16abdd2f134aa2)() const = &::clang::CXXMethodDecl::size_overridden_methods;
    boost::python::class_< class ::clang::CXXMethodDecl, autowig::HeldType< class ::clang::CXXMethodDecl >, boost::python::bases< class ::clang::FunctionDecl >, boost::noncopyable > class_7a0922211d1a5f6bb52def66e2db78ad("CXXMethodDecl", "", boost::python::no_init);
    class_7a0922211d1a5f6bb52def66e2db78ad.def("create_deserialized", method_pointer_ef6088017d6155169c4a815076a18307, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("add_overridden_method", method_pointer_78bcd2f940b85652af41806890416546, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("classof", method_pointer_a1fd8347e51c5ba28396a3da609da6f2, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("classof_kind", method_pointer_3b661349c5bf55d0ac6530fc7e782a33, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_canonical_decl", method_pointer_c3064a1c638a59269e2ea060eb9d6fee, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_canonical_decl", method_pointer_215a0808912c5293813f7d263e46655a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_corresponding_method_in_class", method_pointer_899fb4bb2c625f63a10665415b840055, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_corresponding_method_in_class", method_pointer_5eef0968f73753a09daa0ed35a79c44f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_most_recent_decl", method_pointer_9c70a231fa1b51c3b53b5906ddf7f8d8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_most_recent_decl", method_pointer_72a598c804505e0bb0c0da48dae41768, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_parent", method_pointer_9007d4a13bf5532a92c6d3fe8128105d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_parent", method_pointer_9cffd0cdc19056538047717e20dc2585, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_this_type", method_pointer_2f9458f1e5605d6788fe12eb2c6c9e1e, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_type_qualifiers", method_pointer_f18825c86bc35082b4d21c8ed0b51103, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("has_inline_body", method_pointer_1316e46f893e55e184ccbc89ec0c2399, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_const", method_pointer_de3ba7e9f7305204a765fb9a61518f99, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_copy_assignment_operator", method_pointer_dd2cf43e083954b9a0bf887c5c47eec1, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_instance", method_pointer_4b2676f7b48e5340b564bd8595bbce44, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_lambda_static_invoker", method_pointer_13ba27af239157c2a679e31241cf6642, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_move_assignment_operator", method_pointer_68d01bdf9c11594aa8fd6a8239ecb7f5, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_static", method_pointer_71a713e913fd56459592d311ed3b4954, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_user_provided", method_pointer_13ddbddb174c5b179b88509619538bf4, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_usual_deallocation_function", method_pointer_5b1e6be007005bd78f06fe13d069370d, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_virtual", method_pointer_65985e82618156d1a0bacdf7f4a6b99e, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_volatile", method_pointer_9fd31ad301d05811a4bed8c166dafbd8, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("size_overridden_methods", method_pointer_dfae627cb19e5d448c16abdd2f134aa2, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("classof_kind");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("create_deserialized");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXMethodDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXMethodDecl >, autowig::HeldType< class ::clang::FunctionDecl > >();
    }

}