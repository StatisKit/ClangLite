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
    class ::clang::SourceLocation  (*method_pointer_e997b1ed29b45492b74cfe228506c8ae)(unsigned int ) = ::clang::SourceLocation::getFromRawEncoding;
    class ::clang::SourceLocation  (::clang::SourceLocation::*method_pointer_6f839ebb636d5de79391cc4ba4a20e6f)(int ) const = &::clang::SourceLocation::getLocWithOffset;
    unsigned int  (::clang::SourceLocation::*method_pointer_fb1df19da0205cffbac767fa12956409)() const = &::clang::SourceLocation::getRawEncoding;
    bool  (::clang::SourceLocation::*method_pointer_8c972b1ebde652aea2d73aa44b81190b)() const = &::clang::SourceLocation::isFileID;
    bool  (::clang::SourceLocation::*method_pointer_10e4b87adcdc5e94aec58ddbee44d39b)() const = &::clang::SourceLocation::isInvalid;
    bool  (::clang::SourceLocation::*method_pointer_8dbaaae9ee4d54a8a54424dbad58fcb2)() const = &::clang::SourceLocation::isMacroID;
    bool  (::clang::SourceLocation::*method_pointer_f85bd678607552f5a7d303dc7809f17a)() const = &::clang::SourceLocation::isValid;
    struct function_group
    {
        static bool  function_1405e0d56dd35bd18597cd7d87d92cd6(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator!=(parameter_0, parameter_1); }
        static bool  function_43e710dcd212504e94ab8e89646da423(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator==(parameter_0, parameter_1); }
        static bool  function_be8291f850655234ac36e75f02dccc1c(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator<(parameter_0, parameter_1); }
    };
    boost::python::class_< class ::clang::SourceLocation, autowig::HeldType< class ::clang::SourceLocation > > class_3bb72e110333506a85ff3706c82d0672("SourceLocation", "", boost::python::no_init);
    class_3bb72e110333506a85ff3706c82d0672.def("get_from_raw_encoding", method_pointer_e997b1ed29b45492b74cfe228506c8ae, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_loc_with_offset", method_pointer_6f839ebb636d5de79391cc4ba4a20e6f, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_raw_encoding", method_pointer_fb1df19da0205cffbac767fa12956409, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_file_id", method_pointer_8c972b1ebde652aea2d73aa44b81190b, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_invalid", method_pointer_10e4b87adcdc5e94aec58ddbee44d39b, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_macro_id", method_pointer_8dbaaae9ee4d54a8a54424dbad58fcb2, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_valid", method_pointer_f85bd678607552f5a7d303dc7809f17a, "");
    class_3bb72e110333506a85ff3706c82d0672.staticmethod("get_from_raw_encoding");
    class_3bb72e110333506a85ff3706c82d0672.def("__neq__", function_group::function_1405e0d56dd35bd18597cd7d87d92cd6, "");
    class_3bb72e110333506a85ff3706c82d0672.def("__eq__", function_group::function_43e710dcd212504e94ab8e89646da423, "");
    class_3bb72e110333506a85ff3706c82d0672.def("__lt__", function_group::function_be8291f850655234ac36e75f02dccc1c, "");

}