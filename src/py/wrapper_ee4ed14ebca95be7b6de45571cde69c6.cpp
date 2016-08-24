#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_ee4ed14ebca95be7b6de45571cde69c6()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_73e256bbf23e573296ae964e1ce9768f)(class ::clang::Type  const *) = ::clang::FunctionProtoType::classof;
    class ::clang::QualType  (::clang::FunctionProtoType::*method_pointer_8b4f160a731b519792e1b4beb7fe4fdd)() const = &::clang::FunctionProtoType::desugar;
    class ::clang::FunctionDecl  * (::clang::FunctionProtoType::*method_pointer_75fe5ed3d88b5364996c3da0966590d6)() const = &::clang::FunctionProtoType::getExceptionSpecDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionProtoType::*method_pointer_714c9c51cedb55b4b7acb0e4d07335aa)() const = &::clang::FunctionProtoType::getExceptionSpecTemplate;
    class ::clang::QualType  (::clang::FunctionProtoType::*method_pointer_dc1f6a2c3e5d5252bcd1bf1ea9b4f2c5)(unsigned int ) const = &::clang::FunctionProtoType::getExceptionType;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_15c468e75f485661b9e99d8c3c0443fd)() const = &::clang::FunctionProtoType::getNumExceptions;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_084ee49d6ac7548685f33857abb91266)() const = &::clang::FunctionProtoType::getNumParams;
    class ::clang::QualType  (::clang::FunctionProtoType::*method_pointer_9b62dadb58b85f23ad8f6d07a4184334)(unsigned int ) const = &::clang::FunctionProtoType::getParamType;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_0f11767fd44e5d88b98fc4f676b2230a)() const = &::clang::FunctionProtoType::getTypeQuals;
    bool  (::clang::FunctionProtoType::*method_pointer_981f1ba27f1553adbdaabc1cda8acb19)() const = &::clang::FunctionProtoType::hasAnyConsumedParams;
    bool  (::clang::FunctionProtoType::*method_pointer_a2453061e06751f1a61af4b890bf205e)() const = &::clang::FunctionProtoType::hasDependentExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_99f5e70385695a5780b399be41e0a218)() const = &::clang::FunctionProtoType::hasDynamicExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_980ef56d1f1251da832b43a32e623b70)() const = &::clang::FunctionProtoType::hasExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_785b3200f5aa5791873366880524b172)() const = &::clang::FunctionProtoType::hasNoexceptExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_11517c6a5d805ec5aebd693e9805b38e)() const = &::clang::FunctionProtoType::hasTrailingReturn;
    bool  (::clang::FunctionProtoType::*method_pointer_e0b93b64af475e2085226b3049e5a048)(unsigned int ) const = &::clang::FunctionProtoType::isParamConsumed;
    bool  (::clang::FunctionProtoType::*method_pointer_8e504e45fff457edb1ba1ee9a82811d6)() const = &::clang::FunctionProtoType::isSugared;
    bool  (::clang::FunctionProtoType::*method_pointer_e9eefc751a8d5dcbbd2b2ab200ac0f2f)() const = &::clang::FunctionProtoType::isTemplateVariadic;
    bool  (::clang::FunctionProtoType::*method_pointer_c2cc9f0cdfae56d7ae906885e5c2346b)() const = &::clang::FunctionProtoType::isVariadic;
    boost::python::class_< class ::clang::FunctionProtoType, autowig::HeldType< class ::clang::FunctionProtoType >, boost::python::bases< class ::clang::FunctionType >, boost::noncopyable > class_ee4ed14ebca95be7b6de45571cde69c6("FunctionProtoType", "", boost::python::no_init);
    class_ee4ed14ebca95be7b6de45571cde69c6.def("classof", method_pointer_73e256bbf23e573296ae964e1ce9768f, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("desugar", method_pointer_8b4f160a731b519792e1b4beb7fe4fdd, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_exception_spec_decl", method_pointer_75fe5ed3d88b5364996c3da0966590d6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_exception_spec_template", method_pointer_714c9c51cedb55b4b7acb0e4d07335aa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_exception_type", method_pointer_dc1f6a2c3e5d5252bcd1bf1ea9b4f2c5, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_num_exceptions", method_pointer_15c468e75f485661b9e99d8c3c0443fd, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_num_params", method_pointer_084ee49d6ac7548685f33857abb91266, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_param_type", method_pointer_9b62dadb58b85f23ad8f6d07a4184334, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_type_quals", method_pointer_0f11767fd44e5d88b98fc4f676b2230a, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_any_consumed_params", method_pointer_981f1ba27f1553adbdaabc1cda8acb19, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_dependent_exception_spec", method_pointer_a2453061e06751f1a61af4b890bf205e, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_dynamic_exception_spec", method_pointer_99f5e70385695a5780b399be41e0a218, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_exception_spec", method_pointer_980ef56d1f1251da832b43a32e623b70, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_noexcept_exception_spec", method_pointer_785b3200f5aa5791873366880524b172, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_trailing_return", method_pointer_11517c6a5d805ec5aebd693e9805b38e, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_param_consumed", method_pointer_e0b93b64af475e2085226b3049e5a048, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_sugared", method_pointer_8e504e45fff457edb1ba1ee9a82811d6, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_template_variadic", method_pointer_e9eefc751a8d5dcbbd2b2ab200ac0f2f, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_variadic", method_pointer_c2cc9f0cdfae56d7ae906885e5c2346b, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionProtoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionProtoType >, autowig::HeldType< class ::clang::FunctionType > >();
    }

}