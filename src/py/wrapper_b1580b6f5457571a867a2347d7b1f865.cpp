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
    unsigned int  (::clang::FileID::*method_pointer_a8e2c1329d1950d8b6c80d3e74dda481)() const = &::clang::FileID::getHashValue;
    class ::clang::FileID  (*method_pointer_285abefd6a2e56a5bdb51efa42518658)() = ::clang::FileID::getSentinel;
    bool  (::clang::FileID::*method_pointer_b7e425d8b1c3594d90845d9e69591a99)() const = &::clang::FileID::isInvalid;
    bool  (::clang::FileID::*method_pointer_15e8e86b3906531fa8b2661672aa3a6f)() const = &::clang::FileID::isValid;
    bool  (::clang::FileID::*method_pointer_600595810d9d53fc931ca82302233430)(class ::clang::FileID  const &) const = &::clang::FileID::operator!=;
    bool  (::clang::FileID::*method_pointer_5abd0ab00e355aeca7fade166819017e)(class ::clang::FileID  const &) const = &::clang::FileID::operator<;
    bool  (::clang::FileID::*method_pointer_16b9314602705f39994b953461757dcf)(class ::clang::FileID  const &) const = &::clang::FileID::operator<=;
    bool  (::clang::FileID::*method_pointer_d0fb44e8d5035488af5d164230d40795)(class ::clang::FileID  const &) const = &::clang::FileID::operator==;
    bool  (::clang::FileID::*method_pointer_ff596329265d5106b28f66763f5eefd3)(class ::clang::FileID  const &) const = &::clang::FileID::operator>;
    bool  (::clang::FileID::*method_pointer_7244ce146c475813a55c5303527b13a5)(class ::clang::FileID  const &) const = &::clang::FileID::operator>=;
    boost::python::class_< class ::clang::FileID, autowig::HeldType< class ::clang::FileID > > class_b1580b6f5457571a867a2347d7b1f865("FileID", "", boost::python::no_init);
    class_b1580b6f5457571a867a2347d7b1f865.def("get_hash_value", method_pointer_a8e2c1329d1950d8b6c80d3e74dda481, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("get_sentinel", method_pointer_285abefd6a2e56a5bdb51efa42518658, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_invalid", method_pointer_b7e425d8b1c3594d90845d9e69591a99, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_valid", method_pointer_15e8e86b3906531fa8b2661672aa3a6f, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__neq__", method_pointer_600595810d9d53fc931ca82302233430, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__lt__", method_pointer_5abd0ab00e355aeca7fade166819017e, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__le__", method_pointer_16b9314602705f39994b953461757dcf, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__eq__", method_pointer_d0fb44e8d5035488af5d164230d40795, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__gt__", method_pointer_ff596329265d5106b28f66763f5eefd3, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__ge__", method_pointer_7244ce146c475813a55c5303527b13a5, "");
    class_b1580b6f5457571a867a2347d7b1f865.staticmethod("get_sentinel");

}