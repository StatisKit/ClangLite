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
    unsigned int  (::clang::SourceLocation::*method_pointer_e92737dff4f05581bb95d45a75ab95bc)() const = &::clang::SourceLocation::getRawEncoding;
    bool  (::clang::SourceLocation::*method_pointer_57d1d2ce95005d28bf6e37048be96bdf)() const = &::clang::SourceLocation::isFileID;
    bool  (::clang::SourceLocation::*method_pointer_82a1454a883553f7bb544b4c76f592da)() const = &::clang::SourceLocation::isInvalid;
    bool  (::clang::SourceLocation::*method_pointer_afab6ccb4dd156b08bd71238f8228143)() const = &::clang::SourceLocation::isMacroID;
    bool  (::clang::SourceLocation::*method_pointer_dfc6450ede95574789ef0f47d95ae502)() const = &::clang::SourceLocation::isValid;
    boost::python::class_< class ::clang::SourceLocation, autowig::HeldType< class ::clang::SourceLocation >, boost::noncopyable > class_3bb72e110333506a85ff3706c82d0672("SourceLocation", "", boost::python::no_init);
    class_3bb72e110333506a85ff3706c82d0672.def("get_raw_encoding", method_pointer_e92737dff4f05581bb95d45a75ab95bc, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_file_id", method_pointer_57d1d2ce95005d28bf6e37048be96bdf, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_invalid", method_pointer_82a1454a883553f7bb544b4c76f592da, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_macro_id", method_pointer_afab6ccb4dd156b08bd71238f8228143, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_valid", method_pointer_dfc6450ede95574789ef0f47d95ae502, "");

}