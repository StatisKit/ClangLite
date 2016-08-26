#include "_clanglite.h"


namespace autowig
{
}


void wrapper_411e70b105bb5141b394c3e9e429e0b0()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_5b7f3fc74cf858d7a4459eff2fec76d5)(class ::clang::Type  const *) = ::clang::DependentNameType::classof;
    bool  (::clang::DependentNameType::*method_pointer_7cdea9565e7c51b2ab63ed07c5f872af)() const = &::clang::DependentNameType::isSugared;
    boost::python::class_< class ::clang::DependentNameType, autowig::HeldType< class ::clang::DependentNameType >, boost::python::bases< class ::clang::TypeWithKeyword >, boost::noncopyable > class_411e70b105bb5141b394c3e9e429e0b0("DependentNameType", "", boost::python::no_init);
    class_411e70b105bb5141b394c3e9e429e0b0.def("classof", method_pointer_5b7f3fc74cf858d7a4459eff2fec76d5, "");
    class_411e70b105bb5141b394c3e9e429e0b0.def("is_sugared", method_pointer_7cdea9565e7c51b2ab63ed07c5f872af, "");
    class_411e70b105bb5141b394c3e9e429e0b0.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::DependentNameType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::DependentNameType >, autowig::HeldType< class ::clang::TypeWithKeyword > >();
    }

}