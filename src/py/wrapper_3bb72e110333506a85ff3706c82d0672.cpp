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
    void  (::clang::SourceLocation::*method_pointer_a0197906d5d95c5280e84e529d6467cf)(class ::clang::SourceManager  const &) const = &::clang::SourceLocation::dump;
    class ::clang::SourceLocation  (*method_pointer_67902e2a6b235bc08870877d52110019)(unsigned int ) = ::clang::SourceLocation::getFromRawEncoding;
    class ::clang::SourceLocation  (::clang::SourceLocation::*method_pointer_f4d8d93165a25eeb920ef9b645771375)(int ) const = &::clang::SourceLocation::getLocWithOffset;
    unsigned int  (::clang::SourceLocation::*method_pointer_00103279dc275b25bd3fecdd1f4b516c)() const = &::clang::SourceLocation::getRawEncoding;
    bool  (::clang::SourceLocation::*method_pointer_af58b40a34db5d328d17923d86bfae7a)() const = &::clang::SourceLocation::isFileID;
    bool  (::clang::SourceLocation::*method_pointer_719c7a98e4995972a0d597e9f881f63a)() const = &::clang::SourceLocation::isInvalid;
    bool  (::clang::SourceLocation::*method_pointer_a51f462561165261b86f95164588d629)() const = &::clang::SourceLocation::isMacroID;
    bool  (::clang::SourceLocation::*method_pointer_ddaf761f7d945d5c837d57be897d5ba9)() const = &::clang::SourceLocation::isValid;
    int  (::clang::SourceLocation::*method_pointer_a923bb6c9e78519681a978c807daff01)(class ::clang::SourceManager  const &) const = &::clang::SourceLocation::printToString;
    struct function_group
    {
        static bool  function_dc991eed3bdf52bb942bc108d799f8b3(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator==(parameter_0, parameter_1); }
        static bool  function_2be5637c8fe659fca1a298ff034927bc(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator!=(parameter_0, parameter_1); }
        static bool  function_c0d193927dd55770934b142fa321ca2b(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator<(parameter_0, parameter_1); }
    };
    boost::python::class_< class ::clang::SourceLocation, autowig::HeldType< class ::clang::SourceLocation > > class_3bb72e110333506a85ff3706c82d0672("SourceLocation", "", boost::python::no_init);
    class_3bb72e110333506a85ff3706c82d0672.def("dump", method_pointer_a0197906d5d95c5280e84e529d6467cf, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_from_raw_encoding", method_pointer_67902e2a6b235bc08870877d52110019, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_loc_with_offset", method_pointer_f4d8d93165a25eeb920ef9b645771375, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_raw_encoding", method_pointer_00103279dc275b25bd3fecdd1f4b516c, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_file_id", method_pointer_af58b40a34db5d328d17923d86bfae7a, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_invalid", method_pointer_719c7a98e4995972a0d597e9f881f63a, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_macro_id", method_pointer_a51f462561165261b86f95164588d629, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_valid", method_pointer_ddaf761f7d945d5c837d57be897d5ba9, "");
    class_3bb72e110333506a85ff3706c82d0672.def("print_to_string", method_pointer_a923bb6c9e78519681a978c807daff01, "");
    class_3bb72e110333506a85ff3706c82d0672.staticmethod("get_from_raw_encoding");
    class_3bb72e110333506a85ff3706c82d0672.def("__eq__", function_group::function_dc991eed3bdf52bb942bc108d799f8b3, "");
    class_3bb72e110333506a85ff3706c82d0672.def("__neq__", function_group::function_2be5637c8fe659fca1a298ff034927bc, "");
    class_3bb72e110333506a85ff3706c82d0672.def("__lt__", function_group::function_c0d193927dd55770934b142fa321ca2b, "");

}