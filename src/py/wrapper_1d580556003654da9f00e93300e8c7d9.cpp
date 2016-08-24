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
    bool  (*method_pointer_4a280eabcbe85dc19e8f94f6d68ae861)(class ::clang::Type  const *) = ::clang::AttributedType::classof;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_6422a27f861054bba6a2d4ad17bdb6a3)() const = &::clang::AttributedType::desugar;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_32f2d40429135fc79995445fca5a6ba2)() const = &::clang::AttributedType::getEquivalentType;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_4c7669aac8975e2db2e8a2ef02671d59)() const = &::clang::AttributedType::getModifiedType;
    bool  (::clang::AttributedType::*method_pointer_9677b6b33eb35adda4a7414cb1e2bf24)() const = &::clang::AttributedType::isCallingConv;
    bool  (::clang::AttributedType::*method_pointer_11d3a4342f6f5a1f84ea503a3e2e883b)() const = &::clang::AttributedType::isMSTypeSpec;
    bool  (::clang::AttributedType::*method_pointer_4b215fc34c5352308902dea9ad1d60f5)() const = &::clang::AttributedType::isQualifier;
    bool  (::clang::AttributedType::*method_pointer_04ea3e817c6051d18739fa520f0aa3c3)() const = &::clang::AttributedType::isSugared;
    boost::python::class_< class ::clang::AttributedType, autowig::HeldType< class ::clang::AttributedType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_1d580556003654da9f00e93300e8c7d9("AttributedType", "", boost::python::no_init);
    class_1d580556003654da9f00e93300e8c7d9.def("classof", method_pointer_4a280eabcbe85dc19e8f94f6d68ae861, "");
    class_1d580556003654da9f00e93300e8c7d9.def("desugar", method_pointer_6422a27f861054bba6a2d4ad17bdb6a3, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_equivalent_type", method_pointer_32f2d40429135fc79995445fca5a6ba2, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_modified_type", method_pointer_4c7669aac8975e2db2e8a2ef02671d59, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_calling_conv", method_pointer_9677b6b33eb35adda4a7414cb1e2bf24, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_ms_type_spec", method_pointer_11d3a4342f6f5a1f84ea503a3e2e883b, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_qualifier", method_pointer_4b215fc34c5352308902dea9ad1d60f5, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_sugared", method_pointer_04ea3e817c6051d18739fa520f0aa3c3, "");
    class_1d580556003654da9f00e93300e8c7d9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AttributedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AttributedType >, autowig::HeldType< class ::clang::Type > >();
    }

}