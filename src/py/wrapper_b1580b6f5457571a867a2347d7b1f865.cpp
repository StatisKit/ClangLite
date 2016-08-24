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
    unsigned int  (::clang::FileID::*method_pointer_e13ba665ada05148b55628ee60b12ed1)() const = &::clang::FileID::getHashValue;
    class ::clang::FileID  (*method_pointer_a6425a222bc95bf4b9a542dbaf01ecd5)() = ::clang::FileID::getSentinel;
    bool  (::clang::FileID::*method_pointer_af7147ee1dc05b5399c1fa6ea9ead90d)() const = &::clang::FileID::isInvalid;
    bool  (::clang::FileID::*method_pointer_8f03301611b75d2f9b6c358397c36825)() const = &::clang::FileID::isValid;
    bool  (::clang::FileID::*method_pointer_f0ce86a3764a5fa88be7f8c2f0e9d767)(class ::clang::FileID  const &) const = &::clang::FileID::operator!=;
    bool  (::clang::FileID::*method_pointer_0fef91a7d8df5da1850685833bfe305f)(class ::clang::FileID  const &) const = &::clang::FileID::operator<;
    bool  (::clang::FileID::*method_pointer_de61ae548c2a5844870a2a15ded700d6)(class ::clang::FileID  const &) const = &::clang::FileID::operator<=;
    bool  (::clang::FileID::*method_pointer_3f77cb1a71655dc0b9139f45a5f07fc2)(class ::clang::FileID  const &) const = &::clang::FileID::operator==;
    bool  (::clang::FileID::*method_pointer_3df573ca832f5c70abd97a6b6e39f51f)(class ::clang::FileID  const &) const = &::clang::FileID::operator>;
    bool  (::clang::FileID::*method_pointer_6d07ac69d2295d4090197b4d7438c591)(class ::clang::FileID  const &) const = &::clang::FileID::operator>=;
    boost::python::class_< class ::clang::FileID, autowig::HeldType< class ::clang::FileID > > class_b1580b6f5457571a867a2347d7b1f865("FileID", "", boost::python::no_init);
    class_b1580b6f5457571a867a2347d7b1f865.def("get_hash_value", method_pointer_e13ba665ada05148b55628ee60b12ed1, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("get_sentinel", method_pointer_a6425a222bc95bf4b9a542dbaf01ecd5, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_invalid", method_pointer_af7147ee1dc05b5399c1fa6ea9ead90d, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_valid", method_pointer_8f03301611b75d2f9b6c358397c36825, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__neq__", method_pointer_f0ce86a3764a5fa88be7f8c2f0e9d767, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__lt__", method_pointer_0fef91a7d8df5da1850685833bfe305f, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__le__", method_pointer_de61ae548c2a5844870a2a15ded700d6, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__eq__", method_pointer_3f77cb1a71655dc0b9139f45a5f07fc2, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__gt__", method_pointer_3df573ca832f5c70abd97a6b6e39f51f, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__ge__", method_pointer_6d07ac69d2295d4090197b4d7438c591, "");
    class_b1580b6f5457571a867a2347d7b1f865.staticmethod("get_sentinel");

}