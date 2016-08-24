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
    enum ::clang::AccessSpecifier  (::clang::CXXBaseSpecifier::*method_pointer_7b23f6570d965eb5ab1b1ac2055d98db)() const = &::clang::CXXBaseSpecifier::getAccessSpecifier;
    enum ::clang::AccessSpecifier  (::clang::CXXBaseSpecifier::*method_pointer_27ce21f775595e1ba1d4b13ce946eee1)() const = &::clang::CXXBaseSpecifier::getAccessSpecifierAsWritten;
    class ::clang::SourceLocation  (::clang::CXXBaseSpecifier::*method_pointer_a975644184e55219b9b99e279a5ba75d)() const = &::clang::CXXBaseSpecifier::getEllipsisLoc;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_ed515ad61c1a5a498764cfb551d286a7)() const = &::clang::CXXBaseSpecifier::getInheritConstructors;
    class ::clang::SourceLocation  (::clang::CXXBaseSpecifier::*method_pointer_db55c11a47e55b71ae88506b614380ed)() const = &::clang::CXXBaseSpecifier::getLocEnd;
    class ::clang::SourceLocation  (::clang::CXXBaseSpecifier::*method_pointer_7fbde4b893ce5b1c9f4679cc21c80377)() const = &::clang::CXXBaseSpecifier::getLocStart;
    class ::clang::QualType  (::clang::CXXBaseSpecifier::*method_pointer_303c7364fa0255978cbefbdcdfd19d5e)() const = &::clang::CXXBaseSpecifier::getType;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_708f6bf783aa5d68be7a0248bdf1a5f6)() const = &::clang::CXXBaseSpecifier::isBaseOfClass;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_0585f6b412495b5784c448037544fa7a)() const = &::clang::CXXBaseSpecifier::isPackExpansion;
    bool  (::clang::CXXBaseSpecifier::*method_pointer_6381e5cc410c5848a8731084717d386d)() const = &::clang::CXXBaseSpecifier::isVirtual;
    void  (::clang::CXXBaseSpecifier::*method_pointer_d7578a0849b05941b2ae273586dc1617)(bool ) = &::clang::CXXBaseSpecifier::setInheritConstructors;
    boost::python::class_< class ::clang::CXXBaseSpecifier, autowig::HeldType< class ::clang::CXXBaseSpecifier >, boost::noncopyable > class_d838cd6dfd2c51dfaa64ce4e68e945ec("CXXBaseSpecifier", "", boost::python::no_init);
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_access_specifier", method_pointer_7b23f6570d965eb5ab1b1ac2055d98db, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_access_specifier_as_written", method_pointer_27ce21f775595e1ba1d4b13ce946eee1, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_ellipsis_loc", method_pointer_a975644184e55219b9b99e279a5ba75d, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_inherit_constructors", method_pointer_ed515ad61c1a5a498764cfb551d286a7, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_loc_end", method_pointer_db55c11a47e55b71ae88506b614380ed, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_loc_start", method_pointer_7fbde4b893ce5b1c9f4679cc21c80377, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("get_type", method_pointer_303c7364fa0255978cbefbdcdfd19d5e, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("is_base_of_class", method_pointer_708f6bf783aa5d68be7a0248bdf1a5f6, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("is_pack_expansion", method_pointer_0585f6b412495b5784c448037544fa7a, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("is_virtual", method_pointer_6381e5cc410c5848a8731084717d386d, "");
    class_d838cd6dfd2c51dfaa64ce4e68e945ec.def("set_inherit_constructors", method_pointer_d7578a0849b05941b2ae273586dc1617, "");

}