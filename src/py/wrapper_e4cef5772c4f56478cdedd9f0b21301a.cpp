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
    bool  (*method_pointer_39695485a8235a70a3649781310353ac)(class ::clang::Type  const *) = ::clang::ElaboratedType::classof;
    class ::clang::QualType  (::clang::ElaboratedType::*method_pointer_401f3e5879f553428b68ab59e1fa0756)() const = &::clang::ElaboratedType::desugar;
    class ::clang::QualType  (::clang::ElaboratedType::*method_pointer_0737b7c07c0653758d560b1b79ad9b52)() const = &::clang::ElaboratedType::getNamedType;
    bool  (::clang::ElaboratedType::*method_pointer_e5e388201c0553788aadc34ed41c77dc)() const = &::clang::ElaboratedType::isSugared;
    boost::python::class_< class ::clang::ElaboratedType, autowig::HeldType< class ::clang::ElaboratedType >, boost::python::bases< class ::clang::TypeWithKeyword >, boost::noncopyable > class_e4cef5772c4f56478cdedd9f0b21301a("ElaboratedType", "", boost::python::no_init);
    class_e4cef5772c4f56478cdedd9f0b21301a.def("classof", method_pointer_39695485a8235a70a3649781310353ac, "");
    class_e4cef5772c4f56478cdedd9f0b21301a.def("desugar", method_pointer_401f3e5879f553428b68ab59e1fa0756, "");
    class_e4cef5772c4f56478cdedd9f0b21301a.def("get_named_type", method_pointer_0737b7c07c0653758d560b1b79ad9b52, "");
    class_e4cef5772c4f56478cdedd9f0b21301a.def("is_sugared", method_pointer_e5e388201c0553788aadc34ed41c77dc, "");
    class_e4cef5772c4f56478cdedd9f0b21301a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ElaboratedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ElaboratedType >, autowig::HeldType< class ::clang::TypeWithKeyword > >();
    }

}