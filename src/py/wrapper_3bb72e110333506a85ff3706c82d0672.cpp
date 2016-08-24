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
    class ::clang::SourceLocation  (*method_pointer_cdd9e2b444595175a3e1dd7ef45bb0a3)(unsigned int ) = ::clang::SourceLocation::getFromRawEncoding;
    class ::clang::SourceLocation  (::clang::SourceLocation::*method_pointer_ce316d12450f570d907f0f0cdcd51b91)(int ) const = &::clang::SourceLocation::getLocWithOffset;
    unsigned int  (::clang::SourceLocation::*method_pointer_9ea698a211115b1bb3ae382ed9aeda5e)() const = &::clang::SourceLocation::getRawEncoding;
    bool  (::clang::SourceLocation::*method_pointer_e6f049e2ed9450f39ce8c8e492530bc5)() const = &::clang::SourceLocation::isFileID;
    bool  (::clang::SourceLocation::*method_pointer_0769eb221e9653ea9342eeb45f113b83)() const = &::clang::SourceLocation::isInvalid;
    bool  (::clang::SourceLocation::*method_pointer_a8af53e0768e550aa88fb65792b61316)() const = &::clang::SourceLocation::isMacroID;
    bool  (::clang::SourceLocation::*method_pointer_f0997f231218570d9308497ff38d3eb0)() const = &::clang::SourceLocation::isValid;
    struct function_group
    {
        static bool  function_94f88f06fec05cc699cf314077e795c9(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator!=(parameter_0, parameter_1); }
        static bool  function_743907443e185ad78f068d65824152d9(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator==(parameter_0, parameter_1); }
        static bool  function_1289731fc1a0512ab717e39e3fc21089(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator<(parameter_0, parameter_1); }
    };
    boost::python::class_< class ::clang::SourceLocation, autowig::HeldType< class ::clang::SourceLocation > > class_3bb72e110333506a85ff3706c82d0672("SourceLocation", "", boost::python::no_init);
    class_3bb72e110333506a85ff3706c82d0672.def("get_from_raw_encoding", method_pointer_cdd9e2b444595175a3e1dd7ef45bb0a3, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_loc_with_offset", method_pointer_ce316d12450f570d907f0f0cdcd51b91, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_raw_encoding", method_pointer_9ea698a211115b1bb3ae382ed9aeda5e, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_file_id", method_pointer_e6f049e2ed9450f39ce8c8e492530bc5, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_invalid", method_pointer_0769eb221e9653ea9342eeb45f113b83, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_macro_id", method_pointer_a8af53e0768e550aa88fb65792b61316, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_valid", method_pointer_f0997f231218570d9308497ff38d3eb0, "");
    class_3bb72e110333506a85ff3706c82d0672.staticmethod("get_from_raw_encoding");
    class_3bb72e110333506a85ff3706c82d0672.def("__neq__", function_group::function_94f88f06fec05cc699cf314077e795c9, "");
    class_3bb72e110333506a85ff3706c82d0672.def("__eq__", function_group::function_743907443e185ad78f068d65824152d9, "");
    class_3bb72e110333506a85ff3706c82d0672.def("__lt__", function_group::function_1289731fc1a0512ab717e39e3fc21089, "");

}