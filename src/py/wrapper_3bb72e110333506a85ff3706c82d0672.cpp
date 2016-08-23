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
    unsigned int  (::clang::SourceLocation::*method_pointer_02324308f0b657938cc47a4605122040)() const = &::clang::SourceLocation::getRawEncoding;
    bool  (::clang::SourceLocation::*method_pointer_46b3daec913c5fa2bdc41ed550f5f163)() const = &::clang::SourceLocation::isFileID;
    bool  (::clang::SourceLocation::*method_pointer_fb4b16500748556ab04c52c2db0fff99)() const = &::clang::SourceLocation::isInvalid;
    bool  (::clang::SourceLocation::*method_pointer_f28ad1df80a5541f8f8a85a0729bbb9e)() const = &::clang::SourceLocation::isMacroID;
    bool  (::clang::SourceLocation::*method_pointer_8dc7594372ce5a1da2676f098813702a)() const = &::clang::SourceLocation::isValid;
    boost::python::class_< class ::clang::SourceLocation, autowig::HeldType< class ::clang::SourceLocation >, boost::noncopyable > class_3bb72e110333506a85ff3706c82d0672("SourceLocation", "", boost::python::no_init);
    class_3bb72e110333506a85ff3706c82d0672.def("get_raw_encoding", method_pointer_02324308f0b657938cc47a4605122040, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_file_id", method_pointer_46b3daec913c5fa2bdc41ed550f5f163, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_invalid", method_pointer_fb4b16500748556ab04c52c2db0fff99, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_macro_id", method_pointer_f28ad1df80a5541f8f8a85a0729bbb9e, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_valid", method_pointer_8dc7594372ce5a1da2676f098813702a, "");

}