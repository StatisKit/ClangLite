#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_b1580b6f5457571a867a2347d7b1f865()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::FileID::*method_pointer_ac742e5163e159c7b26970549936ebc5)() const = &::clang::FileID::isValid;
    bool  (::clang::FileID::*method_pointer_bf6d76534e755e39841ef94fdfc98c2a)() const = &::clang::FileID::isInvalid;
    unsigned int  (::clang::FileID::*method_pointer_2ef830c2316b52a39401239fc41ff35b)() const = &::clang::FileID::getHashValue;
    boost::python::class_< class ::clang::FileID, autowig::HeldType< class ::clang::FileID >, boost::noncopyable > class_b1580b6f5457571a867a2347d7b1f865("FileID", "", boost::python::no_init);
    class_b1580b6f5457571a867a2347d7b1f865.def("is_valid", method_pointer_ac742e5163e159c7b26970549936ebc5, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_invalid", method_pointer_bf6d76534e755e39841ef94fdfc98c2a, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("get_hash_value", method_pointer_2ef830c2316b52a39401239fc41ff35b, "");

}