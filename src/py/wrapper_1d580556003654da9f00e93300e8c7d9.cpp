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
    bool  (*method_pointer_320f9239d3a45d5d92a54d0a282f214f)(class ::clang::Type  const *) = ::clang::AttributedType::classof;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_214c41f2a50656e998b6498fb2d2efae)() const = &::clang::AttributedType::desugar;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_60b7d0c21a435705a993c098cab048a2)() const = &::clang::AttributedType::getEquivalentType;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_9b75cc24f4065b75aa519abb25f72045)() const = &::clang::AttributedType::getModifiedType;
    bool  (::clang::AttributedType::*method_pointer_3aaa4b0a293558d8bb0337000c259455)() const = &::clang::AttributedType::isCallingConv;
    bool  (::clang::AttributedType::*method_pointer_ae044cf8a5a0507cb184c4e59348fc1c)() const = &::clang::AttributedType::isMSTypeSpec;
    bool  (::clang::AttributedType::*method_pointer_81964ab4275b5a22a62bf43203955974)() const = &::clang::AttributedType::isQualifier;
    bool  (::clang::AttributedType::*method_pointer_acb3dca2cddf54c6abc41f1a200c26a9)() const = &::clang::AttributedType::isSugared;
    boost::python::class_< class ::clang::AttributedType, autowig::HeldType< class ::clang::AttributedType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_1d580556003654da9f00e93300e8c7d9("AttributedType", "", boost::python::no_init);
    class_1d580556003654da9f00e93300e8c7d9.def("classof", method_pointer_320f9239d3a45d5d92a54d0a282f214f, "");
    class_1d580556003654da9f00e93300e8c7d9.def("desugar", method_pointer_214c41f2a50656e998b6498fb2d2efae, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_equivalent_type", method_pointer_60b7d0c21a435705a993c098cab048a2, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_modified_type", method_pointer_9b75cc24f4065b75aa519abb25f72045, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_calling_conv", method_pointer_3aaa4b0a293558d8bb0337000c259455, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_ms_type_spec", method_pointer_ae044cf8a5a0507cb184c4e59348fc1c, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_qualifier", method_pointer_81964ab4275b5a22a62bf43203955974, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_sugared", method_pointer_acb3dca2cddf54c6abc41f1a200c26a9, "");
    class_1d580556003654da9f00e93300e8c7d9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AttributedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AttributedType >, autowig::HeldType< class ::clang::Type > >();
    }

}