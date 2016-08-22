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
    bool  (*method_pointer_99fcfb00f8145233a4e0667d21735565)(class ::clang::Type  const *) = ::clang::VectorType::classof;
    unsigned int  (::clang::VectorType::*method_pointer_ca38901c139355c48124f1497137461d)() const = &::clang::VectorType::getNumElements;
    bool  (::clang::VectorType::*method_pointer_d2d2a4eafff4507291f77a95be27898b)() const = &::clang::VectorType::isSugared;
    bool  (*method_pointer_546c4f0ee53b54d794386375780b6fb3)(unsigned int ) = ::clang::VectorType::isVectorSizeTooLarge;
    boost::python::class_< class ::clang::VectorType, autowig::HeldType< class ::clang::VectorType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_f549ce8f1b295099974aaf1951f7fd53("VectorType", "", boost::python::no_init);
    class_f549ce8f1b295099974aaf1951f7fd53.def("classof", method_pointer_99fcfb00f8145233a4e0667d21735565, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_num_elements", method_pointer_ca38901c139355c48124f1497137461d, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_sugared", method_pointer_d2d2a4eafff4507291f77a95be27898b, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_vector_size_too_large", method_pointer_546c4f0ee53b54d794386375780b6fb3, "");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("is_vector_size_too_large");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VectorType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VectorType >, autowig::HeldType< class ::clang::Type > >();
    }

}