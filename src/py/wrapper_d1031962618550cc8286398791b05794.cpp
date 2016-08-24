#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_d1031962618550cc8286398791b05794()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_968d7bebd5235594a1e00300847a4e7f)(class ::clang::Type  const *) = ::clang::DecayedType::classof;
    class ::clang::QualType  (::clang::DecayedType::*method_pointer_82f8a084c57a584c8872dda6d7e4b5c9)() const = &::clang::DecayedType::getDecayedType;
    class ::clang::QualType  (::clang::DecayedType::*method_pointer_1d000ac3ec7950029b5257c8e77c41a7)() const = &::clang::DecayedType::getPointeeType;
    boost::python::class_< class ::clang::DecayedType, autowig::HeldType< class ::clang::DecayedType >, boost::python::bases< class ::clang::AdjustedType >, boost::noncopyable > class_d1031962618550cc8286398791b05794("DecayedType", "", boost::python::no_init);
    class_d1031962618550cc8286398791b05794.def("classof", method_pointer_968d7bebd5235594a1e00300847a4e7f, "");
    class_d1031962618550cc8286398791b05794.def("get_decayed_type", method_pointer_82f8a084c57a584c8872dda6d7e4b5c9, "");
    class_d1031962618550cc8286398791b05794.def("get_pointee_type", method_pointer_1d000ac3ec7950029b5257c8e77c41a7, "");
    class_d1031962618550cc8286398791b05794.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::DecayedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::DecayedType >, autowig::HeldType< class ::clang::AdjustedType > >();
    }

}