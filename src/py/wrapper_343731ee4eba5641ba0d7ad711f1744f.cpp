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
    bool  (*method_pointer_b4d5a374a93a5e88841c221588bd653d)(class ::clang::Type  const *) = ::clang::AutoType::classof;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_88eb5cfebcfe573dba042e5408ce9063)() const = &::clang::AutoType::desugar;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_56b8cb9ec0dd58219b51b38ea79a7f06)() const = &::clang::AutoType::getDeducedType;
    bool  (::clang::AutoType::*method_pointer_64a415d6a67b5582b604e2e1d339d821)() const = &::clang::AutoType::isDecltypeAuto;
    bool  (::clang::AutoType::*method_pointer_62bed2e8df935b97a6ae77952fc3cede)() const = &::clang::AutoType::isDeduced;
    bool  (::clang::AutoType::*method_pointer_ada4480a50685cd4818837cc503199b9)() const = &::clang::AutoType::isSugared;
    boost::python::class_< class ::clang::AutoType, autowig::HeldType< class ::clang::AutoType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_343731ee4eba5641ba0d7ad711f1744f("AutoType", "", boost::python::no_init);
    class_343731ee4eba5641ba0d7ad711f1744f.def("classof", method_pointer_b4d5a374a93a5e88841c221588bd653d, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("desugar", method_pointer_88eb5cfebcfe573dba042e5408ce9063, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("get_deduced_type", method_pointer_56b8cb9ec0dd58219b51b38ea79a7f06, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_decltype_auto", method_pointer_64a415d6a67b5582b604e2e1d339d821, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_deduced", method_pointer_62bed2e8df935b97a6ae77952fc3cede, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_sugared", method_pointer_ada4480a50685cd4818837cc503199b9, "");
    class_343731ee4eba5641ba0d7ad711f1744f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AutoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AutoType >, autowig::HeldType< class ::clang::Type > >();
    }

}