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
    void  (::clang::SourceLocation::*method_pointer_2a55db2dde145196892503b1d9438227)(class ::clang::SourceManager  const &) const = &::clang::SourceLocation::dump;
    class ::clang::SourceLocation  (*method_pointer_589554252dd157059a3ef974f80144f3)(unsigned int ) = ::clang::SourceLocation::getFromRawEncoding;
    class ::clang::SourceLocation  (::clang::SourceLocation::*method_pointer_429edbaf1f615f2686aab31f2572b484)(int ) const = &::clang::SourceLocation::getLocWithOffset;
    unsigned int  (::clang::SourceLocation::*method_pointer_5b13e1d837165b8c99c0584e42bf9761)() const = &::clang::SourceLocation::getRawEncoding;
    bool  (::clang::SourceLocation::*method_pointer_fad8afe729e95009aa79d56f0e8d6e0b)() const = &::clang::SourceLocation::isFileID;
    bool  (::clang::SourceLocation::*method_pointer_6a758b283f82543a926c9dcbabf981db)() const = &::clang::SourceLocation::isInvalid;
    bool  (::clang::SourceLocation::*method_pointer_5ec1debbe0275a9599118052f1c8dd96)() const = &::clang::SourceLocation::isMacroID;
    bool  (::clang::SourceLocation::*method_pointer_5255e5bd8caa5346b523f69f874cfe3b)() const = &::clang::SourceLocation::isValid;
    struct function_group
    {
        static bool  function_f51e18784e9b52249283a253407ff4f9(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator!=(parameter_0, parameter_1); }
        static bool  function_4fa077ff370d5a21aee3c97ff849508f(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator==(parameter_0, parameter_1); }
        static bool  function_94ef269dda83533bb1e7f2465688d7fe(class ::clang::SourceLocation  const & parameter_0, class ::clang::SourceLocation  const & parameter_1)
        { return operator<(parameter_0, parameter_1); }
    };
    boost::python::class_< class ::clang::SourceLocation, autowig::HeldType< class ::clang::SourceLocation > > class_3bb72e110333506a85ff3706c82d0672("SourceLocation", "", boost::python::no_init);
    class_3bb72e110333506a85ff3706c82d0672.def("dump", method_pointer_2a55db2dde145196892503b1d9438227, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_from_raw_encoding", method_pointer_589554252dd157059a3ef974f80144f3, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_loc_with_offset", method_pointer_429edbaf1f615f2686aab31f2572b484, "");
    class_3bb72e110333506a85ff3706c82d0672.def("get_raw_encoding", method_pointer_5b13e1d837165b8c99c0584e42bf9761, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_file_id", method_pointer_fad8afe729e95009aa79d56f0e8d6e0b, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_invalid", method_pointer_6a758b283f82543a926c9dcbabf981db, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_macro_id", method_pointer_5ec1debbe0275a9599118052f1c8dd96, "");
    class_3bb72e110333506a85ff3706c82d0672.def("is_valid", method_pointer_5255e5bd8caa5346b523f69f874cfe3b, "");
    class_3bb72e110333506a85ff3706c82d0672.staticmethod("get_from_raw_encoding");
    class_3bb72e110333506a85ff3706c82d0672.def("__neq__", function_group::function_f51e18784e9b52249283a253407ff4f9, "");
    class_3bb72e110333506a85ff3706c82d0672.def("__eq__", function_group::function_4fa077ff370d5a21aee3c97ff849508f, "");
    class_3bb72e110333506a85ff3706c82d0672.def("__lt__", function_group::function_94ef269dda83533bb1e7f2465688d7fe, "");

}