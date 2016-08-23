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
    unsigned int  (::clang::SourceLocation::*method_pointer_50753b429dad5eeabfa24eb8ae695d9f)() const = &::clang::SourceLocation::getRawEncoding;
    bool  (::clang::SourceLocation::*method_pointer_290a031ae2b05015b06ad74feea95354)() const = &::clang::SourceLocation::isFileID;
    bool  (::clang::SourceLocation::*method_pointer_0fd73ae2accb5aa4a00ff8623ad27896)() const = &::clang::SourceLocation::isInvalid;
    bool  (::clang::SourceLocation::*method_pointer_6fe896e5f3885dcb8ed63e0168183910)() const = &::clang::SourceLocation::isMacroID;
    bool  (::clang::SourceLocation::*method_pointer_1aa7afdbde8b5c8694bef4a46c1a675c)() const = &::clang::SourceLocation::isValid;
    boost::python::class_< class ::clang::SourceLocation, autowig::HeldType< class ::clang::SourceLocation >, boost::noncopyable > class_3bb72e110333506a85ff3706c82d0672("SourceLocation", "", boost::python::no_init);
    class_3bb72e110333506a85ff3706c82d0672.def("get_raw_encoding", method_pointer_50753b429dad5eeabfa24eb8ae695d9f, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_file_id", method_pointer_290a031ae2b05015b06ad74feea95354, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_invalid", method_pointer_0fd73ae2accb5aa4a00ff8623ad27896, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_macro_id", method_pointer_6fe896e5f3885dcb8ed63e0168183910, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_valid", method_pointer_1aa7afdbde8b5c8694bef4a46c1a675c, "");

}