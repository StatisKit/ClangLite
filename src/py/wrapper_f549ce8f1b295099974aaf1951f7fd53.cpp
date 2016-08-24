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
    bool  (*method_pointer_0765083d9e785129abd04151e0a1c235)(class ::clang::Type  const *) = ::clang::VectorType::classof;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_fa96be7badcf5547ab72af9a1fae5c3f)() const = &::clang::VectorType::desugar;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_1213753b5a1758e491eb6acba1188885)() const = &::clang::VectorType::getElementType;
    unsigned int  (::clang::VectorType::*method_pointer_f3e53996f5bd56ccab0dac4bbbe03ea3)() const = &::clang::VectorType::getNumElements;
    bool  (::clang::VectorType::*method_pointer_b6ad65e07f675251a93e691e303f2722)() const = &::clang::VectorType::isSugared;
    bool  (*method_pointer_2850c4b75085534981ae6c4d8346c69c)(unsigned int ) = ::clang::VectorType::isVectorSizeTooLarge;
    boost::python::class_< class ::clang::VectorType, autowig::HeldType< class ::clang::VectorType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_f549ce8f1b295099974aaf1951f7fd53("VectorType", "", boost::python::no_init);
    class_f549ce8f1b295099974aaf1951f7fd53.def("classof", method_pointer_0765083d9e785129abd04151e0a1c235, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("desugar", method_pointer_fa96be7badcf5547ab72af9a1fae5c3f, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_element_type", method_pointer_1213753b5a1758e491eb6acba1188885, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_num_elements", method_pointer_f3e53996f5bd56ccab0dac4bbbe03ea3, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_sugared", method_pointer_b6ad65e07f675251a93e691e303f2722, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_vector_size_too_large", method_pointer_2850c4b75085534981ae6c4d8346c69c, "");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("is_vector_size_too_large");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VectorType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VectorType >, autowig::HeldType< class ::clang::Type > >();
    }

}