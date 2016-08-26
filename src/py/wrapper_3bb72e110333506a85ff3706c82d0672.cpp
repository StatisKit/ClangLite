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
    class ::clang::SourceLocation  (*method_pointer_756f390daab75853ba1c6bbdec533130)(unsigned int ) = ::clang::SourceLocation::getFromRawEncoding;
    class ::clang::SourceLocation  (::clang::SourceLocation::*method_pointer_5d3b0775aa205ad282854480b2a072da)(int ) const = &::clang::SourceLocation::getLocWithOffset;
    unsigned int  (::clang::SourceLocation::*method_pointer_e87a25831bb052f5a1a3987100bc6629)() const = &::clang::SourceLocation::getRawEncoding;
    bool  (::clang::SourceLocation::*method_pointer_d277a4c3b8e1569b8007b4d8fed2d537)() const = &::clang::SourceLocation::isFileID;
    bool  (::clang::SourceLocation::*method_pointer_5e844371c6185085913a45d210fe85e9)() const = &::clang::SourceLocation::isInvalid;
    bool  (::clang::SourceLocation::*method_pointer_5f284380f30a5e0f8658f85f4a30805b)() const = &::clang::SourceLocation::isMacroID;
    bool  (::clang::SourceLocation::*method_pointer_57cb541d767e5bd990fd15919c989190)() const = &::clang::SourceLocation::isValid;
    struct function_group
    {
        static bool  function_10a719651ad7524f81cfb603ca87a08f(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator==(parameter_0, parameter_1); }
        static bool  function_a696fdcbeaa05f29ac75029fe856f7f0(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator!=(parameter_0, parameter_1); }
        static bool  function_ee31f2f05d115f448cdb7bc150169842(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator<(parameter_0, parameter_1); }
    };
    boost::python::class_< class ::clang::SourceLocation, autowig::HeldType< class ::clang::SourceLocation > > class_3bb72e110333506a85ff3706c82d0672("SourceLocation", "", boost::python::no_init);
    class_3bb72e110333506a85ff3706c82d0672.def("get_from_raw_encoding", method_pointer_756f390daab75853ba1c6bbdec533130, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_loc_with_offset", method_pointer_5d3b0775aa205ad282854480b2a072da, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_raw_encoding", method_pointer_e87a25831bb052f5a1a3987100bc6629, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_file_id", method_pointer_d277a4c3b8e1569b8007b4d8fed2d537, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_invalid", method_pointer_5e844371c6185085913a45d210fe85e9, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_macro_id", method_pointer_5f284380f30a5e0f8658f85f4a30805b, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_valid", method_pointer_57cb541d767e5bd990fd15919c989190, "");
    class_3bb72e110333506a85ff3706c82d0672.staticmethod("get_from_raw_encoding");
    class_3bb72e110333506a85ff3706c82d0672.def("__eq__", function_group::function_10a719651ad7524f81cfb603ca87a08f, "");
    class_3bb72e110333506a85ff3706c82d0672.def("__neq__", function_group::function_a696fdcbeaa05f29ac75029fe856f7f0, "");
    class_3bb72e110333506a85ff3706c82d0672.def("__lt__", function_group::function_ee31f2f05d115f448cdb7bc150169842, "");

}