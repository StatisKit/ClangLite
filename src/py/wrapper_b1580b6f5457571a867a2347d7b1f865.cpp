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
    unsigned int  (::clang::FileID::*method_pointer_cae3d6b16ad7540a9ed6259d35cd8158)() const = &::clang::FileID::getHashValue;
    class ::clang::FileID  (*method_pointer_61cbf04fc2ae5c01b6fa4fa8bac064c6)() = ::clang::FileID::getSentinel;
    bool  (::clang::FileID::*method_pointer_3c05b20b2fc35a0292a04ec9d1ae8ab9)() const = &::clang::FileID::isInvalid;
    bool  (::clang::FileID::*method_pointer_ed22632690c350329293bec5e567dc3a)() const = &::clang::FileID::isValid;
    bool  (::clang::FileID::*method_pointer_7b49743c40e15f8da0fa03a5acde7cf7)(class ::clang::FileID  const &) const = &::clang::FileID::operator!=;
    bool  (::clang::FileID::*method_pointer_10308fc0703759e1a7fd457d49f476bf)(class ::clang::FileID  const &) const = &::clang::FileID::operator<;
    bool  (::clang::FileID::*method_pointer_336ea5fd08c55df9bb5ccdfbd3ad69a0)(class ::clang::FileID  const &) const = &::clang::FileID::operator<=;
    bool  (::clang::FileID::*method_pointer_b02218c3c5dc532bbd6f940bd147ff5e)(class ::clang::FileID  const &) const = &::clang::FileID::operator==;
    bool  (::clang::FileID::*method_pointer_d1f616078c185c5fbcb1aee2ec9e06b0)(class ::clang::FileID  const &) const = &::clang::FileID::operator>;
    bool  (::clang::FileID::*method_pointer_cbf464b2527d55828379cbf998308459)(class ::clang::FileID  const &) const = &::clang::FileID::operator>=;
    boost::python::class_< class ::clang::FileID, autowig::HeldType< class ::clang::FileID > > class_b1580b6f5457571a867a2347d7b1f865("FileID", "", boost::python::no_init);
    class_b1580b6f5457571a867a2347d7b1f865.def("get_hash_value", method_pointer_cae3d6b16ad7540a9ed6259d35cd8158, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("get_sentinel", method_pointer_61cbf04fc2ae5c01b6fa4fa8bac064c6, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_invalid", method_pointer_3c05b20b2fc35a0292a04ec9d1ae8ab9, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("is_valid", method_pointer_ed22632690c350329293bec5e567dc3a, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__neq__", method_pointer_7b49743c40e15f8da0fa03a5acde7cf7, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__lt__", method_pointer_10308fc0703759e1a7fd457d49f476bf, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__le__", method_pointer_336ea5fd08c55df9bb5ccdfbd3ad69a0, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__eq__", method_pointer_b02218c3c5dc532bbd6f940bd147ff5e, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__gt__", method_pointer_d1f616078c185c5fbcb1aee2ec9e06b0, "");
    class_b1580b6f5457571a867a2347d7b1f865.def("__ge__", method_pointer_cbf464b2527d55828379cbf998308459, "");
    class_b1580b6f5457571a867a2347d7b1f865.staticmethod("get_sentinel");

}