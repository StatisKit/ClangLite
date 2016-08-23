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
    bool  (*method_pointer_d48d4b5e402e5ff6814269ad05a8a9ec)(class ::clang::Type  const *) = ::clang::AttributedType::classof;
    bool  (::clang::AttributedType::*method_pointer_43355114117250c5b5cd2f034c071bcf)() const = &::clang::AttributedType::isCallingConv;
    bool  (::clang::AttributedType::*method_pointer_36bef92b868a5452a021151168bde04b)() const = &::clang::AttributedType::isMSTypeSpec;
    bool  (::clang::AttributedType::*method_pointer_e5066b79d33c5a3c8dbc18789d7e48f3)() const = &::clang::AttributedType::isQualifier;
    bool  (::clang::AttributedType::*method_pointer_a40817fdbc8156a395547813ba2b55c9)() const = &::clang::AttributedType::isSugared;
    boost::python::class_< class ::clang::AttributedType, autowig::HeldType< class ::clang::AttributedType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_1d580556003654da9f00e93300e8c7d9("AttributedType", "", boost::python::no_init);
    class_1d580556003654da9f00e93300e8c7d9.def("classof", method_pointer_d48d4b5e402e5ff6814269ad05a8a9ec, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_calling_conv", method_pointer_43355114117250c5b5cd2f034c071bcf, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_ms_type_spec", method_pointer_36bef92b868a5452a021151168bde04b, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_qualifier", method_pointer_e5066b79d33c5a3c8dbc18789d7e48f3, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_sugared", method_pointer_a40817fdbc8156a395547813ba2b55c9, "");
    class_1d580556003654da9f00e93300e8c7d9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AttributedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AttributedType >, autowig::HeldType< class ::clang::Type > >();
    }

}