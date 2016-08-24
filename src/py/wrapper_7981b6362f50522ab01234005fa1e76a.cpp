#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_7981b6362f50522ab01234005fa1e76a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_c24f4ce87e9b5be4b79cceca92a3c970)(class ::clang::Type  const *) = ::clang::ArrayType::classof;
    class ::clang::QualType  (::clang::ArrayType::*method_pointer_a48d864cb5175a7d93f7190172132129)() const = &::clang::ArrayType::getElementType;
    unsigned int  (::clang::ArrayType::*method_pointer_6e76301c9f80515a90c699579532db0f)() const = &::clang::ArrayType::getIndexTypeCVRQualifiers;
    boost::python::class_< class ::clang::ArrayType, autowig::HeldType< class ::clang::ArrayType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_7981b6362f50522ab01234005fa1e76a("ArrayType", "", boost::python::no_init);
    class_7981b6362f50522ab01234005fa1e76a.def("classof", method_pointer_c24f4ce87e9b5be4b79cceca92a3c970, "");
    class_7981b6362f50522ab01234005fa1e76a.def("get_element_type", method_pointer_a48d864cb5175a7d93f7190172132129, "");
    class_7981b6362f50522ab01234005fa1e76a.def("get_index_type_cvr_qualifiers", method_pointer_6e76301c9f80515a90c699579532db0f, "");
    class_7981b6362f50522ab01234005fa1e76a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ArrayType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ArrayType >, autowig::HeldType< class ::clang::Type > >();
    }

}