#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_973074796ca857b3a9a2c7a922cd35ae()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_44dd66e3fab45bd6b857ce1e8d7c1c65)(class ::clang::Type  const *) = ::clang::DecltypeType::classof;
    class ::clang::QualType  (::clang::DecltypeType::*method_pointer_cdd04433a405526bb06ce822699cdf63)() const = &::clang::DecltypeType::desugar;
    class ::clang::QualType  (::clang::DecltypeType::*method_pointer_9f4014b86300505dbd6ecac69ece9de1)() const = &::clang::DecltypeType::getUnderlyingType;
    bool  (::clang::DecltypeType::*method_pointer_a7483388d7d657ceb44232484915b587)() const = &::clang::DecltypeType::isSugared;
    boost::python::class_< class ::clang::DecltypeType, autowig::HeldType< class ::clang::DecltypeType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_973074796ca857b3a9a2c7a922cd35ae("DecltypeType", "", boost::python::no_init);
    class_973074796ca857b3a9a2c7a922cd35ae.def("classof", method_pointer_44dd66e3fab45bd6b857ce1e8d7c1c65, "");
    class_973074796ca857b3a9a2c7a922cd35ae.def("desugar", method_pointer_cdd04433a405526bb06ce822699cdf63, "");
    class_973074796ca857b3a9a2c7a922cd35ae.def("get_underlying_type", method_pointer_9f4014b86300505dbd6ecac69ece9de1, "");
    class_973074796ca857b3a9a2c7a922cd35ae.def("is_sugared", method_pointer_a7483388d7d657ceb44232484915b587, "");
    class_973074796ca857b3a9a2c7a922cd35ae.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::DecltypeType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::DecltypeType >, autowig::HeldType< class ::clang::Type > >();
    }

}