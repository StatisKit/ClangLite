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
    bool  (*method_pointer_557179a784545f07b703bcbedac43ab8)(class ::clang::Type  const *) = ::clang::AttributedType::classof;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_3cd05bd52b4352b5adfce22f7ac776a7)() const = &::clang::AttributedType::desugar;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_87ff6ba8b47e52d0bd1169f43d2261ca)() const = &::clang::AttributedType::getEquivalentType;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_73347b934a0e553ba0e34f2bb0b79d73)() const = &::clang::AttributedType::getModifiedType;
    bool  (::clang::AttributedType::*method_pointer_6d89c14e81f75cd7b25cf97446e8ce93)() const = &::clang::AttributedType::isCallingConv;
    bool  (::clang::AttributedType::*method_pointer_6aabf25ae0a851f0bc61a812cbd8bf8b)() const = &::clang::AttributedType::isMSTypeSpec;
    bool  (::clang::AttributedType::*method_pointer_c823f5d154b2537cba8b7c33eb1c86c1)() const = &::clang::AttributedType::isQualifier;
    bool  (::clang::AttributedType::*method_pointer_c64df32dc47a5979949c40a72f639c6e)() const = &::clang::AttributedType::isSugared;
    boost::python::class_< class ::clang::AttributedType, autowig::HeldType< class ::clang::AttributedType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_1d580556003654da9f00e93300e8c7d9("AttributedType", "", boost::python::no_init);
    class_1d580556003654da9f00e93300e8c7d9.def("classof", method_pointer_557179a784545f07b703bcbedac43ab8, "");
    class_1d580556003654da9f00e93300e8c7d9.def("desugar", method_pointer_3cd05bd52b4352b5adfce22f7ac776a7, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_equivalent_type", method_pointer_87ff6ba8b47e52d0bd1169f43d2261ca, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_modified_type", method_pointer_73347b934a0e553ba0e34f2bb0b79d73, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_calling_conv", method_pointer_6d89c14e81f75cd7b25cf97446e8ce93, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_ms_type_spec", method_pointer_6aabf25ae0a851f0bc61a812cbd8bf8b, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_qualifier", method_pointer_c823f5d154b2537cba8b7c33eb1c86c1, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_sugared", method_pointer_c64df32dc47a5979949c40a72f639c6e, "");
    class_1d580556003654da9f00e93300e8c7d9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AttributedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AttributedType >, autowig::HeldType< class ::clang::Type > >();
    }

}