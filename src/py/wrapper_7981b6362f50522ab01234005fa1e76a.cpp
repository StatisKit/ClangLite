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
    bool  (*method_pointer_66347a487e195897af9190016fb33ab8)(class ::clang::Type  const *) = ::clang::ArrayType::classof;
    class ::clang::QualType  (::clang::ArrayType::*method_pointer_b2ca6e24ba83561886098a83c4487801)() const = &::clang::ArrayType::getElementType;
    unsigned int  (::clang::ArrayType::*method_pointer_4f54505064fd5758833c8c9e5c2c5154)() const = &::clang::ArrayType::getIndexTypeCVRQualifiers;
    boost::python::class_< class ::clang::ArrayType, autowig::HeldType< class ::clang::ArrayType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_7981b6362f50522ab01234005fa1e76a("ArrayType", "", boost::python::no_init);
    class_7981b6362f50522ab01234005fa1e76a.def("classof", method_pointer_66347a487e195897af9190016fb33ab8, "");
    class_7981b6362f50522ab01234005fa1e76a.def("get_element_type", method_pointer_b2ca6e24ba83561886098a83c4487801, "");
    class_7981b6362f50522ab01234005fa1e76a.def("get_index_type_cvr_qualifiers", method_pointer_4f54505064fd5758833c8c9e5c2c5154, "");
    class_7981b6362f50522ab01234005fa1e76a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ArrayType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ArrayType >, autowig::HeldType< class ::clang::Type > >();
    }

}