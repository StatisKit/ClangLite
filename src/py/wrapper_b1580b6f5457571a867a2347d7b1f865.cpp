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
    unsigned int  (::clang::FileID::*method_pointer_3419b4d04cb758b69eaeada43a78d52d)() const = &::clang::FileID::getHashValue;
    class ::clang::FileID  (*method_pointer_7a06b7b2752a5607924f6bd9513e6ba3)() = ::clang::FileID::getSentinel;
    bool  (::clang::FileID::*method_pointer_693125363bc754ae8800e95fb4c1794e)() const = &::clang::FileID::isInvalid;
    bool  (::clang::FileID::*method_pointer_b874d98f755a5274b9dffc9c9b04a349)() const = &::clang::FileID::isValid;
    bool  (::clang::FileID::*method_pointer_523c9bc2791452c283866bc1bbcafdbb)(class ::clang::FileID  const &) const = &::clang::FileID::operator!=;
    bool  (::clang::FileID::*method_pointer_52eefe923fe45bebbbc6de3a361fc170)(class ::clang::FileID  const &) const = &::clang::FileID::operator<;
    bool  (::clang::FileID::*method_pointer_53af2a08d68a5939ba66045fbad59297)(class ::clang::FileID  const &) const = &::clang::FileID::operator<=;
    bool  (::clang::FileID::*method_pointer_313d605a128950ddba57f0d06095c798)(class ::clang::FileID  const &) const = &::clang::FileID::operator==;
    bool  (::clang::FileID::*method_pointer_42ce97e3ed0c50ecbdf7ebd2b1360119)(class ::clang::FileID  const &) const = &::clang::FileID::operator>;
    bool  (::clang::FileID::*method_pointer_98a2bc5ac0f95d779f176190e95cdf5f)(class ::clang::FileID  const &) const = &::clang::FileID::operator>=;
    boost::python::class_< class ::clang::FileID, autowig::HeldType< class ::clang::FileID > > class_b1580b6f5457571a867a2347d7b1f865("FileID", "", boost::python::no_init);
    class_b1580b6f5457571a867a2347d7b1f865.def("get_hash_value", method_pointer_3419b4d04cb758b69eaeada43a78d52d, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("get_sentinel", method_pointer_7a06b7b2752a5607924f6bd9513e6ba3, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_invalid", method_pointer_693125363bc754ae8800e95fb4c1794e, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_valid", method_pointer_b874d98f755a5274b9dffc9c9b04a349, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__neq__", method_pointer_523c9bc2791452c283866bc1bbcafdbb, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__lt__", method_pointer_52eefe923fe45bebbbc6de3a361fc170, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__le__", method_pointer_53af2a08d68a5939ba66045fbad59297, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__eq__", method_pointer_313d605a128950ddba57f0d06095c798, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__gt__", method_pointer_42ce97e3ed0c50ecbdf7ebd2b1360119, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__ge__", method_pointer_98a2bc5ac0f95d779f176190e95cdf5f, "");
    class_b1580b6f5457571a867a2347d7b1f865.staticmethod("get_sentinel");

}