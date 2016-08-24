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
    class ::clang::SourceLocation  (*method_pointer_7e926dfa325855c28b3308da0f3fccc6)(unsigned int ) = ::clang::SourceLocation::getFromRawEncoding;
    class ::clang::SourceLocation  (::clang::SourceLocation::*method_pointer_1a9fc5b05ab55f7ea4b86a71958c1c6d)(int ) const = &::clang::SourceLocation::getLocWithOffset;
    unsigned int  (::clang::SourceLocation::*method_pointer_d967d75a8fba55ebb916f86ded772c9c)() const = &::clang::SourceLocation::getRawEncoding;
    bool  (::clang::SourceLocation::*method_pointer_06d0c357f7d752378280bdf8eb14aab2)() const = &::clang::SourceLocation::isFileID;
    bool  (::clang::SourceLocation::*method_pointer_f671227b46445497b1ff90120c35a341)() const = &::clang::SourceLocation::isInvalid;
    bool  (::clang::SourceLocation::*method_pointer_901c1050df0658bd84483df4d45935c7)() const = &::clang::SourceLocation::isMacroID;
    bool  (::clang::SourceLocation::*method_pointer_ec36b3363ade5db7abb63c58a03afda5)() const = &::clang::SourceLocation::isValid;
    struct function_group
    {
        static bool  function_4774b3bcf9975bba851912c804172ed6(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator==(parameter_0, parameter_1); }
        static bool  function_c473155f429e5a18b64ac9abe1538f48(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator<(parameter_0, parameter_1); }
        static bool  function_2611fba3457150caa5afcbeb3b409e89(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator!=(parameter_0, parameter_1); }
    };
    boost::python::class_< class ::clang::SourceLocation, autowig::HeldType< class ::clang::SourceLocation > > class_3bb72e110333506a85ff3706c82d0672("SourceLocation", "", boost::python::no_init);
    class_3bb72e110333506a85ff3706c82d0672.def("get_from_raw_encoding", method_pointer_7e926dfa325855c28b3308da0f3fccc6, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_loc_with_offset", method_pointer_1a9fc5b05ab55f7ea4b86a71958c1c6d, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_raw_encoding", method_pointer_d967d75a8fba55ebb916f86ded772c9c, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_file_id", method_pointer_06d0c357f7d752378280bdf8eb14aab2, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_invalid", method_pointer_f671227b46445497b1ff90120c35a341, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_macro_id", method_pointer_901c1050df0658bd84483df4d45935c7, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_valid", method_pointer_ec36b3363ade5db7abb63c58a03afda5, "");
    class_3bb72e110333506a85ff3706c82d0672.staticmethod("get_from_raw_encoding");
    class_3bb72e110333506a85ff3706c82d0672.def("__eq__", function_group::function_4774b3bcf9975bba851912c804172ed6, "");
    class_3bb72e110333506a85ff3706c82d0672.def("__lt__", function_group::function_c473155f429e5a18b64ac9abe1538f48, "");
    class_3bb72e110333506a85ff3706c82d0672.def("__neq__", function_group::function_2611fba3457150caa5afcbeb3b409e89, "");

}