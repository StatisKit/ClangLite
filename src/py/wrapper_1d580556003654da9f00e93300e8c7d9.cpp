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
    bool  (*method_pointer_cb1149d4c77b54ccb053d57aa1b848dd)(class ::clang::Type  const *) = ::clang::AttributedType::classof;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_9b0167504f0d5f178c6d0044fd3f76ec)() const = &::clang::AttributedType::desugar;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_8f9f96a13e3157b1a381ed7f9ef319cc)() const = &::clang::AttributedType::getEquivalentType;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_657b501203ac5f0a8cb46b36e85800c5)() const = &::clang::AttributedType::getModifiedType;
    bool  (::clang::AttributedType::*method_pointer_b116c5db070a5aeb83aa836f7b1958c2)() const = &::clang::AttributedType::isCallingConv;
    bool  (::clang::AttributedType::*method_pointer_ecb922247ebe5e109249d5d3b7f75d48)() const = &::clang::AttributedType::isMSTypeSpec;
    bool  (::clang::AttributedType::*method_pointer_617e0a51db855c18af20cdd609beb882)() const = &::clang::AttributedType::isQualifier;
    bool  (::clang::AttributedType::*method_pointer_31926c4aaf815475af531465d476da89)() const = &::clang::AttributedType::isSugared;
    boost::python::class_< class ::clang::AttributedType, autowig::HeldType< class ::clang::AttributedType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_1d580556003654da9f00e93300e8c7d9("AttributedType", "", boost::python::no_init);
    class_1d580556003654da9f00e93300e8c7d9.def("classof", method_pointer_cb1149d4c77b54ccb053d57aa1b848dd, "");
    class_1d580556003654da9f00e93300e8c7d9.def("desugar", method_pointer_9b0167504f0d5f178c6d0044fd3f76ec, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_equivalent_type", method_pointer_8f9f96a13e3157b1a381ed7f9ef319cc, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_modified_type", method_pointer_657b501203ac5f0a8cb46b36e85800c5, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_calling_conv", method_pointer_b116c5db070a5aeb83aa836f7b1958c2, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_ms_type_spec", method_pointer_ecb922247ebe5e109249d5d3b7f75d48, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_qualifier", method_pointer_617e0a51db855c18af20cdd609beb882, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_sugared", method_pointer_31926c4aaf815475af531465d476da89, "");
    class_1d580556003654da9f00e93300e8c7d9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AttributedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AttributedType >, autowig::HeldType< class ::clang::Type > >();
    }

}