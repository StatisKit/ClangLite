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
    bool  (*method_pointer_a78f74f7a99058ab9302e47d44b2006e)(class ::clang::Type  const *) = ::clang::AttributedType::classof;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_9f8829c9905c58e4921c7488fdc34182)() const = &::clang::AttributedType::desugar;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_295180e24fb15d15921fcaaee29e4855)() const = &::clang::AttributedType::getEquivalentType;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_3fbc12245e4a5a1194c164232b99c8d2)() const = &::clang::AttributedType::getModifiedType;
    bool  (::clang::AttributedType::*method_pointer_4d780f05e6c65e3b82a8f2cb4fa9fbe2)() const = &::clang::AttributedType::isCallingConv;
    bool  (::clang::AttributedType::*method_pointer_9d619ecd3cb95bedb7be4aaf48e2d1a9)() const = &::clang::AttributedType::isMSTypeSpec;
    bool  (::clang::AttributedType::*method_pointer_0898f5416ee058c1a4018004d4bd74a8)() const = &::clang::AttributedType::isQualifier;
    bool  (::clang::AttributedType::*method_pointer_ca0e7ee56bd951ceb4335d7677d9a301)() const = &::clang::AttributedType::isSugared;
    boost::python::class_< class ::clang::AttributedType, autowig::HeldType< class ::clang::AttributedType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_1d580556003654da9f00e93300e8c7d9("AttributedType", "", boost::python::no_init);
    class_1d580556003654da9f00e93300e8c7d9.def("classof", method_pointer_a78f74f7a99058ab9302e47d44b2006e, "");
    class_1d580556003654da9f00e93300e8c7d9.def("desugar", method_pointer_9f8829c9905c58e4921c7488fdc34182, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_equivalent_type", method_pointer_295180e24fb15d15921fcaaee29e4855, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_modified_type", method_pointer_3fbc12245e4a5a1194c164232b99c8d2, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_calling_conv", method_pointer_4d780f05e6c65e3b82a8f2cb4fa9fbe2, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_ms_type_spec", method_pointer_9d619ecd3cb95bedb7be4aaf48e2d1a9, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_qualifier", method_pointer_0898f5416ee058c1a4018004d4bd74a8, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_sugared", method_pointer_ca0e7ee56bd951ceb4335d7677d9a301, "");
    class_1d580556003654da9f00e93300e8c7d9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AttributedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AttributedType >, autowig::HeldType< class ::clang::Type > >();
    }

}