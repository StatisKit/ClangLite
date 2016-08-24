#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_4b0c303b863250cda7e3852025001de0()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_092c292f16d257a8a5ab0c8b599cf585)(class ::clang::Type  const *) = ::clang::PipeType::classof;
    class ::clang::QualType  (::clang::PipeType::*method_pointer_75c7a002e49252d09b65667d243dae79)() const = &::clang::PipeType::desugar;
    class ::clang::QualType  (::clang::PipeType::*method_pointer_6c6adadc913a5ac5b03734bac3bf13db)() const = &::clang::PipeType::getElementType;
    bool  (::clang::PipeType::*method_pointer_f8f6e7226f11527fb6fd45d436793f8c)() const = &::clang::PipeType::isSugared;
    boost::python::class_< class ::clang::PipeType, autowig::HeldType< class ::clang::PipeType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_4b0c303b863250cda7e3852025001de0("PipeType", "", boost::python::no_init);
    class_4b0c303b863250cda7e3852025001de0.def("classof", method_pointer_092c292f16d257a8a5ab0c8b599cf585, "");
    class_4b0c303b863250cda7e3852025001de0.def("desugar", method_pointer_75c7a002e49252d09b65667d243dae79, "");
    class_4b0c303b863250cda7e3852025001de0.def("get_element_type", method_pointer_6c6adadc913a5ac5b03734bac3bf13db, "");
    class_4b0c303b863250cda7e3852025001de0.def("is_sugared", method_pointer_f8f6e7226f11527fb6fd45d436793f8c, "");
    class_4b0c303b863250cda7e3852025001de0.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::PipeType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::PipeType >, autowig::HeldType< class ::clang::Type > >();
    }

}