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
    class ::clang::SourceLocation  (*method_pointer_14db72695ff85e19bd0e691af804753d)(unsigned int ) = ::clang::SourceLocation::getFromRawEncoding;
    class ::clang::SourceLocation  (::clang::SourceLocation::*method_pointer_43fe114949ff51e4a584c4a329a214ae)(int ) const = &::clang::SourceLocation::getLocWithOffset;
    unsigned int  (::clang::SourceLocation::*method_pointer_669da9883bbf59b2abb6aadc0afcc67f)() const = &::clang::SourceLocation::getRawEncoding;
    bool  (::clang::SourceLocation::*method_pointer_e658aa1ed8cc5e9e88fa4638b5895a3a)() const = &::clang::SourceLocation::isFileID;
    bool  (::clang::SourceLocation::*method_pointer_eb6bfda541b25aaeb2885d87d9d38d63)() const = &::clang::SourceLocation::isInvalid;
    bool  (::clang::SourceLocation::*method_pointer_5215832e23245d77953f02db2764eeac)() const = &::clang::SourceLocation::isMacroID;
    bool  (::clang::SourceLocation::*method_pointer_0dd9021024195b149ae268eb5f2f9f37)() const = &::clang::SourceLocation::isValid;
    struct function_group
    {
        static bool  function_999723c5b4865380a2971029d476c5a5(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator!=(parameter_0, parameter_1); }
        static bool  function_064cc7e0efdf5e49953055b72cdd32fa(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator<(parameter_0, parameter_1); }
        static bool  function_c3261de479085b9393ad8ecd433aab68(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator==(parameter_0, parameter_1); }
    };
    boost::python::class_< class ::clang::SourceLocation, autowig::HeldType< class ::clang::SourceLocation > > class_3bb72e110333506a85ff3706c82d0672("SourceLocation", "", boost::python::no_init);
    class_3bb72e110333506a85ff3706c82d0672.def("get_from_raw_encoding", method_pointer_14db72695ff85e19bd0e691af804753d, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_loc_with_offset", method_pointer_43fe114949ff51e4a584c4a329a214ae, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_raw_encoding", method_pointer_669da9883bbf59b2abb6aadc0afcc67f, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_file_id", method_pointer_e658aa1ed8cc5e9e88fa4638b5895a3a, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_invalid", method_pointer_eb6bfda541b25aaeb2885d87d9d38d63, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_macro_id", method_pointer_5215832e23245d77953f02db2764eeac, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_valid", method_pointer_0dd9021024195b149ae268eb5f2f9f37, "");
    class_3bb72e110333506a85ff3706c82d0672.staticmethod("get_from_raw_encoding");
    class_3bb72e110333506a85ff3706c82d0672.def("__neq__", function_group::function_999723c5b4865380a2971029d476c5a5, "");
    class_3bb72e110333506a85ff3706c82d0672.def("__lt__", function_group::function_064cc7e0efdf5e49953055b72cdd32fa, "");
    class_3bb72e110333506a85ff3706c82d0672.def("__eq__", function_group::function_c3261de479085b9393ad8ecd433aab68, "");

}