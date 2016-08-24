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
    bool  (*method_pointer_c8dbee37e20c5c34a6601ec40887da3d)(class ::clang::Type  const *) = ::clang::AttributedType::classof;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_16def17fd2e65a42ae524b92a5b774b4)() const = &::clang::AttributedType::desugar;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_e6d71675d56756b39aec2b786c9ee4a6)() const = &::clang::AttributedType::getEquivalentType;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_19c62df8fefd5f11aa598071fbf9ea5f)() const = &::clang::AttributedType::getModifiedType;
    bool  (::clang::AttributedType::*method_pointer_89011b43333e5559adf0d2945a69303d)() const = &::clang::AttributedType::isCallingConv;
    bool  (::clang::AttributedType::*method_pointer_be0e769bf203525ba88ae446a3207332)() const = &::clang::AttributedType::isMSTypeSpec;
    bool  (::clang::AttributedType::*method_pointer_995ed9d2d11b5d3b904538e713d68d11)() const = &::clang::AttributedType::isQualifier;
    bool  (::clang::AttributedType::*method_pointer_03badcb9324e5462a71e8c298fd25fc8)() const = &::clang::AttributedType::isSugared;
    boost::python::class_< class ::clang::AttributedType, autowig::HeldType< class ::clang::AttributedType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_1d580556003654da9f00e93300e8c7d9("AttributedType", "", boost::python::no_init);
    class_1d580556003654da9f00e93300e8c7d9.def("classof", method_pointer_c8dbee37e20c5c34a6601ec40887da3d, "");
    class_1d580556003654da9f00e93300e8c7d9.def("desugar", method_pointer_16def17fd2e65a42ae524b92a5b774b4, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_equivalent_type", method_pointer_e6d71675d56756b39aec2b786c9ee4a6, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_modified_type", method_pointer_19c62df8fefd5f11aa598071fbf9ea5f, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_calling_conv", method_pointer_89011b43333e5559adf0d2945a69303d, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_ms_type_spec", method_pointer_be0e769bf203525ba88ae446a3207332, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_qualifier", method_pointer_995ed9d2d11b5d3b904538e713d68d11, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_sugared", method_pointer_03badcb9324e5462a71e8c298fd25fc8, "");
    class_1d580556003654da9f00e93300e8c7d9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AttributedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AttributedType >, autowig::HeldType< class ::clang::Type > >();
    }

}