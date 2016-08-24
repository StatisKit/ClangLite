#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_c135a712d4ea5ecca5fd38e224a91e4a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::TemplateArgument::*method_pointer_69645705a06c52528ee3b3df7fa49fb4)() const = &::clang::TemplateArgument::containsUnexpandedParameterPack;
    class ::clang::ValueDecl  * (::clang::TemplateArgument::*method_pointer_f2a8cf9ae5b85a1985653a42a69e22d0)() const = &::clang::TemplateArgument::getAsDecl;
    class ::clang::QualType  (::clang::TemplateArgument::*method_pointer_7649a08dfa5b556ead90360c04d881af)() const = &::clang::TemplateArgument::getAsType;
    class ::clang::TemplateArgument  (*method_pointer_eb2f784c74d95a0cbb003d4456314401)() = ::clang::TemplateArgument::getEmptyPack;
    class ::clang::QualType  (::clang::TemplateArgument::*method_pointer_185e9db0c43a51d39f5f5bdfc3150e7d)() const = &::clang::TemplateArgument::getIntegralType;
    enum ::clang::TemplateArgument::ArgKind  (::clang::TemplateArgument::*method_pointer_b6323fecc5565a7f9aac8a38b94aeb2d)() const = &::clang::TemplateArgument::getKind;
    class ::clang::QualType  (::clang::TemplateArgument::*method_pointer_0d81d7a5654c578db3e2c812eb50bb5e)() const = &::clang::TemplateArgument::getNullPtrType;
    class ::clang::TemplateArgument  (::clang::TemplateArgument::*method_pointer_6c7e982cd2325b2b98b0df3d50f90b63)() const = &::clang::TemplateArgument::getPackExpansionPattern;
    class ::clang::QualType  (::clang::TemplateArgument::*method_pointer_b782d1e361e153d18e3cb057649612e8)() const = &::clang::TemplateArgument::getParamTypeForDecl;
    bool  (::clang::TemplateArgument::*method_pointer_9e8cd43ccffa50118db88a9329902441)() const = &::clang::TemplateArgument::isDependent;
    bool  (::clang::TemplateArgument::*method_pointer_0d89a2d7420b5a2dbcf9b0355e4b81ac)() const = &::clang::TemplateArgument::isInstantiationDependent;
    bool  (::clang::TemplateArgument::*method_pointer_1dce16acdbb55306a32f63eb17de87bf)() const = &::clang::TemplateArgument::isNull;
    bool  (::clang::TemplateArgument::*method_pointer_abc1ea5984535120b2d8240f4afad373)() const = &::clang::TemplateArgument::isPackExpansion;
    unsigned int  (::clang::TemplateArgument::*method_pointer_d2fd47e33029559987d9acac8b4b5e3d)() const = &::clang::TemplateArgument::pack_size;
    void  (::clang::TemplateArgument::*method_pointer_ab314b7dd3a251759dec71f8a6b10520)(class ::clang::QualType ) = &::clang::TemplateArgument::setIntegralType;
    bool  (::clang::TemplateArgument::*method_pointer_82bde60a3c325d7ba1fdebd910ae8c71)(class ::clang::TemplateArgument  const &) const = &::clang::TemplateArgument::structurallyEquals;
    struct function_group
    {
        static class ::boost::python::str  function_50700b2a4e9c574788cbe3e872885602(class ::clang::TemplateArgument  * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::TemplateArgument, autowig::HeldType< class ::clang::TemplateArgument >, boost::noncopyable > class_c135a712d4ea5ecca5fd38e224a91e4a("TemplateArgument", "", boost::python::no_init);
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("contains_unexpanded_parameter_pack", method_pointer_69645705a06c52528ee3b3df7fa49fb4, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_as_decl", method_pointer_f2a8cf9ae5b85a1985653a42a69e22d0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_as_type", method_pointer_7649a08dfa5b556ead90360c04d881af, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_empty_pack", method_pointer_eb2f784c74d95a0cbb003d4456314401, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_integral_type", method_pointer_185e9db0c43a51d39f5f5bdfc3150e7d, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_kind", method_pointer_b6323fecc5565a7f9aac8a38b94aeb2d, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_null_ptr_type", method_pointer_0d81d7a5654c578db3e2c812eb50bb5e, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_pack_expansion_pattern", method_pointer_6c7e982cd2325b2b98b0df3d50f90b63, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_param_type_for_decl", method_pointer_b782d1e361e153d18e3cb057649612e8, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_dependent", method_pointer_9e8cd43ccffa50118db88a9329902441, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_instantiation_dependent", method_pointer_0d89a2d7420b5a2dbcf9b0355e4b81ac, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_null", method_pointer_1dce16acdbb55306a32f63eb17de87bf, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("is_pack_expansion", method_pointer_abc1ea5984535120b2d8240f4afad373, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("pack_size", method_pointer_d2fd47e33029559987d9acac8b4b5e3d, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("set_integral_type", method_pointer_ab314b7dd3a251759dec71f8a6b10520, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("structurally_equals", method_pointer_82bde60a3c325d7ba1fdebd910ae8c71, "");
    class_c135a712d4ea5ecca5fd38e224a91e4a.staticmethod("get_empty_pack");
    class_c135a712d4ea5ecca5fd38e224a91e4a.def("get_name", function_group::function_50700b2a4e9c574788cbe3e872885602, "");

}