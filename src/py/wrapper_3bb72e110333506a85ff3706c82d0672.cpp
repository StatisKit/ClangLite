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
    bool  (::clang::SourceLocation::*method_pointer_0b8b7f379ae657b58b9654c3bcff053b)() const = &::clang::SourceLocation::isMacroID;
    bool  (::clang::SourceLocation::*method_pointer_e888e1992d40533198329714653d1296)() const = &::clang::SourceLocation::isFileID;
    unsigned int  (::clang::SourceLocation::*method_pointer_6de9894795bf5351926ff8318b44fd60)() const = &::clang::SourceLocation::getRawEncoding;
    bool  (::clang::SourceLocation::*method_pointer_8c0f729fbbe8578182d0f6f6557ab08f)() const = &::clang::SourceLocation::isInvalid;
    bool  (::clang::SourceLocation::*method_pointer_b49f17c2d8685cc59f62ff5bf3a44f8e)() const = &::clang::SourceLocation::isValid;
    boost::python::class_< class ::clang::SourceLocation, autowig::HeldType< class ::clang::SourceLocation >, boost::noncopyable > class_3bb72e110333506a85ff3706c82d0672("SourceLocation", "", boost::python::no_init);
    class_3bb72e110333506a85ff3706c82d0672.def("is_macro_id", method_pointer_0b8b7f379ae657b58b9654c3bcff053b, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_file_id", method_pointer_e888e1992d40533198329714653d1296, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_raw_encoding", method_pointer_6de9894795bf5351926ff8318b44fd60, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_invalid", method_pointer_8c0f729fbbe8578182d0f6f6557ab08f, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_valid", method_pointer_b49f17c2d8685cc59f62ff5bf3a44f8e, "");

}