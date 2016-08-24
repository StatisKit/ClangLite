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
    unsigned int  (::clang::FileID::*method_pointer_b37853c69c93593eb51339669a634720)() const = &::clang::FileID::getHashValue;
    class ::clang::FileID  (*method_pointer_228487b49805588f9951f7265fd0f13e)() = ::clang::FileID::getSentinel;
    bool  (::clang::FileID::*method_pointer_9cdd5e62e38d584ca355531e984921bd)() const = &::clang::FileID::isInvalid;
    bool  (::clang::FileID::*method_pointer_787abed1a0f05b66ad681f56d52e1836)() const = &::clang::FileID::isValid;
    bool  (::clang::FileID::*method_pointer_28ff5ad4bb2f5884851ee84bb4529e72)(class ::clang::FileID  const &) const = &::clang::FileID::operator!=;
    bool  (::clang::FileID::*method_pointer_8332e1a938025a3ca8d564dd50246995)(class ::clang::FileID  const &) const = &::clang::FileID::operator<;
    bool  (::clang::FileID::*method_pointer_475ba513fd605ec19d096ad63a1e8656)(class ::clang::FileID  const &) const = &::clang::FileID::operator<=;
    bool  (::clang::FileID::*method_pointer_8ad0869949005b20bab21577fb4a7e59)(class ::clang::FileID  const &) const = &::clang::FileID::operator==;
    bool  (::clang::FileID::*method_pointer_218d252ebea45b9992740b0e9f656c09)(class ::clang::FileID  const &) const = &::clang::FileID::operator>;
    bool  (::clang::FileID::*method_pointer_1e81db77269d5215a654fad8481fa336)(class ::clang::FileID  const &) const = &::clang::FileID::operator>=;
    boost::python::class_< class ::clang::FileID, autowig::HeldType< class ::clang::FileID > > class_b1580b6f5457571a867a2347d7b1f865("FileID", "", boost::python::no_init);
    class_b1580b6f5457571a867a2347d7b1f865.def("get_hash_value", method_pointer_b37853c69c93593eb51339669a634720, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("get_sentinel", method_pointer_228487b49805588f9951f7265fd0f13e, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_invalid", method_pointer_9cdd5e62e38d584ca355531e984921bd, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_valid", method_pointer_787abed1a0f05b66ad681f56d52e1836, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__neq__", method_pointer_28ff5ad4bb2f5884851ee84bb4529e72, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__lt__", method_pointer_8332e1a938025a3ca8d564dd50246995, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__le__", method_pointer_475ba513fd605ec19d096ad63a1e8656, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__eq__", method_pointer_8ad0869949005b20bab21577fb4a7e59, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__gt__", method_pointer_218d252ebea45b9992740b0e9f656c09, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__ge__", method_pointer_1e81db77269d5215a654fad8481fa336, "");
    class_b1580b6f5457571a867a2347d7b1f865.staticmethod("get_sentinel");

}