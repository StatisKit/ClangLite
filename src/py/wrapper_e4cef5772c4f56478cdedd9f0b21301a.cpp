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
    bool  (*method_pointer_fdc25438eeb55943ad251e35f18e567d)(class ::clang::Type  const *) = ::clang::ElaboratedType::classof;
    class ::clang::QualType  (::clang::ElaboratedType::*method_pointer_0c0f73609ada55f3ae013726b0dfef81)() const = &::clang::ElaboratedType::desugar;
    class ::clang::QualType  (::clang::ElaboratedType::*method_pointer_71df0ef812b55df5b6953a70c7f50295)() const = &::clang::ElaboratedType::getNamedType;
    bool  (::clang::ElaboratedType::*method_pointer_39619ac090cc5d8a9fead48b9b1119e1)() const = &::clang::ElaboratedType::isSugared;
    boost::python::class_< class ::clang::ElaboratedType, autowig::HeldType< class ::clang::ElaboratedType >, boost::python::bases< class ::clang::TypeWithKeyword >, boost::noncopyable > class_e4cef5772c4f56478cdedd9f0b21301a("ElaboratedType", "", boost::python::no_init);
    class_e4cef5772c4f56478cdedd9f0b21301a.def("classof", method_pointer_fdc25438eeb55943ad251e35f18e567d, "");
    class_e4cef5772c4f56478cdedd9f0b21301a.def("desugar", method_pointer_0c0f73609ada55f3ae013726b0dfef81, "");
    class_e4cef5772c4f56478cdedd9f0b21301a.def("get_named_type", method_pointer_71df0ef812b55df5b6953a70c7f50295, "");
    class_e4cef5772c4f56478cdedd9f0b21301a.def("is_sugared", method_pointer_39619ac090cc5d8a9fead48b9b1119e1, "");
    class_e4cef5772c4f56478cdedd9f0b21301a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ElaboratedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ElaboratedType >, autowig::HeldType< class ::clang::TypeWithKeyword > >();
    }

}