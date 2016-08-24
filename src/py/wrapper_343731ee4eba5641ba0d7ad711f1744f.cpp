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
    bool  (*method_pointer_46a3c876722353cf937efe081279a120)(class ::clang::Type  const *) = ::clang::AutoType::classof;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_87cc6d1f46365bd8808564f4171f121f)() const = &::clang::AutoType::desugar;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_37c2e97635ce529da505aacb3ffe0c95)() const = &::clang::AutoType::getDeducedType;
    bool  (::clang::AutoType::*method_pointer_2fd294e304675ba7926f986b84668aff)() const = &::clang::AutoType::isDecltypeAuto;
    bool  (::clang::AutoType::*method_pointer_0de130d4448250efadaf7b282e60ed9d)() const = &::clang::AutoType::isDeduced;
    bool  (::clang::AutoType::*method_pointer_ef4b094a3966520aa54a9b7005a6a04b)() const = &::clang::AutoType::isSugared;
    boost::python::class_< class ::clang::AutoType, autowig::HeldType< class ::clang::AutoType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_343731ee4eba5641ba0d7ad711f1744f("AutoType", "", boost::python::no_init);
    class_343731ee4eba5641ba0d7ad711f1744f.def("classof", method_pointer_46a3c876722353cf937efe081279a120, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("desugar", method_pointer_87cc6d1f46365bd8808564f4171f121f, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("get_deduced_type", method_pointer_37c2e97635ce529da505aacb3ffe0c95, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_decltype_auto", method_pointer_2fd294e304675ba7926f986b84668aff, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_deduced", method_pointer_0de130d4448250efadaf7b282e60ed9d, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_sugared", method_pointer_ef4b094a3966520aa54a9b7005a6a04b, "");
    class_343731ee4eba5641ba0d7ad711f1744f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AutoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AutoType >, autowig::HeldType< class ::clang::Type > >();
    }

}