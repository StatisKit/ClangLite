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
    class ::clang::SourceLocation  (*method_pointer_5eb431d3d4b255f0a3a9d896a7753133)(unsigned int ) = ::clang::SourceLocation::getFromRawEncoding;
    class ::clang::SourceLocation  (::clang::SourceLocation::*method_pointer_156064808a4c5974b14a6304b0700362)(int ) const = &::clang::SourceLocation::getLocWithOffset;
    unsigned int  (::clang::SourceLocation::*method_pointer_2de198de334a53279ce0bc3343a739ea)() const = &::clang::SourceLocation::getRawEncoding;
    bool  (::clang::SourceLocation::*method_pointer_c0fc5e54645e53b181110b804ca4420e)() const = &::clang::SourceLocation::isFileID;
    bool  (::clang::SourceLocation::*method_pointer_b08ae2b0e74e5a218022fa34c4ba8175)() const = &::clang::SourceLocation::isInvalid;
    bool  (::clang::SourceLocation::*method_pointer_d30c9e7cef015b97af14abbadab2f917)() const = &::clang::SourceLocation::isMacroID;
    bool  (::clang::SourceLocation::*method_pointer_7bc61cfd0f97510aae589d6a91c16512)() const = &::clang::SourceLocation::isValid;
    struct function_group
    {
        static bool  function_6c6af409c4c653d7b96ac8c77395bd47(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator<(parameter_0, parameter_1); }
        static bool  function_a81ca1f5cf3b5c68b02f41635045c2ed(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator==(parameter_0, parameter_1); }
        static bool  function_c74373ea2ba3515a8656fed3b5cb0d1e(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator!=(parameter_0, parameter_1); }
    };
    boost::python::class_< class ::clang::SourceLocation, autowig::HeldType< class ::clang::SourceLocation > > class_3bb72e110333506a85ff3706c82d0672("SourceLocation", "", boost::python::no_init);
    class_3bb72e110333506a85ff3706c82d0672.def("get_from_raw_encoding", method_pointer_5eb431d3d4b255f0a3a9d896a7753133, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_loc_with_offset", method_pointer_156064808a4c5974b14a6304b0700362, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_raw_encoding", method_pointer_2de198de334a53279ce0bc3343a739ea, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_file_id", method_pointer_c0fc5e54645e53b181110b804ca4420e, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_invalid", method_pointer_b08ae2b0e74e5a218022fa34c4ba8175, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_macro_id", method_pointer_d30c9e7cef015b97af14abbadab2f917, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_valid", method_pointer_7bc61cfd0f97510aae589d6a91c16512, "");
    class_3bb72e110333506a85ff3706c82d0672.staticmethod("get_from_raw_encoding");
    class_3bb72e110333506a85ff3706c82d0672.def("__lt__", function_group::function_6c6af409c4c653d7b96ac8c77395bd47, "");
    class_3bb72e110333506a85ff3706c82d0672.def("__eq__", function_group::function_a81ca1f5cf3b5c68b02f41635045c2ed, "");
    class_3bb72e110333506a85ff3706c82d0672.def("__neq__", function_group::function_c74373ea2ba3515a8656fed3b5cb0d1e, "");

}