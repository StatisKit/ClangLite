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
    bool  (*method_pointer_e57f31d9e388599ab84d9a59e504116f)(class ::clang::Type  const *) = ::clang::VectorType::classof;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_24ff574aa54752d6844ac9cbff1f23f5)() const = &::clang::VectorType::desugar;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_1317b7bb344956ab82c68a3299574fbc)() const = &::clang::VectorType::getElementType;
    unsigned int  (::clang::VectorType::*method_pointer_6997004a7e155e9cb5c12660b4f13fc1)() const = &::clang::VectorType::getNumElements;
    bool  (::clang::VectorType::*method_pointer_365e4ca845c75f7cbd68c9c50d83e97a)() const = &::clang::VectorType::isSugared;
    bool  (*method_pointer_41eeee300e2e5cba8be3d36accbb9179)(unsigned int ) = ::clang::VectorType::isVectorSizeTooLarge;
    boost::python::class_< class ::clang::VectorType, autowig::HeldType< class ::clang::VectorType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_f549ce8f1b295099974aaf1951f7fd53("VectorType", "", boost::python::no_init);
    class_f549ce8f1b295099974aaf1951f7fd53.def("classof", method_pointer_e57f31d9e388599ab84d9a59e504116f, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("desugar", method_pointer_24ff574aa54752d6844ac9cbff1f23f5, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_element_type", method_pointer_1317b7bb344956ab82c68a3299574fbc, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_num_elements", method_pointer_6997004a7e155e9cb5c12660b4f13fc1, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_sugared", method_pointer_365e4ca845c75f7cbd68c9c50d83e97a, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_vector_size_too_large", method_pointer_41eeee300e2e5cba8be3d36accbb9179, "");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("is_vector_size_too_large");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VectorType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VectorType >, autowig::HeldType< class ::clang::Type > >();
    }

}