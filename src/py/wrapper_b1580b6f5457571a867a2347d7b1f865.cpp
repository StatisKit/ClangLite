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
    unsigned int  (::clang::FileID::*method_pointer_dd8eb88e818050ec804c068786f498dd)() const = &::clang::FileID::getHashValue;
    class ::clang::FileID  (*method_pointer_c7b0728f81a65955a01e280e60a63b61)() = ::clang::FileID::getSentinel;
    bool  (::clang::FileID::*method_pointer_23e2179db07c5d47a9ed6a9144c4e4c1)() const = &::clang::FileID::isInvalid;
    bool  (::clang::FileID::*method_pointer_7da28f3f8b4353fb8ca194af5bc18876)() const = &::clang::FileID::isValid;
    bool  (::clang::FileID::*method_pointer_4b878a75e2ce5ebebd4e32ae08f7d388)(class ::clang::FileID  const &) const = &::clang::FileID::operator!=;
    bool  (::clang::FileID::*method_pointer_18597bcbbff052ceb67c177db8ca9d96)(class ::clang::FileID  const &) const = &::clang::FileID::operator<;
    bool  (::clang::FileID::*method_pointer_777bd89be1d156e6a91b3e59d0c47797)(class ::clang::FileID  const &) const = &::clang::FileID::operator<=;
    bool  (::clang::FileID::*method_pointer_b80db0c11b49548a8080ee7ff5c3b48c)(class ::clang::FileID  const &) const = &::clang::FileID::operator==;
    bool  (::clang::FileID::*method_pointer_4377e0b0be735d37bad225c331cb18ab)(class ::clang::FileID  const &) const = &::clang::FileID::operator>;
    bool  (::clang::FileID::*method_pointer_7a6aae1367385d9c8dfb2c6cadf831cf)(class ::clang::FileID  const &) const = &::clang::FileID::operator>=;
    boost::python::class_< class ::clang::FileID, autowig::HeldType< class ::clang::FileID > > class_b1580b6f5457571a867a2347d7b1f865("FileID", "", boost::python::no_init);
    class_b1580b6f5457571a867a2347d7b1f865.def("get_hash_value", method_pointer_dd8eb88e818050ec804c068786f498dd, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("get_sentinel", method_pointer_c7b0728f81a65955a01e280e60a63b61, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_invalid", method_pointer_23e2179db07c5d47a9ed6a9144c4e4c1, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_valid", method_pointer_7da28f3f8b4353fb8ca194af5bc18876, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__neq__", method_pointer_4b878a75e2ce5ebebd4e32ae08f7d388, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__lt__", method_pointer_18597bcbbff052ceb67c177db8ca9d96, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__le__", method_pointer_777bd89be1d156e6a91b3e59d0c47797, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__eq__", method_pointer_b80db0c11b49548a8080ee7ff5c3b48c, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__gt__", method_pointer_4377e0b0be735d37bad225c331cb18ab, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__ge__", method_pointer_7a6aae1367385d9c8dfb2c6cadf831cf, "");
    class_b1580b6f5457571a867a2347d7b1f865.staticmethod("get_sentinel");

}