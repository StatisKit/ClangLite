#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_f549ce8f1b295099974aaf1951f7fd53()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_1c94e107334c500c802aa65eb24794e4)(unsigned int ) = ::clang::VectorType::isVectorSizeTooLarge;
    bool  (::clang::VectorType::*method_pointer_4a9a760a9ab057d9aef73b8942c691a3)() const = &::clang::VectorType::isSugared;
    unsigned int  (::clang::VectorType::*method_pointer_0b4b93fe15f15e4e8b5b28eaa7b71554)() const = &::clang::VectorType::getNumElements;
    bool  (*method_pointer_b69ecd3aca3951c0892450c4b09f563f)(class ::clang::Type  const *) = ::clang::VectorType::classof;
    boost::python::class_< class ::clang::VectorType, autowig::HeldType< class ::clang::VectorType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_f549ce8f1b295099974aaf1951f7fd53("VectorType", "", boost::python::no_init);
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_vector_size_too_large", method_pointer_1c94e107334c500c802aa65eb24794e4, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_sugared", method_pointer_4a9a760a9ab057d9aef73b8942c691a3, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_num_elements", method_pointer_0b4b93fe15f15e4e8b5b28eaa7b71554, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("classof", method_pointer_b69ecd3aca3951c0892450c4b09f563f, "");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("is_vector_size_too_large");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VectorType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VectorType >, autowig::HeldType< class ::clang::Type > >();
    }

}