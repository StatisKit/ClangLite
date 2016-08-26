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
    class ::clang::SourceLocation  (*method_pointer_f203ce243fdb54738f82268acc8d0b29)(unsigned int ) = ::clang::SourceLocation::getFromRawEncoding;
    class ::clang::SourceLocation  (::clang::SourceLocation::*method_pointer_e22e04afa1065954938e708034f8a079)(int ) const = &::clang::SourceLocation::getLocWithOffset;
    unsigned int  (::clang::SourceLocation::*method_pointer_2e2b5e4d7fb553e9a8dff1a0d216295f)() const = &::clang::SourceLocation::getRawEncoding;
    bool  (::clang::SourceLocation::*method_pointer_579e668ee79b5ca485d09f9617a80520)() const = &::clang::SourceLocation::isFileID;
    bool  (::clang::SourceLocation::*method_pointer_f1dc715e24235a95aca5eef12d779351)() const = &::clang::SourceLocation::isInvalid;
    bool  (::clang::SourceLocation::*method_pointer_5b62685e00f254abb8cc58e46da5fa76)() const = &::clang::SourceLocation::isMacroID;
    bool  (::clang::SourceLocation::*method_pointer_0abbd4fe7eb458aaa4642a428f7931c0)() const = &::clang::SourceLocation::isValid;
    struct function_group
    {
        static bool  function_3cd778c98ead5d5ea06551ca24e060a8(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator==(parameter_0, parameter_1); }
        static bool  function_1458b713e3ee5e29a15f7336be78f661(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator!=(parameter_0, parameter_1); }
        static bool  function_8d7b9e390f1e59ecb4945848d280b5af(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator<(parameter_0, parameter_1); }
    };
    boost::python::class_< class ::clang::SourceLocation, autowig::HeldType< class ::clang::SourceLocation > > class_3bb72e110333506a85ff3706c82d0672("SourceLocation", "", boost::python::no_init);
    class_3bb72e110333506a85ff3706c82d0672.def("get_from_raw_encoding", method_pointer_f203ce243fdb54738f82268acc8d0b29, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_loc_with_offset", method_pointer_e22e04afa1065954938e708034f8a079, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_raw_encoding", method_pointer_2e2b5e4d7fb553e9a8dff1a0d216295f, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_file_id", method_pointer_579e668ee79b5ca485d09f9617a80520, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_invalid", method_pointer_f1dc715e24235a95aca5eef12d779351, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_macro_id", method_pointer_5b62685e00f254abb8cc58e46da5fa76, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_valid", method_pointer_0abbd4fe7eb458aaa4642a428f7931c0, "");
    class_3bb72e110333506a85ff3706c82d0672.staticmethod("get_from_raw_encoding");
    class_3bb72e110333506a85ff3706c82d0672.def("__eq__", function_group::function_3cd778c98ead5d5ea06551ca24e060a8, "");
    class_3bb72e110333506a85ff3706c82d0672.def("__neq__", function_group::function_1458b713e3ee5e29a15f7336be78f661, "");
    class_3bb72e110333506a85ff3706c82d0672.def("__lt__", function_group::function_8d7b9e390f1e59ecb4945848d280b5af, "");

}