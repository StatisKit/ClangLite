#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_306b968f39b7549b8ac1af6424e98129()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_45a9dc16ca365bf18391ffb0905c87b9)(class ::clang::Type  const *) = ::clang::BuiltinType::classof;
    class ::clang::QualType  (::clang::BuiltinType::*method_pointer_7c874de594d153b7bdfbde0081d310df)() const = &::clang::BuiltinType::desugar;
    enum ::clang::BuiltinType::Kind  (::clang::BuiltinType::*method_pointer_3a0c252257cb5e05b196721b555c07a4)() const = &::clang::BuiltinType::getKind;
    bool  (::clang::BuiltinType::*method_pointer_6c988623bdd75c2699757b7fb29e76ab)() const = &::clang::BuiltinType::isFloatingPoint;
    bool  (::clang::BuiltinType::*method_pointer_3f8112bd1a0a5ee18ea84e8d5ccddacd)() const = &::clang::BuiltinType::isInteger;
    bool  (::clang::BuiltinType::*method_pointer_a8a68306174b52a08f73fbfe90cb08de)() const = &::clang::BuiltinType::isNonOverloadPlaceholderType;
    bool  (::clang::BuiltinType::*method_pointer_b476f68317b652d9830355eeca43ee2a)() const = &::clang::BuiltinType::isPlaceholderType;
    bool  (*method_pointer_9f05315e50f15280a7d08f5cefa64f31)(enum ::clang::BuiltinType::Kind ) = ::clang::BuiltinType::isPlaceholderTypeKind;
    bool  (::clang::BuiltinType::*method_pointer_9566872e04535f1c836377161630cd67)() const = &::clang::BuiltinType::isSignedInteger;
    bool  (::clang::BuiltinType::*method_pointer_189bab2417415cbdbe2a2e8dbe91803a)() const = &::clang::BuiltinType::isSugared;
    bool  (::clang::BuiltinType::*method_pointer_40a38a6a3b2b57ebaf24ced6ea8c3508)() const = &::clang::BuiltinType::isUnsignedInteger;
    boost::python::class_< class ::clang::BuiltinType, autowig::HeldType< class ::clang::BuiltinType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_306b968f39b7549b8ac1af6424e98129("BuiltinType", "", boost::python::no_init);
    class_306b968f39b7549b8ac1af6424e98129.def("classof", method_pointer_45a9dc16ca365bf18391ffb0905c87b9, "");
    class_306b968f39b7549b8ac1af6424e98129.def("desugar", method_pointer_7c874de594d153b7bdfbde0081d310df, "");
    class_306b968f39b7549b8ac1af6424e98129.def("get_kind", method_pointer_3a0c252257cb5e05b196721b555c07a4, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_floating_point", method_pointer_6c988623bdd75c2699757b7fb29e76ab, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_integer", method_pointer_3f8112bd1a0a5ee18ea84e8d5ccddacd, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_non_overload_placeholder_type", method_pointer_a8a68306174b52a08f73fbfe90cb08de, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type", method_pointer_b476f68317b652d9830355eeca43ee2a, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_placeholder_type_kind", method_pointer_9f05315e50f15280a7d08f5cefa64f31, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_signed_integer", method_pointer_9566872e04535f1c836377161630cd67, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_sugared", method_pointer_189bab2417415cbdbe2a2e8dbe91803a, "");
    class_306b968f39b7549b8ac1af6424e98129.def("is_unsigned_integer", method_pointer_40a38a6a3b2b57ebaf24ced6ea8c3508, "");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("classof");
    class_306b968f39b7549b8ac1af6424e98129.staticmethod("is_placeholder_type_kind");

    if(std::is_class< autowig::HeldType< class ::clang::BuiltinType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BuiltinType >, autowig::HeldType< class ::clang::Type > >();
    }

}