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
    unsigned int  (::clang::SourceLocation::*method_pointer_d173ab4008ed5e5181a1fad04aa9cd21)() const = &::clang::SourceLocation::getRawEncoding;
    bool  (::clang::SourceLocation::*method_pointer_b90a7f6beda357009cbef9e9b968b25f)() const = &::clang::SourceLocation::isFileID;
    bool  (::clang::SourceLocation::*method_pointer_50086cdd9ff551c09f3a72fce3da4188)() const = &::clang::SourceLocation::isInvalid;
    bool  (::clang::SourceLocation::*method_pointer_c6f13754703f5e42978210dadd63acb5)() const = &::clang::SourceLocation::isMacroID;
    bool  (::clang::SourceLocation::*method_pointer_9ef19e610cd459e8823aeb16ec9d03c6)() const = &::clang::SourceLocation::isValid;
    boost::python::class_< class ::clang::SourceLocation, autowig::HeldType< class ::clang::SourceLocation >, boost::noncopyable > class_3bb72e110333506a85ff3706c82d0672("SourceLocation", "", boost::python::no_init);
    class_3bb72e110333506a85ff3706c82d0672.def("get_raw_encoding", method_pointer_d173ab4008ed5e5181a1fad04aa9cd21, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_file_id", method_pointer_b90a7f6beda357009cbef9e9b968b25f, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_invalid", method_pointer_50086cdd9ff551c09f3a72fce3da4188, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_macro_id", method_pointer_c6f13754703f5e42978210dadd63acb5, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_valid", method_pointer_9ef19e610cd459e8823aeb16ec9d03c6, "");

}