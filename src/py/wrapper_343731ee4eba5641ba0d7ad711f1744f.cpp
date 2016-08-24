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
    bool  (*method_pointer_3bae3b335c8a52438b68309618e44bf2)(class ::clang::Type  const *) = ::clang::AutoType::classof;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_e57be36358425297a163f257f8343304)() const = &::clang::AutoType::desugar;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_8b3c374567cf5ac1abbd24aa5dc24f58)() const = &::clang::AutoType::getDeducedType;
    bool  (::clang::AutoType::*method_pointer_cf98e381cff859c08f99965c9b32ef0b)() const = &::clang::AutoType::isDecltypeAuto;
    bool  (::clang::AutoType::*method_pointer_e16a99ab6935542f84331c0f8a90c987)() const = &::clang::AutoType::isDeduced;
    bool  (::clang::AutoType::*method_pointer_72316cb9c18d5a36b7fa186ec56a835d)() const = &::clang::AutoType::isSugared;
    boost::python::class_< class ::clang::AutoType, autowig::HeldType< class ::clang::AutoType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_343731ee4eba5641ba0d7ad711f1744f("AutoType", "", boost::python::no_init);
    class_343731ee4eba5641ba0d7ad711f1744f.def("classof", method_pointer_3bae3b335c8a52438b68309618e44bf2, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("desugar", method_pointer_e57be36358425297a163f257f8343304, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("get_deduced_type", method_pointer_8b3c374567cf5ac1abbd24aa5dc24f58, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_decltype_auto", method_pointer_cf98e381cff859c08f99965c9b32ef0b, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_deduced", method_pointer_e16a99ab6935542f84331c0f8a90c987, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_sugared", method_pointer_72316cb9c18d5a36b7fa186ec56a835d, "");
    class_343731ee4eba5641ba0d7ad711f1744f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AutoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AutoType >, autowig::HeldType< class ::clang::Type > >();
    }

}