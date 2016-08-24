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
    bool  (*method_pointer_a4f2c341068454099fec6f9bf2b0ec17)(class ::clang::Type  const *) = ::clang::VectorType::classof;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_0bfb98c685ab541f83717114c6fa5928)() const = &::clang::VectorType::desugar;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_95f3d1ac3ab2588b96075ee12fb83d78)() const = &::clang::VectorType::getElementType;
    unsigned int  (::clang::VectorType::*method_pointer_a22fc427aa025d18a7dcb2e93502d1b9)() const = &::clang::VectorType::getNumElements;
    bool  (::clang::VectorType::*method_pointer_adeba2170bce5efabd58fd49ed363663)() const = &::clang::VectorType::isSugared;
    bool  (*method_pointer_8f281be35f59541a80f0ace319c05ae9)(unsigned int ) = ::clang::VectorType::isVectorSizeTooLarge;
    boost::python::class_< class ::clang::VectorType, autowig::HeldType< class ::clang::VectorType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_f549ce8f1b295099974aaf1951f7fd53("VectorType", "", boost::python::no_init);
    class_f549ce8f1b295099974aaf1951f7fd53.def("classof", method_pointer_a4f2c341068454099fec6f9bf2b0ec17, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("desugar", method_pointer_0bfb98c685ab541f83717114c6fa5928, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_element_type", method_pointer_95f3d1ac3ab2588b96075ee12fb83d78, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_num_elements", method_pointer_a22fc427aa025d18a7dcb2e93502d1b9, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_sugared", method_pointer_adeba2170bce5efabd58fd49ed363663, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_vector_size_too_large", method_pointer_8f281be35f59541a80f0ace319c05ae9, "");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("is_vector_size_too_large");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VectorType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VectorType >, autowig::HeldType< class ::clang::Type > >();
    }

}