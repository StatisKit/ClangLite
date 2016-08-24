#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_973074796ca857b3a9a2c7a922cd35ae()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_4a4fe766f9115b8ca6763f971d703c8e)(class ::clang::Type  const *) = ::clang::DecltypeType::classof;
    class ::clang::QualType  (::clang::DecltypeType::*method_pointer_992a6ed9e1ba5d7787d1cccd2821374a)() const = &::clang::DecltypeType::desugar;
    class ::clang::QualType  (::clang::DecltypeType::*method_pointer_089067d4f63b5a8dbee9b45455d12c95)() const = &::clang::DecltypeType::getUnderlyingType;
    bool  (::clang::DecltypeType::*method_pointer_e11423a723a65b6d81aa9a0bd6d5127f)() const = &::clang::DecltypeType::isSugared;
    boost::python::class_< class ::clang::DecltypeType, autowig::HeldType< class ::clang::DecltypeType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_973074796ca857b3a9a2c7a922cd35ae("DecltypeType", "", boost::python::no_init);
    class_973074796ca857b3a9a2c7a922cd35ae.def("classof", method_pointer_4a4fe766f9115b8ca6763f971d703c8e, "");
    class_973074796ca857b3a9a2c7a922cd35ae.def("desugar", method_pointer_992a6ed9e1ba5d7787d1cccd2821374a, "");
    class_973074796ca857b3a9a2c7a922cd35ae.def("get_underlying_type", method_pointer_089067d4f63b5a8dbee9b45455d12c95, "");
    class_973074796ca857b3a9a2c7a922cd35ae.def("is_sugared", method_pointer_e11423a723a65b6d81aa9a0bd6d5127f, "");
    class_973074796ca857b3a9a2c7a922cd35ae.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::DecltypeType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::DecltypeType >, autowig::HeldType< class ::clang::Type > >();
    }

}