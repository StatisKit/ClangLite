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
    bool  (*method_pointer_60e79f6a401d5d7b9d3df0a205465fd6)(class ::clang::Type  const *) = ::clang::VectorType::classof;
    unsigned int  (::clang::VectorType::*method_pointer_4814fc318eed5cb1913101c5ccf95e17)() const = &::clang::VectorType::getNumElements;
    bool  (::clang::VectorType::*method_pointer_d37d80d29ec750919bf60f09e30d0225)() const = &::clang::VectorType::isSugared;
    bool  (*method_pointer_cc14a41f6af8502fb9da3d6dbaff2809)(unsigned int ) = ::clang::VectorType::isVectorSizeTooLarge;
    boost::python::class_< class ::clang::VectorType, autowig::HeldType< class ::clang::VectorType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_f549ce8f1b295099974aaf1951f7fd53("VectorType", "", boost::python::no_init);
    class_f549ce8f1b295099974aaf1951f7fd53.def("classof", method_pointer_60e79f6a401d5d7b9d3df0a205465fd6, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_num_elements", method_pointer_4814fc318eed5cb1913101c5ccf95e17, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_sugared", method_pointer_d37d80d29ec750919bf60f09e30d0225, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_vector_size_too_large", method_pointer_cc14a41f6af8502fb9da3d6dbaff2809, "");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("is_vector_size_too_large");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VectorType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VectorType >, autowig::HeldType< class ::clang::Type > >();
    }

}