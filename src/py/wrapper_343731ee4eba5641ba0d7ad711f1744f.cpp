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
    bool  (*method_pointer_d45dfd1cb62757939b619133a5e8eb37)(class ::clang::Type  const *) = ::clang::AutoType::classof;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_0b8565030d055b06a01c722dcf191b73)() const = &::clang::AutoType::desugar;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_afcbf93c36a45180b6c135e550879984)() const = &::clang::AutoType::getDeducedType;
    bool  (::clang::AutoType::*method_pointer_809416d4974f5e4dad8a763a430b0ffe)() const = &::clang::AutoType::isDecltypeAuto;
    bool  (::clang::AutoType::*method_pointer_d6115997ed535c29859b63f9bcbd28fc)() const = &::clang::AutoType::isDeduced;
    bool  (::clang::AutoType::*method_pointer_1d57f9b0769f5c14b6c8f1d5f07ba131)() const = &::clang::AutoType::isSugared;
    boost::python::class_< class ::clang::AutoType, autowig::HeldType< class ::clang::AutoType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_343731ee4eba5641ba0d7ad711f1744f("AutoType", "", boost::python::no_init);
    class_343731ee4eba5641ba0d7ad711f1744f.def("classof", method_pointer_d45dfd1cb62757939b619133a5e8eb37, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("desugar", method_pointer_0b8565030d055b06a01c722dcf191b73, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("get_deduced_type", method_pointer_afcbf93c36a45180b6c135e550879984, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_decltype_auto", method_pointer_809416d4974f5e4dad8a763a430b0ffe, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_deduced", method_pointer_d6115997ed535c29859b63f9bcbd28fc, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_sugared", method_pointer_1d57f9b0769f5c14b6c8f1d5f07ba131, "");
    class_343731ee4eba5641ba0d7ad711f1744f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AutoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AutoType >, autowig::HeldType< class ::clang::Type > >();
    }

}