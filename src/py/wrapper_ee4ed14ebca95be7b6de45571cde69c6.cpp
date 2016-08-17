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
    bool  (::clang::FunctionProtoType::*method_pointer_64fdb4d9326a5e1780d90541aa9f3595)() const = &::clang::FunctionProtoType::isSugared;
    bool  (::clang::FunctionProtoType::*method_pointer_1b7ac48b8f6651229918c87315ee351a)() const = &::clang::FunctionProtoType::hasExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_225f109218045ef29f7667a0e82733e6)() const = &::clang::FunctionProtoType::isVariadic;
    bool  (::clang::FunctionProtoType::*method_pointer_bb9a74d5ea535ecf81c3d2d1df13e0ed)(unsigned int ) const = &::clang::FunctionProtoType::isParamConsumed;
    bool  (*method_pointer_3975804019035ed68965595e77f4004c)(class ::clang::Type  const *) = ::clang::FunctionProtoType::classof;
    bool  (::clang::FunctionProtoType::*method_pointer_9a99cfd9484f57cebd5c1e03f887d382)() const = &::clang::FunctionProtoType::hasTrailingReturn;
    class ::clang::FunctionDecl  * (::clang::FunctionProtoType::*method_pointer_e88681b86ea35464adcbf3a56190decd)() const = &::clang::FunctionProtoType::getExceptionSpecTemplate;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_a5d65f9aef4659c58adf30e679a51878)() const = &::clang::FunctionProtoType::getNumExceptions;
    class ::clang::FunctionDecl  * (::clang::FunctionProtoType::*method_pointer_8ffd9145a0635e099dffd7d238c23d4b)() const = &::clang::FunctionProtoType::getExceptionSpecDecl;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_efcbd20b939f5ca18927d532d48aab4e)() const = &::clang::FunctionProtoType::getTypeQuals;
    bool  (::clang::FunctionProtoType::*method_pointer_5c1febfd510857d7947a194a520cf713)() const = &::clang::FunctionProtoType::hasNoexceptExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_7238c4b3e4e65eaf987cf177e91c4a68)() const = &::clang::FunctionProtoType::isTemplateVariadic;
    bool  (::clang::FunctionProtoType::*method_pointer_57331935ca47557c9ef641cf687f5aa3)() const = &::clang::FunctionProtoType::hasDynamicExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_5516ff3700a0520c84a8ab9586590b36)() const = &::clang::FunctionProtoType::hasDependentExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_a122031a8ac452f5b2c4228af2f528af)() const = &::clang::FunctionProtoType::hasAnyConsumedParams;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_54ead8ea6287589791491fecb84c7627)() const = &::clang::FunctionProtoType::getNumParams;
    boost::python::class_< class ::clang::FunctionProtoType, autowig::HeldType< class ::clang::FunctionProtoType >, boost::python::bases< class ::clang::FunctionType >, boost::noncopyable > class_ee4ed14ebca95be7b6de45571cde69c6("FunctionProtoType", "", boost::python::no_init);
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_sugared", method_pointer_64fdb4d9326a5e1780d90541aa9f3595, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_exception_spec", method_pointer_1b7ac48b8f6651229918c87315ee351a, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_variadic", method_pointer_225f109218045ef29f7667a0e82733e6, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_param_consumed", method_pointer_bb9a74d5ea535ecf81c3d2d1df13e0ed, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("classof", method_pointer_3975804019035ed68965595e77f4004c, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_trailing_return", method_pointer_9a99cfd9484f57cebd5c1e03f887d382, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_exception_spec_template", method_pointer_e88681b86ea35464adcbf3a56190decd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_num_exceptions", method_pointer_a5d65f9aef4659c58adf30e679a51878, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_exception_spec_decl", method_pointer_8ffd9145a0635e099dffd7d238c23d4b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_type_quals", method_pointer_efcbd20b939f5ca18927d532d48aab4e, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_noexcept_exception_spec", method_pointer_5c1febfd510857d7947a194a520cf713, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_template_variadic", method_pointer_7238c4b3e4e65eaf987cf177e91c4a68, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_dynamic_exception_spec", method_pointer_57331935ca47557c9ef641cf687f5aa3, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_dependent_exception_spec", method_pointer_5516ff3700a0520c84a8ab9586590b36, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_any_consumed_params", method_pointer_a122031a8ac452f5b2c4228af2f528af, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_num_params", method_pointer_54ead8ea6287589791491fecb84c7627, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionProtoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionProtoType >, autowig::HeldType< class ::clang::FunctionType > >();
    }

}