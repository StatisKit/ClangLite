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
    unsigned int  (::clang::FileID::*method_pointer_01e6443d7c4457a290b1911b42bd0030)() const = &::clang::FileID::getHashValue;
    class ::clang::FileID  (*method_pointer_4938890a8402587a845524c7dd7a2849)() = ::clang::FileID::getSentinel;
    bool  (::clang::FileID::*method_pointer_60b333faa6e854ed94ed8a60a5d4a9f9)() const = &::clang::FileID::isInvalid;
    bool  (::clang::FileID::*method_pointer_e9114fc8cda95bb1a9d0cfad2439a3b8)() const = &::clang::FileID::isValid;
    bool  (::clang::FileID::*method_pointer_8c2c131c761b5ff69fc238845ce45157)(class ::clang::FileID  const &) const = &::clang::FileID::operator!=;
    bool  (::clang::FileID::*method_pointer_aeb346ee5b2b57c4abca8de3bb7843c1)(class ::clang::FileID  const &) const = &::clang::FileID::operator<;
    bool  (::clang::FileID::*method_pointer_87333391802e5c8285f716db38ef43db)(class ::clang::FileID  const &) const = &::clang::FileID::operator<=;
    bool  (::clang::FileID::*method_pointer_c64ebcc5e0715aa1a820339742d7fe32)(class ::clang::FileID  const &) const = &::clang::FileID::operator==;
    bool  (::clang::FileID::*method_pointer_1660769d179d5f5381a0371b0e3cc476)(class ::clang::FileID  const &) const = &::clang::FileID::operator>;
    bool  (::clang::FileID::*method_pointer_7b539ae43ecf5242bb9a09b4f33735fb)(class ::clang::FileID  const &) const = &::clang::FileID::operator>=;
    boost::python::class_< class ::clang::FileID, autowig::HeldType< class ::clang::FileID > > class_b1580b6f5457571a867a2347d7b1f865("FileID", "", boost::python::no_init);
    class_b1580b6f5457571a867a2347d7b1f865.def("get_hash_value", method_pointer_01e6443d7c4457a290b1911b42bd0030, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("get_sentinel", method_pointer_4938890a8402587a845524c7dd7a2849, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_invalid", method_pointer_60b333faa6e854ed94ed8a60a5d4a9f9, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_valid", method_pointer_e9114fc8cda95bb1a9d0cfad2439a3b8, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__neq__", method_pointer_8c2c131c761b5ff69fc238845ce45157, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__lt__", method_pointer_aeb346ee5b2b57c4abca8de3bb7843c1, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__le__", method_pointer_87333391802e5c8285f716db38ef43db, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__eq__", method_pointer_c64ebcc5e0715aa1a820339742d7fe32, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__gt__", method_pointer_1660769d179d5f5381a0371b0e3cc476, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__ge__", method_pointer_7b539ae43ecf5242bb9a09b4f33735fb, "");
    class_b1580b6f5457571a867a2347d7b1f865.staticmethod("get_sentinel");

}