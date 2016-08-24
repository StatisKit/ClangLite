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
    class ::clang::SourceLocation  (*method_pointer_0f986213528c588995bc637965ebed56)(unsigned int ) = ::clang::SourceLocation::getFromRawEncoding;
    class ::clang::SourceLocation  (::clang::SourceLocation::*method_pointer_bde6254b6f485654ac63e9a54c1b5dcf)(int ) const = &::clang::SourceLocation::getLocWithOffset;
    unsigned int  (::clang::SourceLocation::*method_pointer_af947bf5828b58bf8c62963ef375ecfe)() const = &::clang::SourceLocation::getRawEncoding;
    bool  (::clang::SourceLocation::*method_pointer_402fe3b129c159c1ba464815470713e1)() const = &::clang::SourceLocation::isFileID;
    bool  (::clang::SourceLocation::*method_pointer_b4dab8b4cc0f5c038a89ad5ccfac933d)() const = &::clang::SourceLocation::isInvalid;
    bool  (::clang::SourceLocation::*method_pointer_3db6db5f287f5617aadaf938b266577a)() const = &::clang::SourceLocation::isMacroID;
    bool  (::clang::SourceLocation::*method_pointer_d933536821525324aad87f5e988d1c75)() const = &::clang::SourceLocation::isValid;
    struct function_group
    {
        static bool  function_ff77e643b8655105a345b699aeffd775(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator<(parameter_0, parameter_1); }
        static bool  function_ca01d3a8d26855529f9b9de19b23ca12(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator==(parameter_0, parameter_1); }
        static bool  function_11dd2c1ab0f651399c91ffa86e66856b(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator!=(parameter_0, parameter_1); }
    };
    boost::python::class_< class ::clang::SourceLocation, autowig::HeldType< class ::clang::SourceLocation > > class_3bb72e110333506a85ff3706c82d0672("SourceLocation", "", boost::python::no_init);
    class_3bb72e110333506a85ff3706c82d0672.def("get_from_raw_encoding", method_pointer_0f986213528c588995bc637965ebed56, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_loc_with_offset", method_pointer_bde6254b6f485654ac63e9a54c1b5dcf, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_raw_encoding", method_pointer_af947bf5828b58bf8c62963ef375ecfe, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_file_id", method_pointer_402fe3b129c159c1ba464815470713e1, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_invalid", method_pointer_b4dab8b4cc0f5c038a89ad5ccfac933d, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_macro_id", method_pointer_3db6db5f287f5617aadaf938b266577a, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_valid", method_pointer_d933536821525324aad87f5e988d1c75, "");
    class_3bb72e110333506a85ff3706c82d0672.staticmethod("get_from_raw_encoding");
    class_3bb72e110333506a85ff3706c82d0672.def("__lt__", function_group::function_ff77e643b8655105a345b699aeffd775, "");
    class_3bb72e110333506a85ff3706c82d0672.def("__eq__", function_group::function_ca01d3a8d26855529f9b9de19b23ca12, "");
    class_3bb72e110333506a85ff3706c82d0672.def("__neq__", function_group::function_11dd2c1ab0f651399c91ffa86e66856b, "");

}