#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_d838cd6dfd2c51dfaa64ce4e68e945ec()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    enum ::clang::AccessSpecifier  (::clang::CXXBaseSpecifier::*method_pointer_7e002b654ee552c98b9cb37c8203cb5d)() const = &::clang::CXXBaseSpecifier::getAccessSpecifier;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_e90e0dc9854253d5b5b71786304de7e4)() const = &::clang::CXXBaseSpecifier::isPackExpansion;
    void  (::clang::CXXBaseSpecifier::*method_pointer_397adfd752e356f7a740fa5416c5bf6c)(bool ) = &::clang::CXXBaseSpecifier::setInheritConstructors;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_5b82931053295ba18e85cd41ce392f7b)() const = &::clang::CXXBaseSpecifier::isBaseOfClass;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_9e0c5b9bf16b5322ae3991e274ef92bb)() const = &::clang::CXXBaseSpecifier::isVirtual;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_a270f550ce365463a2097387e102d094)() const = &::clang::CXXBaseSpecifier::getInheritConstructors;
    enum ::clang::AccessSpecifier  (::clang::CXXBaseSpecifier::*method_pointer_c24363476c3857b4a3146f5aa3b8d110)() const = &::clang::CXXBaseSpecifier::getAccessSpecifierAsWritten;
    boost::python::class_< class ::clang::CXXBaseSpecifier, autowig::HeldType< class ::clang::CXXBaseSpecifier >, boost::noncopyable > class_d838cd6dfd2c51dfaa64ce4e68e945ec("CXXBaseSpecifier", "", boost::python::no_init);
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_access_specifier", method_pointer_7e002b654ee552c98b9cb37c8203cb5d, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("is_pack_expansion", method_pointer_e90e0dc9854253d5b5b71786304de7e4, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("set_inherit_constructors", method_pointer_397adfd752e356f7a740fa5416c5bf6c, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("is_base_of_class", method_pointer_5b82931053295ba18e85cd41ce392f7b, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("is_virtual", method_pointer_9e0c5b9bf16b5322ae3991e274ef92bb, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_inherit_constructors", method_pointer_a270f550ce365463a2097387e102d094, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_access_specifier_as_written", method_pointer_c24363476c3857b4a3146f5aa3b8d110, "");

}