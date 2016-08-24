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
    bool  (*method_pointer_e3220ab28c8e5427829c7e518be435c8)(class ::clang::Type  const *) = ::clang::VectorType::classof;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_0bf812960f1958c7ae2c983872157ab5)() const = &::clang::VectorType::desugar;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_5afb6b8f68fb57c5a627990c0ed068e0)() const = &::clang::VectorType::getElementType;
    unsigned int  (::clang::VectorType::*method_pointer_a8c9cbdead6f5df08453d522bc5671fd)() const = &::clang::VectorType::getNumElements;
    bool  (::clang::VectorType::*method_pointer_4158125285cf5f3c9b0947a8b0c99971)() const = &::clang::VectorType::isSugared;
    bool  (*method_pointer_2b33eea60d355c50ba1ed9c778e103e6)(unsigned int ) = ::clang::VectorType::isVectorSizeTooLarge;
    boost::python::class_< class ::clang::VectorType, autowig::HeldType< class ::clang::VectorType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_f549ce8f1b295099974aaf1951f7fd53("VectorType", "", boost::python::no_init);
    class_f549ce8f1b295099974aaf1951f7fd53.def("classof", method_pointer_e3220ab28c8e5427829c7e518be435c8, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("desugar", method_pointer_0bf812960f1958c7ae2c983872157ab5, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_element_type", method_pointer_5afb6b8f68fb57c5a627990c0ed068e0, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_num_elements", method_pointer_a8c9cbdead6f5df08453d522bc5671fd, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_sugared", method_pointer_4158125285cf5f3c9b0947a8b0c99971, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_vector_size_too_large", method_pointer_2b33eea60d355c50ba1ed9c778e103e6, "");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("is_vector_size_too_large");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VectorType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VectorType >, autowig::HeldType< class ::clang::Type > >();
    }

}