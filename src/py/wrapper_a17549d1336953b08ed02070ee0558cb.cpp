#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_a17549d1336953b08ed02070ee0558cb()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_0dfe89b406005f82a75869e1af687cd0)(class ::clang::Type  const *) = ::clang::RValueReferenceType::classof;
    class ::clang::QualType  (::clang::RValueReferenceType::*method_pointer_249534f505cd506d828cb2878124e71e)() const = &::clang::RValueReferenceType::desugar;
    bool  (::clang::RValueReferenceType::*method_pointer_ce245865e0d05ecd893b69706f4f837c)() const = &::clang::RValueReferenceType::isSugared;
    boost::python::class_< class ::clang::RValueReferenceType, autowig::HeldType< class ::clang::RValueReferenceType >, boost::python::bases< class ::clang::ReferenceType >, boost::noncopyable > class_a17549d1336953b08ed02070ee0558cb("RValueReferenceType", "", boost::python::no_init);
    class_a17549d1336953b08ed02070ee0558cb.def("classof", method_pointer_0dfe89b406005f82a75869e1af687cd0, "");
    class_a17549d1336953b08ed02070ee0558cb.def("desugar", method_pointer_249534f505cd506d828cb2878124e71e, "");
    class_a17549d1336953b08ed02070ee0558cb.def("is_sugared", method_pointer_ce245865e0d05ecd893b69706f4f837c, "");
    class_a17549d1336953b08ed02070ee0558cb.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RValueReferenceType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RValueReferenceType >, autowig::HeldType< class ::clang::ReferenceType > >();
    }

}