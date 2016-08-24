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
    class ::clang::SourceLocation  (*method_pointer_c970dbc233305cc0ac58c6cb1fbd548e)(unsigned int ) = ::clang::SourceLocation::getFromRawEncoding;
    class ::clang::SourceLocation  (::clang::SourceLocation::*method_pointer_6eb897dc640751d7ae952d7aafbe66d5)(int ) const = &::clang::SourceLocation::getLocWithOffset;
    unsigned int  (::clang::SourceLocation::*method_pointer_8be7b1f0cbdd520b8b78662d0511fa82)() const = &::clang::SourceLocation::getRawEncoding;
    bool  (::clang::SourceLocation::*method_pointer_45be697df7aa5f5abedee6341111cdd8)() const = &::clang::SourceLocation::isFileID;
    bool  (::clang::SourceLocation::*method_pointer_3fde7369c3f05c19b68fed72e772db25)() const = &::clang::SourceLocation::isInvalid;
    bool  (::clang::SourceLocation::*method_pointer_aff7b5579d97596692739e0983c3bbba)() const = &::clang::SourceLocation::isMacroID;
    bool  (::clang::SourceLocation::*method_pointer_c3f1ce5bad3d5b2089a51925c496570b)() const = &::clang::SourceLocation::isValid;
    struct function_group
    {
        static bool  function_769855fab8a150739314e55fab599bf9(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator==(parameter_0, parameter_1); }
        static bool  function_9e66a369d16856e7968dd332c02e3dc3(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator<(parameter_0, parameter_1); }
        static bool  function_93967d97775156c3a1f1f7ebf0fc05ec(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator!=(parameter_0, parameter_1); }
    };
    boost::python::class_< class ::clang::SourceLocation, autowig::HeldType< class ::clang::SourceLocation > > class_3bb72e110333506a85ff3706c82d0672("SourceLocation", "", boost::python::no_init);
    class_3bb72e110333506a85ff3706c82d0672.def("get_from_raw_encoding", method_pointer_c970dbc233305cc0ac58c6cb1fbd548e, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_loc_with_offset", method_pointer_6eb897dc640751d7ae952d7aafbe66d5, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_raw_encoding", method_pointer_8be7b1f0cbdd520b8b78662d0511fa82, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_file_id", method_pointer_45be697df7aa5f5abedee6341111cdd8, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_invalid", method_pointer_3fde7369c3f05c19b68fed72e772db25, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_macro_id", method_pointer_aff7b5579d97596692739e0983c3bbba, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_valid", method_pointer_c3f1ce5bad3d5b2089a51925c496570b, "");
    class_3bb72e110333506a85ff3706c82d0672.staticmethod("get_from_raw_encoding");
    class_3bb72e110333506a85ff3706c82d0672.def("__eq__", function_group::function_769855fab8a150739314e55fab599bf9, "");
    class_3bb72e110333506a85ff3706c82d0672.def("__lt__", function_group::function_9e66a369d16856e7968dd332c02e3dc3, "");
    class_3bb72e110333506a85ff3706c82d0672.def("__neq__", function_group::function_93967d97775156c3a1f1f7ebf0fc05ec, "");

}