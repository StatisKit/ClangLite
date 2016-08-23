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
    bool  (*method_pointer_56fa996498285f7ba94684a04c93e778)(class ::clang::Type  const *) = ::clang::VectorType::classof;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_a9df4cf1eea9516aae00ccfceb45234b)() const = &::clang::VectorType::desugar;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_3ac901f5aedd572da7077961e3c275a8)() const = &::clang::VectorType::getElementType;
    unsigned int  (::clang::VectorType::*method_pointer_58ce04ba60845bf69ef25d9abb89cf5c)() const = &::clang::VectorType::getNumElements;
    bool  (::clang::VectorType::*method_pointer_10b0edfee74d5354b986b25e83c78248)() const = &::clang::VectorType::isSugared;
    bool  (*method_pointer_dba94905dace5d8dbd7d3afc05508112)(unsigned int ) = ::clang::VectorType::isVectorSizeTooLarge;
    boost::python::class_< class ::clang::VectorType, autowig::HeldType< class ::clang::VectorType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_f549ce8f1b295099974aaf1951f7fd53("VectorType", "", boost::python::no_init);
    class_f549ce8f1b295099974aaf1951f7fd53.def("classof", method_pointer_56fa996498285f7ba94684a04c93e778, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("desugar", method_pointer_a9df4cf1eea9516aae00ccfceb45234b, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_element_type", method_pointer_3ac901f5aedd572da7077961e3c275a8, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_num_elements", method_pointer_58ce04ba60845bf69ef25d9abb89cf5c, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_sugared", method_pointer_10b0edfee74d5354b986b25e83c78248, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_vector_size_too_large", method_pointer_dba94905dace5d8dbd7d3afc05508112, "");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("is_vector_size_too_large");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VectorType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VectorType >, autowig::HeldType< class ::clang::Type > >();
    }

}