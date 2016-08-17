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
    enum ::clang::AccessSpecifier  (::clang::CXXBaseSpecifier::*method_pointer_d63cff95bd1e5ecab5d0fc715332991a)() const = &::clang::CXXBaseSpecifier::getAccessSpecifierAsWritten;
    void  (::clang::CXXBaseSpecifier::*method_pointer_7686e40cb98759d0bde2dab2c6d5ba77)(bool ) = &::clang::CXXBaseSpecifier::setInheritConstructors;
    enum ::clang::AccessSpecifier  (::clang::CXXBaseSpecifier::*method_pointer_d8cf3202398652c2af143541a51c8903)() const = &::clang::CXXBaseSpecifier::getAccessSpecifier;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_62ee447ee16a5594baa9e62a7ad7b6c6)() const = &::clang::CXXBaseSpecifier::isVirtual;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_9cabc77c64cd54b6b50747ccac96c73f)() const = &::clang::CXXBaseSpecifier::getInheritConstructors;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_049ae9bc5ba55a519997116407257579)() const = &::clang::CXXBaseSpecifier::isPackExpansion;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_8db75fa715b758beb4e1fab3f042d32f)() const = &::clang::CXXBaseSpecifier::isBaseOfClass;
    boost::python::class_< class ::clang::CXXBaseSpecifier, autowig::HeldType< class ::clang::CXXBaseSpecifier >, boost::noncopyable > class_d838cd6dfd2c51dfaa64ce4e68e945ec("CXXBaseSpecifier", "", boost::python::no_init);
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_access_specifier_as_written", method_pointer_d63cff95bd1e5ecab5d0fc715332991a, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("set_inherit_constructors", method_pointer_7686e40cb98759d0bde2dab2c6d5ba77, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_access_specifier", method_pointer_d8cf3202398652c2af143541a51c8903, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("is_virtual", method_pointer_62ee447ee16a5594baa9e62a7ad7b6c6, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_inherit_constructors", method_pointer_9cabc77c64cd54b6b50747ccac96c73f, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("is_pack_expansion", method_pointer_049ae9bc5ba55a519997116407257579, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("is_base_of_class", method_pointer_8db75fa715b758beb4e1fab3f042d32f, "");

}