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
    class ::clang::SourceLocation  (*method_pointer_fad0f2936ebf563b98349097ca8ca6e8)(unsigned int ) = ::clang::SourceLocation::getFromRawEncoding;
    class ::clang::SourceLocation  (::clang::SourceLocation::*method_pointer_bd5f666126fb5c5fb8fc3b65e25cb66b)(int ) const = &::clang::SourceLocation::getLocWithOffset;
    unsigned int  (::clang::SourceLocation::*method_pointer_06ae1a8869965aed8791414b9af5cec2)() const = &::clang::SourceLocation::getRawEncoding;
    bool  (::clang::SourceLocation::*method_pointer_243a5a42ec295e979354c594b7dffa65)() const = &::clang::SourceLocation::isFileID;
    bool  (::clang::SourceLocation::*method_pointer_9022f75fbd215cca87ae88c5479906d9)() const = &::clang::SourceLocation::isInvalid;
    bool  (::clang::SourceLocation::*method_pointer_9340d83ec03453af9671171583b87318)() const = &::clang::SourceLocation::isMacroID;
    bool  (::clang::SourceLocation::*method_pointer_0e06bcbce4c35166ab3db8a51acbcdeb)() const = &::clang::SourceLocation::isValid;
    struct function_group
    {
        static bool  function_8eb99192868e59c2b0276b26f69dd9c5(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator!=(parameter_0, parameter_1); }
        static bool  function_3aeb656479d9532f875fe278157afe51(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator==(parameter_0, parameter_1); }
        static bool  function_3bf1989534f151b09eaf150534d47521(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator<(parameter_0, parameter_1); }
    };
    boost::python::class_< class ::clang::SourceLocation, autowig::HeldType< class ::clang::SourceLocation > > class_3bb72e110333506a85ff3706c82d0672("SourceLocation", "", boost::python::no_init);
    class_3bb72e110333506a85ff3706c82d0672.def("get_from_raw_encoding", method_pointer_fad0f2936ebf563b98349097ca8ca6e8, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_loc_with_offset", method_pointer_bd5f666126fb5c5fb8fc3b65e25cb66b, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_raw_encoding", method_pointer_06ae1a8869965aed8791414b9af5cec2, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_file_id", method_pointer_243a5a42ec295e979354c594b7dffa65, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_invalid", method_pointer_9022f75fbd215cca87ae88c5479906d9, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_macro_id", method_pointer_9340d83ec03453af9671171583b87318, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_valid", method_pointer_0e06bcbce4c35166ab3db8a51acbcdeb, "");
    class_3bb72e110333506a85ff3706c82d0672.staticmethod("get_from_raw_encoding");
    class_3bb72e110333506a85ff3706c82d0672.def("__neq__", function_group::function_8eb99192868e59c2b0276b26f69dd9c5, "");
    class_3bb72e110333506a85ff3706c82d0672.def("__eq__", function_group::function_3aeb656479d9532f875fe278157afe51, "");
    class_3bb72e110333506a85ff3706c82d0672.def("__lt__", function_group::function_3bf1989534f151b09eaf150534d47521, "");

}