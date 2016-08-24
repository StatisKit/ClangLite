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
    bool  (*method_pointer_77b43fc427f359129c02286db3fecf38)(class ::clang::Type  const *) = ::clang::VectorType::classof;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_368bdf387ddc5501a2c2ac5b70553c6a)() const = &::clang::VectorType::desugar;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_0feb81b0819f5025a0ece9d109d20535)() const = &::clang::VectorType::getElementType;
    unsigned int  (::clang::VectorType::*method_pointer_70f30d9f31f05625ac678a6af3ff983c)() const = &::clang::VectorType::getNumElements;
    bool  (::clang::VectorType::*method_pointer_f80b610b76a452aab66fd9156b18dc77)() const = &::clang::VectorType::isSugared;
    bool  (*method_pointer_4d111f2a053f5a89b91547653ea6a9cb)(unsigned int ) = ::clang::VectorType::isVectorSizeTooLarge;
    boost::python::class_< class ::clang::VectorType, autowig::HeldType< class ::clang::VectorType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_f549ce8f1b295099974aaf1951f7fd53("VectorType", "", boost::python::no_init);
    class_f549ce8f1b295099974aaf1951f7fd53.def("classof", method_pointer_77b43fc427f359129c02286db3fecf38, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("desugar", method_pointer_368bdf387ddc5501a2c2ac5b70553c6a, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_element_type", method_pointer_0feb81b0819f5025a0ece9d109d20535, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_num_elements", method_pointer_70f30d9f31f05625ac678a6af3ff983c, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_sugared", method_pointer_f80b610b76a452aab66fd9156b18dc77, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_vector_size_too_large", method_pointer_4d111f2a053f5a89b91547653ea6a9cb, "");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("is_vector_size_too_large");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VectorType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VectorType >, autowig::HeldType< class ::clang::Type > >();
    }

}