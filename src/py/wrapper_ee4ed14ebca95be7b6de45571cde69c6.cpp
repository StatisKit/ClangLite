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
    bool  (*method_pointer_4d892ad021ec58c2be20e60fccf32d21)(class ::clang::Type  const *) = ::clang::FunctionProtoType::classof;
    class ::clang::QualType  (::clang::FunctionProtoType::*method_pointer_fb042e466de95ea78b1c569c13785dba)() const = &::clang::FunctionProtoType::desugar;
    class ::clang::FunctionDecl  * (::clang::FunctionProtoType::*method_pointer_0657025a65b651a095bce1270344dc9f)() const = &::clang::FunctionProtoType::getExceptionSpecDecl;
    class ::clang::FunctionDecl  * (::clang::FunctionProtoType::*method_pointer_701d469ba4c9549f852459108451c10d)() const = &::clang::FunctionProtoType::getExceptionSpecTemplate;
    class ::clang::QualType  (::clang::FunctionProtoType::*method_pointer_06b3a899ebc75fa19268893816794cba)(unsigned int ) const = &::clang::FunctionProtoType::getExceptionType;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_3bc2438253b455d6a97bda0c5a7c942f)() const = &::clang::FunctionProtoType::getNumExceptions;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_771d1334fbc25b678338c7952bbd0584)() const = &::clang::FunctionProtoType::getNumParams;
    class ::clang::QualType  (::clang::FunctionProtoType::*method_pointer_606a68a995d45dceaee94cd59add6dcd)(unsigned int ) const = &::clang::FunctionProtoType::getParamType;
    unsigned int  (::clang::FunctionProtoType::*method_pointer_aa5b89440cdb5906a0cccd79d8b5df66)() const = &::clang::FunctionProtoType::getTypeQuals;
    bool  (::clang::FunctionProtoType::*method_pointer_5f191fb8f84655b988ca3f2683db5d2e)() const = &::clang::FunctionProtoType::hasAnyConsumedParams;
    bool  (::clang::FunctionProtoType::*method_pointer_1e25b4b9064d5f74ad679dd4ce41b7a3)() const = &::clang::FunctionProtoType::hasDependentExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_a1395b1c8a0c54818548ed4c73910ec2)() const = &::clang::FunctionProtoType::hasDynamicExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_0374e4bafdcf57e7826fd08e547c90ad)() const = &::clang::FunctionProtoType::hasExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_1ef4afea88e75da597226555bb8d8fd3)() const = &::clang::FunctionProtoType::hasNoexceptExceptionSpec;
    bool  (::clang::FunctionProtoType::*method_pointer_2aa147cf16f65f7db61424c9c1dc80a1)() const = &::clang::FunctionProtoType::hasTrailingReturn;
    bool  (::clang::FunctionProtoType::*method_pointer_195a0dd696f15d73bd3d582af8c12454)(unsigned int ) const = &::clang::FunctionProtoType::isParamConsumed;
    bool  (::clang::FunctionProtoType::*method_pointer_9e876d692d595a548b6f97f3f7fedfd8)() const = &::clang::FunctionProtoType::isSugared;
    bool  (::clang::FunctionProtoType::*method_pointer_b552e71ca8325038b50bdc98a78040f7)() const = &::clang::FunctionProtoType::isTemplateVariadic;
    bool  (::clang::FunctionProtoType::*method_pointer_a808f188a64a5a3ea9e41de5798ccb65)() const = &::clang::FunctionProtoType::isVariadic;
    boost::python::class_< class ::clang::FunctionProtoType, autowig::HeldType< class ::clang::FunctionProtoType >, boost::python::bases< class ::clang::FunctionType >, boost::noncopyable > class_ee4ed14ebca95be7b6de45571cde69c6("FunctionProtoType", "", boost::python::no_init);
    class_ee4ed14ebca95be7b6de45571cde69c6.def("classof", method_pointer_4d892ad021ec58c2be20e60fccf32d21, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("desugar", method_pointer_fb042e466de95ea78b1c569c13785dba, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_exception_spec_decl", method_pointer_0657025a65b651a095bce1270344dc9f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_exception_spec_template", method_pointer_701d469ba4c9549f852459108451c10d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_exception_type", method_pointer_06b3a899ebc75fa19268893816794cba, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_num_exceptions", method_pointer_3bc2438253b455d6a97bda0c5a7c942f, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_num_params", method_pointer_771d1334fbc25b678338c7952bbd0584, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_param_type", method_pointer_606a68a995d45dceaee94cd59add6dcd, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("get_type_quals", method_pointer_aa5b89440cdb5906a0cccd79d8b5df66, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_any_consumed_params", method_pointer_5f191fb8f84655b988ca3f2683db5d2e, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_dependent_exception_spec", method_pointer_1e25b4b9064d5f74ad679dd4ce41b7a3, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_dynamic_exception_spec", method_pointer_a1395b1c8a0c54818548ed4c73910ec2, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_exception_spec", method_pointer_0374e4bafdcf57e7826fd08e547c90ad, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_noexcept_exception_spec", method_pointer_1ef4afea88e75da597226555bb8d8fd3, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("has_trailing_return", method_pointer_2aa147cf16f65f7db61424c9c1dc80a1, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_param_consumed", method_pointer_195a0dd696f15d73bd3d582af8c12454, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_sugared", method_pointer_9e876d692d595a548b6f97f3f7fedfd8, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_template_variadic", method_pointer_b552e71ca8325038b50bdc98a78040f7, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.def("is_variadic", method_pointer_a808f188a64a5a3ea9e41de5798ccb65, "");
    class_ee4ed14ebca95be7b6de45571cde69c6.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::FunctionProtoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::FunctionProtoType >, autowig::HeldType< class ::clang::FunctionType > >();
    }

}