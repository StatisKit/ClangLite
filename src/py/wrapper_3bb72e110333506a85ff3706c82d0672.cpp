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
    unsigned int  (::clang::SourceLocation::*method_pointer_e54e6e621dc1586e8a277623eb0598a7)() const = &::clang::SourceLocation::getRawEncoding;
    bool  (::clang::SourceLocation::*method_pointer_e4f4074ba76e5a6d8ad2d6d45bf352de)() const = &::clang::SourceLocation::isFileID;
    bool  (::clang::SourceLocation::*method_pointer_5eb2ad87b6c45ee692b033ef51f07c48)() const = &::clang::SourceLocation::isInvalid;
    bool  (::clang::SourceLocation::*method_pointer_82e7a8c560725961b9edde48b9d81804)() const = &::clang::SourceLocation::isMacroID;
    bool  (::clang::SourceLocation::*method_pointer_e0673c3b8b4a59dfa9a37f852a81e0db)() const = &::clang::SourceLocation::isValid;
    boost::python::class_< class ::clang::SourceLocation, autowig::HeldType< class ::clang::SourceLocation >, boost::noncopyable > class_3bb72e110333506a85ff3706c82d0672("SourceLocation", "", boost::python::no_init);
    class_3bb72e110333506a85ff3706c82d0672.def("get_raw_encoding", method_pointer_e54e6e621dc1586e8a277623eb0598a7, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_file_id", method_pointer_e4f4074ba76e5a6d8ad2d6d45bf352de, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_invalid", method_pointer_5eb2ad87b6c45ee692b033ef51f07c48, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_macro_id", method_pointer_82e7a8c560725961b9edde48b9d81804, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_valid", method_pointer_e0673c3b8b4a59dfa9a37f852a81e0db, "");

}