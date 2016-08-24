#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_b1580b6f5457571a867a2347d7b1f865()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    unsigned int  (::clang::FileID::*method_pointer_706527d8bc8d5f22997af8e4fac83e5d)() const = &::clang::FileID::getHashValue;
    class ::clang::FileID  (*method_pointer_3271bf063efc50a5be19a567d4bb992b)() = ::clang::FileID::getSentinel;
    bool  (::clang::FileID::*method_pointer_3ecdb5c8207a5afda52c3f1cd77117ce)() const = &::clang::FileID::isInvalid;
    bool  (::clang::FileID::*method_pointer_581fed33331d5b0f980071551d444f68)() const = &::clang::FileID::isValid;
    bool  (::clang::FileID::*method_pointer_2f48fe5a128455268ffe5b4516d8d29d)(class ::clang::FileID  const &) const = &::clang::FileID::operator!=;
    bool  (::clang::FileID::*method_pointer_0b53bafa621b5cf49485142bf4f6ee45)(class ::clang::FileID  const &) const = &::clang::FileID::operator<;
    bool  (::clang::FileID::*method_pointer_c5a6e99a4cdb5cec909147b69e78d0b7)(class ::clang::FileID  const &) const = &::clang::FileID::operator<=;
    bool  (::clang::FileID::*method_pointer_da61cb1f3e7855cbb535469261789c27)(class ::clang::FileID  const &) const = &::clang::FileID::operator==;
    bool  (::clang::FileID::*method_pointer_d246e513f0755d228ef0274dc9ed1637)(class ::clang::FileID  const &) const = &::clang::FileID::operator>;
    bool  (::clang::FileID::*method_pointer_52bb4939f7075741a9cd0dee47f6494e)(class ::clang::FileID  const &) const = &::clang::FileID::operator>=;
    boost::python::class_< class ::clang::FileID, autowig::HeldType< class ::clang::FileID > > class_b1580b6f5457571a867a2347d7b1f865("FileID", "", boost::python::no_init);
    class_b1580b6f5457571a867a2347d7b1f865.def("get_hash_value", method_pointer_706527d8bc8d5f22997af8e4fac83e5d, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("get_sentinel", method_pointer_3271bf063efc50a5be19a567d4bb992b, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_invalid", method_pointer_3ecdb5c8207a5afda52c3f1cd77117ce, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_valid", method_pointer_581fed33331d5b0f980071551d444f68, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__neq__", method_pointer_2f48fe5a128455268ffe5b4516d8d29d, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__lt__", method_pointer_0b53bafa621b5cf49485142bf4f6ee45, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__le__", method_pointer_c5a6e99a4cdb5cec909147b69e78d0b7, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__eq__", method_pointer_da61cb1f3e7855cbb535469261789c27, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__gt__", method_pointer_d246e513f0755d228ef0274dc9ed1637, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__ge__", method_pointer_52bb4939f7075741a9cd0dee47f6494e, "");
    class_b1580b6f5457571a867a2347d7b1f865.staticmethod("get_sentinel");

}