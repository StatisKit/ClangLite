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
    bool  (*method_pointer_6b68182e3b065d6db89cad5b0cc2a194)(class ::clang::Type  const *) = ::clang::VectorType::classof;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_b97f0c44158358a48854952bad08f8e3)() const = &::clang::VectorType::desugar;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_e09ebe2d3f3e5b2bb72a6a3b361cba7b)() const = &::clang::VectorType::getElementType;
    unsigned int  (::clang::VectorType::*method_pointer_a8632013ac3a5f3e9f36964d34bd0931)() const = &::clang::VectorType::getNumElements;
    bool  (::clang::VectorType::*method_pointer_f212e883db8c5a24a6998068c3c79080)() const = &::clang::VectorType::isSugared;
    bool  (*method_pointer_ba5cf77d2ad957a38d1434c4d7caa781)(unsigned int ) = ::clang::VectorType::isVectorSizeTooLarge;
    boost::python::class_< class ::clang::VectorType, autowig::HeldType< class ::clang::VectorType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_f549ce8f1b295099974aaf1951f7fd53("VectorType", "", boost::python::no_init);
    class_f549ce8f1b295099974aaf1951f7fd53.def("classof", method_pointer_6b68182e3b065d6db89cad5b0cc2a194, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("desugar", method_pointer_b97f0c44158358a48854952bad08f8e3, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_element_type", method_pointer_e09ebe2d3f3e5b2bb72a6a3b361cba7b, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_num_elements", method_pointer_a8632013ac3a5f3e9f36964d34bd0931, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_sugared", method_pointer_f212e883db8c5a24a6998068c3c79080, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_vector_size_too_large", method_pointer_ba5cf77d2ad957a38d1434c4d7caa781, "");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("is_vector_size_too_large");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VectorType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VectorType >, autowig::HeldType< class ::clang::Type > >();
    }

}