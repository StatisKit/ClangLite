#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_434f2e3471bb55ffb2ed175a1ab61e17()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_fe118eed28405658b04bf311f2d08bc7)(class ::clang::Type  const *) = ::clang::EnumType::classof;
    class ::clang::QualType  (::clang::EnumType::*method_pointer_555588971b595270b75de9b978d15d2d)() const = &::clang::EnumType::desugar;
    class ::clang::EnumDecl  * (::clang::EnumType::*method_pointer_8e4b7c675c4e55a5930466ddc89d4d44)() const = &::clang::EnumType::getDecl;
    bool  (::clang::EnumType::*method_pointer_7860bb2534fc5c1d8aa79f4ae51bb3d4)() const = &::clang::EnumType::isSugared;
    boost::python::class_< class ::clang::EnumType, autowig::HeldType< class ::clang::EnumType >, boost::python::bases< class ::clang::TagType >, boost::noncopyable > class_434f2e3471bb55ffb2ed175a1ab61e17("EnumType", "", boost::python::no_init);
    class_434f2e3471bb55ffb2ed175a1ab61e17.def("classof", method_pointer_fe118eed28405658b04bf311f2d08bc7, "");
    class_434f2e3471bb55ffb2ed175a1ab61e17.def("desugar", method_pointer_555588971b595270b75de9b978d15d2d, "");
    class_434f2e3471bb55ffb2ed175a1ab61e17.def("get_decl", method_pointer_8e4b7c675c4e55a5930466ddc89d4d44, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_434f2e3471bb55ffb2ed175a1ab61e17.def("is_sugared", method_pointer_7860bb2534fc5c1d8aa79f4ae51bb3d4, "");
    class_434f2e3471bb55ffb2ed175a1ab61e17.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::EnumType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::EnumType >, autowig::HeldType< class ::clang::TagType > >();
    }

}