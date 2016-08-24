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
    enum ::clang::AccessSpecifier  (::clang::CXXBaseSpecifier::*method_pointer_b10b821308c85b5ea7e4fa8d7fc33262)() const = &::clang::CXXBaseSpecifier::getAccessSpecifier;
    enum ::clang::AccessSpecifier  (::clang::CXXBaseSpecifier::*method_pointer_07717205b27e54f0a0f090a472d7e701)() const = &::clang::CXXBaseSpecifier::getAccessSpecifierAsWritten;
    class ::clang::SourceLocation  (::clang::CXXBaseSpecifier::*method_pointer_f8cd8be6247d548db5b345a6bb215d48)() const = &::clang::CXXBaseSpecifier::getEllipsisLoc;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_399bdace98d85a199bd41f3ad9b0a78d)() const = &::clang::CXXBaseSpecifier::getInheritConstructors;
    class ::clang::SourceLocation  (::clang::CXXBaseSpecifier::*method_pointer_e86ae242213e554fb3f300b3e5383f73)() const = &::clang::CXXBaseSpecifier::getLocEnd;
    class ::clang::SourceLocation  (::clang::CXXBaseSpecifier::*method_pointer_35e948800f9f509eab7f8f34b6bebc8b)() const = &::clang::CXXBaseSpecifier::getLocStart;
    class ::clang::QualType  (::clang::CXXBaseSpecifier::*method_pointer_eebb0b3734bc5e5bbcf7d3a76b180d2d)() const = &::clang::CXXBaseSpecifier::getType;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_b00e44423e5d56ea8207ea85d948394c)() const = &::clang::CXXBaseSpecifier::isBaseOfClass;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_703535e3f1f15e12bccd650d3de3eb41)() const = &::clang::CXXBaseSpecifier::isPackExpansion;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_10661b3ca5355dbf943b1b196639e960)() const = &::clang::CXXBaseSpecifier::isVirtual;
    void  (::clang::CXXBaseSpecifier::*method_pointer_300876e47efa57888f05bb6df49b472a)(bool ) = &::clang::CXXBaseSpecifier::setInheritConstructors;
    boost::python::class_< class ::clang::CXXBaseSpecifier, autowig::HeldType< class ::clang::CXXBaseSpecifier >, boost::noncopyable > class_d838cd6dfd2c51dfaa64ce4e68e945ec("CXXBaseSpecifier", "", boost::python::no_init);
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_access_specifier", method_pointer_b10b821308c85b5ea7e4fa8d7fc33262, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_access_specifier_as_written", method_pointer_07717205b27e54f0a0f090a472d7e701, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_ellipsis_loc", method_pointer_f8cd8be6247d548db5b345a6bb215d48, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_inherit_constructors", method_pointer_399bdace98d85a199bd41f3ad9b0a78d, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_loc_end", method_pointer_e86ae242213e554fb3f300b3e5383f73, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_loc_start", method_pointer_35e948800f9f509eab7f8f34b6bebc8b, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_type", method_pointer_eebb0b3734bc5e5bbcf7d3a76b180d2d, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("is_base_of_class", method_pointer_b00e44423e5d56ea8207ea85d948394c, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("is_pack_expansion", method_pointer_703535e3f1f15e12bccd650d3de3eb41, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("is_virtual", method_pointer_10661b3ca5355dbf943b1b196639e960, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("set_inherit_constructors", method_pointer_300876e47efa57888f05bb6df49b472a, "");

}