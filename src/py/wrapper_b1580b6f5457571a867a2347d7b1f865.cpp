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
    unsigned int  (::clang::FileID::*method_pointer_fd429a3c8f8a5b159f6177413c6bfc64)() const = &::clang::FileID::getHashValue;
    class ::clang::FileID  (*method_pointer_086083c831ba5be8b49f9abc1d6db8fc)() = ::clang::FileID::getSentinel;
    bool  (::clang::FileID::*method_pointer_72b0fec486e5569890841c3db8557199)() const = &::clang::FileID::isInvalid;
    bool  (::clang::FileID::*method_pointer_3d42cfa61a965471b28530de9f33601f)() const = &::clang::FileID::isValid;
    bool  (::clang::FileID::*method_pointer_c2eec339b8ed5554a0c4c265f7749105)(class ::clang::FileID  const &) const = &::clang::FileID::operator!=;
    bool  (::clang::FileID::*method_pointer_d2efccb62781563a84bd61c753b8242e)(class ::clang::FileID  const &) const = &::clang::FileID::operator<;
    bool  (::clang::FileID::*method_pointer_6f706d4518f55afab880ff8af4071270)(class ::clang::FileID  const &) const = &::clang::FileID::operator<=;
    bool  (::clang::FileID::*method_pointer_342b1bb7725d5f0eadcb5929f8d34a17)(class ::clang::FileID  const &) const = &::clang::FileID::operator==;
    bool  (::clang::FileID::*method_pointer_be33c87e9b9d5e90ae7594a3b68db765)(class ::clang::FileID  const &) const = &::clang::FileID::operator>;
    bool  (::clang::FileID::*method_pointer_ed4a79645fef53a086f20004945dfa3f)(class ::clang::FileID  const &) const = &::clang::FileID::operator>=;
    boost::python::class_< class ::clang::FileID, autowig::HeldType< class ::clang::FileID > > class_b1580b6f5457571a867a2347d7b1f865("FileID", "", boost::python::no_init);
    class_b1580b6f5457571a867a2347d7b1f865.def("get_hash_value", method_pointer_fd429a3c8f8a5b159f6177413c6bfc64, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("get_sentinel", method_pointer_086083c831ba5be8b49f9abc1d6db8fc, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_invalid", method_pointer_72b0fec486e5569890841c3db8557199, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_valid", method_pointer_3d42cfa61a965471b28530de9f33601f, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__neq__", method_pointer_c2eec339b8ed5554a0c4c265f7749105, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__lt__", method_pointer_d2efccb62781563a84bd61c753b8242e, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__le__", method_pointer_6f706d4518f55afab880ff8af4071270, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__eq__", method_pointer_342b1bb7725d5f0eadcb5929f8d34a17, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__gt__", method_pointer_be33c87e9b9d5e90ae7594a3b68db765, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__ge__", method_pointer_ed4a79645fef53a086f20004945dfa3f, "");
    class_b1580b6f5457571a867a2347d7b1f865.staticmethod("get_sentinel");

}