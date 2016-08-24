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
    unsigned int  (::clang::FileID::*method_pointer_8cf96d7aa7e152f1afd32e23cb511644)() const = &::clang::FileID::getHashValue;
    class ::clang::FileID  (*method_pointer_3d4ec1dd060b547b93349ba2bf82f0f8)() = ::clang::FileID::getSentinel;
    bool  (::clang::FileID::*method_pointer_fa777de4898b57ae9aa0f250272effe4)() const = &::clang::FileID::isInvalid;
    bool  (::clang::FileID::*method_pointer_c6069abba7b05c0a87c5fb10bf2b0b3e)() const = &::clang::FileID::isValid;
    bool  (::clang::FileID::*method_pointer_d55064c1384f5faea9a31dc2f6937b91)(class ::clang::FileID  const &) const = &::clang::FileID::operator!=;
    bool  (::clang::FileID::*method_pointer_b338b611301b5c7db6a0414c15c9a549)(class ::clang::FileID  const &) const = &::clang::FileID::operator<;
    bool  (::clang::FileID::*method_pointer_4b49b8911a0a500fbedf6102e0143529)(class ::clang::FileID  const &) const = &::clang::FileID::operator<=;
    bool  (::clang::FileID::*method_pointer_5c3719177e325c61b958480c6a9bf165)(class ::clang::FileID  const &) const = &::clang::FileID::operator==;
    bool  (::clang::FileID::*method_pointer_3bb49caeb7055e41800b4e3a04409da5)(class ::clang::FileID  const &) const = &::clang::FileID::operator>;
    bool  (::clang::FileID::*method_pointer_b739b61056ab5615adfaaea48e949506)(class ::clang::FileID  const &) const = &::clang::FileID::operator>=;
    boost::python::class_< class ::clang::FileID, autowig::HeldType< class ::clang::FileID > > class_b1580b6f5457571a867a2347d7b1f865("FileID", "", boost::python::no_init);
    class_b1580b6f5457571a867a2347d7b1f865.def("get_hash_value", method_pointer_8cf96d7aa7e152f1afd32e23cb511644, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("get_sentinel", method_pointer_3d4ec1dd060b547b93349ba2bf82f0f8, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_invalid", method_pointer_fa777de4898b57ae9aa0f250272effe4, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_valid", method_pointer_c6069abba7b05c0a87c5fb10bf2b0b3e, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__neq__", method_pointer_d55064c1384f5faea9a31dc2f6937b91, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__lt__", method_pointer_b338b611301b5c7db6a0414c15c9a549, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__le__", method_pointer_4b49b8911a0a500fbedf6102e0143529, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__eq__", method_pointer_5c3719177e325c61b958480c6a9bf165, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__gt__", method_pointer_3bb49caeb7055e41800b4e3a04409da5, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__ge__", method_pointer_b739b61056ab5615adfaaea48e949506, "");
    class_b1580b6f5457571a867a2347d7b1f865.staticmethod("get_sentinel");

}