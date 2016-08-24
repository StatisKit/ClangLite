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
    bool  (*method_pointer_65895dc077095de5b0618cce864c1257)(class ::clang::Type  const *) = ::clang::VectorType::classof;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_5e8a48b0e1595e21a0e23c900aba14a3)() const = &::clang::VectorType::desugar;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_8fa48d2a14f555ddbfa631757d72c31f)() const = &::clang::VectorType::getElementType;
    unsigned int  (::clang::VectorType::*method_pointer_b108c0bbeee352cbbc5731704e104be5)() const = &::clang::VectorType::getNumElements;
    bool  (::clang::VectorType::*method_pointer_7ab81b57e4df575bb67c059093dff7da)() const = &::clang::VectorType::isSugared;
    bool  (*method_pointer_a9077bc2738d50e58835bdef53a86b09)(unsigned int ) = ::clang::VectorType::isVectorSizeTooLarge;
    boost::python::class_< class ::clang::VectorType, autowig::HeldType< class ::clang::VectorType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_f549ce8f1b295099974aaf1951f7fd53("VectorType", "", boost::python::no_init);
    class_f549ce8f1b295099974aaf1951f7fd53.def("classof", method_pointer_65895dc077095de5b0618cce864c1257, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("desugar", method_pointer_5e8a48b0e1595e21a0e23c900aba14a3, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_element_type", method_pointer_8fa48d2a14f555ddbfa631757d72c31f, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_num_elements", method_pointer_b108c0bbeee352cbbc5731704e104be5, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_sugared", method_pointer_7ab81b57e4df575bb67c059093dff7da, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_vector_size_too_large", method_pointer_a9077bc2738d50e58835bdef53a86b09, "");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("is_vector_size_too_large");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VectorType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VectorType >, autowig::HeldType< class ::clang::Type > >();
    }

}