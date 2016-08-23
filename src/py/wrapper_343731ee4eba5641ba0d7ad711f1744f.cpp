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
    bool  (*method_pointer_96bacc25a3c159258cf82b0dc95df2aa)(class ::clang::Type  const *) = ::clang::AutoType::classof;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_4fa1aadfd3275567a1759835a5401e87)() const = &::clang::AutoType::desugar;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_8121195a131d5208b14c0864bf07034a)() const = &::clang::AutoType::getDeducedType;
    bool  (::clang::AutoType::*method_pointer_af9feaabf57550dab0f64da92e490fb5)() const = &::clang::AutoType::isDecltypeAuto;
    bool  (::clang::AutoType::*method_pointer_f59c20b0c46d523ca55fe18f0ee765ee)() const = &::clang::AutoType::isDeduced;
    bool  (::clang::AutoType::*method_pointer_076b9b948a5f521ca89ac715c119c1ed)() const = &::clang::AutoType::isSugared;
    boost::python::class_< class ::clang::AutoType, autowig::HeldType< class ::clang::AutoType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_343731ee4eba5641ba0d7ad711f1744f("AutoType", "", boost::python::no_init);
    class_343731ee4eba5641ba0d7ad711f1744f.def("classof", method_pointer_96bacc25a3c159258cf82b0dc95df2aa, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("desugar", method_pointer_4fa1aadfd3275567a1759835a5401e87, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("get_deduced_type", method_pointer_8121195a131d5208b14c0864bf07034a, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_decltype_auto", method_pointer_af9feaabf57550dab0f64da92e490fb5, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_deduced", method_pointer_f59c20b0c46d523ca55fe18f0ee765ee, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_sugared", method_pointer_076b9b948a5f521ca89ac715c119c1ed, "");
    class_343731ee4eba5641ba0d7ad711f1744f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AutoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AutoType >, autowig::HeldType< class ::clang::Type > >();
    }

}