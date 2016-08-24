#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_3bb72e110333506a85ff3706c82d0672()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::SourceLocation  (*method_pointer_a968f01c00e2544dafba8162236cd070)(unsigned int ) = ::clang::SourceLocation::getFromRawEncoding;
    class ::clang::SourceLocation  (::clang::SourceLocation::*method_pointer_35fa23317b6a50399ffe5fae265f01cb)(int ) const = &::clang::SourceLocation::getLocWithOffset;
    unsigned int  (::clang::SourceLocation::*method_pointer_037618a33a405a34806db7fba6967f26)() const = &::clang::SourceLocation::getRawEncoding;
    bool  (::clang::SourceLocation::*method_pointer_48e3b9a5792d5db4ada1abd824806ada)() const = &::clang::SourceLocation::isFileID;
    bool  (::clang::SourceLocation::*method_pointer_69f4569e95b05957908a9f4d65644c61)() const = &::clang::SourceLocation::isInvalid;
    bool  (::clang::SourceLocation::*method_pointer_0916467b0bf255488d9c3c3a96b9f8a6)() const = &::clang::SourceLocation::isMacroID;
    bool  (::clang::SourceLocation::*method_pointer_2729a38871b25348adc3c30da483cd1d)() const = &::clang::SourceLocation::isValid;
    struct function_group
    {
        static bool  function_3423c1a49cc054a3a7fbf251d488ebf4(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator<(parameter_0, parameter_1); }
        static bool  function_72cb4582fe385e419c95f30c97568c85(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator!=(parameter_0, parameter_1); }
        static bool  function_278eb1ec9e5b5eedbb813938af38d1e6(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator==(parameter_0, parameter_1); }
    };
    boost::python::class_< class ::clang::SourceLocation, autowig::HeldType< class ::clang::SourceLocation > > class_3bb72e110333506a85ff3706c82d0672("SourceLocation", "", boost::python::no_init);
    class_3bb72e110333506a85ff3706c82d0672.def("get_from_raw_encoding", method_pointer_a968f01c00e2544dafba8162236cd070, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_loc_with_offset", method_pointer_35fa23317b6a50399ffe5fae265f01cb, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_raw_encoding", method_pointer_037618a33a405a34806db7fba6967f26, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_file_id", method_pointer_48e3b9a5792d5db4ada1abd824806ada, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_invalid", method_pointer_69f4569e95b05957908a9f4d65644c61, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_macro_id", method_pointer_0916467b0bf255488d9c3c3a96b9f8a6, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_valid", method_pointer_2729a38871b25348adc3c30da483cd1d, "");
    class_3bb72e110333506a85ff3706c82d0672.staticmethod("get_from_raw_encoding");
    class_3bb72e110333506a85ff3706c82d0672.def("__lt__", function_group::function_3423c1a49cc054a3a7fbf251d488ebf4, "");
    class_3bb72e110333506a85ff3706c82d0672.def("__neq__", function_group::function_72cb4582fe385e419c95f30c97568c85, "");
    class_3bb72e110333506a85ff3706c82d0672.def("__eq__", function_group::function_278eb1ec9e5b5eedbb813938af38d1e6, "");

}