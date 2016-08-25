#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_f549ce8f1b295099974aaf1951f7fd53()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_270257fd3c6c5278a337f9192e9f9833)(class ::clang::Type  const *) = ::clang::VectorType::classof;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_362cfcd90c1c5264844a73d332e22586)() const = &::clang::VectorType::desugar;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_6b97f052862b531fada5da2b50e33db2)() const = &::clang::VectorType::getElementType;
    unsigned int  (::clang::VectorType::*method_pointer_afaee8a206805f12a0061493a567b421)() const = &::clang::VectorType::getNumElements;
    bool  (::clang::VectorType::*method_pointer_fee3a84bb9c15bf19e38f7468e522541)() const = &::clang::VectorType::isSugared;
    bool  (*method_pointer_5f76cfa6687459e9976c41cd6d7cba67)(unsigned int ) = ::clang::VectorType::isVectorSizeTooLarge;
    boost::python::class_< class ::clang::VectorType, autowig::HeldType< class ::clang::VectorType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_f549ce8f1b295099974aaf1951f7fd53("VectorType", "", boost::python::no_init);
    class_f549ce8f1b295099974aaf1951f7fd53.def("classof", method_pointer_270257fd3c6c5278a337f9192e9f9833, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("desugar", method_pointer_362cfcd90c1c5264844a73d332e22586, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_element_type", method_pointer_6b97f052862b531fada5da2b50e33db2, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_num_elements", method_pointer_afaee8a206805f12a0061493a567b421, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_sugared", method_pointer_fee3a84bb9c15bf19e38f7468e522541, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_vector_size_too_large", method_pointer_5f76cfa6687459e9976c41cd6d7cba67, "");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("is_vector_size_too_large");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VectorType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VectorType >, autowig::HeldType< class ::clang::Type > >();
    }

}