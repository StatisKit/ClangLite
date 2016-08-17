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
    bool  (::clang::AttributedType::*method_pointer_8f42168a9a7458808c19c03df884f9ed)() const = &::clang::AttributedType::isCallingConv;
    bool  (::clang::AttributedType::*method_pointer_409d809e45135d7aad4226249cc6b2d0)() const = &::clang::AttributedType::isMSTypeSpec;
    bool  (::clang::AttributedType::*method_pointer_7db78f48e27957c0827ae8f10387387d)() const = &::clang::AttributedType::isSugared;
    bool  (*method_pointer_fba1890804595649bfa90978adb4e763)(class ::clang::Type  const *) = ::clang::AttributedType::classof;
    bool  (::clang::AttributedType::*method_pointer_5662b279e4275044bd215fa9bcff28d1)() const = &::clang::AttributedType::isQualifier;
    boost::python::class_< class ::clang::AttributedType, autowig::HeldType< class ::clang::AttributedType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_1d580556003654da9f00e93300e8c7d9("AttributedType", "", boost::python::no_init);
    class_1d580556003654da9f00e93300e8c7d9.def("is_calling_conv", method_pointer_8f42168a9a7458808c19c03df884f9ed, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_ms_type_spec", method_pointer_409d809e45135d7aad4226249cc6b2d0, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_sugared", method_pointer_7db78f48e27957c0827ae8f10387387d, "");
    class_1d580556003654da9f00e93300e8c7d9.def("classof", method_pointer_fba1890804595649bfa90978adb4e763, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_qualifier", method_pointer_5662b279e4275044bd215fa9bcff28d1, "");
    class_1d580556003654da9f00e93300e8c7d9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AttributedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AttributedType >, autowig::HeldType< class ::clang::Type > >();
    }

}