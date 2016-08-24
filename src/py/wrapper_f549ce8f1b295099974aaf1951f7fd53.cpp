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
    bool  (*method_pointer_1be11f6a00255491a82bb6f41927a899)(class ::clang::Type  const *) = ::clang::VectorType::classof;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_df129df843ac5735b3514b6e815d3e7b)() const = &::clang::VectorType::desugar;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_87880db71733599e914de1514bffa504)() const = &::clang::VectorType::getElementType;
    unsigned int  (::clang::VectorType::*method_pointer_1e7c8fa588685b28a0fe1d3fa2280719)() const = &::clang::VectorType::getNumElements;
    bool  (::clang::VectorType::*method_pointer_cc665f9f169b59adae9f1af4f6af7070)() const = &::clang::VectorType::isSugared;
    bool  (*method_pointer_198bf7a6464b5963b9d714e34e0d0e3e)(unsigned int ) = ::clang::VectorType::isVectorSizeTooLarge;
    boost::python::class_< class ::clang::VectorType, autowig::HeldType< class ::clang::VectorType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_f549ce8f1b295099974aaf1951f7fd53("VectorType", "", boost::python::no_init);
    class_f549ce8f1b295099974aaf1951f7fd53.def("classof", method_pointer_1be11f6a00255491a82bb6f41927a899, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("desugar", method_pointer_df129df843ac5735b3514b6e815d3e7b, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_element_type", method_pointer_87880db71733599e914de1514bffa504, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_num_elements", method_pointer_1e7c8fa588685b28a0fe1d3fa2280719, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_sugared", method_pointer_cc665f9f169b59adae9f1af4f6af7070, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_vector_size_too_large", method_pointer_198bf7a6464b5963b9d714e34e0d0e3e, "");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("is_vector_size_too_large");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VectorType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VectorType >, autowig::HeldType< class ::clang::Type > >();
    }

}