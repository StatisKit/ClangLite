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
    enum ::clang::AccessSpecifier  (::clang::CXXBaseSpecifier::*method_pointer_3f733575a75c5be78e17d095488f4967)() const = &::clang::CXXBaseSpecifier::getAccessSpecifier;
    enum ::clang::AccessSpecifier  (::clang::CXXBaseSpecifier::*method_pointer_334c47521de65f5d8db1e2306bad112b)() const = &::clang::CXXBaseSpecifier::getAccessSpecifierAsWritten;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_47cd40975a945466b87673568c412e44)() const = &::clang::CXXBaseSpecifier::getInheritConstructors;
    class ::clang::QualType  (::clang::CXXBaseSpecifier::*method_pointer_1bb92e104822580c8996d5c98d0858a4)() const = &::clang::CXXBaseSpecifier::getType;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_f98c898d1b67522a8b15472378830e7d)() const = &::clang::CXXBaseSpecifier::isBaseOfClass;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_666d88b8ed7b59209d69e16c725191e4)() const = &::clang::CXXBaseSpecifier::isPackExpansion;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_da1a2200ae7454ea9a9a2a717b9f2e19)() const = &::clang::CXXBaseSpecifier::isVirtual;
    void  (::clang::CXXBaseSpecifier::*method_pointer_ac5b46e8e9e956d99e636eeb3cc054b5)(bool ) = &::clang::CXXBaseSpecifier::setInheritConstructors;
    boost::python::class_< class ::clang::CXXBaseSpecifier, autowig::HeldType< class ::clang::CXXBaseSpecifier >, boost::noncopyable > class_d838cd6dfd2c51dfaa64ce4e68e945ec("CXXBaseSpecifier", "", boost::python::no_init);
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_access_specifier", method_pointer_3f733575a75c5be78e17d095488f4967, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_access_specifier_as_written", method_pointer_334c47521de65f5d8db1e2306bad112b, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_inherit_constructors", method_pointer_47cd40975a945466b87673568c412e44, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_type", method_pointer_1bb92e104822580c8996d5c98d0858a4, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("is_base_of_class", method_pointer_f98c898d1b67522a8b15472378830e7d, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("is_pack_expansion", method_pointer_666d88b8ed7b59209d69e16c725191e4, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("is_virtual", method_pointer_da1a2200ae7454ea9a9a2a717b9f2e19, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("set_inherit_constructors", method_pointer_ac5b46e8e9e956d99e636eeb3cc054b5, "");

}