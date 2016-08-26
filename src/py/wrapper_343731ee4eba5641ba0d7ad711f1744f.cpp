#include "_clanglite.h"


namespace autowig
{
}


void wrapper_343731ee4eba5641ba0d7ad711f1744f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_6fab66fb2c0c5dea80c19b6da94be7e1)(class ::clang::Type  const *) = ::clang::AutoType::classof;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_b6732545b2ce589b97e115a313861247)() const = &::clang::AutoType::desugar;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_718bfe7e6d535a04b206634b28c1462a)() const = &::clang::AutoType::getDeducedType;
    bool  (::clang::AutoType::*method_pointer_ea04913681d55f5387d733be072e7abb)() const = &::clang::AutoType::isDecltypeAuto;
    bool  (::clang::AutoType::*method_pointer_12f4ce8399d95af688eb109bd137ab9a)() const = &::clang::AutoType::isDeduced;
    bool  (::clang::AutoType::*method_pointer_6ddffe94ae7e52e8bf8fbc63133181ae)() const = &::clang::AutoType::isSugared;
    boost::python::class_< class ::clang::AutoType, autowig::HeldType< class ::clang::AutoType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_343731ee4eba5641ba0d7ad711f1744f("AutoType", "", boost::python::no_init);
    class_343731ee4eba5641ba0d7ad711f1744f.def("classof", method_pointer_6fab66fb2c0c5dea80c19b6da94be7e1, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("desugar", method_pointer_b6732545b2ce589b97e115a313861247, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("get_deduced_type", method_pointer_718bfe7e6d535a04b206634b28c1462a, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_decltype_auto", method_pointer_ea04913681d55f5387d733be072e7abb, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_deduced", method_pointer_12f4ce8399d95af688eb109bd137ab9a, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_sugared", method_pointer_6ddffe94ae7e52e8bf8fbc63133181ae, "");
    class_343731ee4eba5641ba0d7ad711f1744f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AutoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AutoType >, autowig::HeldType< class ::clang::Type > >();
    }

}