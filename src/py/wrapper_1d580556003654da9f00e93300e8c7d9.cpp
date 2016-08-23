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
    bool  (*method_pointer_3648fa06f9c152b19809468612e4e5fb)(class ::clang::Type  const *) = ::clang::AttributedType::classof;
    bool  (::clang::AttributedType::*method_pointer_622b22eac20d508d9b75940db3e13f77)() const = &::clang::AttributedType::isCallingConv;
    bool  (::clang::AttributedType::*method_pointer_0d6feb3654b45a2bae999191c7fce1e8)() const = &::clang::AttributedType::isMSTypeSpec;
    bool  (::clang::AttributedType::*method_pointer_00fda36f87b558e883de543e847c7b4d)() const = &::clang::AttributedType::isQualifier;
    bool  (::clang::AttributedType::*method_pointer_649148ba933057e19194bef95c7067f0)() const = &::clang::AttributedType::isSugared;
    boost::python::class_< class ::clang::AttributedType, autowig::HeldType< class ::clang::AttributedType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_1d580556003654da9f00e93300e8c7d9("AttributedType", "", boost::python::no_init);
    class_1d580556003654da9f00e93300e8c7d9.def("classof", method_pointer_3648fa06f9c152b19809468612e4e5fb, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_calling_conv", method_pointer_622b22eac20d508d9b75940db3e13f77, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_ms_type_spec", method_pointer_0d6feb3654b45a2bae999191c7fce1e8, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_qualifier", method_pointer_00fda36f87b558e883de543e847c7b4d, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_sugared", method_pointer_649148ba933057e19194bef95c7067f0, "");
    class_1d580556003654da9f00e93300e8c7d9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AttributedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AttributedType >, autowig::HeldType< class ::clang::Type > >();
    }

}