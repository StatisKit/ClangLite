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
    unsigned int  (::clang::SourceLocation::*method_pointer_c83cc19938ce5c59a3d9e1cf5a7936bd)() const = &::clang::SourceLocation::getRawEncoding;
    bool  (::clang::SourceLocation::*method_pointer_55257e6f08ab590d8afe2778fd64a492)() const = &::clang::SourceLocation::isFileID;
    bool  (::clang::SourceLocation::*method_pointer_1eb25719fe5350ed9ef6cc13d902e560)() const = &::clang::SourceLocation::isInvalid;
    bool  (::clang::SourceLocation::*method_pointer_beacabe618e55ae5aa843a4b82f62a5c)() const = &::clang::SourceLocation::isMacroID;
    bool  (::clang::SourceLocation::*method_pointer_dbba698dfb305ab7923b6e312db1f807)() const = &::clang::SourceLocation::isValid;
    boost::python::class_< class ::clang::SourceLocation, autowig::HeldType< class ::clang::SourceLocation >, boost::noncopyable > class_3bb72e110333506a85ff3706c82d0672("SourceLocation", "", boost::python::no_init);
    class_3bb72e110333506a85ff3706c82d0672.def("get_raw_encoding", method_pointer_c83cc19938ce5c59a3d9e1cf5a7936bd, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_file_id", method_pointer_55257e6f08ab590d8afe2778fd64a492, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_invalid", method_pointer_1eb25719fe5350ed9ef6cc13d902e560, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_macro_id", method_pointer_beacabe618e55ae5aa843a4b82f62a5c, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_valid", method_pointer_dbba698dfb305ab7923b6e312db1f807, "");

}