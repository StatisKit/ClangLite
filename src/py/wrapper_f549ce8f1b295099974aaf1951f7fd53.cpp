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
    bool  (*method_pointer_68fd71f9f0255865a301c1c866e7ca0c)(class ::clang::Type  const *) = ::clang::VectorType::classof;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_1a1b5ee0b6e757cbbc599da56ee51bc8)() const = &::clang::VectorType::desugar;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_acfe0b2e3b345d2e89debf0a98ae30a0)() const = &::clang::VectorType::getElementType;
    unsigned int  (::clang::VectorType::*method_pointer_317a4ff437d15a3bbb60d00cdab844bf)() const = &::clang::VectorType::getNumElements;
    bool  (::clang::VectorType::*method_pointer_be018e755b85523790755e83ee84a8cc)() const = &::clang::VectorType::isSugared;
    bool  (*method_pointer_7bca8914c9fe5597a06dce5c1005aab5)(unsigned int ) = ::clang::VectorType::isVectorSizeTooLarge;
    boost::python::class_< class ::clang::VectorType, autowig::HeldType< class ::clang::VectorType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_f549ce8f1b295099974aaf1951f7fd53("VectorType", "", boost::python::no_init);
    class_f549ce8f1b295099974aaf1951f7fd53.def("classof", method_pointer_68fd71f9f0255865a301c1c866e7ca0c, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("desugar", method_pointer_1a1b5ee0b6e757cbbc599da56ee51bc8, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_element_type", method_pointer_acfe0b2e3b345d2e89debf0a98ae30a0, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_num_elements", method_pointer_317a4ff437d15a3bbb60d00cdab844bf, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_sugared", method_pointer_be018e755b85523790755e83ee84a8cc, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_vector_size_too_large", method_pointer_7bca8914c9fe5597a06dce5c1005aab5, "");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("is_vector_size_too_large");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VectorType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VectorType >, autowig::HeldType< class ::clang::Type > >();
    }

}