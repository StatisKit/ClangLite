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
    bool  (*method_pointer_230ea09d411858e8920986dc5cfa0273)(class ::clang::Type  const *) = ::clang::VectorType::classof;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_17a3fc7085685f3cadf786089c9443fb)() const = &::clang::VectorType::desugar;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_e15c4f8c17155331aa1123678b8449c8)() const = &::clang::VectorType::getElementType;
    unsigned int  (::clang::VectorType::*method_pointer_975ffc74a52a537583dfbcbbc5a960a6)() const = &::clang::VectorType::getNumElements;
    bool  (::clang::VectorType::*method_pointer_ac2a24963a095b33b12e31e98ffa7cd7)() const = &::clang::VectorType::isSugared;
    bool  (*method_pointer_40a0d1263b05565a8957007056dc7ff7)(unsigned int ) = ::clang::VectorType::isVectorSizeTooLarge;
    boost::python::class_< class ::clang::VectorType, autowig::HeldType< class ::clang::VectorType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_f549ce8f1b295099974aaf1951f7fd53("VectorType", "", boost::python::no_init);
    class_f549ce8f1b295099974aaf1951f7fd53.def("classof", method_pointer_230ea09d411858e8920986dc5cfa0273, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("desugar", method_pointer_17a3fc7085685f3cadf786089c9443fb, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_element_type", method_pointer_e15c4f8c17155331aa1123678b8449c8, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_num_elements", method_pointer_975ffc74a52a537583dfbcbbc5a960a6, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_sugared", method_pointer_ac2a24963a095b33b12e31e98ffa7cd7, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_vector_size_too_large", method_pointer_40a0d1263b05565a8957007056dc7ff7, "");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("is_vector_size_too_large");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VectorType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VectorType >, autowig::HeldType< class ::clang::Type > >();
    }

}