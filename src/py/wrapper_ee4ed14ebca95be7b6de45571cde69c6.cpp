#include "_clanglite.h"


namespace autowig
{
}


void wrapper_ee4ed14ebca95be7b6de45571cde69c6()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_cdda80a194965248ad614404a568323b)(class ::clang::Type  const *) = ::clang::FunctionProtoType::classof;
    class ::clang::FunctionDecl  * (::clang::FunctionProtoType::*method_pointer_b70b1dd7d39d58b780057cdae30c38ac)() const = &::clang::FunctionProtoType::getExceptionSpecDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionProtoType::*method_pointer_025a46a2ac335d43949ff6d6617e7a8f)() const = &::clang::FunctionProtoType::getExceptionSpecTemplate;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_144666805b1a5967ab97434250330f37)() const = &::clang::FunctionProtoType::getNumExceptions;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_c421d7df273052d3a97055d83c796e2b)() const = &::clang::FunctionProtoType::getNumParams;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_e9ca8afe5a275f7e9d891702be604160)() const = &::clang::FunctionProtoType::getTypeQuals;
    bool  (::clang::FunctionProtoType::*method_pointer_db87aa91080b5e8b95cb3e1e0b2eda00)() const = &::clang::FunctionProtoType::hasAnyConsumedParams;
    bool  (::clang::FunctionProtoType::*method_pointer_d6110f18575e59ad9f4afd23475f1424)() const = &::clang::FunctionProtoType::hasDependentExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_4b6aaf10d33e5b539068e81bf98ac1ab)() const = &::clang::FunctionProtoType::hasDynamicExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_cd14069034265ddfa61ece6cdcae6e20)() const = &::clang::FunctionProtoType::hasExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_99b3f205109e5d56ac902c9f0a7572ca)() const = &::clang::FunctionProtoType::hasNoexceptExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_8f484a0510d55720a5507fb095a7eb10)() const = &::clang::FunctionProtoType::hasTrailingReturn;
    bool  (::clang::FunctionProtoType::*method_pointer_8289c29f190a5e7996b37cdce84934d4)(unsigned int ) const = &::clang::FunctionProtoType::isParamConsumed;
    bool  (::clang::FunctionProtoType::*method_pointer_ab2cf607c9975a969a5f58fd9934b097)() const = &::clang::FunctionProtoType::isSugared;
    bool  (::clang::FunctionProtoType::*method_pointer_f40714d16c2b532bb7376ce445893b99)() const = &::clang::FunctionProtoType::isTemplateVariadic;
    bool  (::clang::FunctionProtoType::*method_pointer_f967840ea4ee5461a508e81558ac75fa)() const = &::clang::FunctionProtoType::isVariadic;
    boost::python::class_< class ::clang::FunctionProtoType, autowig::HeldType< class ::clang::FunctionProtoType >, boost::python::bases< class ::clang::FunctionType >, boost::noncopyable > class_ee4ed14ebca95be7b6de45571cde69c6("FunctionProtoType", "", boost::python::no_init);
    class_ee4ed14ebca95be7b6de45571cde69c6.def("classof", method_pointer_cdda80a194965248ad614404a568323b, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_exception_spec_decl", method_pointer_b70b1dd7d39d58b780057cdae30c38ac, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_exception_spec_template", method_pointer_025a46a2ac335d43949ff6d6617e7a8f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_num_exceptions", method_pointer_144666805b1a5967ab97434250330f37, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_num_params", method_pointer_c421d7df273052d3a97055d83c796e2b, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_type_quals", method_pointer_e9ca8afe5a275f7e9d891702be604160, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_any_consumed_params", method_pointer_db87aa91080b5e8b95cb3e1e0b2eda00, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_dependent_exception_spec", method_pointer_d6110f18575e59ad9f4afd23475f1424, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_dynamic_exception_spec", method_pointer_4b6aaf10d33e5b539068e81bf98ac1ab, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_exception_spec", method_pointer_cd14069034265ddfa61ece6cdcae6e20, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_noexcept_exception_spec", method_pointer_99b3f205109e5d56ac902c9f0a7572ca, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_trailing_return", method_pointer_8f484a0510d55720a5507fb095a7eb10, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_param_consumed", method_pointer_8289c29f190a5e7996b37cdce84934d4, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_sugared", method_pointer_ab2cf607c9975a969a5f58fd9934b097, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_template_variadic", method_pointer_f40714d16c2b532bb7376ce445893b99, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_variadic", method_pointer_f967840ea4ee5461a508e81558ac75fa, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionProtoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionProtoType >, autowig::HeldType< class ::clang::FunctionType > >();
    }

}