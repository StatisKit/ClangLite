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
    bool  (*method_pointer_41735149e9625117a6e040f3e19f0e6f)(class ::clang::Type  const *) = ::clang::VectorType::classof;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_0370872778015df49e0af2ada318ae84)() const = &::clang::VectorType::desugar;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_20f80650afdb56ca9962c91ff6ea2405)() const = &::clang::VectorType::getElementType;
    unsigned int  (::clang::VectorType::*method_pointer_6afc54805a8350aca7aaedff614e6d78)() const = &::clang::VectorType::getNumElements;
    bool  (::clang::VectorType::*method_pointer_53fc1688110956d28858baef32940ba5)() const = &::clang::VectorType::isSugared;
    bool  (*method_pointer_4675245f9d795158817fc4dbee3470cb)(unsigned int ) = ::clang::VectorType::isVectorSizeTooLarge;
    boost::python::class_< class ::clang::VectorType, autowig::HeldType< class ::clang::VectorType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_f549ce8f1b295099974aaf1951f7fd53("VectorType", "", boost::python::no_init);
    class_f549ce8f1b295099974aaf1951f7fd53.def("classof", method_pointer_41735149e9625117a6e040f3e19f0e6f, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("desugar", method_pointer_0370872778015df49e0af2ada318ae84, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_element_type", method_pointer_20f80650afdb56ca9962c91ff6ea2405, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_num_elements", method_pointer_6afc54805a8350aca7aaedff614e6d78, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_sugared", method_pointer_53fc1688110956d28858baef32940ba5, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_vector_size_too_large", method_pointer_4675245f9d795158817fc4dbee3470cb, "");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("is_vector_size_too_large");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VectorType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VectorType >, autowig::HeldType< class ::clang::Type > >();
    }

}