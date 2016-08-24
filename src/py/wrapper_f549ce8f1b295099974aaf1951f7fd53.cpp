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
    bool  (*method_pointer_36954b219019538a82490c9d6c5d02b7)(class ::clang::Type  const *) = ::clang::VectorType::classof;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_665aad7946b55a55bc5a8aa0ce61fa35)() const = &::clang::VectorType::desugar;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_2862fe4cc8a55597b611e619e8768561)() const = &::clang::VectorType::getElementType;
    unsigned int  (::clang::VectorType::*method_pointer_5db3cf70225e54fa9e22ce540e2a0e8e)() const = &::clang::VectorType::getNumElements;
    bool  (::clang::VectorType::*method_pointer_ded46a1630315644bded52b3d9a01ca3)() const = &::clang::VectorType::isSugared;
    bool  (*method_pointer_8a75207c85125002b339c4550ad231b3)(unsigned int ) = ::clang::VectorType::isVectorSizeTooLarge;
    boost::python::class_< class ::clang::VectorType, autowig::HeldType< class ::clang::VectorType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_f549ce8f1b295099974aaf1951f7fd53("VectorType", "", boost::python::no_init);
    class_f549ce8f1b295099974aaf1951f7fd53.def("classof", method_pointer_36954b219019538a82490c9d6c5d02b7, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("desugar", method_pointer_665aad7946b55a55bc5a8aa0ce61fa35, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_element_type", method_pointer_2862fe4cc8a55597b611e619e8768561, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_num_elements", method_pointer_5db3cf70225e54fa9e22ce540e2a0e8e, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_sugared", method_pointer_ded46a1630315644bded52b3d9a01ca3, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_vector_size_too_large", method_pointer_8a75207c85125002b339c4550ad231b3, "");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("is_vector_size_too_large");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VectorType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VectorType >, autowig::HeldType< class ::clang::Type > >();
    }

}