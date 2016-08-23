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
    unsigned int  (::clang::SourceLocation::*method_pointer_e6e4691c7294588e99380bcacb0b0395)() const = &::clang::SourceLocation::getRawEncoding;
    bool  (::clang::SourceLocation::*method_pointer_f1360f4cb2b9575d8a7f15cc1e0deb7c)() const = &::clang::SourceLocation::isFileID;
    bool  (::clang::SourceLocation::*method_pointer_a400ac2fbb595649a9e106a4c667c824)() const = &::clang::SourceLocation::isInvalid;
    bool  (::clang::SourceLocation::*method_pointer_4fbc5967c5b35eabb82756b5ff42926c)() const = &::clang::SourceLocation::isMacroID;
    bool  (::clang::SourceLocation::*method_pointer_52f5cdff061f582095d63955183895f6)() const = &::clang::SourceLocation::isValid;
    boost::python::class_< class ::clang::SourceLocation, autowig::HeldType< class ::clang::SourceLocation >, boost::noncopyable > class_3bb72e110333506a85ff3706c82d0672("SourceLocation", "", boost::python::no_init);
    class_3bb72e110333506a85ff3706c82d0672.def("get_raw_encoding", method_pointer_e6e4691c7294588e99380bcacb0b0395, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_file_id", method_pointer_f1360f4cb2b9575d8a7f15cc1e0deb7c, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_invalid", method_pointer_a400ac2fbb595649a9e106a4c667c824, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_macro_id", method_pointer_4fbc5967c5b35eabb82756b5ff42926c, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_valid", method_pointer_52f5cdff061f582095d63955183895f6, "");

}