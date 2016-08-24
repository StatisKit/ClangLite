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
    bool  (*method_pointer_19a9d138e3ce5318a043c45309278417)(class ::clang::Type  const *) = ::clang::FunctionProtoType::classof;
    class ::clang::QualType  (::clang::FunctionProtoType::*method_pointer_2198e3171df9513c83c2a90d9c667428)() const = &::clang::FunctionProtoType::desugar;
    class ::clang::FunctionDecl  * (::clang::FunctionProtoType::*method_pointer_34316a82f6ee559fbaa2527852531a16)() const = &::clang::FunctionProtoType::getExceptionSpecDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionProtoType::*method_pointer_9f92b149c22d5833a6b91daa824bd7db)() const = &::clang::FunctionProtoType::getExceptionSpecTemplate;
    class ::clang::QualType  (::clang::FunctionProtoType::*method_pointer_5710d3512afb551ea82e4781155dba10)(unsigned int ) const = &::clang::FunctionProtoType::getExceptionType;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_57c362ef3ec050fe93c4abcc95ae5bdc)() const = &::clang::FunctionProtoType::getNumExceptions;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_dbc4884d5cdb566cb992987a1b1cb0a2)() const = &::clang::FunctionProtoType::getNumParams;
    class ::clang::QualType  (::clang::FunctionProtoType::*method_pointer_490dc4aed1e15d76965577634c5a5e3b)(unsigned int ) const = &::clang::FunctionProtoType::getParamType;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_3ebe631ad4e757818135a3ad5554805f)() const = &::clang::FunctionProtoType::getTypeQuals;
    bool  (::clang::FunctionProtoType::*method_pointer_3d35c761bae35da9b67b2e194edd8ebf)() const = &::clang::FunctionProtoType::hasAnyConsumedParams;
    bool  (::clang::FunctionProtoType::*method_pointer_7cd34f03a7e35d619187f586a397dcb7)() const = &::clang::FunctionProtoType::hasDependentExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_bf83cdaea8dd52f2a3ddb478c1071a77)() const = &::clang::FunctionProtoType::hasDynamicExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_a7adfe70d06c5cf2a99c83eef2f63550)() const = &::clang::FunctionProtoType::hasExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_8f017fdbadf3588f918248c1290dce3e)() const = &::clang::FunctionProtoType::hasNoexceptExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_2c6efa575aa65b0bb75e2fd2f09f67e5)() const = &::clang::FunctionProtoType::hasTrailingReturn;
    bool  (::clang::FunctionProtoType::*method_pointer_515662de4e025cbab314f1a6e87f32ae)(unsigned int ) const = &::clang::FunctionProtoType::isParamConsumed;
    bool  (::clang::FunctionProtoType::*method_pointer_bb292667ef17530fa479c3bb7d02aa49)() const = &::clang::FunctionProtoType::isSugared;
    bool  (::clang::FunctionProtoType::*method_pointer_849fb69728b45a25a8876d58494f4745)() const = &::clang::FunctionProtoType::isTemplateVariadic;
    bool  (::clang::FunctionProtoType::*method_pointer_ee0161c200de53e198fd81cc0c7d924f)() const = &::clang::FunctionProtoType::isVariadic;
    boost::python::class_< class ::clang::FunctionProtoType, autowig::HeldType< class ::clang::FunctionProtoType >, boost::python::bases< class ::clang::FunctionType >, boost::noncopyable > class_ee4ed14ebca95be7b6de45571cde69c6("FunctionProtoType", "", boost::python::no_init);
    class_ee4ed14ebca95be7b6de45571cde69c6.def("classof", method_pointer_19a9d138e3ce5318a043c45309278417, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("desugar", method_pointer_2198e3171df9513c83c2a90d9c667428, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_exception_spec_decl", method_pointer_34316a82f6ee559fbaa2527852531a16, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_exception_spec_template", method_pointer_9f92b149c22d5833a6b91daa824bd7db, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_exception_type", method_pointer_5710d3512afb551ea82e4781155dba10, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_num_exceptions", method_pointer_57c362ef3ec050fe93c4abcc95ae5bdc, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_num_params", method_pointer_dbc4884d5cdb566cb992987a1b1cb0a2, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_param_type", method_pointer_490dc4aed1e15d76965577634c5a5e3b, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_type_quals", method_pointer_3ebe631ad4e757818135a3ad5554805f, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_any_consumed_params", method_pointer_3d35c761bae35da9b67b2e194edd8ebf, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_dependent_exception_spec", method_pointer_7cd34f03a7e35d619187f586a397dcb7, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_dynamic_exception_spec", method_pointer_bf83cdaea8dd52f2a3ddb478c1071a77, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_exception_spec", method_pointer_a7adfe70d06c5cf2a99c83eef2f63550, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_noexcept_exception_spec", method_pointer_8f017fdbadf3588f918248c1290dce3e, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_trailing_return", method_pointer_2c6efa575aa65b0bb75e2fd2f09f67e5, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_param_consumed", method_pointer_515662de4e025cbab314f1a6e87f32ae, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_sugared", method_pointer_bb292667ef17530fa479c3bb7d02aa49, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_template_variadic", method_pointer_849fb69728b45a25a8876d58494f4745, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_variadic", method_pointer_ee0161c200de53e198fd81cc0c7d924f, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionProtoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionProtoType >, autowig::HeldType< class ::clang::FunctionType > >();
    }

}