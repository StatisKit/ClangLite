#include "_clanglite.h"


namespace autowig
{
}


void wrapper_4b0c303b863250cda7e3852025001de0()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_e6e62e126d095835b0db329002cc6912)(class ::clang::Type  const *) = ::clang::PipeType::classof;
    class ::clang::QualType  (::clang::PipeType::*method_pointer_1cedb63926bf5ac8a7f0a11576d889d4)() const = &::clang::PipeType::desugar;
    class ::clang::QualType  (::clang::PipeType::*method_pointer_a1df2684f6f85c239d30a4fcef6add56)() const = &::clang::PipeType::getElementType;
    bool  (::clang::PipeType::*method_pointer_f8bd1a90a7cb526f862d8567f5d09f32)() const = &::clang::PipeType::isSugared;
    boost::python::class_< class ::clang::PipeType, autowig::HeldType< class ::clang::PipeType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_4b0c303b863250cda7e3852025001de0("PipeType", "", boost::python::no_init);
    class_4b0c303b863250cda7e3852025001de0.def("classof", method_pointer_e6e62e126d095835b0db329002cc6912, "");
    class_4b0c303b863250cda7e3852025001de0.def("desugar", method_pointer_1cedb63926bf5ac8a7f0a11576d889d4, "");
    class_4b0c303b863250cda7e3852025001de0.def("get_element_type", method_pointer_a1df2684f6f85c239d30a4fcef6add56, "");
    class_4b0c303b863250cda7e3852025001de0.def("is_sugared", method_pointer_f8bd1a90a7cb526f862d8567f5d09f32, "");
    class_4b0c303b863250cda7e3852025001de0.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::PipeType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::PipeType >, autowig::HeldType< class ::clang::Type > >();
    }

}