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
    bool  (*method_pointer_b1b9dca2c64b5e0b8d7cd7bc3c12bf32)(class ::clang::Type  const *) = ::clang::AttributedType::classof;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_976eaf01836457e4ae4067137adefb68)() const = &::clang::AttributedType::desugar;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_bb404bc6035c57f09da3aa31e7b5286a)() const = &::clang::AttributedType::getEquivalentType;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_47553c2833a754db81d6053ba8db5566)() const = &::clang::AttributedType::getModifiedType;
    bool  (::clang::AttributedType::*method_pointer_b0ec0ee56d0c5bbc88c7f8008f0614e3)() const = &::clang::AttributedType::isCallingConv;
    bool  (::clang::AttributedType::*method_pointer_d9e61c3e854f5143987c32777cee1ce4)() const = &::clang::AttributedType::isMSTypeSpec;
    bool  (::clang::AttributedType::*method_pointer_7ebef48d945956bf83678ffdf2ffcaff)() const = &::clang::AttributedType::isQualifier;
    bool  (::clang::AttributedType::*method_pointer_fee713c2c7a254c2aefc840f7823c1ec)() const = &::clang::AttributedType::isSugared;
    boost::python::class_< class ::clang::AttributedType, autowig::HeldType< class ::clang::AttributedType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_1d580556003654da9f00e93300e8c7d9("AttributedType", "", boost::python::no_init);
    class_1d580556003654da9f00e93300e8c7d9.def("classof", method_pointer_b1b9dca2c64b5e0b8d7cd7bc3c12bf32, "");
    class_1d580556003654da9f00e93300e8c7d9.def("desugar", method_pointer_976eaf01836457e4ae4067137adefb68, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_equivalent_type", method_pointer_bb404bc6035c57f09da3aa31e7b5286a, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_modified_type", method_pointer_47553c2833a754db81d6053ba8db5566, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_calling_conv", method_pointer_b0ec0ee56d0c5bbc88c7f8008f0614e3, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_ms_type_spec", method_pointer_d9e61c3e854f5143987c32777cee1ce4, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_qualifier", method_pointer_7ebef48d945956bf83678ffdf2ffcaff, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_sugared", method_pointer_fee713c2c7a254c2aefc840f7823c1ec, "");
    class_1d580556003654da9f00e93300e8c7d9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AttributedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AttributedType >, autowig::HeldType< class ::clang::Type > >();
    }

}