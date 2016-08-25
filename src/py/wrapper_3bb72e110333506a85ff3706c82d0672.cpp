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
    class ::clang::SourceLocation  (*method_pointer_493e9095caf15193a3b416c342b174bf)(unsigned int ) = ::clang::SourceLocation::getFromRawEncoding;
    class ::clang::SourceLocation  (::clang::SourceLocation::*method_pointer_3c50e592ca625d2aadd449eefe0e2b67)(int ) const = &::clang::SourceLocation::getLocWithOffset;
    unsigned int  (::clang::SourceLocation::*method_pointer_c479dec66970540391f92c6083cdd1aa)() const = &::clang::SourceLocation::getRawEncoding;
    bool  (::clang::SourceLocation::*method_pointer_2a0d0dccbe015911a0230eaee5e607b4)() const = &::clang::SourceLocation::isFileID;
    bool  (::clang::SourceLocation::*method_pointer_269a330622c35620b5ff306c0ddb8572)() const = &::clang::SourceLocation::isInvalid;
    bool  (::clang::SourceLocation::*method_pointer_c16801035d5250a78ae7a38b1087af6b)() const = &::clang::SourceLocation::isMacroID;
    bool  (::clang::SourceLocation::*method_pointer_f824f4ec35a754fba48a828d75b24508)() const = &::clang::SourceLocation::isValid;
    struct function_group
    {
        static bool  function_89ddf144b31159779e44fecfa2043a17(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator<(parameter_0, parameter_1); }
        static bool  function_aeb430032ef558f3bd9569dad2344fc6(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator!=(parameter_0, parameter_1); }
        static bool  function_a41101fe43ed590890efdc9d6abf9c0e(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator==(parameter_0, parameter_1); }
    };
    boost::python::class_< class ::clang::SourceLocation, autowig::HeldType< class ::clang::SourceLocation > > class_3bb72e110333506a85ff3706c82d0672("SourceLocation", "", boost::python::no_init);
    class_3bb72e110333506a85ff3706c82d0672.def("get_from_raw_encoding", method_pointer_493e9095caf15193a3b416c342b174bf, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_loc_with_offset", method_pointer_3c50e592ca625d2aadd449eefe0e2b67, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_raw_encoding", method_pointer_c479dec66970540391f92c6083cdd1aa, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_file_id", method_pointer_2a0d0dccbe015911a0230eaee5e607b4, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_invalid", method_pointer_269a330622c35620b5ff306c0ddb8572, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_macro_id", method_pointer_c16801035d5250a78ae7a38b1087af6b, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_valid", method_pointer_f824f4ec35a754fba48a828d75b24508, "");
    class_3bb72e110333506a85ff3706c82d0672.staticmethod("get_from_raw_encoding");
    class_3bb72e110333506a85ff3706c82d0672.def("__lt__", function_group::function_89ddf144b31159779e44fecfa2043a17, "");
    class_3bb72e110333506a85ff3706c82d0672.def("__neq__", function_group::function_aeb430032ef558f3bd9569dad2344fc6, "");
    class_3bb72e110333506a85ff3706c82d0672.def("__eq__", function_group::function_a41101fe43ed590890efdc9d6abf9c0e, "");

}