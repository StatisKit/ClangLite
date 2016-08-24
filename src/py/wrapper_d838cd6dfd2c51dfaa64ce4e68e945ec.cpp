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
    enum ::clang::AccessSpecifier  (::clang::CXXBaseSpecifier::*method_pointer_9023cf084e25591fb46f052db1d84ef3)() const = &::clang::CXXBaseSpecifier::getAccessSpecifier;
    enum ::clang::AccessSpecifier  (::clang::CXXBaseSpecifier::*method_pointer_e81c6f0edc025ca8afb28931849c421a)() const = &::clang::CXXBaseSpecifier::getAccessSpecifierAsWritten;
    class ::clang::SourceLocation  (::clang::CXXBaseSpecifier::*method_pointer_8ddca2aa89e25b34b41b2f39b5ba8087)() const = &::clang::CXXBaseSpecifier::getEllipsisLoc;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_f627387d936b5666a49d91de8c2b766d)() const = &::clang::CXXBaseSpecifier::getInheritConstructors;
    class ::clang::SourceLocation  (::clang::CXXBaseSpecifier::*method_pointer_166ab8012b005ef1987f5d142088398b)() const = &::clang::CXXBaseSpecifier::getLocEnd;
    class ::clang::SourceLocation  (::clang::CXXBaseSpecifier::*method_pointer_01d69906ded0574397a935e4d1b4f7d7)() const = &::clang::CXXBaseSpecifier::getLocStart;
    class ::clang::QualType  (::clang::CXXBaseSpecifier::*method_pointer_2afb0e14f6805dfcaaff0500ae598204)() const = &::clang::CXXBaseSpecifier::getType;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_1bcb9eed89c652c89cf8144b4914b275)() const = &::clang::CXXBaseSpecifier::isBaseOfClass;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_45c61b63e0fa580980d14a0e64440bd1)() const = &::clang::CXXBaseSpecifier::isPackExpansion;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_bd55032817755ca3b969a04335321de2)() const = &::clang::CXXBaseSpecifier::isVirtual;
    void  (::clang::CXXBaseSpecifier::*method_pointer_172050a1cb0d5a909845bf58558f2110)(bool ) = &::clang::CXXBaseSpecifier::setInheritConstructors;
    boost::python::class_< class ::clang::CXXBaseSpecifier, autowig::HeldType< class ::clang::CXXBaseSpecifier >, boost::noncopyable > class_d838cd6dfd2c51dfaa64ce4e68e945ec("CXXBaseSpecifier", "", boost::python::no_init);
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_access_specifier", method_pointer_9023cf084e25591fb46f052db1d84ef3, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_access_specifier_as_written", method_pointer_e81c6f0edc025ca8afb28931849c421a, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_ellipsis_loc", method_pointer_8ddca2aa89e25b34b41b2f39b5ba8087, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_inherit_constructors", method_pointer_f627387d936b5666a49d91de8c2b766d, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_loc_end", method_pointer_166ab8012b005ef1987f5d142088398b, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_loc_start", method_pointer_01d69906ded0574397a935e4d1b4f7d7, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_type", method_pointer_2afb0e14f6805dfcaaff0500ae598204, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("is_base_of_class", method_pointer_1bcb9eed89c652c89cf8144b4914b275, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("is_pack_expansion", method_pointer_45c61b63e0fa580980d14a0e64440bd1, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("is_virtual", method_pointer_bd55032817755ca3b969a04335321de2, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("set_inherit_constructors", method_pointer_172050a1cb0d5a909845bf58558f2110, "");

}