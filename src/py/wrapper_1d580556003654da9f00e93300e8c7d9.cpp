#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_1d580556003654da9f00e93300e8c7d9()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_b71052b5dd1c5bb09e8f6dce396a3b08)(class ::clang::Type  const *) = ::clang::AttributedType::classof;
    bool  (::clang::AttributedType::*method_pointer_cc660a0ae8f456a194c5b1bba6060e24)() const = &::clang::AttributedType::isCallingConv;
    bool  (::clang::AttributedType::*method_pointer_87680151cdb2514dad1ad3b0af151fca)() const = &::clang::AttributedType::isMSTypeSpec;
    bool  (::clang::AttributedType::*method_pointer_b133b9fef2fa5507aa6498d84feafbdb)() const = &::clang::AttributedType::isQualifier;
    bool  (::clang::AttributedType::*method_pointer_8587c5124585507f8909622c04cfaaca)() const = &::clang::AttributedType::isSugared;
    boost::python::class_< class ::clang::AttributedType, autowig::HeldType< class ::clang::AttributedType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_1d580556003654da9f00e93300e8c7d9("AttributedType", "", boost::python::no_init);
    class_1d580556003654da9f00e93300e8c7d9.def("classof", method_pointer_b71052b5dd1c5bb09e8f6dce396a3b08, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_calling_conv", method_pointer_cc660a0ae8f456a194c5b1bba6060e24, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_ms_type_spec", method_pointer_87680151cdb2514dad1ad3b0af151fca, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_qualifier", method_pointer_b133b9fef2fa5507aa6498d84feafbdb, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_sugared", method_pointer_8587c5124585507f8909622c04cfaaca, "");
    class_1d580556003654da9f00e93300e8c7d9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AttributedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AttributedType >, autowig::HeldType< class ::clang::Type > >();
    }

}