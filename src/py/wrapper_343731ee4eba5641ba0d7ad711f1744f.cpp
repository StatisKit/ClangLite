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
    bool  (*method_pointer_31ecb926e2055360ba345bc5b9628b62)(class ::clang::Type  const *) = ::clang::AutoType::classof;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_bd75af64bc375f11b0118e880eaaf3d7)() const = &::clang::AutoType::desugar;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_21ec70ab31b25894a1122b1b396ae347)() const = &::clang::AutoType::getDeducedType;
    bool  (::clang::AutoType::*method_pointer_54540c28b0855b409d9474e6cac56174)() const = &::clang::AutoType::isDecltypeAuto;
    bool  (::clang::AutoType::*method_pointer_f635fe729a1657ceb29c62930273d98d)() const = &::clang::AutoType::isDeduced;
    bool  (::clang::AutoType::*method_pointer_b33b604e561c5ee880c4ca38d06c0685)() const = &::clang::AutoType::isSugared;
    boost::python::class_< class ::clang::AutoType, autowig::HeldType< class ::clang::AutoType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_343731ee4eba5641ba0d7ad711f1744f("AutoType", "", boost::python::no_init);
    class_343731ee4eba5641ba0d7ad711f1744f.def("classof", method_pointer_31ecb926e2055360ba345bc5b9628b62, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("desugar", method_pointer_bd75af64bc375f11b0118e880eaaf3d7, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("get_deduced_type", method_pointer_21ec70ab31b25894a1122b1b396ae347, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_decltype_auto", method_pointer_54540c28b0855b409d9474e6cac56174, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_deduced", method_pointer_f635fe729a1657ceb29c62930273d98d, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_sugared", method_pointer_b33b604e561c5ee880c4ca38d06c0685, "");
    class_343731ee4eba5641ba0d7ad711f1744f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AutoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AutoType >, autowig::HeldType< class ::clang::Type > >();
    }

}