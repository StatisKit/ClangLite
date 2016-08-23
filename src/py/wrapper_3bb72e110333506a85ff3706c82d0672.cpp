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
    class ::clang::SourceLocation  (*method_pointer_a6733f18af835dd996947c7667756336)(unsigned int ) = ::clang::SourceLocation::getFromRawEncoding;
    class ::clang::SourceLocation  (::clang::SourceLocation::*method_pointer_4ef5b4cf66ef524f88488a8fc13babf1)(int ) const = &::clang::SourceLocation::getLocWithOffset;
    unsigned int  (::clang::SourceLocation::*method_pointer_41a3c6960bce5d7c8f2ad5c4de0399fa)() const = &::clang::SourceLocation::getRawEncoding;
    bool  (::clang::SourceLocation::*method_pointer_7aac3d7f54a75ffdab67d45c409f67e4)() const = &::clang::SourceLocation::isFileID;
    bool  (::clang::SourceLocation::*method_pointer_a26e49e28466592aac369676149db493)() const = &::clang::SourceLocation::isInvalid;
    bool  (::clang::SourceLocation::*method_pointer_96b3e5ad0201584e86ac0e52b50c8f7c)() const = &::clang::SourceLocation::isMacroID;
    bool  (::clang::SourceLocation::*method_pointer_f1babf6f3b4c55ce85753ebbc3c9fe6f)() const = &::clang::SourceLocation::isValid;
    struct function_group
    {
        static bool  function_0f3d088b7b7d5258a639c9748abed343(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator==(parameter_0, parameter_1); }
        static bool  function_07748d604930599d8d694f45f4529c0f(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator<(parameter_0, parameter_1); }
        static bool  function_07f3f9f20be355109734f7ef11af2fa7(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator!=(parameter_0, parameter_1); }
    };
    boost::python::class_< class ::clang::SourceLocation, autowig::HeldType< class ::clang::SourceLocation > > class_3bb72e110333506a85ff3706c82d0672("SourceLocation", "", boost::python::no_init);
    class_3bb72e110333506a85ff3706c82d0672.def("get_from_raw_encoding", method_pointer_a6733f18af835dd996947c7667756336, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_loc_with_offset", method_pointer_4ef5b4cf66ef524f88488a8fc13babf1, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_raw_encoding", method_pointer_41a3c6960bce5d7c8f2ad5c4de0399fa, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_file_id", method_pointer_7aac3d7f54a75ffdab67d45c409f67e4, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_invalid", method_pointer_a26e49e28466592aac369676149db493, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_macro_id", method_pointer_96b3e5ad0201584e86ac0e52b50c8f7c, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_valid", method_pointer_f1babf6f3b4c55ce85753ebbc3c9fe6f, "");
    class_3bb72e110333506a85ff3706c82d0672.staticmethod("get_from_raw_encoding");
    class_3bb72e110333506a85ff3706c82d0672.def("__eq__", function_group::function_0f3d088b7b7d5258a639c9748abed343, "");
    class_3bb72e110333506a85ff3706c82d0672.def("__lt__", function_group::function_07748d604930599d8d694f45f4529c0f, "");
    class_3bb72e110333506a85ff3706c82d0672.def("__neq__", function_group::function_07f3f9f20be355109734f7ef11af2fa7, "");

}