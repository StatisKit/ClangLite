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
    unsigned int  (::clang::FileID::*method_pointer_24ca99569e76557d945930f0412855b0)() const = &::clang::FileID::getHashValue;
    bool  (::clang::FileID::*method_pointer_7133c7c3c8a0569f801ff487678f6e98)() const = &::clang::FileID::isInvalid;
    bool  (::clang::FileID::*method_pointer_7caf247326db5e489202c1127d5fb7cd)() const = &::clang::FileID::isValid;
    boost::python::class_< class ::clang::FileID, autowig::HeldType< class ::clang::FileID >, boost::noncopyable > class_b1580b6f5457571a867a2347d7b1f865("FileID", "", boost::python::no_init);
    class_b1580b6f5457571a867a2347d7b1f865.def("get_hash_value", method_pointer_24ca99569e76557d945930f0412855b0, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_invalid", method_pointer_7133c7c3c8a0569f801ff487678f6e98, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_valid", method_pointer_7caf247326db5e489202c1127d5fb7cd, "");

}