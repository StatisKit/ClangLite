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
    bool  (*method_pointer_a60e74cca766537d81a3d94b4af31d9f)(class ::clang::Type  const *) = ::clang::AttributedType::classof;
    bool  (::clang::AttributedType::*method_pointer_7309c03edccd5408857d6dac22ecda2a)() const = &::clang::AttributedType::isCallingConv;
    bool  (::clang::AttributedType::*method_pointer_869e85fd04195d57918ebd90557f34cb)() const = &::clang::AttributedType::isMSTypeSpec;
    bool  (::clang::AttributedType::*method_pointer_c5096979bc5e5c2aa583256041a6d39e)() const = &::clang::AttributedType::isQualifier;
    bool  (::clang::AttributedType::*method_pointer_62052a2818375adebaa8e2cacdd91e2b)() const = &::clang::AttributedType::isSugared;
    boost::python::class_< class ::clang::AttributedType, autowig::HeldType< class ::clang::AttributedType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_1d580556003654da9f00e93300e8c7d9("AttributedType", "", boost::python::no_init);
    class_1d580556003654da9f00e93300e8c7d9.def("classof", method_pointer_a60e74cca766537d81a3d94b4af31d9f, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_calling_conv", method_pointer_7309c03edccd5408857d6dac22ecda2a, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_ms_type_spec", method_pointer_869e85fd04195d57918ebd90557f34cb, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_qualifier", method_pointer_c5096979bc5e5c2aa583256041a6d39e, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_sugared", method_pointer_62052a2818375adebaa8e2cacdd91e2b, "");
    class_1d580556003654da9f00e93300e8c7d9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AttributedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AttributedType >, autowig::HeldType< class ::clang::Type > >();
    }

}