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
    unsigned int  (::clang::SourceLocation::*method_pointer_0249a6b2ef835ac9bc92957f3d207cc4)() const = &::clang::SourceLocation::getRawEncoding;
    bool  (::clang::SourceLocation::*method_pointer_fed1c96463375a05be80ff1e9e04cb37)() const = &::clang::SourceLocation::isFileID;
    bool  (::clang::SourceLocation::*method_pointer_d000a319679d51d1974b910589d254f9)() const = &::clang::SourceLocation::isInvalid;
    bool  (::clang::SourceLocation::*method_pointer_1f0b7f81deaf5a2990e6fe934aa3aa41)() const = &::clang::SourceLocation::isMacroID;
    bool  (::clang::SourceLocation::*method_pointer_c663b4a830e558d9937034bb640610e2)() const = &::clang::SourceLocation::isValid;
    boost::python::class_< class ::clang::SourceLocation, autowig::HeldType< class ::clang::SourceLocation >, boost::noncopyable > class_3bb72e110333506a85ff3706c82d0672("SourceLocation", "", boost::python::no_init);
    class_3bb72e110333506a85ff3706c82d0672.def("get_raw_encoding", method_pointer_0249a6b2ef835ac9bc92957f3d207cc4, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_file_id", method_pointer_fed1c96463375a05be80ff1e9e04cb37, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_invalid", method_pointer_d000a319679d51d1974b910589d254f9, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_macro_id", method_pointer_1f0b7f81deaf5a2990e6fe934aa3aa41, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_valid", method_pointer_c663b4a830e558d9937034bb640610e2, "");

}