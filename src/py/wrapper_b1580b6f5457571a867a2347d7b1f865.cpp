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
    unsigned int  (::clang::FileID::*method_pointer_ed97ed44720e5fc4ac39d3fe6b167336)() const = &::clang::FileID::getHashValue;
    class ::clang::FileID  (*method_pointer_b9ab811d1cb854afa185efff9ae98812)() = ::clang::FileID::getSentinel;
    bool  (::clang::FileID::*method_pointer_c86e3976b3a951328d7d7a462661dfeb)() const = &::clang::FileID::isInvalid;
    bool  (::clang::FileID::*method_pointer_07bb469dc8bd5c888a48024de64175ae)() const = &::clang::FileID::isValid;
    bool  (::clang::FileID::*method_pointer_6f8f0ce334d758b490b172a79ad36e43)(class ::clang::FileID  const &) const = &::clang::FileID::operator!=;
    bool  (::clang::FileID::*method_pointer_93ba965a841f5b3c843f34adbbc5fe90)(class ::clang::FileID  const &) const = &::clang::FileID::operator<;
    bool  (::clang::FileID::*method_pointer_39cfb922c6775fc68662aa2035b11ee2)(class ::clang::FileID  const &) const = &::clang::FileID::operator<=;
    bool  (::clang::FileID::*method_pointer_b47d2ec81b235fca9e2b088e9729bdae)(class ::clang::FileID  const &) const = &::clang::FileID::operator==;
    bool  (::clang::FileID::*method_pointer_c89c0a2ab18952a396e5c3797dda0d20)(class ::clang::FileID  const &) const = &::clang::FileID::operator>;
    bool  (::clang::FileID::*method_pointer_97deae883f415a40bc338f9ccc37afc4)(class ::clang::FileID  const &) const = &::clang::FileID::operator>=;
    boost::python::class_< class ::clang::FileID, autowig::HeldType< class ::clang::FileID > > class_b1580b6f5457571a867a2347d7b1f865("FileID", "", boost::python::no_init);
    class_b1580b6f5457571a867a2347d7b1f865.def("get_hash_value", method_pointer_ed97ed44720e5fc4ac39d3fe6b167336, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("get_sentinel", method_pointer_b9ab811d1cb854afa185efff9ae98812, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_invalid", method_pointer_c86e3976b3a951328d7d7a462661dfeb, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_valid", method_pointer_07bb469dc8bd5c888a48024de64175ae, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__neq__", method_pointer_6f8f0ce334d758b490b172a79ad36e43, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__lt__", method_pointer_93ba965a841f5b3c843f34adbbc5fe90, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__le__", method_pointer_39cfb922c6775fc68662aa2035b11ee2, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__eq__", method_pointer_b47d2ec81b235fca9e2b088e9729bdae, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__gt__", method_pointer_c89c0a2ab18952a396e5c3797dda0d20, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__ge__", method_pointer_97deae883f415a40bc338f9ccc37afc4, "");
    class_b1580b6f5457571a867a2347d7b1f865.staticmethod("get_sentinel");

}