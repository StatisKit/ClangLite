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
    bool  (*method_pointer_6ab5b1fd0f23539cba71c0feb0c31f7d)(class ::clang::Type  const *) = ::clang::ArrayType::classof;
    class ::clang::QualType  (::clang::ArrayType::*method_pointer_14fa4d307f5356cabe2bcfc76cc0c0ca)() const = &::clang::ArrayType::getElementType;
    unsigned int  (::clang::ArrayType::*method_pointer_d1a904ac9217518d81ba6609f9a9fc22)() const = &::clang::ArrayType::getIndexTypeCVRQualifiers;
    boost::python::class_< class ::clang::ArrayType, autowig::HeldType< class ::clang::ArrayType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_7981b6362f50522ab01234005fa1e76a("ArrayType", "", boost::python::no_init);
    class_7981b6362f50522ab01234005fa1e76a.def("classof", method_pointer_6ab5b1fd0f23539cba71c0feb0c31f7d, "");
    class_7981b6362f50522ab01234005fa1e76a.def("get_element_type", method_pointer_14fa4d307f5356cabe2bcfc76cc0c0ca, "");
    class_7981b6362f50522ab01234005fa1e76a.def("get_index_type_cvr_qualifiers", method_pointer_d1a904ac9217518d81ba6609f9a9fc22, "");
    class_7981b6362f50522ab01234005fa1e76a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ArrayType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ArrayType >, autowig::HeldType< class ::clang::Type > >();
    }

}