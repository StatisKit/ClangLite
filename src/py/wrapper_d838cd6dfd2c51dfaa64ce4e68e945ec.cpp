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
    enum ::clang::AccessSpecifier  (::clang::CXXBaseSpecifier::*method_pointer_35be47e471555d8b8863d1ed34cbc834)() const = &::clang::CXXBaseSpecifier::getAccessSpecifier;
    enum ::clang::AccessSpecifier  (::clang::CXXBaseSpecifier::*method_pointer_86ad23f57a7f5759b22590136a937532)() const = &::clang::CXXBaseSpecifier::getAccessSpecifierAsWritten;
    class ::clang::SourceLocation  (::clang::CXXBaseSpecifier::*method_pointer_b1bf4baa998e59b5b2f3034db41c9c6f)() const = &::clang::CXXBaseSpecifier::getEllipsisLoc;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_e65effe196c6594e8e89991ad82f01a4)() const = &::clang::CXXBaseSpecifier::getInheritConstructors;
    class ::clang::SourceLocation  (::clang::CXXBaseSpecifier::*method_pointer_f25c5969ac5a506a8d8f764aa30be020)() const = &::clang::CXXBaseSpecifier::getLocEnd;
    class ::clang::SourceLocation  (::clang::CXXBaseSpecifier::*method_pointer_a6f83e2a3cc45adcb3636a833c4a6b22)() const = &::clang::CXXBaseSpecifier::getLocStart;
    class ::clang::QualType  (::clang::CXXBaseSpecifier::*method_pointer_16ece6a445975f47a869f47f7166fc3c)() const = &::clang::CXXBaseSpecifier::getType;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_fd3cb977b04d5274bfb2155b8781fd6e)() const = &::clang::CXXBaseSpecifier::isBaseOfClass;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_6902ae21a806564391a61c029e4f10d3)() const = &::clang::CXXBaseSpecifier::isPackExpansion;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_f5a16bfce1bd5366a1dc43c5c07a00dc)() const = &::clang::CXXBaseSpecifier::isVirtual;
    void  (::clang::CXXBaseSpecifier::*method_pointer_d7e65334f7a45482977ee0bb18b006a4)(bool ) = &::clang::CXXBaseSpecifier::setInheritConstructors;
    boost::python::class_< class ::clang::CXXBaseSpecifier, autowig::HeldType< class ::clang::CXXBaseSpecifier >, boost::noncopyable > class_d838cd6dfd2c51dfaa64ce4e68e945ec("CXXBaseSpecifier", "", boost::python::no_init);
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_access_specifier", method_pointer_35be47e471555d8b8863d1ed34cbc834, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_access_specifier_as_written", method_pointer_86ad23f57a7f5759b22590136a937532, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_ellipsis_loc", method_pointer_b1bf4baa998e59b5b2f3034db41c9c6f, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_inherit_constructors", method_pointer_e65effe196c6594e8e89991ad82f01a4, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_loc_end", method_pointer_f25c5969ac5a506a8d8f764aa30be020, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_loc_start", method_pointer_a6f83e2a3cc45adcb3636a833c4a6b22, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_type", method_pointer_16ece6a445975f47a869f47f7166fc3c, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("is_base_of_class", method_pointer_fd3cb977b04d5274bfb2155b8781fd6e, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("is_pack_expansion", method_pointer_6902ae21a806564391a61c029e4f10d3, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("is_virtual", method_pointer_f5a16bfce1bd5366a1dc43c5c07a00dc, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("set_inherit_constructors", method_pointer_d7e65334f7a45482977ee0bb18b006a4, "");

}