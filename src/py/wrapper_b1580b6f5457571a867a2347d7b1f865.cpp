#include "_clanglite.h"


namespace autowig
{
}


void wrapper_b1580b6f5457571a867a2347d7b1f865()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    unsigned int  (::clang::FileID::*method_pointer_2f63b66c3f9056178951ff22b8da463b)() const = &::clang::FileID::getHashValue;
    bool  (::clang::FileID::*method_pointer_90f26180fddc5bdc8dbf15ea56342e49)() const = &::clang::FileID::isInvalid;
    bool  (::clang::FileID::*method_pointer_5e2f3d4ecb055c7a9221ee4cc6aaf64d)() const = &::clang::FileID::isValid;
    boost::python::class_< class ::clang::FileID, autowig::HeldType< class ::clang::FileID >, boost::noncopyable > class_b1580b6f5457571a867a2347d7b1f865("FileID", "", boost::python::no_init);
    class_b1580b6f5457571a867a2347d7b1f865.def("get_hash_value", method_pointer_2f63b66c3f9056178951ff22b8da463b, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_invalid", method_pointer_90f26180fddc5bdc8dbf15ea56342e49, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_valid", method_pointer_5e2f3d4ecb055c7a9221ee4cc6aaf64d, "");

}