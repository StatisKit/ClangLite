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
    class ::clang::CXXMethodDecl  * (*method_pointer_274dccca4e0a55e8b8df6a34713c4552)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXMethodDecl::CreateDeserialized;
    void  (::clang::CXXMethodDecl::*method_pointer_0151ee1a4e1f55c98c4fdc76646c39b9)(class ::clang::CXXMethodDecl  const *) = &::clang::CXXMethodDecl::addOverriddenMethod;
    bool  (*method_pointer_851b334ec4b85b47a28426c511c27368)(class ::clang::Decl  const *) = ::clang::CXXMethodDecl::classof;
    bool  (*method_pointer_8594a55316b8519ea3ebcfa42ef48492)(enum ::clang::Decl::Kind ) = ::clang::CXXMethodDecl::classofKind;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_6fa204ab3afb5898bd203c340f6f82c6)() const = &::clang::CXXMethodDecl::getCanonicalDecl;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_324df00aed03584bb87d20f2bb882d90)() = &::clang::CXXMethodDecl::getCanonicalDecl;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_eae1dff7867350bab11cb50d7e52ea04)(class ::clang::CXXRecordDecl  const *, bool ) = &::clang::CXXMethodDecl::getCorrespondingMethodInClass;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_6d461a9f848552cbb4aeb0f0004b4242)(class ::clang::CXXRecordDecl  const *, bool ) const = &::clang::CXXMethodDecl::getCorrespondingMethodInClass;
    class ::clang::CXXMethodDecl  * (::clang::CXXMethodDecl::*method_pointer_79a987a9a5365681b596a81943348bc2)() = &::clang::CXXMethodDecl::getMostRecentDecl;
    class ::clang::CXXMethodDecl  const * (::clang::CXXMethodDecl::*method_pointer_dd311922d7e0598cba65429b11695ddb)() const = &::clang::CXXMethodDecl::getMostRecentDecl;
    class ::clang::CXXRecordDecl  const * (::clang::CXXMethodDecl::*method_pointer_268a13b5853959b5a5a7619208f128df)() const = &::clang::CXXMethodDecl::getParent;
    class ::clang::CXXRecordDecl  * (::clang::CXXMethodDecl::*method_pointer_ae5aa44759365fd1989caecd4fd13047)() = &::clang::CXXMethodDecl::getParent;
    class ::clang::QualType  (::clang::CXXMethodDecl::*method_pointer_7e39c71ee8505c8fa51083a54168e400)(class ::clang::ASTContext  &) const = &::clang::CXXMethodDecl::getThisType;
    unsigned int  (::clang::CXXMethodDecl::*method_pointer_34ac6ac5aa8c55818dea564fe458e2c6)() const = &::clang::CXXMethodDecl::getTypeQualifiers;
    bool  (::clang::CXXMethodDecl::*method_pointer_a66f7364312e5fae9871aa040f1fffdd)() const = &::clang::CXXMethodDecl::hasInlineBody;
    bool  (::clang::CXXMethodDecl::*method_pointer_5e0884917c9e5ef5af4773d919eea704)() const = &::clang::CXXMethodDecl::isConst;
    bool  (::clang::CXXMethodDecl::*method_pointer_e790d109e5e15b7ba10c8a15050b65de)() const = &::clang::CXXMethodDecl::isCopyAssignmentOperator;
    bool  (::clang::CXXMethodDecl::*method_pointer_32cf38bd42825b87ab9b40d4b1bb3261)() const = &::clang::CXXMethodDecl::isInstance;
    bool  (::clang::CXXMethodDecl::*method_pointer_6f56c15833635511b85d6ab6758e9c41)() const = &::clang::CXXMethodDecl::isLambdaStaticInvoker;
    bool  (::clang::CXXMethodDecl::*method_pointer_00145a3a5a7b5621adae8cb5ce39df0b)() const = &::clang::CXXMethodDecl::isMoveAssignmentOperator;
    bool  (::clang::CXXMethodDecl::*method_pointer_767d9bfab28b50d19957d9e183c8e747)() const = &::clang::CXXMethodDecl::isStatic;
    bool  (::clang::CXXMethodDecl::*method_pointer_79053f447b1f58219447c9be6bb69457)() const = &::clang::CXXMethodDecl::isUserProvided;
    bool  (::clang::CXXMethodDecl::*method_pointer_78900bcfecd355148189f08463c88e0e)() const = &::clang::CXXMethodDecl::isUsualDeallocationFunction;
    bool  (::clang::CXXMethodDecl::*method_pointer_c5e5d3c517ea52478ec5d272eb14f1b5)() const = &::clang::CXXMethodDecl::isVirtual;
    bool  (::clang::CXXMethodDecl::*method_pointer_da50f8ea53bf545b885030fe9ea23e51)() const = &::clang::CXXMethodDecl::isVolatile;
    unsigned int  (::clang::CXXMethodDecl::*method_pointer_f5b443f3a05551afbb7846330c9810e8)() const = &::clang::CXXMethodDecl::size_overridden_methods;
    boost::python::class_< class ::clang::CXXMethodDecl, autowig::HeldType< class ::clang::CXXMethodDecl >, boost::python::bases< class ::clang::FunctionDecl >, boost::noncopyable > class_7a0922211d1a5f6bb52def66e2db78ad("CXXMethodDecl", "", boost::python::no_init);
    class_7a0922211d1a5f6bb52def66e2db78ad.def("create_deserialized", method_pointer_274dccca4e0a55e8b8df6a34713c4552, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("add_overridden_method", method_pointer_0151ee1a4e1f55c98c4fdc76646c39b9, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("classof", method_pointer_851b334ec4b85b47a28426c511c27368, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("classof_kind", method_pointer_8594a55316b8519ea3ebcfa42ef48492, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_canonical_decl", method_pointer_6fa204ab3afb5898bd203c340f6f82c6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_canonical_decl", method_pointer_324df00aed03584bb87d20f2bb882d90, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_corresponding_method_in_class", method_pointer_eae1dff7867350bab11cb50d7e52ea04, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_corresponding_method_in_class", method_pointer_6d461a9f848552cbb4aeb0f0004b4242, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_most_recent_decl", method_pointer_79a987a9a5365681b596a81943348bc2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_most_recent_decl", method_pointer_dd311922d7e0598cba65429b11695ddb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_parent", method_pointer_268a13b5853959b5a5a7619208f128df, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_parent", method_pointer_ae5aa44759365fd1989caecd4fd13047, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_this_type", method_pointer_7e39c71ee8505c8fa51083a54168e400, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_type_qualifiers", method_pointer_34ac6ac5aa8c55818dea564fe458e2c6, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("has_inline_body", method_pointer_a66f7364312e5fae9871aa040f1fffdd, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_const", method_pointer_5e0884917c9e5ef5af4773d919eea704, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_copy_assignment_operator", method_pointer_e790d109e5e15b7ba10c8a15050b65de, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_instance", method_pointer_32cf38bd42825b87ab9b40d4b1bb3261, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_lambda_static_invoker", method_pointer_6f56c15833635511b85d6ab6758e9c41, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_move_assignment_operator", method_pointer_00145a3a5a7b5621adae8cb5ce39df0b, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_static", method_pointer_767d9bfab28b50d19957d9e183c8e747, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_user_provided", method_pointer_79053f447b1f58219447c9be6bb69457, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_usual_deallocation_function", method_pointer_78900bcfecd355148189f08463c88e0e, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_virtual", method_pointer_c5e5d3c517ea52478ec5d272eb14f1b5, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_volatile", method_pointer_da50f8ea53bf545b885030fe9ea23e51, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("size_overridden_methods", method_pointer_f5b443f3a05551afbb7846330c9810e8, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("classof_kind");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("create_deserialized");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXMethodDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXMethodDecl >, autowig::HeldType< class ::clang::FunctionDecl > >();
    }

}