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
    enum ::clang::AccessSpecifier  (::clang::CXXBaseSpecifier::*method_pointer_17c5aee634c3504a87114f2f3871d69b)() const = &::clang::CXXBaseSpecifier::getAccessSpecifier;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_c5446d1a10a75c53abc6d3bad1ff68ef)() const = &::clang::CXXBaseSpecifier::getInheritConstructors;
    enum ::clang::AccessSpecifier  (::clang::CXXBaseSpecifier::*method_pointer_de119b31718552ebacf0e3de36dbc462)() const = &::clang::CXXBaseSpecifier::getAccessSpecifierAsWritten;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_9d5e6cfa7a6353cfb6b31c87ed783398)() const = &::clang::CXXBaseSpecifier::isBaseOfClass;
    void  (::clang::CXXBaseSpecifier::*method_pointer_146c2b41b66a5bc1beb13d9deeff48cb)(bool ) = &::clang::CXXBaseSpecifier::setInheritConstructors;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_b6a2b461faec5a89b1261b9ee6341143)() const = &::clang::CXXBaseSpecifier::isPackExpansion;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_e624af0bfae35ab4a08ecbfbf17e0cd2)() const = &::clang::CXXBaseSpecifier::isVirtual;
    boost::python::class_< class ::clang::CXXBaseSpecifier, autowig::HeldType< class ::clang::CXXBaseSpecifier >, boost::noncopyable > class_d838cd6dfd2c51dfaa64ce4e68e945ec("CXXBaseSpecifier", "", boost::python::no_init);
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_access_specifier", method_pointer_17c5aee634c3504a87114f2f3871d69b, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_inherit_constructors", method_pointer_c5446d1a10a75c53abc6d3bad1ff68ef, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_access_specifier_as_written", method_pointer_de119b31718552ebacf0e3de36dbc462, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("is_base_of_class", method_pointer_9d5e6cfa7a6353cfb6b31c87ed783398, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("set_inherit_constructors", method_pointer_146c2b41b66a5bc1beb13d9deeff48cb, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("is_pack_expansion", method_pointer_b6a2b461faec5a89b1261b9ee6341143, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("is_virtual", method_pointer_e624af0bfae35ab4a08ecbfbf17e0cd2, "");

}