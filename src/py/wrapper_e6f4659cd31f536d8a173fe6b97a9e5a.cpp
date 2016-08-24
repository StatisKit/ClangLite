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
    bool  (*method_pointer_11956eb188ce5be59b280d0685c63c57)(class ::clang::Type  const *) = ::clang::IncompleteArrayType::classof;
    class ::clang::QualType  (::clang::IncompleteArrayType::*method_pointer_e12579d394a55c34bcc32fe39e08ad2c)() const = &::clang::IncompleteArrayType::desugar;
    bool  (::clang::IncompleteArrayType::*method_pointer_6d3fd5314057570b886dede2335a3a02)() const = &::clang::IncompleteArrayType::isSugared;
    boost::python::class_< class ::clang::IncompleteArrayType, autowig::HeldType< class ::clang::IncompleteArrayType >, boost::python::bases< class ::clang::ArrayType >, boost::noncopyable > class_e6f4659cd31f536d8a173fe6b97a9e5a("IncompleteArrayType", "", boost::python::no_init);
    class_e6f4659cd31f536d8a173fe6b97a9e5a.def("classof", method_pointer_11956eb188ce5be59b280d0685c63c57, "");
    class_e6f4659cd31f536d8a173fe6b97a9e5a.def("desugar", method_pointer_e12579d394a55c34bcc32fe39e08ad2c, "");
    class_e6f4659cd31f536d8a173fe6b97a9e5a.def("is_sugared", method_pointer_6d3fd5314057570b886dede2335a3a02, "");
    class_e6f4659cd31f536d8a173fe6b97a9e5a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::IncompleteArrayType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::IncompleteArrayType >, autowig::HeldType< class ::clang::ArrayType > >();
    }

}