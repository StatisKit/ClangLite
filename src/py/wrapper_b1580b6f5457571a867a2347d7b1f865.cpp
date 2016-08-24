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
    unsigned int  (::clang::FileID::*method_pointer_c0a3a2e934755014bf17e26b8d382690)() const = &::clang::FileID::getHashValue;
    class ::clang::FileID  (*method_pointer_6807aa5e4f5d52d1b17d238381cd4dfe)() = ::clang::FileID::getSentinel;
    bool  (::clang::FileID::*method_pointer_e89018748ff757608577aaf95f4f90d4)() const = &::clang::FileID::isInvalid;
    bool  (::clang::FileID::*method_pointer_3b84da4001c35bfa9a2eb42beec9dc15)() const = &::clang::FileID::isValid;
    bool  (::clang::FileID::*method_pointer_d66d300f7c2a5f63bd39442be5f13dbe)(class ::clang::FileID  const &) const = &::clang::FileID::operator!=;
    bool  (::clang::FileID::*method_pointer_e61c9c2023c25a91b8f0dd011b79c55e)(class ::clang::FileID  const &) const = &::clang::FileID::operator<;
    bool  (::clang::FileID::*method_pointer_4d5787703f265e59b13c8a519ce86a5f)(class ::clang::FileID  const &) const = &::clang::FileID::operator<=;
    bool  (::clang::FileID::*method_pointer_dd0633a15e2d572e8dfe4d2c1de2eeb7)(class ::clang::FileID  const &) const = &::clang::FileID::operator==;
    bool  (::clang::FileID::*method_pointer_272aedc1a00159ad9ba929e31967a060)(class ::clang::FileID  const &) const = &::clang::FileID::operator>;
    bool  (::clang::FileID::*method_pointer_144d4755fb595913af6ddb53270f406f)(class ::clang::FileID  const &) const = &::clang::FileID::operator>=;
    boost::python::class_< class ::clang::FileID, autowig::HeldType< class ::clang::FileID > > class_b1580b6f5457571a867a2347d7b1f865("FileID", "", boost::python::no_init);
    class_b1580b6f5457571a867a2347d7b1f865.def("get_hash_value", method_pointer_c0a3a2e934755014bf17e26b8d382690, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("get_sentinel", method_pointer_6807aa5e4f5d52d1b17d238381cd4dfe, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_invalid", method_pointer_e89018748ff757608577aaf95f4f90d4, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_valid", method_pointer_3b84da4001c35bfa9a2eb42beec9dc15, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__neq__", method_pointer_d66d300f7c2a5f63bd39442be5f13dbe, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__lt__", method_pointer_e61c9c2023c25a91b8f0dd011b79c55e, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__le__", method_pointer_4d5787703f265e59b13c8a519ce86a5f, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__eq__", method_pointer_dd0633a15e2d572e8dfe4d2c1de2eeb7, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__gt__", method_pointer_272aedc1a00159ad9ba929e31967a060, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__ge__", method_pointer_144d4755fb595913af6ddb53270f406f, "");
    class_b1580b6f5457571a867a2347d7b1f865.staticmethod("get_sentinel");

}