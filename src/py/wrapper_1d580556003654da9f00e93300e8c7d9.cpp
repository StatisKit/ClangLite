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
    bool  (*method_pointer_9d7d9d4837e1563faca76235bcaae66f)(class ::clang::Type  const *) = ::clang::AttributedType::classof;
    bool  (::clang::AttributedType::*method_pointer_bcd4cf28fb0b5748b48bfd4f875d3959)() const = &::clang::AttributedType::isCallingConv;
    bool  (::clang::AttributedType::*method_pointer_ea0ee460ea9f53c991304411e12cd9f0)() const = &::clang::AttributedType::isMSTypeSpec;
    bool  (::clang::AttributedType::*method_pointer_fb1b23b9c57952ac83c77ca66d356e0d)() const = &::clang::AttributedType::isQualifier;
    bool  (::clang::AttributedType::*method_pointer_7b0f916176045885b9fda8c302463b13)() const = &::clang::AttributedType::isSugared;
    boost::python::class_< class ::clang::AttributedType, autowig::HeldType< class ::clang::AttributedType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_1d580556003654da9f00e93300e8c7d9("AttributedType", "", boost::python::no_init);
    class_1d580556003654da9f00e93300e8c7d9.def("classof", method_pointer_9d7d9d4837e1563faca76235bcaae66f, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_calling_conv", method_pointer_bcd4cf28fb0b5748b48bfd4f875d3959, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_ms_type_spec", method_pointer_ea0ee460ea9f53c991304411e12cd9f0, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_qualifier", method_pointer_fb1b23b9c57952ac83c77ca66d356e0d, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_sugared", method_pointer_7b0f916176045885b9fda8c302463b13, "");
    class_1d580556003654da9f00e93300e8c7d9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AttributedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AttributedType >, autowig::HeldType< class ::clang::Type > >();
    }

}