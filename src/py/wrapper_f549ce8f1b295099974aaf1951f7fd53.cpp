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
    bool  (*method_pointer_db1e8014eda159e3a94c2f4fa9ffe67c)(class ::clang::Type  const *) = ::clang::VectorType::classof;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_647228353516511d821a28af3c63061e)() const = &::clang::VectorType::desugar;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_289fb0b02c535103a9d54bfd0103dfde)() const = &::clang::VectorType::getElementType;
    unsigned int  (::clang::VectorType::*method_pointer_5e1ee22369445898be842f21337d466d)() const = &::clang::VectorType::getNumElements;
    bool  (::clang::VectorType::*method_pointer_25f1eeade0f150589f3ac71cb7e4ebd4)() const = &::clang::VectorType::isSugared;
    bool  (*method_pointer_5d39937e798158208ad11913bbcaffd4)(unsigned int ) = ::clang::VectorType::isVectorSizeTooLarge;
    boost::python::class_< class ::clang::VectorType, autowig::HeldType< class ::clang::VectorType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_f549ce8f1b295099974aaf1951f7fd53("VectorType", "", boost::python::no_init);
    class_f549ce8f1b295099974aaf1951f7fd53.def("classof", method_pointer_db1e8014eda159e3a94c2f4fa9ffe67c, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("desugar", method_pointer_647228353516511d821a28af3c63061e, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_element_type", method_pointer_289fb0b02c535103a9d54bfd0103dfde, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_num_elements", method_pointer_5e1ee22369445898be842f21337d466d, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_sugared", method_pointer_25f1eeade0f150589f3ac71cb7e4ebd4, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_vector_size_too_large", method_pointer_5d39937e798158208ad11913bbcaffd4, "");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("is_vector_size_too_large");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VectorType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VectorType >, autowig::HeldType< class ::clang::Type > >();
    }

}