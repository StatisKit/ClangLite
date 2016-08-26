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
    bool  (*method_pointer_ba884fc6a56f5a9daf51b4757ec29e7a)(class ::clang::Type  const *) = ::clang::PipeType::classof;
    class ::clang::QualType  (::clang::PipeType::*method_pointer_f51ef9a88a7d56ca83e11fd741ca9e47)() const = &::clang::PipeType::desugar;
    class ::clang::QualType  (::clang::PipeType::*method_pointer_d233e467074f5ed99d7e42fc753b966a)() const = &::clang::PipeType::getElementType;
    bool  (::clang::PipeType::*method_pointer_58480b43905c50c2b434d7c960e5be46)() const = &::clang::PipeType::isSugared;
    boost::python::class_< class ::clang::PipeType, autowig::HeldType< class ::clang::PipeType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_4b0c303b863250cda7e3852025001de0("PipeType", "", boost::python::no_init);
    class_4b0c303b863250cda7e3852025001de0.def("classof", method_pointer_ba884fc6a56f5a9daf51b4757ec29e7a, "");
    class_4b0c303b863250cda7e3852025001de0.def("desugar", method_pointer_f51ef9a88a7d56ca83e11fd741ca9e47, "");
    class_4b0c303b863250cda7e3852025001de0.def("get_element_type", method_pointer_d233e467074f5ed99d7e42fc753b966a, "");
    class_4b0c303b863250cda7e3852025001de0.def("is_sugared", method_pointer_58480b43905c50c2b434d7c960e5be46, "");
    class_4b0c303b863250cda7e3852025001de0.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::PipeType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::PipeType >, autowig::HeldType< class ::clang::Type > >();
    }

}