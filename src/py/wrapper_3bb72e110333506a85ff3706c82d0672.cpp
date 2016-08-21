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
    unsigned int  (::clang::SourceLocation::*method_pointer_57f63b35c4ea511fbae8f1b00debfc8d)() const = &::clang::SourceLocation::getRawEncoding;
    bool  (::clang::SourceLocation::*method_pointer_0f58e414c9c953ccb6a7af13d74a7a9a)() const = &::clang::SourceLocation::isFileID;
    bool  (::clang::SourceLocation::*method_pointer_60b32a4b2f4b5b50a38a7f6f826f547d)() const = &::clang::SourceLocation::isInvalid;
    bool  (::clang::SourceLocation::*method_pointer_d91e3dfcc5f3525890337b07764a72db)() const = &::clang::SourceLocation::isMacroID;
    bool  (::clang::SourceLocation::*method_pointer_9adec1fd1df35a928af79cf5165fe8a7)() const = &::clang::SourceLocation::isValid;
    boost::python::class_< class ::clang::SourceLocation, autowig::HeldType< class ::clang::SourceLocation >, boost::noncopyable > class_3bb72e110333506a85ff3706c82d0672("SourceLocation", "", boost::python::no_init);
    class_3bb72e110333506a85ff3706c82d0672.def("get_raw_encoding", method_pointer_57f63b35c4ea511fbae8f1b00debfc8d, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_file_id", method_pointer_0f58e414c9c953ccb6a7af13d74a7a9a, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_invalid", method_pointer_60b32a4b2f4b5b50a38a7f6f826f547d, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_macro_id", method_pointer_d91e3dfcc5f3525890337b07764a72db, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_valid", method_pointer_9adec1fd1df35a928af79cf5165fe8a7, "");

}