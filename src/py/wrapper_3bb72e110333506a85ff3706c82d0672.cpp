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
    void  (::clang::SourceLocation::*method_pointer_65596cd9ade8546da7827b5d654941fc)(class ::clang::SourceManager  const &) const = &::clang::SourceLocation::dump;
    class ::clang::SourceLocation  (*method_pointer_1681422e26a55dccac191ee691eb860a)(unsigned int ) = ::clang::SourceLocation::getFromRawEncoding;
    class ::clang::SourceLocation  (::clang::SourceLocation::*method_pointer_b3a55735d9e15be6883736ea660e3cd2)(int ) const = &::clang::SourceLocation::getLocWithOffset;
    unsigned int  (::clang::SourceLocation::*method_pointer_15987ef331b65d31809a0d0c52bf8138)() const = &::clang::SourceLocation::getRawEncoding;
    bool  (::clang::SourceLocation::*method_pointer_b9847184bd42519ba43627ff45eed33d)() const = &::clang::SourceLocation::isFileID;
    bool  (::clang::SourceLocation::*method_pointer_839ca4ceb36958a48927ee4e82e60abb)() const = &::clang::SourceLocation::isInvalid;
    bool  (::clang::SourceLocation::*method_pointer_f38a1a28372f52fb9c736b663bdb98fa)() const = &::clang::SourceLocation::isMacroID;
    bool  (::clang::SourceLocation::*method_pointer_4d4d26ccda5859c089ff7410a7210a34)() const = &::clang::SourceLocation::isValid;
    int  (::clang::SourceLocation::*method_pointer_bb221b3558385192925db8cf5b1e520c)(class ::clang::SourceManager  const &) const = &::clang::SourceLocation::printToString;
    struct function_group
    {
        static bool  function_fc0f31cd8eb25658924cf40f68ef79d7(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator!=(parameter_0, parameter_1); }
        static bool  function_fe649607466d5e8a89ef845e87c1e93a(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator<(parameter_0, parameter_1); }
        static bool  function_087cad8a0f0f5921b1b18f7c121b6ebb(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator==(parameter_0, parameter_1); }
    };
    boost::python::class_< class ::clang::SourceLocation, autowig::HeldType< class ::clang::SourceLocation > > class_3bb72e110333506a85ff3706c82d0672("SourceLocation", "", boost::python::no_init);
    class_3bb72e110333506a85ff3706c82d0672.def("dump", method_pointer_65596cd9ade8546da7827b5d654941fc, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_from_raw_encoding", method_pointer_1681422e26a55dccac191ee691eb860a, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_loc_with_offset", method_pointer_b3a55735d9e15be6883736ea660e3cd2, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_raw_encoding", method_pointer_15987ef331b65d31809a0d0c52bf8138, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_file_id", method_pointer_b9847184bd42519ba43627ff45eed33d, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_invalid", method_pointer_839ca4ceb36958a48927ee4e82e60abb, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_macro_id", method_pointer_f38a1a28372f52fb9c736b663bdb98fa, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_valid", method_pointer_4d4d26ccda5859c089ff7410a7210a34, "");
    class_3bb72e110333506a85ff3706c82d0672.def("print_to_string", method_pointer_bb221b3558385192925db8cf5b1e520c, "");
    class_3bb72e110333506a85ff3706c82d0672.staticmethod("get_from_raw_encoding");
    class_3bb72e110333506a85ff3706c82d0672.def("__neq__", function_group::function_fc0f31cd8eb25658924cf40f68ef79d7, "");
    class_3bb72e110333506a85ff3706c82d0672.def("__lt__", function_group::function_fe649607466d5e8a89ef845e87c1e93a, "");
    class_3bb72e110333506a85ff3706c82d0672.def("__eq__", function_group::function_087cad8a0f0f5921b1b18f7c121b6ebb, "");

}