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
    unsigned int  (::clang::SourceLocation::*method_pointer_900fdf3b088757d1afb618f6cd8e41cc)() const = &::clang::SourceLocation::getRawEncoding;
    bool  (::clang::SourceLocation::*method_pointer_2e56338cd5c05e97b549553b12d9bd45)() const = &::clang::SourceLocation::isFileID;
    bool  (::clang::SourceLocation::*method_pointer_36292d8c94665106b4631066585e44e7)() const = &::clang::SourceLocation::isInvalid;
    bool  (::clang::SourceLocation::*method_pointer_2ba3f2c600ce54f3a87d07c13e3728f4)() const = &::clang::SourceLocation::isMacroID;
    bool  (::clang::SourceLocation::*method_pointer_36ea2abfac925e928ffbbe07fd67fb46)() const = &::clang::SourceLocation::isValid;
    boost::python::class_< class ::clang::SourceLocation, autowig::HeldType< class ::clang::SourceLocation >, boost::noncopyable > class_3bb72e110333506a85ff3706c82d0672("SourceLocation", "", boost::python::no_init);
    class_3bb72e110333506a85ff3706c82d0672.def("get_raw_encoding", method_pointer_900fdf3b088757d1afb618f6cd8e41cc, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_file_id", method_pointer_2e56338cd5c05e97b549553b12d9bd45, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_invalid", method_pointer_36292d8c94665106b4631066585e44e7, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_macro_id", method_pointer_2ba3f2c600ce54f3a87d07c13e3728f4, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_valid", method_pointer_36ea2abfac925e928ffbbe07fd67fb46, "");

}