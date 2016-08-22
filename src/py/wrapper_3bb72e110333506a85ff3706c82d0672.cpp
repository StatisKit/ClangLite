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
    unsigned int  (::clang::SourceLocation::*method_pointer_14bf48890b045accac96384e5ecb3125)() const = &::clang::SourceLocation::getRawEncoding;
    bool  (::clang::SourceLocation::*method_pointer_33dc3fea28a559f0a0847c4c97c0ef54)() const = &::clang::SourceLocation::isFileID;
    bool  (::clang::SourceLocation::*method_pointer_cef5ec0d678657beb6eef1720fb2d7fb)() const = &::clang::SourceLocation::isInvalid;
    bool  (::clang::SourceLocation::*method_pointer_395c9e941d0457e4b332375c9183cbe5)() const = &::clang::SourceLocation::isMacroID;
    bool  (::clang::SourceLocation::*method_pointer_ffcc09914a375211bf8e5c1c6fdd3d49)() const = &::clang::SourceLocation::isValid;
    boost::python::class_< class ::clang::SourceLocation, autowig::HeldType< class ::clang::SourceLocation >, boost::noncopyable > class_3bb72e110333506a85ff3706c82d0672("SourceLocation", "", boost::python::no_init);
    class_3bb72e110333506a85ff3706c82d0672.def("get_raw_encoding", method_pointer_14bf48890b045accac96384e5ecb3125, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_file_id", method_pointer_33dc3fea28a559f0a0847c4c97c0ef54, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_invalid", method_pointer_cef5ec0d678657beb6eef1720fb2d7fb, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_macro_id", method_pointer_395c9e941d0457e4b332375c9183cbe5, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_valid", method_pointer_ffcc09914a375211bf8e5c1c6fdd3d49, "");

}