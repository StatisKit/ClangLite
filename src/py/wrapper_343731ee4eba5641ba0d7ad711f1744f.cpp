#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_343731ee4eba5641ba0d7ad711f1744f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_9efb3e41a26852ab99d37062a4e8f8da)(class ::clang::Type  const *) = ::clang::AutoType::classof;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_a6d2408ae862573fa25fb8a0fa354334)() const = &::clang::AutoType::desugar;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_74d2d0968aa35b1db9be167fea8d4c52)() const = &::clang::AutoType::getDeducedType;
    bool  (::clang::AutoType::*method_pointer_5a4f00a6281050539376362cc839748b)() const = &::clang::AutoType::isDecltypeAuto;
    bool  (::clang::AutoType::*method_pointer_d8cb5d1f15e458df8ef6202431fa77b9)() const = &::clang::AutoType::isDeduced;
    bool  (::clang::AutoType::*method_pointer_b11e1f7bb3f65cee8717241cf42c9a2a)() const = &::clang::AutoType::isSugared;
    boost::python::class_< class ::clang::AutoType, autowig::HeldType< class ::clang::AutoType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_343731ee4eba5641ba0d7ad711f1744f("AutoType", "", boost::python::no_init);
    class_343731ee4eba5641ba0d7ad711f1744f.def("classof", method_pointer_9efb3e41a26852ab99d37062a4e8f8da, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("desugar", method_pointer_a6d2408ae862573fa25fb8a0fa354334, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("get_deduced_type", method_pointer_74d2d0968aa35b1db9be167fea8d4c52, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_decltype_auto", method_pointer_5a4f00a6281050539376362cc839748b, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_deduced", method_pointer_d8cb5d1f15e458df8ef6202431fa77b9, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_sugared", method_pointer_b11e1f7bb3f65cee8717241cf42c9a2a, "");
    class_343731ee4eba5641ba0d7ad711f1744f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AutoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AutoType >, autowig::HeldType< class ::clang::Type > >();
    }

}