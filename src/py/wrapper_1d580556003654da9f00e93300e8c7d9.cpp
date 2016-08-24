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
    bool  (*method_pointer_3de4e7c285d55ba28e20b3c3b73df034)(class ::clang::Type  const *) = ::clang::AttributedType::classof;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_3f85c307ca5e572e922941baabe2c700)() const = &::clang::AttributedType::desugar;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_3a4f83d2fdd65926b4f7d30e418f0f47)() const = &::clang::AttributedType::getEquivalentType;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_14ea102db6725ae8a2fba9134c2636ad)() const = &::clang::AttributedType::getModifiedType;
    bool  (::clang::AttributedType::*method_pointer_2d074f05671050f0a83fa3e4a061467d)() const = &::clang::AttributedType::isCallingConv;
    bool  (::clang::AttributedType::*method_pointer_42248a2fdcde5067bb193c35ed26ab94)() const = &::clang::AttributedType::isMSTypeSpec;
    bool  (::clang::AttributedType::*method_pointer_3bcc328351dd5613b6c52d5e2b01db99)() const = &::clang::AttributedType::isQualifier;
    bool  (::clang::AttributedType::*method_pointer_8a9d0ce78d6e5a029f081baa21347710)() const = &::clang::AttributedType::isSugared;
    boost::python::class_< class ::clang::AttributedType, autowig::HeldType< class ::clang::AttributedType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_1d580556003654da9f00e93300e8c7d9("AttributedType", "", boost::python::no_init);
    class_1d580556003654da9f00e93300e8c7d9.def("classof", method_pointer_3de4e7c285d55ba28e20b3c3b73df034, "");
    class_1d580556003654da9f00e93300e8c7d9.def("desugar", method_pointer_3f85c307ca5e572e922941baabe2c700, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_equivalent_type", method_pointer_3a4f83d2fdd65926b4f7d30e418f0f47, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_modified_type", method_pointer_14ea102db6725ae8a2fba9134c2636ad, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_calling_conv", method_pointer_2d074f05671050f0a83fa3e4a061467d, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_ms_type_spec", method_pointer_42248a2fdcde5067bb193c35ed26ab94, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_qualifier", method_pointer_3bcc328351dd5613b6c52d5e2b01db99, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_sugared", method_pointer_8a9d0ce78d6e5a029f081baa21347710, "");
    class_1d580556003654da9f00e93300e8c7d9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AttributedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AttributedType >, autowig::HeldType< class ::clang::Type > >();
    }

}