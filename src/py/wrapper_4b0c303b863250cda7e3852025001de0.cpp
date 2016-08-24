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
    bool  (*method_pointer_91b85fe726c15802abe990e9ac13e485)(class ::clang::Type  const *) = ::clang::PipeType::classof;
    class ::clang::QualType  (::clang::PipeType::*method_pointer_dad02e476107581fb4b5e6c0f9a385ff)() const = &::clang::PipeType::desugar;
    class ::clang::QualType  (::clang::PipeType::*method_pointer_2b131d2dee2b5f8eae63aeba72a4f31d)() const = &::clang::PipeType::getElementType;
    bool  (::clang::PipeType::*method_pointer_d102d273fdb75c8eaa77f40713037144)() const = &::clang::PipeType::isSugared;
    boost::python::class_< class ::clang::PipeType, autowig::HeldType< class ::clang::PipeType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_4b0c303b863250cda7e3852025001de0("PipeType", "", boost::python::no_init);
    class_4b0c303b863250cda7e3852025001de0.def("classof", method_pointer_91b85fe726c15802abe990e9ac13e485, "");
    class_4b0c303b863250cda7e3852025001de0.def("desugar", method_pointer_dad02e476107581fb4b5e6c0f9a385ff, "");
    class_4b0c303b863250cda7e3852025001de0.def("get_element_type", method_pointer_2b131d2dee2b5f8eae63aeba72a4f31d, "");
    class_4b0c303b863250cda7e3852025001de0.def("is_sugared", method_pointer_d102d273fdb75c8eaa77f40713037144, "");
    class_4b0c303b863250cda7e3852025001de0.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::PipeType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::PipeType >, autowig::HeldType< class ::clang::Type > >();
    }

}