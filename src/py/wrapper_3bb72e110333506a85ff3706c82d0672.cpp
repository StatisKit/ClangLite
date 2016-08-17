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
    bool  (::clang::SourceLocation::*method_pointer_8b81918d1ac955208f88f03645d123f3)() const = &::clang::SourceLocation::isMacroID;
    bool  (::clang::SourceLocation::*method_pointer_db7cdcb9583457258b905de5fc6cfbbe)() const = &::clang::SourceLocation::isValid;
    unsigned int  (::clang::SourceLocation::*method_pointer_625603dd8c025fdbb94ae4f6ae1c5298)() const = &::clang::SourceLocation::getRawEncoding;
    bool  (::clang::SourceLocation::*method_pointer_907422708354510395e9faa86215f632)() const = &::clang::SourceLocation::isInvalid;
    bool  (::clang::SourceLocation::*method_pointer_f21e11219b9d5b76a88ffbaacfc71e91)() const = &::clang::SourceLocation::isFileID;
    boost::python::class_< class ::clang::SourceLocation, autowig::HeldType< class ::clang::SourceLocation >, boost::noncopyable > class_3bb72e110333506a85ff3706c82d0672("SourceLocation", "", boost::python::no_init);
    class_3bb72e110333506a85ff3706c82d0672.def("is_macro_id", method_pointer_8b81918d1ac955208f88f03645d123f3, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_valid", method_pointer_db7cdcb9583457258b905de5fc6cfbbe, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_raw_encoding", method_pointer_625603dd8c025fdbb94ae4f6ae1c5298, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_invalid", method_pointer_907422708354510395e9faa86215f632, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_file_id", method_pointer_f21e11219b9d5b76a88ffbaacfc71e91, "");

}