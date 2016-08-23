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
    bool  (*method_pointer_c109dcf67adc5a5ebdf6b24c354638de)(class ::clang::Type  const *) = ::clang::AttributedType::classof;
    bool  (::clang::AttributedType::*method_pointer_f91466bc4a085252a8d5ee0e364640cf)() const = &::clang::AttributedType::isCallingConv;
    bool  (::clang::AttributedType::*method_pointer_318ed169503b5d988fbf2657facf5cb1)() const = &::clang::AttributedType::isMSTypeSpec;
    bool  (::clang::AttributedType::*method_pointer_991e940e626b5bbb890b1b1b304aec3a)() const = &::clang::AttributedType::isQualifier;
    bool  (::clang::AttributedType::*method_pointer_3fa36da3950d5bdd82ebbd0ed0c8ce55)() const = &::clang::AttributedType::isSugared;
    boost::python::class_< class ::clang::AttributedType, autowig::HeldType< class ::clang::AttributedType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_1d580556003654da9f00e93300e8c7d9("AttributedType", "", boost::python::no_init);
    class_1d580556003654da9f00e93300e8c7d9.def("classof", method_pointer_c109dcf67adc5a5ebdf6b24c354638de, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_calling_conv", method_pointer_f91466bc4a085252a8d5ee0e364640cf, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_ms_type_spec", method_pointer_318ed169503b5d988fbf2657facf5cb1, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_qualifier", method_pointer_991e940e626b5bbb890b1b1b304aec3a, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_sugared", method_pointer_3fa36da3950d5bdd82ebbd0ed0c8ce55, "");
    class_1d580556003654da9f00e93300e8c7d9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AttributedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AttributedType >, autowig::HeldType< class ::clang::Type > >();
    }

}