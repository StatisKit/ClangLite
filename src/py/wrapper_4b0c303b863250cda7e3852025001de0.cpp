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
    bool  (*method_pointer_9c52abc642de5ecb979421a03557ae1b)(class ::clang::Type  const *) = ::clang::PipeType::classof;
    class ::clang::QualType  (::clang::PipeType::*method_pointer_602f7c52974a5ab8bf4ebd974553bcf4)() const = &::clang::PipeType::desugar;
    class ::clang::QualType  (::clang::PipeType::*method_pointer_20898c851bb65a81ba319a57e0a9b954)() const = &::clang::PipeType::getElementType;
    bool  (::clang::PipeType::*method_pointer_5a90b8f3e0d65af1af929690a17abe2f)() const = &::clang::PipeType::isSugared;
    boost::python::class_< class ::clang::PipeType, autowig::HeldType< class ::clang::PipeType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_4b0c303b863250cda7e3852025001de0("PipeType", "", boost::python::no_init);
    class_4b0c303b863250cda7e3852025001de0.def("classof", method_pointer_9c52abc642de5ecb979421a03557ae1b, "");
    class_4b0c303b863250cda7e3852025001de0.def("desugar", method_pointer_602f7c52974a5ab8bf4ebd974553bcf4, "");
    class_4b0c303b863250cda7e3852025001de0.def("get_element_type", method_pointer_20898c851bb65a81ba319a57e0a9b954, "");
    class_4b0c303b863250cda7e3852025001de0.def("is_sugared", method_pointer_5a90b8f3e0d65af1af929690a17abe2f, "");
    class_4b0c303b863250cda7e3852025001de0.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::PipeType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::PipeType >, autowig::HeldType< class ::clang::Type > >();
    }

}