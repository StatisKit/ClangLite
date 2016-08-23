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
    bool  (*method_pointer_fa0fa24a761852a59eea1f04894b504a)(class ::clang::Type  const *) = ::clang::VectorType::classof;
    unsigned int  (::clang::VectorType::*method_pointer_93ac423015355e2499df175c6c9a0d4c)() const = &::clang::VectorType::getNumElements;
    bool  (::clang::VectorType::*method_pointer_61084adc284f5d2caee957c542cdacbc)() const = &::clang::VectorType::isSugared;
    bool  (*method_pointer_1d52fab38db1595eb34bd5de60adcb71)(unsigned int ) = ::clang::VectorType::isVectorSizeTooLarge;
    boost::python::class_< class ::clang::VectorType, autowig::HeldType< class ::clang::VectorType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_f549ce8f1b295099974aaf1951f7fd53("VectorType", "", boost::python::no_init);
    class_f549ce8f1b295099974aaf1951f7fd53.def("classof", method_pointer_fa0fa24a761852a59eea1f04894b504a, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_num_elements", method_pointer_93ac423015355e2499df175c6c9a0d4c, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_sugared", method_pointer_61084adc284f5d2caee957c542cdacbc, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_vector_size_too_large", method_pointer_1d52fab38db1595eb34bd5de60adcb71, "");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("is_vector_size_too_large");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VectorType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VectorType >, autowig::HeldType< class ::clang::Type > >();
    }

}