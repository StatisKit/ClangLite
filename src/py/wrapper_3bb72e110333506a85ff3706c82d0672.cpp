#include "_clanglite.h"


namespace autowig
{
}


void wrapper_3bb72e110333506a85ff3706c82d0672()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    unsigned int  (::clang::SourceLocation::*method_pointer_b9a2fabdbf9f597086c771a2a4699597)() const = &::clang::SourceLocation::getRawEncoding;
    bool  (::clang::SourceLocation::*method_pointer_c16144ec33f55c3fbcdc4b9dd44b4db3)() const = &::clang::SourceLocation::isFileID;
    bool  (::clang::SourceLocation::*method_pointer_052c2c76cc4456fa90a342c95cdc13ce)() const = &::clang::SourceLocation::isInvalid;
    bool  (::clang::SourceLocation::*method_pointer_457e0b09aca35a32b16edb492d9aef97)() const = &::clang::SourceLocation::isMacroID;
    bool  (::clang::SourceLocation::*method_pointer_685d9e43c68f5f188b08bc3c183aaec1)() const = &::clang::SourceLocation::isValid;
    boost::python::class_< class ::clang::SourceLocation, autowig::HeldType< class ::clang::SourceLocation >, boost::noncopyable > class_3bb72e110333506a85ff3706c82d0672("SourceLocation", "", boost::python::no_init);
    class_3bb72e110333506a85ff3706c82d0672.def("get_raw_encoding", method_pointer_b9a2fabdbf9f597086c771a2a4699597, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_file_id", method_pointer_c16144ec33f55c3fbcdc4b9dd44b4db3, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_invalid", method_pointer_052c2c76cc4456fa90a342c95cdc13ce, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_macro_id", method_pointer_457e0b09aca35a32b16edb492d9aef97, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_valid", method_pointer_685d9e43c68f5f188b08bc3c183aaec1, "");

}