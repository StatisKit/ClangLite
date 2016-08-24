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
    bool  (*method_pointer_60c5d9214d28584a9c976dcfe6c3d687)(class ::clang::Type  const *) = ::clang::AttributedType::classof;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_51145883ee915353a567656b2087a4ba)() const = &::clang::AttributedType::desugar;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_f579a9bf30515bbea224aab92be3703f)() const = &::clang::AttributedType::getEquivalentType;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_4db4fcadffba52a2959ce81b887a1da6)() const = &::clang::AttributedType::getModifiedType;
    bool  (::clang::AttributedType::*method_pointer_9d09b6be79f354579fe38905ce9e690a)() const = &::clang::AttributedType::isCallingConv;
    bool  (::clang::AttributedType::*method_pointer_9fff125f6ef95274bcffb848271d852c)() const = &::clang::AttributedType::isMSTypeSpec;
    bool  (::clang::AttributedType::*method_pointer_271c17ec10c5540ea42a6746aa421a34)() const = &::clang::AttributedType::isQualifier;
    bool  (::clang::AttributedType::*method_pointer_c210c3dc92f356b1be13b5c8d2ffa5e3)() const = &::clang::AttributedType::isSugared;
    boost::python::class_< class ::clang::AttributedType, autowig::HeldType< class ::clang::AttributedType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_1d580556003654da9f00e93300e8c7d9("AttributedType", "", boost::python::no_init);
    class_1d580556003654da9f00e93300e8c7d9.def("classof", method_pointer_60c5d9214d28584a9c976dcfe6c3d687, "");
    class_1d580556003654da9f00e93300e8c7d9.def("desugar", method_pointer_51145883ee915353a567656b2087a4ba, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_equivalent_type", method_pointer_f579a9bf30515bbea224aab92be3703f, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_modified_type", method_pointer_4db4fcadffba52a2959ce81b887a1da6, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_calling_conv", method_pointer_9d09b6be79f354579fe38905ce9e690a, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_ms_type_spec", method_pointer_9fff125f6ef95274bcffb848271d852c, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_qualifier", method_pointer_271c17ec10c5540ea42a6746aa421a34, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_sugared", method_pointer_c210c3dc92f356b1be13b5c8d2ffa5e3, "");
    class_1d580556003654da9f00e93300e8c7d9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AttributedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AttributedType >, autowig::HeldType< class ::clang::Type > >();
    }

}