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
    bool  (*method_pointer_aed4a22673a659008d9115122274ca4d)(class ::clang::Type  const *) = ::clang::AutoType::classof;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_7fdd8892706f5b76b1d371c0404f5ed1)() const = &::clang::AutoType::desugar;
    class ::clang::QualType  (::clang::AutoType::*method_pointer_08ea2323fc8f52888311177773228887)() const = &::clang::AutoType::getDeducedType;
    bool  (::clang::AutoType::*method_pointer_9e13fd64cf375054915a74b579c21302)() const = &::clang::AutoType::isDecltypeAuto;
    bool  (::clang::AutoType::*method_pointer_44d9066f841451b7aa46759f5887363b)() const = &::clang::AutoType::isDeduced;
    bool  (::clang::AutoType::*method_pointer_4accc974261d59559bc31026561069db)() const = &::clang::AutoType::isSugared;
    boost::python::class_< class ::clang::AutoType, autowig::HeldType< class ::clang::AutoType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_343731ee4eba5641ba0d7ad711f1744f("AutoType", "", boost::python::no_init);
    class_343731ee4eba5641ba0d7ad711f1744f.def("classof", method_pointer_aed4a22673a659008d9115122274ca4d, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("desugar", method_pointer_7fdd8892706f5b76b1d371c0404f5ed1, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("get_deduced_type", method_pointer_08ea2323fc8f52888311177773228887, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_decltype_auto", method_pointer_9e13fd64cf375054915a74b579c21302, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_deduced", method_pointer_44d9066f841451b7aa46759f5887363b, "");
    class_343731ee4eba5641ba0d7ad711f1744f.def("is_sugared", method_pointer_4accc974261d59559bc31026561069db, "");
    class_343731ee4eba5641ba0d7ad711f1744f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AutoType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AutoType >, autowig::HeldType< class ::clang::Type > >();
    }

}