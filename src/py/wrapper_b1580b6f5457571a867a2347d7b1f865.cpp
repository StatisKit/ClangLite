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
    unsigned int  (::clang::FileID::*method_pointer_ecadf67d68da531093a714b9bea1a9ff)() const = &::clang::FileID::getHashValue;
    class ::clang::FileID  (*method_pointer_c88c98b673035d66a31e6ecaaaaac21b)() = ::clang::FileID::getSentinel;
    bool  (::clang::FileID::*method_pointer_dd70d6ad92ea5fe7adebb3149632e282)() const = &::clang::FileID::isInvalid;
    bool  (::clang::FileID::*method_pointer_7082ca1d394751c8a436f9063fcfc624)() const = &::clang::FileID::isValid;
    bool  (::clang::FileID::*method_pointer_8cc27b2b64c55982b2be2a1c2fa061c8)(class ::clang::FileID  const &) const = &::clang::FileID::operator!=;
    bool  (::clang::FileID::*method_pointer_b96d20144f195e768fde2edfacfb8c66)(class ::clang::FileID  const &) const = &::clang::FileID::operator<;
    bool  (::clang::FileID::*method_pointer_524eed6d5d17500fb316cf938bc81dc0)(class ::clang::FileID  const &) const = &::clang::FileID::operator<=;
    bool  (::clang::FileID::*method_pointer_4ae57d05f53e561f96de3e44e4aeeb7a)(class ::clang::FileID  const &) const = &::clang::FileID::operator==;
    bool  (::clang::FileID::*method_pointer_73e76ea03901560990368f470421d8ed)(class ::clang::FileID  const &) const = &::clang::FileID::operator>;
    bool  (::clang::FileID::*method_pointer_621b9dc907c6521aa349a9db4c45d7bb)(class ::clang::FileID  const &) const = &::clang::FileID::operator>=;
    boost::python::class_< class ::clang::FileID, autowig::HeldType< class ::clang::FileID > > class_b1580b6f5457571a867a2347d7b1f865("FileID", "", boost::python::no_init);
    class_b1580b6f5457571a867a2347d7b1f865.def("get_hash_value", method_pointer_ecadf67d68da531093a714b9bea1a9ff, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("get_sentinel", method_pointer_c88c98b673035d66a31e6ecaaaaac21b, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_invalid", method_pointer_dd70d6ad92ea5fe7adebb3149632e282, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_valid", method_pointer_7082ca1d394751c8a436f9063fcfc624, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__neq__", method_pointer_8cc27b2b64c55982b2be2a1c2fa061c8, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__lt__", method_pointer_b96d20144f195e768fde2edfacfb8c66, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__le__", method_pointer_524eed6d5d17500fb316cf938bc81dc0, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__eq__", method_pointer_4ae57d05f53e561f96de3e44e4aeeb7a, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__gt__", method_pointer_73e76ea03901560990368f470421d8ed, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__ge__", method_pointer_621b9dc907c6521aa349a9db4c45d7bb, "");
    class_b1580b6f5457571a867a2347d7b1f865.staticmethod("get_sentinel");

}