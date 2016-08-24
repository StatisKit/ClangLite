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
    unsigned int  (::clang::FileID::*method_pointer_d7eca985f8425e9f996a4031aab48dfa)() const = &::clang::FileID::getHashValue;
    class ::clang::FileID  (*method_pointer_a5f6a71cacf55c948522a6e4b43d1b48)() = ::clang::FileID::getSentinel;
    bool  (::clang::FileID::*method_pointer_f2fc64eb3db251908e1c37234720d11c)() const = &::clang::FileID::isInvalid;
    bool  (::clang::FileID::*method_pointer_9767b7836ee45dce877f42078630bcf3)() const = &::clang::FileID::isValid;
    bool  (::clang::FileID::*method_pointer_5529112dcae15a9d92ca9bed76757076)(class ::clang::FileID  const &) const = &::clang::FileID::operator!=;
    bool  (::clang::FileID::*method_pointer_e7321b4c277451c38573689342ae642f)(class ::clang::FileID  const &) const = &::clang::FileID::operator<;
    bool  (::clang::FileID::*method_pointer_16880a19ae255ffb83654e031a44c7ea)(class ::clang::FileID  const &) const = &::clang::FileID::operator<=;
    bool  (::clang::FileID::*method_pointer_36e4ea1f9f555ce89bb7a7cd5946220e)(class ::clang::FileID  const &) const = &::clang::FileID::operator==;
    bool  (::clang::FileID::*method_pointer_091cdb8ef9af51109252d3dd96aca12d)(class ::clang::FileID  const &) const = &::clang::FileID::operator>;
    bool  (::clang::FileID::*method_pointer_e5476f44722d5170984c8990299f33da)(class ::clang::FileID  const &) const = &::clang::FileID::operator>=;
    boost::python::class_< class ::clang::FileID, autowig::HeldType< class ::clang::FileID > > class_b1580b6f5457571a867a2347d7b1f865("FileID", "", boost::python::no_init);
    class_b1580b6f5457571a867a2347d7b1f865.def("get_hash_value", method_pointer_d7eca985f8425e9f996a4031aab48dfa, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("get_sentinel", method_pointer_a5f6a71cacf55c948522a6e4b43d1b48, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_invalid", method_pointer_f2fc64eb3db251908e1c37234720d11c, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_valid", method_pointer_9767b7836ee45dce877f42078630bcf3, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__neq__", method_pointer_5529112dcae15a9d92ca9bed76757076, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__lt__", method_pointer_e7321b4c277451c38573689342ae642f, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__le__", method_pointer_16880a19ae255ffb83654e031a44c7ea, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__eq__", method_pointer_36e4ea1f9f555ce89bb7a7cd5946220e, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__gt__", method_pointer_091cdb8ef9af51109252d3dd96aca12d, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__ge__", method_pointer_e5476f44722d5170984c8990299f33da, "");
    class_b1580b6f5457571a867a2347d7b1f865.staticmethod("get_sentinel");

}