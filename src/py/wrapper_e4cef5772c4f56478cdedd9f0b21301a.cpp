#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_e4cef5772c4f56478cdedd9f0b21301a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_ec84c99ede0c52fcb71418d675fd3f3b)(class ::clang::Type  const *) = ::clang::ElaboratedType::classof;
    class ::clang::QualType  (::clang::ElaboratedType::*method_pointer_6a970f6af48a5603b03414c3426a9641)() const = &::clang::ElaboratedType::desugar;
    class ::clang::QualType  (::clang::ElaboratedType::*method_pointer_d9b446a2069053359c0fe7fd491fa2ae)() const = &::clang::ElaboratedType::getNamedType;
    bool  (::clang::ElaboratedType::*method_pointer_56f846fecce058ff80399129e3328d6d)() const = &::clang::ElaboratedType::isSugared;
    boost::python::class_< class ::clang::ElaboratedType, autowig::HeldType< class ::clang::ElaboratedType >, boost::python::bases< class ::clang::TypeWithKeyword >, boost::noncopyable > class_e4cef5772c4f56478cdedd9f0b21301a("ElaboratedType", "", boost::python::no_init);
    class_e4cef5772c4f56478cdedd9f0b21301a.def("classof", method_pointer_ec84c99ede0c52fcb71418d675fd3f3b, "");
    class_e4cef5772c4f56478cdedd9f0b21301a.def("desugar", method_pointer_6a970f6af48a5603b03414c3426a9641, "");
    class_e4cef5772c4f56478cdedd9f0b21301a.def("get_named_type", method_pointer_d9b446a2069053359c0fe7fd491fa2ae, "");
    class_e4cef5772c4f56478cdedd9f0b21301a.def("is_sugared", method_pointer_56f846fecce058ff80399129e3328d6d, "");
    class_e4cef5772c4f56478cdedd9f0b21301a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ElaboratedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ElaboratedType >, autowig::HeldType< class ::clang::TypeWithKeyword > >();
    }

}