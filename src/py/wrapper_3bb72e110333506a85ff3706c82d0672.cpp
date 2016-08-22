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
    unsigned int  (::clang::SourceLocation::*method_pointer_88cb47b7a30d5d44b8fbd618ad097d44)() const = &::clang::SourceLocation::getRawEncoding;
    bool  (::clang::SourceLocation::*method_pointer_7d931bfe2a7a54b7bfc9c4328ee89c3d)() const = &::clang::SourceLocation::isFileID;
    bool  (::clang::SourceLocation::*method_pointer_b844bdd4d61953429d056deed8b9ef44)() const = &::clang::SourceLocation::isInvalid;
    bool  (::clang::SourceLocation::*method_pointer_4d2229181bf75ff1b40c2eaf409b1c15)() const = &::clang::SourceLocation::isMacroID;
    bool  (::clang::SourceLocation::*method_pointer_b02e0dd544e8561899f34a20b7e1e367)() const = &::clang::SourceLocation::isValid;
    boost::python::class_< class ::clang::SourceLocation, autowig::HeldType< class ::clang::SourceLocation >, boost::noncopyable > class_3bb72e110333506a85ff3706c82d0672("SourceLocation", "", boost::python::no_init);
    class_3bb72e110333506a85ff3706c82d0672.def("get_raw_encoding", method_pointer_88cb47b7a30d5d44b8fbd618ad097d44, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_file_id", method_pointer_7d931bfe2a7a54b7bfc9c4328ee89c3d, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_invalid", method_pointer_b844bdd4d61953429d056deed8b9ef44, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_macro_id", method_pointer_4d2229181bf75ff1b40c2eaf409b1c15, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_valid", method_pointer_b02e0dd544e8561899f34a20b7e1e367, "");

}