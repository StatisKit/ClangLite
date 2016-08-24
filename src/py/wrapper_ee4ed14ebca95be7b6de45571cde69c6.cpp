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
    bool  (*method_pointer_c466137413bc5a5f90b0bf866984e50d)(class ::clang::Type  const *) = ::clang::FunctionProtoType::classof;
    class ::clang::QualType  (::clang::FunctionProtoType::*method_pointer_df4b067dc765522495c94589cd47e68e)() const = &::clang::FunctionProtoType::desugar;
    class ::clang::FunctionDecl  * (::clang::FunctionProtoType::*method_pointer_35ef3a2c6cb1553ca34d426db5b44c8e)() const = &::clang::FunctionProtoType::getExceptionSpecDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionProtoType::*method_pointer_2d01a7498e7c50a0b5e098a4cf7a1010)() const = &::clang::FunctionProtoType::getExceptionSpecTemplate;
    class ::clang::QualType  (::clang::FunctionProtoType::*method_pointer_a1a26f61bfb3557bb0bbf9e03606c485)(unsigned int ) const = &::clang::FunctionProtoType::getExceptionType;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_ea2adfafbf7b57dcabf9200dc96fd42b)() const = &::clang::FunctionProtoType::getNumExceptions;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_195a78b053835758973b482de9d41dd1)() const = &::clang::FunctionProtoType::getNumParams;
    class ::clang::QualType  (::clang::FunctionProtoType::*method_pointer_26d237bc9ed959c7874e43b142bc2a5c)(unsigned int ) const = &::clang::FunctionProtoType::getParamType;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_d18b977e2ac45f398a431929774b0bca)() const = &::clang::FunctionProtoType::getTypeQuals;
    bool  (::clang::FunctionProtoType::*method_pointer_f3af2d091b5e50bdb23a1df042cbab92)() const = &::clang::FunctionProtoType::hasAnyConsumedParams;
    bool  (::clang::FunctionProtoType::*method_pointer_0c562aa3435b53258210b451d54a94bb)() const = &::clang::FunctionProtoType::hasDependentExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_955276fa977e58f2a97702a4ea567ce1)() const = &::clang::FunctionProtoType::hasDynamicExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_9574512fe74954a1a526ecb180489053)() const = &::clang::FunctionProtoType::hasExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_5ee3782593bf5f82a1e2d1a967bd37da)() const = &::clang::FunctionProtoType::hasNoexceptExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_3c36feae419751118b71f4cd93279e63)() const = &::clang::FunctionProtoType::hasTrailingReturn;
    bool  (::clang::FunctionProtoType::*method_pointer_273ee80ab3025fe6b88e64ee49e87580)(unsigned int ) const = &::clang::FunctionProtoType::isParamConsumed;
    bool  (::clang::FunctionProtoType::*method_pointer_5d09da677aac570482658b2345911532)() const = &::clang::FunctionProtoType::isSugared;
    bool  (::clang::FunctionProtoType::*method_pointer_585570f96bee507a962c1960bab25356)() const = &::clang::FunctionProtoType::isTemplateVariadic;
    bool  (::clang::FunctionProtoType::*method_pointer_f06dbb6f9aac5637ad199b595c51fbd1)() const = &::clang::FunctionProtoType::isVariadic;
    boost::python::class_< class ::clang::FunctionProtoType, autowig::HeldType< class ::clang::FunctionProtoType >, boost::python::bases< class ::clang::FunctionType >, boost::noncopyable > class_ee4ed14ebca95be7b6de45571cde69c6("FunctionProtoType", "", boost::python::no_init);
    class_ee4ed14ebca95be7b6de45571cde69c6.def("classof", method_pointer_c466137413bc5a5f90b0bf866984e50d, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("desugar", method_pointer_df4b067dc765522495c94589cd47e68e, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_exception_spec_decl", method_pointer_35ef3a2c6cb1553ca34d426db5b44c8e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_exception_spec_template", method_pointer_2d01a7498e7c50a0b5e098a4cf7a1010, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_exception_type", method_pointer_a1a26f61bfb3557bb0bbf9e03606c485, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_num_exceptions", method_pointer_ea2adfafbf7b57dcabf9200dc96fd42b, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_num_params", method_pointer_195a78b053835758973b482de9d41dd1, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_param_type", method_pointer_26d237bc9ed959c7874e43b142bc2a5c, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_type_quals", method_pointer_d18b977e2ac45f398a431929774b0bca, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_any_consumed_params", method_pointer_f3af2d091b5e50bdb23a1df042cbab92, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_dependent_exception_spec", method_pointer_0c562aa3435b53258210b451d54a94bb, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_dynamic_exception_spec", method_pointer_955276fa977e58f2a97702a4ea567ce1, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_exception_spec", method_pointer_9574512fe74954a1a526ecb180489053, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_noexcept_exception_spec", method_pointer_5ee3782593bf5f82a1e2d1a967bd37da, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_trailing_return", method_pointer_3c36feae419751118b71f4cd93279e63, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_param_consumed", method_pointer_273ee80ab3025fe6b88e64ee49e87580, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_sugared", method_pointer_5d09da677aac570482658b2345911532, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_template_variadic", method_pointer_585570f96bee507a962c1960bab25356, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_variadic", method_pointer_f06dbb6f9aac5637ad199b595c51fbd1, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionProtoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionProtoType >, autowig::HeldType< class ::clang::FunctionType > >();
    }

}