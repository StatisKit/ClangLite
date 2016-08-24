#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_e6f4659cd31f536d8a173fe6b97a9e5a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_195c513190035843aa193ecc2fcd0b41)(class ::clang::Type  const *) = ::clang::IncompleteArrayType::classof;
    class ::clang::QualType  (::clang::IncompleteArrayType::*method_pointer_46000e554fd4547ba1a5203bb1a64f15)() const = &::clang::IncompleteArrayType::desugar;
    bool  (::clang::IncompleteArrayType::*method_pointer_0fc7fb69431b5c0d93adf9920606f266)() const = &::clang::IncompleteArrayType::isSugared;
    boost::python::class_< class ::clang::IncompleteArrayType, autowig::HeldType< class ::clang::IncompleteArrayType >, boost::python::bases< class ::clang::ArrayType >, boost::noncopyable > class_e6f4659cd31f536d8a173fe6b97a9e5a("IncompleteArrayType", "", boost::python::no_init);
    class_e6f4659cd31f536d8a173fe6b97a9e5a.def("classof", method_pointer_195c513190035843aa193ecc2fcd0b41, "");
    class_e6f4659cd31f536d8a173fe6b97a9e5a.def("desugar", method_pointer_46000e554fd4547ba1a5203bb1a64f15, "");
    class_e6f4659cd31f536d8a173fe6b97a9e5a.def("is_sugared", method_pointer_0fc7fb69431b5c0d93adf9920606f266, "");
    class_e6f4659cd31f536d8a173fe6b97a9e5a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::IncompleteArrayType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::IncompleteArrayType >, autowig::HeldType< class ::clang::ArrayType > >();
    }

}