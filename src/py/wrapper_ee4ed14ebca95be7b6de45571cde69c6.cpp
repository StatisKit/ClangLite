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
    bool  (*method_pointer_a0e993ce5d3d570cb9825038698e6f85)(class ::clang::Type  const *) = ::clang::FunctionProtoType::classof;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_877e1ac76158502298edd3f941f32842)() const = &::clang::FunctionProtoType::getNumExceptions;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_a4f5199a9b45588c8c631757c014bbb9)() const = &::clang::FunctionProtoType::getNumParams;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_54f0a7dca5c05f8ea94e1c7e6e5c656f)() const = &::clang::FunctionProtoType::getTypeQuals;
    bool  (::clang::FunctionProtoType::*method_pointer_ea4ffcd8aab35886a9687d04d9720d52)() const = &::clang::FunctionProtoType::hasAnyConsumedParams;
    bool  (::clang::FunctionProtoType::*method_pointer_40bd975f233b547f952441e730684967)() const = &::clang::FunctionProtoType::hasDependentExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_b11e18bf2f7f5ffda3989d147875db3c)() const = &::clang::FunctionProtoType::hasDynamicExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_cd5b3895f2a15b648958bdfb0ade640d)() const = &::clang::FunctionProtoType::hasExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_b8b7ddad0b725864b429ebe42d10491f)() const = &::clang::FunctionProtoType::hasNoexceptExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_dd26143858ae59d68a82b97493510bf7)() const = &::clang::FunctionProtoType::hasTrailingReturn;
    bool  (::clang::FunctionProtoType::*method_pointer_a775fc5eb2845c48ae0387b6e7fdbe37)(unsigned int ) const = &::clang::FunctionProtoType::isParamConsumed;
    bool  (::clang::FunctionProtoType::*method_pointer_68677915f63e5c7bab43835f5aa91e60)() const = &::clang::FunctionProtoType::isSugared;
    bool  (::clang::FunctionProtoType::*method_pointer_c8564bee2e3554bcaef0b310c3a39336)() const = &::clang::FunctionProtoType::isTemplateVariadic;
    bool  (::clang::FunctionProtoType::*method_pointer_1c1047d82b8855a28759ae6581a2723c)() const = &::clang::FunctionProtoType::isVariadic;
    boost::python::class_< class ::clang::FunctionProtoType, autowig::HeldType< class ::clang::FunctionProtoType >, boost::python::bases< class ::clang::FunctionType >, boost::noncopyable > class_ee4ed14ebca95be7b6de45571cde69c6("FunctionProtoType", "", boost::python::no_init);
    class_ee4ed14ebca95be7b6de45571cde69c6.def("classof", method_pointer_a0e993ce5d3d570cb9825038698e6f85, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_num_exceptions", method_pointer_877e1ac76158502298edd3f941f32842, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_num_params", method_pointer_a4f5199a9b45588c8c631757c014bbb9, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_type_quals", method_pointer_54f0a7dca5c05f8ea94e1c7e6e5c656f, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_any_consumed_params", method_pointer_ea4ffcd8aab35886a9687d04d9720d52, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_dependent_exception_spec", method_pointer_40bd975f233b547f952441e730684967, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_dynamic_exception_spec", method_pointer_b11e18bf2f7f5ffda3989d147875db3c, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_exception_spec", method_pointer_cd5b3895f2a15b648958bdfb0ade640d, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_noexcept_exception_spec", method_pointer_b8b7ddad0b725864b429ebe42d10491f, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_trailing_return", method_pointer_dd26143858ae59d68a82b97493510bf7, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_param_consumed", method_pointer_a775fc5eb2845c48ae0387b6e7fdbe37, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_sugared", method_pointer_68677915f63e5c7bab43835f5aa91e60, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_template_variadic", method_pointer_c8564bee2e3554bcaef0b310c3a39336, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_variadic", method_pointer_1c1047d82b8855a28759ae6581a2723c, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionProtoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionProtoType >, autowig::HeldType< class ::clang::FunctionType > >();
    }

}