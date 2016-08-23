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
    bool  (*method_pointer_a47083ada6645bb3b16ca82371a753a7)(class ::clang::Type  const *) = ::clang::VectorType::classof;
    unsigned int  (::clang::VectorType::*method_pointer_3892dfa512e45881b7648c16a4856657)() const = &::clang::VectorType::getNumElements;
    bool  (::clang::VectorType::*method_pointer_00988167989659e18eb618577b3eaacb)() const = &::clang::VectorType::isSugared;
    bool  (*method_pointer_b76d0ec22da0500887354899276f8dca)(unsigned int ) = ::clang::VectorType::isVectorSizeTooLarge;
    boost::python::class_< class ::clang::VectorType, autowig::HeldType< class ::clang::VectorType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_f549ce8f1b295099974aaf1951f7fd53("VectorType", "", boost::python::no_init);
    class_f549ce8f1b295099974aaf1951f7fd53.def("classof", method_pointer_a47083ada6645bb3b16ca82371a753a7, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_num_elements", method_pointer_3892dfa512e45881b7648c16a4856657, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_sugared", method_pointer_00988167989659e18eb618577b3eaacb, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_vector_size_too_large", method_pointer_b76d0ec22da0500887354899276f8dca, "");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("is_vector_size_too_large");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VectorType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VectorType >, autowig::HeldType< class ::clang::Type > >();
    }

}