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
    enum ::clang::AccessSpecifier  (::clang::CXXBaseSpecifier::*method_pointer_0ddd022bba455e38933e315931649761)() const = &::clang::CXXBaseSpecifier::getAccessSpecifier;
    enum ::clang::AccessSpecifier  (::clang::CXXBaseSpecifier::*method_pointer_706354d6ae97523db268ac53b30e8cb3)() const = &::clang::CXXBaseSpecifier::getAccessSpecifierAsWritten;
    class ::clang::SourceLocation  (::clang::CXXBaseSpecifier::*method_pointer_55bbfd274706547689266783566ac12c)() const = &::clang::CXXBaseSpecifier::getEllipsisLoc;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_4d84afbd9ffc57a1ba89ef9c5c0cbeb8)() const = &::clang::CXXBaseSpecifier::getInheritConstructors;
    class ::clang::SourceLocation  (::clang::CXXBaseSpecifier::*method_pointer_0e38fc97291155df9e6f7742b412fbee)() const = &::clang::CXXBaseSpecifier::getLocEnd;
    class ::clang::SourceLocation  (::clang::CXXBaseSpecifier::*method_pointer_a5062da958bd527484d04d4b3839a10b)() const = &::clang::CXXBaseSpecifier::getLocStart;
    class ::clang::QualType  (::clang::CXXBaseSpecifier::*method_pointer_8daae511ee385a9da7a76d90ab276b87)() const = &::clang::CXXBaseSpecifier::getType;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_0a1e8a8cf7f755639c85bf83db2a633f)() const = &::clang::CXXBaseSpecifier::isBaseOfClass;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_449a295817735387add07e0e3b4936d8)() const = &::clang::CXXBaseSpecifier::isPackExpansion;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_45ecfebc110c59d3a1cd320a70b03ebe)() const = &::clang::CXXBaseSpecifier::isVirtual;
    void  (::clang::CXXBaseSpecifier::*method_pointer_789483c846195b73bcabc81645c9150c)(bool ) = &::clang::CXXBaseSpecifier::setInheritConstructors;
    boost::python::class_< class ::clang::CXXBaseSpecifier, autowig::HeldType< class ::clang::CXXBaseSpecifier >, boost::noncopyable > class_d838cd6dfd2c51dfaa64ce4e68e945ec("CXXBaseSpecifier", "", boost::python::no_init);
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_access_specifier", method_pointer_0ddd022bba455e38933e315931649761, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_access_specifier_as_written", method_pointer_706354d6ae97523db268ac53b30e8cb3, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_ellipsis_loc", method_pointer_55bbfd274706547689266783566ac12c, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_inherit_constructors", method_pointer_4d84afbd9ffc57a1ba89ef9c5c0cbeb8, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_loc_end", method_pointer_0e38fc97291155df9e6f7742b412fbee, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_loc_start", method_pointer_a5062da958bd527484d04d4b3839a10b, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_type", method_pointer_8daae511ee385a9da7a76d90ab276b87, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("is_base_of_class", method_pointer_0a1e8a8cf7f755639c85bf83db2a633f, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("is_pack_expansion", method_pointer_449a295817735387add07e0e3b4936d8, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("is_virtual", method_pointer_45ecfebc110c59d3a1cd320a70b03ebe, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("set_inherit_constructors", method_pointer_789483c846195b73bcabc81645c9150c, "");

}