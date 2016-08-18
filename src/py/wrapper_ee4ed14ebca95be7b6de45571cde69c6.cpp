#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_ee4ed14ebca95be7b6de45571cde69c6()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_244d75ab152152ff8481107529b54f97)(class ::clang::Type  const *) = ::clang::FunctionProtoType::classof;
    class ::clang::FunctionDecl  * (::clang::FunctionProtoType::*method_pointer_35376c7f74d35d2e94f22b8f9da31303)() const = &::clang::FunctionProtoType::getExceptionSpecDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionProtoType::*method_pointer_61cadf29506154b0aede5dadc14f060c)() const = &::clang::FunctionProtoType::getExceptionSpecTemplate;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_9cefd42e505450c28bb9786f06ee01b9)() const = &::clang::FunctionProtoType::getNumExceptions;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_80bd5df269705f20b449f2e1444cd545)() const = &::clang::FunctionProtoType::getNumParams;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_6c2d6f3d4c8d508bb6941f839b4f26cb)() const = &::clang::FunctionProtoType::getTypeQuals;
    bool  (::clang::FunctionProtoType::*method_pointer_8cdc165e7feb5e53995245f23e572e3c)() const = &::clang::FunctionProtoType::hasAnyConsumedParams;
    bool  (::clang::FunctionProtoType::*method_pointer_c95d0cf4df9f5acd9de7a6b400348709)() const = &::clang::FunctionProtoType::hasDependentExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_beffd83642af52e7869b21a6eb9c9378)() const = &::clang::FunctionProtoType::hasDynamicExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_d1f46ed246635bc38df072ea59d7fa1a)() const = &::clang::FunctionProtoType::hasExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_78df855490b7543391a026049e82fb41)() const = &::clang::FunctionProtoType::hasNoexceptExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_c69f80a1c3395cc5be3ce0b42e47a7b6)() const = &::clang::FunctionProtoType::hasTrailingReturn;
    bool  (::clang::FunctionProtoType::*method_pointer_5a3f077f81835e1086e83916f6d20f57)(unsigned int ) const = &::clang::FunctionProtoType::isParamConsumed;
    bool  (::clang::FunctionProtoType::*method_pointer_9d679ec3ad4656508de84433a3658b74)() const = &::clang::FunctionProtoType::isSugared;
    bool  (::clang::FunctionProtoType::*method_pointer_f9e0aedab81c5c56a21717915adc3b90)() const = &::clang::FunctionProtoType::isTemplateVariadic;
    bool  (::clang::FunctionProtoType::*method_pointer_0ec4ca35e13d5da3b48446c086cc4ec8)() const = &::clang::FunctionProtoType::isVariadic;
    boost::python::class_< class ::clang::FunctionProtoType, autowig::HeldType< class ::clang::FunctionProtoType >, boost::python::bases< class ::clang::FunctionType >, boost::noncopyable > class_ee4ed14ebca95be7b6de45571cde69c6("FunctionProtoType", "", boost::python::no_init);
    class_ee4ed14ebca95be7b6de45571cde69c6.def("classof", method_pointer_244d75ab152152ff8481107529b54f97, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_exception_spec_decl", method_pointer_35376c7f74d35d2e94f22b8f9da31303, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_exception_spec_template", method_pointer_61cadf29506154b0aede5dadc14f060c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_num_exceptions", method_pointer_9cefd42e505450c28bb9786f06ee01b9, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_num_params", method_pointer_80bd5df269705f20b449f2e1444cd545, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_type_quals", method_pointer_6c2d6f3d4c8d508bb6941f839b4f26cb, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_any_consumed_params", method_pointer_8cdc165e7feb5e53995245f23e572e3c, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_dependent_exception_spec", method_pointer_c95d0cf4df9f5acd9de7a6b400348709, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_dynamic_exception_spec", method_pointer_beffd83642af52e7869b21a6eb9c9378, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_exception_spec", method_pointer_d1f46ed246635bc38df072ea59d7fa1a, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_noexcept_exception_spec", method_pointer_78df855490b7543391a026049e82fb41, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_trailing_return", method_pointer_c69f80a1c3395cc5be3ce0b42e47a7b6, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_param_consumed", method_pointer_5a3f077f81835e1086e83916f6d20f57, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_sugared", method_pointer_9d679ec3ad4656508de84433a3658b74, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_template_variadic", method_pointer_f9e0aedab81c5c56a21717915adc3b90, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_variadic", method_pointer_0ec4ca35e13d5da3b48446c086cc4ec8, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionProtoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionProtoType >, autowig::HeldType< class ::clang::FunctionType > >();
    }

}