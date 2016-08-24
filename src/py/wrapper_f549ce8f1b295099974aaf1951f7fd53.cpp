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
    bool  (*method_pointer_63ec2e44c370514d8d9c9a982286b477)(class ::clang::Type  const *) = ::clang::VectorType::classof;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_d23ce357f177537eae8e73c735149eb8)() const = &::clang::VectorType::desugar;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_742ade04afae59508c285d0c52bf325a)() const = &::clang::VectorType::getElementType;
    unsigned int  (::clang::VectorType::*method_pointer_0fcbdc7fa58f5a898d15c365a3534431)() const = &::clang::VectorType::getNumElements;
    bool  (::clang::VectorType::*method_pointer_480f860fc5305a8ea94301ed50f039b4)() const = &::clang::VectorType::isSugared;
    bool  (*method_pointer_5b29d7d1230f54b0bb9a803b317933ed)(unsigned int ) = ::clang::VectorType::isVectorSizeTooLarge;
    boost::python::class_< class ::clang::VectorType, autowig::HeldType< class ::clang::VectorType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_f549ce8f1b295099974aaf1951f7fd53("VectorType", "", boost::python::no_init);
    class_f549ce8f1b295099974aaf1951f7fd53.def("classof", method_pointer_63ec2e44c370514d8d9c9a982286b477, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("desugar", method_pointer_d23ce357f177537eae8e73c735149eb8, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_element_type", method_pointer_742ade04afae59508c285d0c52bf325a, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_num_elements", method_pointer_0fcbdc7fa58f5a898d15c365a3534431, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_sugared", method_pointer_480f860fc5305a8ea94301ed50f039b4, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_vector_size_too_large", method_pointer_5b29d7d1230f54b0bb9a803b317933ed, "");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("is_vector_size_too_large");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VectorType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VectorType >, autowig::HeldType< class ::clang::Type > >();
    }

}