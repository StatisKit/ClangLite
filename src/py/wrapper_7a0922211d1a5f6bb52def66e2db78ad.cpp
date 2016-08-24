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
    class ::clang::CXXMethodDecl  * (*method_pointer_55cd0c6f02185c3a810880364a38ba9a)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXMethodDecl::CreateDeserialized;
    void  (::clang::CXXMethodDecl::*method_pointer_592c226cc0d65eb882a4d0c81ebd6fb1)(class ::clang::CXXMethodDecl  const *) = &::clang::CXXMethodDecl::addOverriddenMethod;
    bool  (*method_pointer_5f044f9f35f756bc99e1d2016bc78911)(class ::clang::Decl  const *) = ::clang::CXXMethodDecl::classof;
    bool  (*method_pointer_cc5e3bfc9f0052d19f7d07a41e914367)(enum ::clang::Decl::Kind ) = ::clang::CXXMethodDecl::classofKind;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_90e3cb9eace655c2b38a16a526bf0d83)() const = &::clang::CXXMethodDecl::getCanonicalDecl;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_6419b8823a15560da7b3c7301a6d0c49)() = &::clang::CXXMethodDecl::getCanonicalDecl;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_267240439f1651c7b33e922cef007107)(class ::clang::CXXRecordDecl  const *, bool ) = &::clang::CXXMethodDecl::getCorrespondingMethodInClass;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_9e362ca4c737593eb179ef79400d5b5f)(class ::clang::CXXRecordDecl  const *, bool ) const = &::clang::CXXMethodDecl::getCorrespondingMethodInClass;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_6d8215464935537d9031edfb5c47a4ad)() const = &::clang::CXXMethodDecl::getMostRecentDecl;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_caef511e87dc5d2b9cf67f0b572c1f19)() = &::clang::CXXMethodDecl::getMostRecentDecl;
    class ::clang::CXXRecordDecl  * (::clang::CXXMethodDecl::*method_pointer_719f9fcc88e75ac1913f71676bdb50b5)() = &::clang::CXXMethodDecl::getParent;
    class ::clang::CXXRecordDecl  const * (::clang::CXXMethodDecl::*method_pointer_9ac171181d2a5089bbfbfdccaaae3c0c)() const = &::clang::CXXMethodDecl::getParent;
    class ::clang::QualType  (::clang::CXXMethodDecl::*method_pointer_739f2fe76acb5874b0982f77a82c9947)(class ::clang::ASTContext  &) const = &::clang::CXXMethodDecl::getThisType;
    unsigned int  (::clang::CXXMethodDecl::*method_pointer_24a11401f691513ab441dfe45456106d)() const = &::clang::CXXMethodDecl::getTypeQualifiers;
    bool  (::clang::CXXMethodDecl::*method_pointer_3e0f6bcdd4015423b3784c0cc412a080)() const = &::clang::CXXMethodDecl::hasInlineBody;
    bool  (::clang::CXXMethodDecl::*method_pointer_598df625248b5e0a9df454cc3efc2a1d)() const = &::clang::CXXMethodDecl::isConst;
    bool  (::clang::CXXMethodDecl::*method_pointer_5993750815215de390158f9b4b99be66)() const = &::clang::CXXMethodDecl::isCopyAssignmentOperator;
    bool  (::clang::CXXMethodDecl::*method_pointer_7314272a4a5f5a1db6c40864c709575c)() const = &::clang::CXXMethodDecl::isInstance;
    bool  (::clang::CXXMethodDecl::*method_pointer_4fe8af2c94215b08a2cba4a3a2a5232a)() const = &::clang::CXXMethodDecl::isLambdaStaticInvoker;
    bool  (::clang::CXXMethodDecl::*method_pointer_68b4276b77ec557985578f9b42ac11be)() const = &::clang::CXXMethodDecl::isMoveAssignmentOperator;
    bool  (::clang::CXXMethodDecl::*method_pointer_4e923c28bdb457e8a128790c3ee7dd41)() const = &::clang::CXXMethodDecl::isStatic;
    bool  (::clang::CXXMethodDecl::*method_pointer_ab0aed5252795f13b9cb4821b44d5198)() const = &::clang::CXXMethodDecl::isUserProvided;
    bool  (::clang::CXXMethodDecl::*method_pointer_6d652a75bfc152f992943f24a7518c33)() const = &::clang::CXXMethodDecl::isUsualDeallocationFunction;
    bool  (::clang::CXXMethodDecl::*method_pointer_8f29c00c9985542e948fb6fce562fbca)() const = &::clang::CXXMethodDecl::isVirtual;
    bool  (::clang::CXXMethodDecl::*method_pointer_48eda8298d8753af92587ce97fcd41e7)() const = &::clang::CXXMethodDecl::isVolatile;
    unsigned int  (::clang::CXXMethodDecl::*method_pointer_9c98c0e41e835e9c891771a4609293d3)() const = &::clang::CXXMethodDecl::size_overridden_methods;
    boost::python::class_< class ::clang::CXXMethodDecl, autowig::HeldType< class ::clang::CXXMethodDecl >, boost::python::bases< class ::clang::FunctionDecl >, boost::noncopyable > class_7a0922211d1a5f6bb52def66e2db78ad("CXXMethodDecl", "", boost::python::no_init);
    class_7a0922211d1a5f6bb52def66e2db78ad.def("create_deserialized", method_pointer_55cd0c6f02185c3a810880364a38ba9a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("add_overridden_method", method_pointer_592c226cc0d65eb882a4d0c81ebd6fb1, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("classof", method_pointer_5f044f9f35f756bc99e1d2016bc78911, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("classof_kind", method_pointer_cc5e3bfc9f0052d19f7d07a41e914367, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_canonical_decl", method_pointer_90e3cb9eace655c2b38a16a526bf0d83, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_canonical_decl", method_pointer_6419b8823a15560da7b3c7301a6d0c49, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_corresponding_method_in_class", method_pointer_267240439f1651c7b33e922cef007107, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_corresponding_method_in_class", method_pointer_9e362ca4c737593eb179ef79400d5b5f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_most_recent_decl", method_pointer_6d8215464935537d9031edfb5c47a4ad, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_most_recent_decl", method_pointer_caef511e87dc5d2b9cf67f0b572c1f19, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_parent", method_pointer_719f9fcc88e75ac1913f71676bdb50b5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_parent", method_pointer_9ac171181d2a5089bbfbfdccaaae3c0c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_this_type", method_pointer_739f2fe76acb5874b0982f77a82c9947, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_type_qualifiers", method_pointer_24a11401f691513ab441dfe45456106d, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("has_inline_body", method_pointer_3e0f6bcdd4015423b3784c0cc412a080, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_const", method_pointer_598df625248b5e0a9df454cc3efc2a1d, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_copy_assignment_operator", method_pointer_5993750815215de390158f9b4b99be66, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_instance", method_pointer_7314272a4a5f5a1db6c40864c709575c, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_lambda_static_invoker", method_pointer_4fe8af2c94215b08a2cba4a3a2a5232a, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_move_assignment_operator", method_pointer_68b4276b77ec557985578f9b42ac11be, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_static", method_pointer_4e923c28bdb457e8a128790c3ee7dd41, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_user_provided", method_pointer_ab0aed5252795f13b9cb4821b44d5198, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_usual_deallocation_function", method_pointer_6d652a75bfc152f992943f24a7518c33, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_virtual", method_pointer_8f29c00c9985542e948fb6fce562fbca, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_volatile", method_pointer_48eda8298d8753af92587ce97fcd41e7, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("size_overridden_methods", method_pointer_9c98c0e41e835e9c891771a4609293d3, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("classof_kind");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("create_deserialized");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXMethodDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXMethodDecl >, autowig::HeldType< class ::clang::FunctionDecl > >();
    }

}