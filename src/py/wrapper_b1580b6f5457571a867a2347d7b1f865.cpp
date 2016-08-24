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
    unsigned int  (::clang::FileID::*method_pointer_97d79ffce30f5552bdd17feb42597495)() const = &::clang::FileID::getHashValue;
    class ::clang::FileID  (*method_pointer_ea741248df155c1982760c0ad45f93ce)() = ::clang::FileID::getSentinel;
    bool  (::clang::FileID::*method_pointer_bc8b97a179e156c3b216eda672ec7f4f)() const = &::clang::FileID::isInvalid;
    bool  (::clang::FileID::*method_pointer_8eae6296ed18531da5b7a4dc045a5e02)() const = &::clang::FileID::isValid;
    bool  (::clang::FileID::*method_pointer_706fb8e2aa455867b239e9f564b09c4a)(class ::clang::FileID  const &) const = &::clang::FileID::operator!=;
    bool  (::clang::FileID::*method_pointer_54094c2ff608554084ecaab56fe85a0f)(class ::clang::FileID  const &) const = &::clang::FileID::operator<;
    bool  (::clang::FileID::*method_pointer_a5dbcf50c028551c995f6bb61f739a29)(class ::clang::FileID  const &) const = &::clang::FileID::operator<=;
    bool  (::clang::FileID::*method_pointer_63c272b53ebf528d9c2400abed479dd6)(class ::clang::FileID  const &) const = &::clang::FileID::operator==;
    bool  (::clang::FileID::*method_pointer_8f190bf5c7a855e5ad08ac0623a87a4f)(class ::clang::FileID  const &) const = &::clang::FileID::operator>;
    bool  (::clang::FileID::*method_pointer_c2f4859d07855beeba5e5b47bc206771)(class ::clang::FileID  const &) const = &::clang::FileID::operator>=;
    boost::python::class_< class ::clang::FileID, autowig::HeldType< class ::clang::FileID > > class_b1580b6f5457571a867a2347d7b1f865("FileID", "", boost::python::no_init);
    class_b1580b6f5457571a867a2347d7b1f865.def("get_hash_value", method_pointer_97d79ffce30f5552bdd17feb42597495, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("get_sentinel", method_pointer_ea741248df155c1982760c0ad45f93ce, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_invalid", method_pointer_bc8b97a179e156c3b216eda672ec7f4f, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_valid", method_pointer_8eae6296ed18531da5b7a4dc045a5e02, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__neq__", method_pointer_706fb8e2aa455867b239e9f564b09c4a, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__lt__", method_pointer_54094c2ff608554084ecaab56fe85a0f, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__le__", method_pointer_a5dbcf50c028551c995f6bb61f739a29, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__eq__", method_pointer_63c272b53ebf528d9c2400abed479dd6, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__gt__", method_pointer_8f190bf5c7a855e5ad08ac0623a87a4f, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__ge__", method_pointer_c2f4859d07855beeba5e5b47bc206771, "");
    class_b1580b6f5457571a867a2347d7b1f865.staticmethod("get_sentinel");

}