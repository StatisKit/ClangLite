#include <boost/python.hpp>
#include <clang/Basic/SourceLocation.h>

void class_clang_file_id()
{
        std::string clang_7bbff48d109853e88270b3595c663a99_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
        boost::python::object clang_7bbff48d109853e88270b3595c663a99_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(clang_7bbff48d109853e88270b3595c663a99_name.c_str()))));
        boost::python::scope().attr("clang") = clang_7bbff48d109853e88270b3595c663a99_module;
        boost::python::scope clang_7bbff48d109853e88270b3595c663a99_scope = clang_7bbff48d109853e88270b3595c663a99_module;
        bool (::clang::FileID::*method_pointer_8bf8694510d856cf9efe8860ebb4a64f)() const = &::clang::FileID::isInvalid;
        boost::python::class_< class ::clang::FileID, class ::clang::FileID * >("FileID", boost::python::no_init)
            .def("is_invalid", method_pointer_8bf8694510d856cf9efe8860ebb4a64f);
}