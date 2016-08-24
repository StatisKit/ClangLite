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
    class ::clang::SourceLocation  (*method_pointer_58bad911a93b5a6a9a41277a81dc81eb)(unsigned int ) = ::clang::SourceLocation::getFromRawEncoding;
    class ::clang::SourceLocation  (::clang::SourceLocation::*method_pointer_b79d891477e15e80a163f45064f58ed8)(int ) const = &::clang::SourceLocation::getLocWithOffset;
    unsigned int  (::clang::SourceLocation::*method_pointer_0111d30775db53f89d3eb3bb19e9548b)() const = &::clang::SourceLocation::getRawEncoding;
    bool  (::clang::SourceLocation::*method_pointer_f780cf397b4154b2b78b0f15e159b27f)() const = &::clang::SourceLocation::isFileID;
    bool  (::clang::SourceLocation::*method_pointer_5b30f11b799c56fcacbda936046f5388)() const = &::clang::SourceLocation::isInvalid;
    bool  (::clang::SourceLocation::*method_pointer_aeecfbdb508a52bcb75b2d5b8df9b97f)() const = &::clang::SourceLocation::isMacroID;
    bool  (::clang::SourceLocation::*method_pointer_27ecbc2333725a8b8f959343671a3a49)() const = &::clang::SourceLocation::isValid;
    struct function_group
    {
        static bool  function_39e513aa7ab454e0a9d347f4dcaa5fbd(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator!=(parameter_0, parameter_1); }
        static bool  function_c3e930acd4f851a0ad8db99b8442a50a(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator==(parameter_0, parameter_1); }
        static bool  function_d410499280cc530b90edf3d8a1932b8d(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator<(parameter_0, parameter_1); }
    };
    boost::python::class_< class ::clang::SourceLocation, autowig::HeldType< class ::clang::SourceLocation > > class_3bb72e110333506a85ff3706c82d0672("SourceLocation", "", boost::python::no_init);
    class_3bb72e110333506a85ff3706c82d0672.def("get_from_raw_encoding", method_pointer_58bad911a93b5a6a9a41277a81dc81eb, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_loc_with_offset", method_pointer_b79d891477e15e80a163f45064f58ed8, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_raw_encoding", method_pointer_0111d30775db53f89d3eb3bb19e9548b, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_file_id", method_pointer_f780cf397b4154b2b78b0f15e159b27f, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_invalid", method_pointer_5b30f11b799c56fcacbda936046f5388, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_macro_id", method_pointer_aeecfbdb508a52bcb75b2d5b8df9b97f, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_valid", method_pointer_27ecbc2333725a8b8f959343671a3a49, "");
    class_3bb72e110333506a85ff3706c82d0672.staticmethod("get_from_raw_encoding");
    class_3bb72e110333506a85ff3706c82d0672.def("__neq__", function_group::function_39e513aa7ab454e0a9d347f4dcaa5fbd, "");
    class_3bb72e110333506a85ff3706c82d0672.def("__eq__", function_group::function_c3e930acd4f851a0ad8db99b8442a50a, "");
    class_3bb72e110333506a85ff3706c82d0672.def("__lt__", function_group::function_d410499280cc530b90edf3d8a1932b8d, "");

}