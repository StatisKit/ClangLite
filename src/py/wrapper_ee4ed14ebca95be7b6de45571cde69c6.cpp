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
    bool  (*method_pointer_ab4f6d5d92145070a8c53760cb025784)(class ::clang::Type  const *) = ::clang::FunctionProtoType::classof;
    class ::clang::QualType  (::clang::FunctionProtoType::*method_pointer_453d3a60bcd953c18deb5058d3d97465)() const = &::clang::FunctionProtoType::desugar;
    class ::clang::FunctionDecl  * (::clang::FunctionProtoType::*method_pointer_c09c4d757d9857bfb23d4363c01fa8a0)() const = &::clang::FunctionProtoType::getExceptionSpecDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionProtoType::*method_pointer_172403aab4235099b9ad72c40218929a)() const = &::clang::FunctionProtoType::getExceptionSpecTemplate;
    class ::clang::QualType  (::clang::FunctionProtoType::*method_pointer_9de94bb65c6351c5bddb2015e2054b65)(unsigned int ) const = &::clang::FunctionProtoType::getExceptionType;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_2c2f18ef1e555f0594546221af7fea18)() const = &::clang::FunctionProtoType::getNumExceptions;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_4761ee8b55fa59679ac1f81b762f7a56)() const = &::clang::FunctionProtoType::getNumParams;
    class ::clang::QualType  (::clang::FunctionProtoType::*method_pointer_0fd47c74cc4f564d9cbb46e59ae61f44)(unsigned int ) const = &::clang::FunctionProtoType::getParamType;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_c3ef9f9487d25f5bab85e7cb071b2bb3)() const = &::clang::FunctionProtoType::getTypeQuals;
    bool  (::clang::FunctionProtoType::*method_pointer_0441566cb0ef541a86db37ff4a9c5f40)() const = &::clang::FunctionProtoType::hasAnyConsumedParams;
    bool  (::clang::FunctionProtoType::*method_pointer_490c64de84c5516f9db40f06818001f2)() const = &::clang::FunctionProtoType::hasDependentExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_17aa28142ef75d84b2e96242410d6e5a)() const = &::clang::FunctionProtoType::hasDynamicExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_fe5cf969988c5674b31a6cf419383b50)() const = &::clang::FunctionProtoType::hasExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_c3dad75a5578503aa25289f9bfb9a316)() const = &::clang::FunctionProtoType::hasNoexceptExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_84ad6123a5425ff38cd53f0f988a33f4)() const = &::clang::FunctionProtoType::hasTrailingReturn;
    bool  (::clang::FunctionProtoType::*method_pointer_6f354cc13ed15af6ab97e3d0b6254b25)(unsigned int ) const = &::clang::FunctionProtoType::isParamConsumed;
    bool  (::clang::FunctionProtoType::*method_pointer_3afea2b28ecb5b7da7c391e54d27f231)() const = &::clang::FunctionProtoType::isSugared;
    bool  (::clang::FunctionProtoType::*method_pointer_8c9f3ac3135d58858f90896ef76e2da4)() const = &::clang::FunctionProtoType::isTemplateVariadic;
    bool  (::clang::FunctionProtoType::*method_pointer_08240a8d85bd5eda82d34b04b3ef41b2)() const = &::clang::FunctionProtoType::isVariadic;
    boost::python::class_< class ::clang::FunctionProtoType, autowig::HeldType< class ::clang::FunctionProtoType >, boost::python::bases< class ::clang::FunctionType >, boost::noncopyable > class_ee4ed14ebca95be7b6de45571cde69c6("FunctionProtoType", "", boost::python::no_init);
    class_ee4ed14ebca95be7b6de45571cde69c6.def("classof", method_pointer_ab4f6d5d92145070a8c53760cb025784, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("desugar", method_pointer_453d3a60bcd953c18deb5058d3d97465, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_exception_spec_decl", method_pointer_c09c4d757d9857bfb23d4363c01fa8a0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_exception_spec_template", method_pointer_172403aab4235099b9ad72c40218929a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_exception_type", method_pointer_9de94bb65c6351c5bddb2015e2054b65, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_num_exceptions", method_pointer_2c2f18ef1e555f0594546221af7fea18, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_num_params", method_pointer_4761ee8b55fa59679ac1f81b762f7a56, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_param_type", method_pointer_0fd47c74cc4f564d9cbb46e59ae61f44, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_type_quals", method_pointer_c3ef9f9487d25f5bab85e7cb071b2bb3, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_any_consumed_params", method_pointer_0441566cb0ef541a86db37ff4a9c5f40, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_dependent_exception_spec", method_pointer_490c64de84c5516f9db40f06818001f2, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_dynamic_exception_spec", method_pointer_17aa28142ef75d84b2e96242410d6e5a, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_exception_spec", method_pointer_fe5cf969988c5674b31a6cf419383b50, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_noexcept_exception_spec", method_pointer_c3dad75a5578503aa25289f9bfb9a316, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_trailing_return", method_pointer_84ad6123a5425ff38cd53f0f988a33f4, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_param_consumed", method_pointer_6f354cc13ed15af6ab97e3d0b6254b25, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_sugared", method_pointer_3afea2b28ecb5b7da7c391e54d27f231, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_template_variadic", method_pointer_8c9f3ac3135d58858f90896ef76e2da4, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_variadic", method_pointer_08240a8d85bd5eda82d34b04b3ef41b2, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionProtoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionProtoType >, autowig::HeldType< class ::clang::FunctionType > >();
    }

}