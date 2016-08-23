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
    bool  (*method_pointer_10a1b338440a5f19aa205efed81f00cf)(class ::clang::Type  const *) = ::clang::AttributedType::classof;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_9e3d74ec79c854af89e494fe0a4ec854)() const = &::clang::AttributedType::desugar;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_945fa141897e57e7a869a6001b9faff5)() const = &::clang::AttributedType::getEquivalentType;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_a4595227a4b05a6a9ddb3aa14502c891)() const = &::clang::AttributedType::getModifiedType;
    bool  (::clang::AttributedType::*method_pointer_18b08febf05b59509b1408f1ff8a002c)() const = &::clang::AttributedType::isCallingConv;
    bool  (::clang::AttributedType::*method_pointer_83059e3d1afd5e70acc8d4761c640196)() const = &::clang::AttributedType::isMSTypeSpec;
    bool  (::clang::AttributedType::*method_pointer_6dec7a65dffa5169a96a06fe2e930851)() const = &::clang::AttributedType::isQualifier;
    bool  (::clang::AttributedType::*method_pointer_ae4cfcefebc657d19b7886488822e991)() const = &::clang::AttributedType::isSugared;
    boost::python::class_< class ::clang::AttributedType, autowig::HeldType< class ::clang::AttributedType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_1d580556003654da9f00e93300e8c7d9("AttributedType", "", boost::python::no_init);
    class_1d580556003654da9f00e93300e8c7d9.def("classof", method_pointer_10a1b338440a5f19aa205efed81f00cf, "");
    class_1d580556003654da9f00e93300e8c7d9.def("desugar", method_pointer_9e3d74ec79c854af89e494fe0a4ec854, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_equivalent_type", method_pointer_945fa141897e57e7a869a6001b9faff5, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_modified_type", method_pointer_a4595227a4b05a6a9ddb3aa14502c891, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_calling_conv", method_pointer_18b08febf05b59509b1408f1ff8a002c, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_ms_type_spec", method_pointer_83059e3d1afd5e70acc8d4761c640196, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_qualifier", method_pointer_6dec7a65dffa5169a96a06fe2e930851, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_sugared", method_pointer_ae4cfcefebc657d19b7886488822e991, "");
    class_1d580556003654da9f00e93300e8c7d9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AttributedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AttributedType >, autowig::HeldType< class ::clang::Type > >();
    }

}