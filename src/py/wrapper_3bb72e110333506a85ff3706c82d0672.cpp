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
    unsigned int  (::clang::SourceLocation::*method_pointer_c43fc26a364954e7a46892f1340edb4d)() const = &::clang::SourceLocation::getRawEncoding;
    bool  (::clang::SourceLocation::*method_pointer_046aa38141795b5496d7514075254da0)() const = &::clang::SourceLocation::isFileID;
    bool  (::clang::SourceLocation::*method_pointer_d0ffcaa11da7507d86dd361c61e2d0b9)() const = &::clang::SourceLocation::isInvalid;
    bool  (::clang::SourceLocation::*method_pointer_76edc63af7d05940b3d4bc0b222eb20b)() const = &::clang::SourceLocation::isMacroID;
    bool  (::clang::SourceLocation::*method_pointer_ed439162910450dbb315938a7923a905)() const = &::clang::SourceLocation::isValid;
    boost::python::class_< class ::clang::SourceLocation, autowig::HeldType< class ::clang::SourceLocation >, boost::noncopyable > class_3bb72e110333506a85ff3706c82d0672("SourceLocation", "", boost::python::no_init);
    class_3bb72e110333506a85ff3706c82d0672.def("get_raw_encoding", method_pointer_c43fc26a364954e7a46892f1340edb4d, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_file_id", method_pointer_046aa38141795b5496d7514075254da0, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_invalid", method_pointer_d0ffcaa11da7507d86dd361c61e2d0b9, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_macro_id", method_pointer_76edc63af7d05940b3d4bc0b222eb20b, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_valid", method_pointer_ed439162910450dbb315938a7923a905, "");

}