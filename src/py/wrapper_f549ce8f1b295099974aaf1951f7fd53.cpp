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
    bool  (*method_pointer_dda578d73ea65214a9b2c53fcc026e4e)(class ::clang::Type  const *) = ::clang::VectorType::classof;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_909cb68fa78c5b70b6f02746ae29dd8f)() const = &::clang::VectorType::desugar;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_4fcfba81797c5a1f9121b304ec613cd3)() const = &::clang::VectorType::getElementType;
    unsigned int  (::clang::VectorType::*method_pointer_c50dda8509e2567c90f25328abb212c1)() const = &::clang::VectorType::getNumElements;
    bool  (::clang::VectorType::*method_pointer_9cc23ef784ea5b6f92f5ccf75add73ba)() const = &::clang::VectorType::isSugared;
    bool  (*method_pointer_293d7b4bcc4a52e2a175caeffc8e9f09)(unsigned int ) = ::clang::VectorType::isVectorSizeTooLarge;
    boost::python::class_< class ::clang::VectorType, autowig::HeldType< class ::clang::VectorType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_f549ce8f1b295099974aaf1951f7fd53("VectorType", "", boost::python::no_init);
    class_f549ce8f1b295099974aaf1951f7fd53.def("classof", method_pointer_dda578d73ea65214a9b2c53fcc026e4e, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("desugar", method_pointer_909cb68fa78c5b70b6f02746ae29dd8f, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_element_type", method_pointer_4fcfba81797c5a1f9121b304ec613cd3, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_num_elements", method_pointer_c50dda8509e2567c90f25328abb212c1, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_sugared", method_pointer_9cc23ef784ea5b6f92f5ccf75add73ba, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_vector_size_too_large", method_pointer_293d7b4bcc4a52e2a175caeffc8e9f09, "");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("is_vector_size_too_large");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VectorType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VectorType >, autowig::HeldType< class ::clang::Type > >();
    }

}