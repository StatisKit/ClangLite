#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_1d580556003654da9f00e93300e8c7d9()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_37f5f891fb685dd9a773e93f29b86760)(class ::clang::Type  const *) = ::clang::AttributedType::classof;
    bool  (::clang::AttributedType::*method_pointer_84cf930d47ec598496c7065546f8a4cf)() const = &::clang::AttributedType::isCallingConv;
    bool  (::clang::AttributedType::*method_pointer_e7feb58456dc5ea0ad6ddca23f348c9e)() const = &::clang::AttributedType::isMSTypeSpec;
    bool  (::clang::AttributedType::*method_pointer_3b105e91f4385710bf7e43c2d1c19617)() const = &::clang::AttributedType::isQualifier;
    bool  (::clang::AttributedType::*method_pointer_abf12b94bbb75e2ca2dfeed542990b24)() const = &::clang::AttributedType::isSugared;
    boost::python::class_< class ::clang::AttributedType, autowig::HeldType< class ::clang::AttributedType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_1d580556003654da9f00e93300e8c7d9("AttributedType", "", boost::python::no_init);
    class_1d580556003654da9f00e93300e8c7d9.def("classof", method_pointer_37f5f891fb685dd9a773e93f29b86760, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_calling_conv", method_pointer_84cf930d47ec598496c7065546f8a4cf, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_ms_type_spec", method_pointer_e7feb58456dc5ea0ad6ddca23f348c9e, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_qualifier", method_pointer_3b105e91f4385710bf7e43c2d1c19617, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_sugared", method_pointer_abf12b94bbb75e2ca2dfeed542990b24, "");
    class_1d580556003654da9f00e93300e8c7d9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AttributedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AttributedType >, autowig::HeldType< class ::clang::Type > >();
    }

}