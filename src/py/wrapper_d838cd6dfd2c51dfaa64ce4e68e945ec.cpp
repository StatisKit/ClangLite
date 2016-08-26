#include "_clanglite.h"


namespace autowig
{
}


void wrapper_d838cd6dfd2c51dfaa64ce4e68e945ec()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    enum ::clang::AccessSpecifier  (::clang::CXXBaseSpecifier::*method_pointer_aeabe3a994e15e97b80cfb6e36f43f32)() const = &::clang::CXXBaseSpecifier::getAccessSpecifier;
    enum ::clang::AccessSpecifier  (::clang::CXXBaseSpecifier::*method_pointer_915fa0d39e6d56888b2edb74f0e0ee3c)() const = &::clang::CXXBaseSpecifier::getAccessSpecifierAsWritten;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_25eede3e82b956879f22ad20dbf34846)() const = &::clang::CXXBaseSpecifier::getInheritConstructors;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_8746933a3a09572fbf11d668a8bad1a4)() const = &::clang::CXXBaseSpecifier::isBaseOfClass;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_cd67c475e7e05828a4cbcbeef1931cea)() const = &::clang::CXXBaseSpecifier::isPackExpansion;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_f114d71e692e55c4afecc026c94a3bf1)() const = &::clang::CXXBaseSpecifier::isVirtual;
    void  (::clang::CXXBaseSpecifier::*method_pointer_433f9ddc80e85d4b994bd9d7f34ce6cb)(bool ) = &::clang::CXXBaseSpecifier::setInheritConstructors;
    boost::python::class_< class ::clang::CXXBaseSpecifier, autowig::HeldType< class ::clang::CXXBaseSpecifier >, boost::noncopyable > class_d838cd6dfd2c51dfaa64ce4e68e945ec("CXXBaseSpecifier", "", boost::python::no_init);
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_access_specifier", method_pointer_aeabe3a994e15e97b80cfb6e36f43f32, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_access_specifier_as_written", method_pointer_915fa0d39e6d56888b2edb74f0e0ee3c, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_inherit_constructors", method_pointer_25eede3e82b956879f22ad20dbf34846, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("is_base_of_class", method_pointer_8746933a3a09572fbf11d668a8bad1a4, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("is_pack_expansion", method_pointer_cd67c475e7e05828a4cbcbeef1931cea, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("is_virtual", method_pointer_f114d71e692e55c4afecc026c94a3bf1, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("set_inherit_constructors", method_pointer_433f9ddc80e85d4b994bd9d7f34ce6cb, "");

}