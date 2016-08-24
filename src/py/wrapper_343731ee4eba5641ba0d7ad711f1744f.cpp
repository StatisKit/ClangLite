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
    bool  (*method_pointer_204dbeac321e555695bcfed82325e377)(class ::clang::Type  const *) = ::clang::AutoType::classof;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_47b5b3119d585ed9a1a77e36f4104a1b)() const = &::clang::AutoType::desugar;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_e2c359d88bd65253a586c1ba558729c1)() const = &::clang::AutoType::getDeducedType;
    bool  (::clang::AutoType::*method_pointer_cbef30bff2065ca29cfe8ece7baad055)() const = &::clang::AutoType::isDecltypeAuto;
    bool  (::clang::AutoType::*method_pointer_dec0f876a8e358ba88c75a3fdf90c3d8)() const = &::clang::AutoType::isDeduced;
    bool  (::clang::AutoType::*method_pointer_443f211296805d26b035d8b7445c2221)() const = &::clang::AutoType::isSugared;
    boost::python::class_< class ::clang::AutoType, autowig::HeldType< class ::clang::AutoType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_343731ee4eba5641ba0d7ad711f1744f("AutoType", "", boost::python::no_init);
    class_343731ee4eba5641ba0d7ad711f1744f.def("classof", method_pointer_204dbeac321e555695bcfed82325e377, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("desugar", method_pointer_47b5b3119d585ed9a1a77e36f4104a1b, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("get_deduced_type", method_pointer_e2c359d88bd65253a586c1ba558729c1, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_decltype_auto", method_pointer_cbef30bff2065ca29cfe8ece7baad055, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_deduced", method_pointer_dec0f876a8e358ba88c75a3fdf90c3d8, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_sugared", method_pointer_443f211296805d26b035d8b7445c2221, "");
    class_343731ee4eba5641ba0d7ad711f1744f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AutoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AutoType >, autowig::HeldType< class ::clang::Type > >();
    }

}