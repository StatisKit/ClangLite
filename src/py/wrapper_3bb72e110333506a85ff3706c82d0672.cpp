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
    unsigned int  (::clang::SourceLocation::*method_pointer_a09508b312e853d58f91ee0d832450c1)() const = &::clang::SourceLocation::getRawEncoding;
    bool  (::clang::SourceLocation::*method_pointer_ce0e42d7305258f79ecd5e8537e70877)() const = &::clang::SourceLocation::isFileID;
    bool  (::clang::SourceLocation::*method_pointer_f92c9e7023585288ad0b291e5ef0396f)() const = &::clang::SourceLocation::isInvalid;
    bool  (::clang::SourceLocation::*method_pointer_fea631800627540686bc1e123987b74d)() const = &::clang::SourceLocation::isMacroID;
    bool  (::clang::SourceLocation::*method_pointer_884d001a5e2c5bcab6f7557875290db1)() const = &::clang::SourceLocation::isValid;
    boost::python::class_< class ::clang::SourceLocation, autowig::HeldType< class ::clang::SourceLocation >, boost::noncopyable > class_3bb72e110333506a85ff3706c82d0672("SourceLocation", "", boost::python::no_init);
    class_3bb72e110333506a85ff3706c82d0672.def("get_raw_encoding", method_pointer_a09508b312e853d58f91ee0d832450c1, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_file_id", method_pointer_ce0e42d7305258f79ecd5e8537e70877, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_invalid", method_pointer_f92c9e7023585288ad0b291e5ef0396f, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_macro_id", method_pointer_fea631800627540686bc1e123987b74d, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_valid", method_pointer_884d001a5e2c5bcab6f7557875290db1, "");

}