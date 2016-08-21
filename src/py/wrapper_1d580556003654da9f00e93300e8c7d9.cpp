#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_1d580556003654da9f00e93300e8c7d9()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_ef08f8094f335650be8f49a2a7ec3b5a)(class ::clang::Type  const *) = ::clang::AttributedType::classof;
    bool  (::clang::AttributedType::*method_pointer_67766e9bea42508884a0b572e20dd081)() const = &::clang::AttributedType::isCallingConv;
    bool  (::clang::AttributedType::*method_pointer_5f427328d3a05af9bef49bf8fcef279d)() const = &::clang::AttributedType::isMSTypeSpec;
    bool  (::clang::AttributedType::*method_pointer_563df866fc855187b3a6afc4eb28fe33)() const = &::clang::AttributedType::isQualifier;
    bool  (::clang::AttributedType::*method_pointer_9ffe558d6c055157a73fb017af06ddbe)() const = &::clang::AttributedType::isSugared;
    boost::python::class_< class ::clang::AttributedType, autowig::HeldType< class ::clang::AttributedType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_1d580556003654da9f00e93300e8c7d9("AttributedType", "", boost::python::no_init);
    class_1d580556003654da9f00e93300e8c7d9.def("classof", method_pointer_ef08f8094f335650be8f49a2a7ec3b5a, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_calling_conv", method_pointer_67766e9bea42508884a0b572e20dd081, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_ms_type_spec", method_pointer_5f427328d3a05af9bef49bf8fcef279d, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_qualifier", method_pointer_563df866fc855187b3a6afc4eb28fe33, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_sugared", method_pointer_9ffe558d6c055157a73fb017af06ddbe, "");
    class_1d580556003654da9f00e93300e8c7d9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AttributedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AttributedType >, autowig::HeldType< class ::clang::Type > >();
    }

}