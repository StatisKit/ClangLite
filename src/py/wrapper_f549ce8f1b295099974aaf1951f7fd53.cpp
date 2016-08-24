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
    bool  (*method_pointer_0604403178645e6ca5799b3401f6b716)(class ::clang::Type  const *) = ::clang::VectorType::classof;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_5884da501992592398c2c98694707942)() const = &::clang::VectorType::desugar;
    class ::clang::QualType  (::clang::VectorType::*method_pointer_4767e4782e515a0586ed07ef8bf488ec)() const = &::clang::VectorType::getElementType;
    unsigned int  (::clang::VectorType::*method_pointer_23ce69ffbefb5f5d93febfa0687304c1)() const = &::clang::VectorType::getNumElements;
    bool  (::clang::VectorType::*method_pointer_9776cfb66467551cbe573235088356c8)() const = &::clang::VectorType::isSugared;
    bool  (*method_pointer_6a9f4883118f5eafa33452c4b4e4a645)(unsigned int ) = ::clang::VectorType::isVectorSizeTooLarge;
    boost::python::class_< class ::clang::VectorType, autowig::HeldType< class ::clang::VectorType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_f549ce8f1b295099974aaf1951f7fd53("VectorType", "", boost::python::no_init);
    class_f549ce8f1b295099974aaf1951f7fd53.def("classof", method_pointer_0604403178645e6ca5799b3401f6b716, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("desugar", method_pointer_5884da501992592398c2c98694707942, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_element_type", method_pointer_4767e4782e515a0586ed07ef8bf488ec, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("get_num_elements", method_pointer_23ce69ffbefb5f5d93febfa0687304c1, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_sugared", method_pointer_9776cfb66467551cbe573235088356c8, "");
    class_f549ce8f1b295099974aaf1951f7fd53.def("is_vector_size_too_large", method_pointer_6a9f4883118f5eafa33452c4b4e4a645, "");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("is_vector_size_too_large");
    class_f549ce8f1b295099974aaf1951f7fd53.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VectorType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VectorType >, autowig::HeldType< class ::clang::Type > >();
    }

}