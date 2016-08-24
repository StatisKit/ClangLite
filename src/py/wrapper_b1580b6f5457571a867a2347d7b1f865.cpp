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
    unsigned int  (::clang::FileID::*method_pointer_b28901804ead5fc5a68666c0d35ec71c)() const = &::clang::FileID::getHashValue;
    class ::clang::FileID  (*method_pointer_3fd9278e69075909a54807ed6df7d2da)() = ::clang::FileID::getSentinel;
    bool  (::clang::FileID::*method_pointer_f7abda97787a59b3878ae9346b9833e5)() const = &::clang::FileID::isInvalid;
    bool  (::clang::FileID::*method_pointer_d031015744065041a9ae40dc2e165b06)() const = &::clang::FileID::isValid;
    bool  (::clang::FileID::*method_pointer_aa586e4fd78356ef9963d8f95fda4f27)(class ::clang::FileID  const &) const = &::clang::FileID::operator!=;
    bool  (::clang::FileID::*method_pointer_83580e373cde5c65b4154d4585de7e30)(class ::clang::FileID  const &) const = &::clang::FileID::operator<;
    bool  (::clang::FileID::*method_pointer_7c2b1c088c65564a8863bca0fcb6faf8)(class ::clang::FileID  const &) const = &::clang::FileID::operator<=;
    bool  (::clang::FileID::*method_pointer_9358ca67993b5d68942148bf7c22e0c1)(class ::clang::FileID  const &) const = &::clang::FileID::operator==;
    bool  (::clang::FileID::*method_pointer_1f28e492c3c95cb7b476a88bc8ff064b)(class ::clang::FileID  const &) const = &::clang::FileID::operator>;
    bool  (::clang::FileID::*method_pointer_d5958d93e1d85d47a78933e398a59cbc)(class ::clang::FileID  const &) const = &::clang::FileID::operator>=;
    boost::python::class_< class ::clang::FileID, autowig::HeldType< class ::clang::FileID > > class_b1580b6f5457571a867a2347d7b1f865("FileID", "", boost::python::no_init);
    class_b1580b6f5457571a867a2347d7b1f865.def("get_hash_value", method_pointer_b28901804ead5fc5a68666c0d35ec71c, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("get_sentinel", method_pointer_3fd9278e69075909a54807ed6df7d2da, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_invalid", method_pointer_f7abda97787a59b3878ae9346b9833e5, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_valid", method_pointer_d031015744065041a9ae40dc2e165b06, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__neq__", method_pointer_aa586e4fd78356ef9963d8f95fda4f27, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__lt__", method_pointer_83580e373cde5c65b4154d4585de7e30, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__le__", method_pointer_7c2b1c088c65564a8863bca0fcb6faf8, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__eq__", method_pointer_9358ca67993b5d68942148bf7c22e0c1, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__gt__", method_pointer_1f28e492c3c95cb7b476a88bc8ff064b, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__ge__", method_pointer_d5958d93e1d85d47a78933e398a59cbc, "");
    class_b1580b6f5457571a867a2347d7b1f865.staticmethod("get_sentinel");

}