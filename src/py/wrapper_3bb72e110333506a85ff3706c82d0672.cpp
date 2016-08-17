#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_3bb72e110333506a85ff3706c82d0672()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::SourceLocation::*method_pointer_3198d1439f105d238317f1e420be2a9d)() const = &::clang::SourceLocation::isFileID;
    unsigned int  (::clang::SourceLocation::*method_pointer_06deebdcee8f52c6ae609c863c444729)() const = &::clang::SourceLocation::getRawEncoding;
    bool  (::clang::SourceLocation::*method_pointer_79dfeb13c77a530facd6ebd19dd9cd49)() const = &::clang::SourceLocation::isMacroID;
    bool  (::clang::SourceLocation::*method_pointer_ba8118fb48ec5faa9adca2db986d65c2)() const = &::clang::SourceLocation::isInvalid;
    bool  (::clang::SourceLocation::*method_pointer_0a8cf1a93a475895ba985f546219f5ec)() const = &::clang::SourceLocation::isValid;
    boost::python::class_< class ::clang::SourceLocation, autowig::HeldType< class ::clang::SourceLocation >, boost::noncopyable > class_3bb72e110333506a85ff3706c82d0672("SourceLocation", "", boost::python::no_init);
    class_3bb72e110333506a85ff3706c82d0672.def("is_file_id", method_pointer_3198d1439f105d238317f1e420be2a9d, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_raw_encoding", method_pointer_06deebdcee8f52c6ae609c863c444729, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_macro_id", method_pointer_79dfeb13c77a530facd6ebd19dd9cd49, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_invalid", method_pointer_ba8118fb48ec5faa9adca2db986d65c2, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_valid", method_pointer_0a8cf1a93a475895ba985f546219f5ec, "");

}