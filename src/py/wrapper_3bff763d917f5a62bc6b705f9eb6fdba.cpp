#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_3bff763d917f5a62bc6b705f9eb6fdba()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_ed5a9e029106561184f6da26744c8fa8)(class ::clang::Type  const *) = ::clang::TypeOfExprType::classof;
    class ::clang::QualType  (::clang::TypeOfExprType::*method_pointer_d2cc71ae0b5e5e72936fa54283a3bd05)() const = &::clang::TypeOfExprType::desugar;
    bool  (::clang::TypeOfExprType::*method_pointer_2b9d95fabc9554f88ae7610009e9f81b)() const = &::clang::TypeOfExprType::isSugared;
    boost::python::class_< class ::clang::TypeOfExprType, autowig::HeldType< class ::clang::TypeOfExprType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3bff763d917f5a62bc6b705f9eb6fdba("TypeOfExprType", "", boost::python::no_init);
    class_3bff763d917f5a62bc6b705f9eb6fdba.def("classof", method_pointer_ed5a9e029106561184f6da26744c8fa8, "");
    class_3bff763d917f5a62bc6b705f9eb6fdba.def("desugar", method_pointer_d2cc71ae0b5e5e72936fa54283a3bd05, "");
    class_3bff763d917f5a62bc6b705f9eb6fdba.def("is_sugared", method_pointer_2b9d95fabc9554f88ae7610009e9f81b, "");
    class_3bff763d917f5a62bc6b705f9eb6fdba.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypeOfExprType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypeOfExprType >, autowig::HeldType< class ::clang::Type > >();
    }

}