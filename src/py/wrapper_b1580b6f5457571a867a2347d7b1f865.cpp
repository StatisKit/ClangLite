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
    unsigned int  (::clang::FileID::*method_pointer_84d2d19b7ede553da5928f8dcd637d7b)() const = &::clang::FileID::getHashValue;
    class ::clang::FileID  (*method_pointer_657d9f61d22b54c8a6c4a164c4a39d20)() = ::clang::FileID::getSentinel;
    bool  (::clang::FileID::*method_pointer_e45f179a806851a6b6b549e3b1f42994)() const = &::clang::FileID::isInvalid;
    bool  (::clang::FileID::*method_pointer_6157592578dd585eaa72b4ac84a363ec)() const = &::clang::FileID::isValid;
    bool  (::clang::FileID::*method_pointer_d0aa3f7cc91858b9b33ab1a2f1ce361e)(class ::clang::FileID  const &) const = &::clang::FileID::operator!=;
    bool  (::clang::FileID::*method_pointer_a2d2ad01eb955fc3a2db33c492da13b6)(class ::clang::FileID  const &) const = &::clang::FileID::operator<;
    bool  (::clang::FileID::*method_pointer_440b83b14bd85578ac73f20eb6f3a82d)(class ::clang::FileID  const &) const = &::clang::FileID::operator<=;
    bool  (::clang::FileID::*method_pointer_283e8d175ff9516ea1724896b001a0fe)(class ::clang::FileID  const &) const = &::clang::FileID::operator==;
    bool  (::clang::FileID::*method_pointer_5e637c55c8f75fa2ad3a96241dc94abd)(class ::clang::FileID  const &) const = &::clang::FileID::operator>;
    bool  (::clang::FileID::*method_pointer_2c35cc0c581352658868a23f93edd750)(class ::clang::FileID  const &) const = &::clang::FileID::operator>=;
    boost::python::class_< class ::clang::FileID, autowig::HeldType< class ::clang::FileID > > class_b1580b6f5457571a867a2347d7b1f865("FileID", "", boost::python::no_init);
    class_b1580b6f5457571a867a2347d7b1f865.def("get_hash_value", method_pointer_84d2d19b7ede553da5928f8dcd637d7b, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("get_sentinel", method_pointer_657d9f61d22b54c8a6c4a164c4a39d20, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_invalid", method_pointer_e45f179a806851a6b6b549e3b1f42994, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_valid", method_pointer_6157592578dd585eaa72b4ac84a363ec, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__neq__", method_pointer_d0aa3f7cc91858b9b33ab1a2f1ce361e, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__lt__", method_pointer_a2d2ad01eb955fc3a2db33c492da13b6, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__le__", method_pointer_440b83b14bd85578ac73f20eb6f3a82d, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__eq__", method_pointer_283e8d175ff9516ea1724896b001a0fe, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__gt__", method_pointer_5e637c55c8f75fa2ad3a96241dc94abd, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__ge__", method_pointer_2c35cc0c581352658868a23f93edd750, "");
    class_b1580b6f5457571a867a2347d7b1f865.staticmethod("get_sentinel");

}