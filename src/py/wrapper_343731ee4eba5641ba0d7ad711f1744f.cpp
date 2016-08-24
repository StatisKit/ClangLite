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
    bool  (*method_pointer_f08da4f547a05ff78c1b4d49b056dc93)(class ::clang::Type  const *) = ::clang::AutoType::classof;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_d2e543cbdf395890ba8ecb0cb7e3d6e2)() const = &::clang::AutoType::desugar;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_6cb454feb27954328073e365cee84049)() const = &::clang::AutoType::getDeducedType;
    bool  (::clang::AutoType::*method_pointer_9ace106e5bd754718dc758e304176436)() const = &::clang::AutoType::isDecltypeAuto;
    bool  (::clang::AutoType::*method_pointer_07e8c4a47ddc57ebafbc769fbf274d33)() const = &::clang::AutoType::isDeduced;
    bool  (::clang::AutoType::*method_pointer_bd283bc05d8355e3af6778ab54d83ae8)() const = &::clang::AutoType::isSugared;
    boost::python::class_< class ::clang::AutoType, autowig::HeldType< class ::clang::AutoType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_343731ee4eba5641ba0d7ad711f1744f("AutoType", "", boost::python::no_init);
    class_343731ee4eba5641ba0d7ad711f1744f.def("classof", method_pointer_f08da4f547a05ff78c1b4d49b056dc93, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("desugar", method_pointer_d2e543cbdf395890ba8ecb0cb7e3d6e2, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("get_deduced_type", method_pointer_6cb454feb27954328073e365cee84049, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_decltype_auto", method_pointer_9ace106e5bd754718dc758e304176436, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_deduced", method_pointer_07e8c4a47ddc57ebafbc769fbf274d33, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_sugared", method_pointer_bd283bc05d8355e3af6778ab54d83ae8, "");
    class_343731ee4eba5641ba0d7ad711f1744f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AutoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AutoType >, autowig::HeldType< class ::clang::Type > >();
    }

}