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
    class ::clang::SourceLocation  (*method_pointer_e83c4e90e62052138dc8afd3db71a484)(unsigned int ) = ::clang::SourceLocation::getFromRawEncoding;
    class ::clang::SourceLocation  (::clang::SourceLocation::*method_pointer_66d574e728945af2bd30a2e34b046f47)(int ) const = &::clang::SourceLocation::getLocWithOffset;
    unsigned int  (::clang::SourceLocation::*method_pointer_c69db3e790b7588d87f0b119bde19075)() const = &::clang::SourceLocation::getRawEncoding;
    bool  (::clang::SourceLocation::*method_pointer_4c3fa16690ea50c99cb467621fdc176b)() const = &::clang::SourceLocation::isFileID;
    bool  (::clang::SourceLocation::*method_pointer_508be4bb779756d5aacdf819cdd088f9)() const = &::clang::SourceLocation::isInvalid;
    bool  (::clang::SourceLocation::*method_pointer_452cd1819378577484b3deaa5ed3d4b7)() const = &::clang::SourceLocation::isMacroID;
    bool  (::clang::SourceLocation::*method_pointer_364275f2b316526c8a3df78bfc23f5db)() const = &::clang::SourceLocation::isValid;
    struct function_group
    {
        static bool  function_eb1a1eac1ef0505095fcd85a3ddea423(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator==(parameter_0, parameter_1); }
        static bool  function_7d97efd8c8b5573a93994df281ef5051(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator<(parameter_0, parameter_1); }
        static bool  function_f4015164988051b0ac4dba4e13bf2cd9(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator!=(parameter_0, parameter_1); }
    };
    boost::python::class_< class ::clang::SourceLocation, autowig::HeldType< class ::clang::SourceLocation > > class_3bb72e110333506a85ff3706c82d0672("SourceLocation", "", boost::python::no_init);
    class_3bb72e110333506a85ff3706c82d0672.def("get_from_raw_encoding", method_pointer_e83c4e90e62052138dc8afd3db71a484, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_loc_with_offset", method_pointer_66d574e728945af2bd30a2e34b046f47, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_raw_encoding", method_pointer_c69db3e790b7588d87f0b119bde19075, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_file_id", method_pointer_4c3fa16690ea50c99cb467621fdc176b, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_invalid", method_pointer_508be4bb779756d5aacdf819cdd088f9, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_macro_id", method_pointer_452cd1819378577484b3deaa5ed3d4b7, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_valid", method_pointer_364275f2b316526c8a3df78bfc23f5db, "");
    class_3bb72e110333506a85ff3706c82d0672.staticmethod("get_from_raw_encoding");
    class_3bb72e110333506a85ff3706c82d0672.def("__eq__", function_group::function_eb1a1eac1ef0505095fcd85a3ddea423, "");
    class_3bb72e110333506a85ff3706c82d0672.def("__lt__", function_group::function_7d97efd8c8b5573a93994df281ef5051, "");
    class_3bb72e110333506a85ff3706c82d0672.def("__neq__", function_group::function_f4015164988051b0ac4dba4e13bf2cd9, "");

}