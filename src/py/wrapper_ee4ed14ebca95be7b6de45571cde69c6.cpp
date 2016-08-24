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
    bool  (*method_pointer_9e3428368f1e552d83082ce8de0f656e)(class ::clang::Type  const *) = ::clang::FunctionProtoType::classof;
    class ::clang::QualType  (::clang::FunctionProtoType::*method_pointer_e7bc24117fd55f818509c7875a1a217e)() const = &::clang::FunctionProtoType::desugar;
    class ::clang::FunctionDecl  * (::clang::FunctionProtoType::*method_pointer_e85a10bb8b0055bf8f9dc969c5a29e7e)() const = &::clang::FunctionProtoType::getExceptionSpecDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionProtoType::*method_pointer_2a3b8ce041ad53039a3dbfc7f9b00be9)() const = &::clang::FunctionProtoType::getExceptionSpecTemplate;
    class ::clang::QualType  (::clang::FunctionProtoType::*method_pointer_b711c62370d35f2998ed77041343f860)(unsigned int ) const = &::clang::FunctionProtoType::getExceptionType;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_4e6c9f425d5853cca90c9b51ab3a702e)() const = &::clang::FunctionProtoType::getNumExceptions;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_5f1c838091fc5b8f8706bbd666c2198d)() const = &::clang::FunctionProtoType::getNumParams;
    class ::clang::QualType  (::clang::FunctionProtoType::*method_pointer_da2db23c691955b29d54cba2c66ff743)(unsigned int ) const = &::clang::FunctionProtoType::getParamType;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_12a94eb59bad5b2ba2c313a4e54fb451)() const = &::clang::FunctionProtoType::getTypeQuals;
    bool  (::clang::FunctionProtoType::*method_pointer_88e94383e70659f89dbff9d88aa0c11e)() const = &::clang::FunctionProtoType::hasAnyConsumedParams;
    bool  (::clang::FunctionProtoType::*method_pointer_d06c1c21e4f659069ebad46e4a02f5df)() const = &::clang::FunctionProtoType::hasDependentExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_4aa8b5d104d65d959b532117587dd6ba)() const = &::clang::FunctionProtoType::hasDynamicExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_9255fd53931653f5b320fc629d3e453e)() const = &::clang::FunctionProtoType::hasExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_fda33267fc9c512483165c849c4c463d)() const = &::clang::FunctionProtoType::hasNoexceptExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_457b7ff4ca8c5df48d3ea5fa0ba3af5d)() const = &::clang::FunctionProtoType::hasTrailingReturn;
    bool  (::clang::FunctionProtoType::*method_pointer_6a4da91d54435e0ca47572f5b603c319)(unsigned int ) const = &::clang::FunctionProtoType::isParamConsumed;
    bool  (::clang::FunctionProtoType::*method_pointer_0417db223f3554aca42cb2289334052a)() const = &::clang::FunctionProtoType::isSugared;
    bool  (::clang::FunctionProtoType::*method_pointer_ccb9887586715bc2ade1da0270bb2abf)() const = &::clang::FunctionProtoType::isTemplateVariadic;
    bool  (::clang::FunctionProtoType::*method_pointer_fd586826435a5758ac61dd8e86325b5c)() const = &::clang::FunctionProtoType::isVariadic;
    boost::python::class_< class ::clang::FunctionProtoType, autowig::HeldType< class ::clang::FunctionProtoType >, boost::python::bases< class ::clang::FunctionType >, boost::noncopyable > class_ee4ed14ebca95be7b6de45571cde69c6("FunctionProtoType", "", boost::python::no_init);
    class_ee4ed14ebca95be7b6de45571cde69c6.def("classof", method_pointer_9e3428368f1e552d83082ce8de0f656e, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("desugar", method_pointer_e7bc24117fd55f818509c7875a1a217e, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_exception_spec_decl", method_pointer_e85a10bb8b0055bf8f9dc969c5a29e7e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_exception_spec_template", method_pointer_2a3b8ce041ad53039a3dbfc7f9b00be9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_exception_type", method_pointer_b711c62370d35f2998ed77041343f860, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_num_exceptions", method_pointer_4e6c9f425d5853cca90c9b51ab3a702e, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_num_params", method_pointer_5f1c838091fc5b8f8706bbd666c2198d, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_param_type", method_pointer_da2db23c691955b29d54cba2c66ff743, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_type_quals", method_pointer_12a94eb59bad5b2ba2c313a4e54fb451, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_any_consumed_params", method_pointer_88e94383e70659f89dbff9d88aa0c11e, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_dependent_exception_spec", method_pointer_d06c1c21e4f659069ebad46e4a02f5df, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_dynamic_exception_spec", method_pointer_4aa8b5d104d65d959b532117587dd6ba, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_exception_spec", method_pointer_9255fd53931653f5b320fc629d3e453e, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_noexcept_exception_spec", method_pointer_fda33267fc9c512483165c849c4c463d, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_trailing_return", method_pointer_457b7ff4ca8c5df48d3ea5fa0ba3af5d, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_param_consumed", method_pointer_6a4da91d54435e0ca47572f5b603c319, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_sugared", method_pointer_0417db223f3554aca42cb2289334052a, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_template_variadic", method_pointer_ccb9887586715bc2ade1da0270bb2abf, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_variadic", method_pointer_fd586826435a5758ac61dd8e86325b5c, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionProtoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionProtoType >, autowig::HeldType< class ::clang::FunctionType > >();
    }

}