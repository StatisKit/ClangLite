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
    bool  (*method_pointer_ee60c45bd8765d24a53cf7bdb69bdca4)(class ::clang::Type  const *) = ::clang::AttributedType::classof;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_019bcec8f55750228ae7ac1e1e408bf7)() const = &::clang::AttributedType::desugar;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_ba02379dc6a15c7bb80444a272f503b1)() const = &::clang::AttributedType::getEquivalentType;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_d094b8ceee9a56eb852705092d424f67)() const = &::clang::AttributedType::getModifiedType;
    bool  (::clang::AttributedType::*method_pointer_ea7a95c9d3a85d579484efea8309ab90)() const = &::clang::AttributedType::isCallingConv;
    bool  (::clang::AttributedType::*method_pointer_565f813a31b85ec4b7e9227036050944)() const = &::clang::AttributedType::isMSTypeSpec;
    bool  (::clang::AttributedType::*method_pointer_10809fb4a76a51e9b8169cf65763d5c7)() const = &::clang::AttributedType::isQualifier;
    bool  (::clang::AttributedType::*method_pointer_7197fee9a37f5cdc9eb44f8d67949926)() const = &::clang::AttributedType::isSugared;
    boost::python::class_< class ::clang::AttributedType, autowig::HeldType< class ::clang::AttributedType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_1d580556003654da9f00e93300e8c7d9("AttributedType", "", boost::python::no_init);
    class_1d580556003654da9f00e93300e8c7d9.def("classof", method_pointer_ee60c45bd8765d24a53cf7bdb69bdca4, "");
    class_1d580556003654da9f00e93300e8c7d9.def("desugar", method_pointer_019bcec8f55750228ae7ac1e1e408bf7, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_equivalent_type", method_pointer_ba02379dc6a15c7bb80444a272f503b1, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_modified_type", method_pointer_d094b8ceee9a56eb852705092d424f67, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_calling_conv", method_pointer_ea7a95c9d3a85d579484efea8309ab90, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_ms_type_spec", method_pointer_565f813a31b85ec4b7e9227036050944, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_qualifier", method_pointer_10809fb4a76a51e9b8169cf65763d5c7, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_sugared", method_pointer_7197fee9a37f5cdc9eb44f8d67949926, "");
    class_1d580556003654da9f00e93300e8c7d9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AttributedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AttributedType >, autowig::HeldType< class ::clang::Type > >();
    }

}