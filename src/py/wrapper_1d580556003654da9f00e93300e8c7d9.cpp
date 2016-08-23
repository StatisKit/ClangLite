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
    bool  (*method_pointer_ebd01f2b45fb5d5492941223014d948e)(class ::clang::Type  const *) = ::clang::AttributedType::classof;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_f18f4a035c9b5bea860fee3d9c076b97)() const = &::clang::AttributedType::desugar;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_25f65d3837875daa831b9b077c274822)() const = &::clang::AttributedType::getEquivalentType;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_1f6685418aaf5b75b49a4672671abe50)() const = &::clang::AttributedType::getModifiedType;
    bool  (::clang::AttributedType::*method_pointer_a87cba314abc5334b2435f53419872d1)() const = &::clang::AttributedType::isCallingConv;
    bool  (::clang::AttributedType::*method_pointer_1f0d76db7b345f6cb2224dc11d2b81d3)() const = &::clang::AttributedType::isMSTypeSpec;
    bool  (::clang::AttributedType::*method_pointer_d7afffa4011b5feaa32deb48c3bc4c42)() const = &::clang::AttributedType::isQualifier;
    bool  (::clang::AttributedType::*method_pointer_9e76f362089250008945d58e1abf0948)() const = &::clang::AttributedType::isSugared;
    boost::python::class_< class ::clang::AttributedType, autowig::HeldType< class ::clang::AttributedType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_1d580556003654da9f00e93300e8c7d9("AttributedType", "", boost::python::no_init);
    class_1d580556003654da9f00e93300e8c7d9.def("classof", method_pointer_ebd01f2b45fb5d5492941223014d948e, "");
    class_1d580556003654da9f00e93300e8c7d9.def("desugar", method_pointer_f18f4a035c9b5bea860fee3d9c076b97, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_equivalent_type", method_pointer_25f65d3837875daa831b9b077c274822, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_modified_type", method_pointer_1f6685418aaf5b75b49a4672671abe50, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_calling_conv", method_pointer_a87cba314abc5334b2435f53419872d1, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_ms_type_spec", method_pointer_1f0d76db7b345f6cb2224dc11d2b81d3, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_qualifier", method_pointer_d7afffa4011b5feaa32deb48c3bc4c42, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_sugared", method_pointer_9e76f362089250008945d58e1abf0948, "");
    class_1d580556003654da9f00e93300e8c7d9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AttributedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AttributedType >, autowig::HeldType< class ::clang::Type > >();
    }

}