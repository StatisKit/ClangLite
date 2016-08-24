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
    bool  (*method_pointer_28d1a1651a2a54d1b98add2e1b68cc67)(class ::clang::Type  const *) = ::clang::VectorType::classof;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_3f1b4e5ba99153cdb30feb914454ca9e)() const = &::clang::VectorType::desugar;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_45a0891e93375381b119b3c3af643db1)() const = &::clang::VectorType::getElementType;
    unsigned int  (::clang::VectorType::*method_pointer_d5373830ac3055efb11685683743fe4c)() const = &::clang::VectorType::getNumElements;
    bool  (::clang::VectorType::*method_pointer_dfbb1f9a9da7594e92c6a6c313a37ef0)() const = &::clang::VectorType::isSugared;
    bool  (*method_pointer_67ed1e33014a58d4816a72a297ecf34e)(unsigned int ) = ::clang::VectorType::isVectorSizeTooLarge;
    boost::python::class_< class ::clang::VectorType, autowig::HeldType< class ::clang::VectorType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_f549ce8f1b295099974aaf1951f7fd53("VectorType", "", boost::python::no_init);
    class_f549ce8f1b295099974aaf1951f7fd53.def("classof", method_pointer_28d1a1651a2a54d1b98add2e1b68cc67, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("desugar", method_pointer_3f1b4e5ba99153cdb30feb914454ca9e, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_element_type", method_pointer_45a0891e93375381b119b3c3af643db1, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_num_elements", method_pointer_d5373830ac3055efb11685683743fe4c, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_sugared", method_pointer_dfbb1f9a9da7594e92c6a6c313a37ef0, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_vector_size_too_large", method_pointer_67ed1e33014a58d4816a72a297ecf34e, "");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("is_vector_size_too_large");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VectorType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VectorType >, autowig::HeldType< class ::clang::Type > >();
    }

}