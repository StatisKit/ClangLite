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
    bool  (*method_pointer_2b5e064e85b6543da5836a2634d11248)(class ::clang::Type  const *) = ::clang::FunctionProtoType::classof;
    class ::clang::FunctionDecl  * (::clang::FunctionProtoType::*method_pointer_6384e6c0155c5fc48966f92b048ff143)() const = &::clang::FunctionProtoType::getExceptionSpecDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionProtoType::*method_pointer_c8786a9b1b5356eebdb1f089523810f8)() const = &::clang::FunctionProtoType::getExceptionSpecTemplate;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_8329914131175d6c85f99ef52ede423f)() const = &::clang::FunctionProtoType::getNumExceptions;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_b3093fa3900e58959e0ef913e8a13052)() const = &::clang::FunctionProtoType::getNumParams;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_10e635154b205c0b9d7dbeac8066d6bd)() const = &::clang::FunctionProtoType::getTypeQuals;
    bool  (::clang::FunctionProtoType::*method_pointer_c3779de004e758d4a9ec259f37af464a)() const = &::clang::FunctionProtoType::hasAnyConsumedParams;
    bool  (::clang::FunctionProtoType::*method_pointer_661ae266015752e289dd337423509caa)() const = &::clang::FunctionProtoType::hasDependentExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_87e50cc6f60d5489b9e00f6504e06e1f)() const = &::clang::FunctionProtoType::hasDynamicExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_58746a97688d5587868339d7cb010d70)() const = &::clang::FunctionProtoType::hasExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_c257598731d4532dafd474aaac6a22c1)() const = &::clang::FunctionProtoType::hasNoexceptExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_11a5da4618c55597a439445746da2482)() const = &::clang::FunctionProtoType::hasTrailingReturn;
    bool  (::clang::FunctionProtoType::*method_pointer_0f59b401ef2f57b4836a038ade71701e)(unsigned int ) const = &::clang::FunctionProtoType::isParamConsumed;
    bool  (::clang::FunctionProtoType::*method_pointer_b3064bd6d7ba552da2d9fb986ecf1bb9)() const = &::clang::FunctionProtoType::isSugared;
    bool  (::clang::FunctionProtoType::*method_pointer_1f625b8635c5546eb6c6902556add12a)() const = &::clang::FunctionProtoType::isTemplateVariadic;
    bool  (::clang::FunctionProtoType::*method_pointer_095412c8819c5776b8bf70abd0e9c324)() const = &::clang::FunctionProtoType::isVariadic;
    boost::python::class_< class ::clang::FunctionProtoType, autowig::HeldType< class ::clang::FunctionProtoType >, boost::python::bases< class ::clang::FunctionType >, boost::noncopyable > class_ee4ed14ebca95be7b6de45571cde69c6("FunctionProtoType", "", boost::python::no_init);
    class_ee4ed14ebca95be7b6de45571cde69c6.def("classof", method_pointer_2b5e064e85b6543da5836a2634d11248, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_exception_spec_decl", method_pointer_6384e6c0155c5fc48966f92b048ff143, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_exception_spec_template", method_pointer_c8786a9b1b5356eebdb1f089523810f8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_num_exceptions", method_pointer_8329914131175d6c85f99ef52ede423f, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_num_params", method_pointer_b3093fa3900e58959e0ef913e8a13052, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_type_quals", method_pointer_10e635154b205c0b9d7dbeac8066d6bd, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_any_consumed_params", method_pointer_c3779de004e758d4a9ec259f37af464a, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_dependent_exception_spec", method_pointer_661ae266015752e289dd337423509caa, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_dynamic_exception_spec", method_pointer_87e50cc6f60d5489b9e00f6504e06e1f, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_exception_spec", method_pointer_58746a97688d5587868339d7cb010d70, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_noexcept_exception_spec", method_pointer_c257598731d4532dafd474aaac6a22c1, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_trailing_return", method_pointer_11a5da4618c55597a439445746da2482, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_param_consumed", method_pointer_0f59b401ef2f57b4836a038ade71701e, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_sugared", method_pointer_b3064bd6d7ba552da2d9fb986ecf1bb9, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_template_variadic", method_pointer_1f625b8635c5546eb6c6902556add12a, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_variadic", method_pointer_095412c8819c5776b8bf70abd0e9c324, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionProtoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionProtoType >, autowig::HeldType< class ::clang::FunctionType > >();
    }

}