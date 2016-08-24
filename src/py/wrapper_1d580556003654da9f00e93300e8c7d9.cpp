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
    bool  (*method_pointer_0b5301e12c8c5808a3c7cd0bcb9b0d90)(class ::clang::Type  const *) = ::clang::AttributedType::classof;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_39b690ba9a7156729732e0f93b73f09c)() const = &::clang::AttributedType::desugar;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_872cce8078b55e749cee94d27aeaf9d4)() const = &::clang::AttributedType::getEquivalentType;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_8f6d2fe4081a517f828024548e5d2389)() const = &::clang::AttributedType::getModifiedType;
    bool  (::clang::AttributedType::*method_pointer_54af967b949d58059e95e1b97ed69cb0)() const = &::clang::AttributedType::isCallingConv;
    bool  (::clang::AttributedType::*method_pointer_a160ca0fabdb5a4e8a0d573cd28262c4)() const = &::clang::AttributedType::isMSTypeSpec;
    bool  (::clang::AttributedType::*method_pointer_ab6e80b815e056ef98294cc898c0eff8)() const = &::clang::AttributedType::isQualifier;
    bool  (::clang::AttributedType::*method_pointer_d39a340a07c95e33837f4b0df534e7fb)() const = &::clang::AttributedType::isSugared;
    boost::python::class_< class ::clang::AttributedType, autowig::HeldType< class ::clang::AttributedType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_1d580556003654da9f00e93300e8c7d9("AttributedType", "", boost::python::no_init);
    class_1d580556003654da9f00e93300e8c7d9.def("classof", method_pointer_0b5301e12c8c5808a3c7cd0bcb9b0d90, "");
    class_1d580556003654da9f00e93300e8c7d9.def("desugar", method_pointer_39b690ba9a7156729732e0f93b73f09c, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_equivalent_type", method_pointer_872cce8078b55e749cee94d27aeaf9d4, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_modified_type", method_pointer_8f6d2fe4081a517f828024548e5d2389, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_calling_conv", method_pointer_54af967b949d58059e95e1b97ed69cb0, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_ms_type_spec", method_pointer_a160ca0fabdb5a4e8a0d573cd28262c4, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_qualifier", method_pointer_ab6e80b815e056ef98294cc898c0eff8, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_sugared", method_pointer_d39a340a07c95e33837f4b0df534e7fb, "");
    class_1d580556003654da9f00e93300e8c7d9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AttributedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AttributedType >, autowig::HeldType< class ::clang::Type > >();
    }

}