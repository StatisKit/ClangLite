#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_d838cd6dfd2c51dfaa64ce4e68e945ec()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    enum ::clang::AccessSpecifier  (::clang::CXXBaseSpecifier::*method_pointer_e493141059485ec1b0f745f6b6a08475)() const = &::clang::CXXBaseSpecifier::getAccessSpecifier;
    enum ::clang::AccessSpecifier  (::clang::CXXBaseSpecifier::*method_pointer_c9072c9067c65d66b26c1e2a3507484b)() const = &::clang::CXXBaseSpecifier::getAccessSpecifierAsWritten;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_0aca851e00975b6f88f8888195794ce4)() const = &::clang::CXXBaseSpecifier::getInheritConstructors;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_0c3de3ca75fd5c5dbc2f0a95468a2103)() const = &::clang::CXXBaseSpecifier::isBaseOfClass;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_72e8cba736605c838d38d9d7e4b6b843)() const = &::clang::CXXBaseSpecifier::isPackExpansion;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_9956771968795492b0484f581e5af40a)() const = &::clang::CXXBaseSpecifier::isVirtual;
    void  (::clang::CXXBaseSpecifier::*method_pointer_f5d5d32edb525909917f4120ac5e2e33)(bool ) = &::clang::CXXBaseSpecifier::setInheritConstructors;
    boost::python::class_< class ::clang::CXXBaseSpecifier, autowig::HeldType< class ::clang::CXXBaseSpecifier >, boost::noncopyable > class_d838cd6dfd2c51dfaa64ce4e68e945ec("CXXBaseSpecifier", "", boost::python::no_init);
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_access_specifier", method_pointer_e493141059485ec1b0f745f6b6a08475, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_access_specifier_as_written", method_pointer_c9072c9067c65d66b26c1e2a3507484b, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_inherit_constructors", method_pointer_0aca851e00975b6f88f8888195794ce4, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("is_base_of_class", method_pointer_0c3de3ca75fd5c5dbc2f0a95468a2103, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("is_pack_expansion", method_pointer_72e8cba736605c838d38d9d7e4b6b843, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("is_virtual", method_pointer_9956771968795492b0484f581e5af40a, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("set_inherit_constructors", method_pointer_f5d5d32edb525909917f4120ac5e2e33, "");

}