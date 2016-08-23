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
    bool  (*method_pointer_1fc37714ec7f52f19114f1b1c7788123)(class ::clang::Type  const *) = ::clang::DecltypeType::classof;
    class ::clang::QualType  (::clang::DecltypeType::*method_pointer_f2506114df905561bab05e44b9bdf6c6)() const = &::clang::DecltypeType::desugar;
    class ::clang::QualType  (::clang::DecltypeType::*method_pointer_7c0e151492935d6a83d44e4d57df162c)() const = &::clang::DecltypeType::getUnderlyingType;
    bool  (::clang::DecltypeType::*method_pointer_f48981e1865f5572ba663e61250b6f7d)() const = &::clang::DecltypeType::isSugared;
    boost::python::class_< class ::clang::DecltypeType, autowig::HeldType< class ::clang::DecltypeType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_973074796ca857b3a9a2c7a922cd35ae("DecltypeType", "", boost::python::no_init);
    class_973074796ca857b3a9a2c7a922cd35ae.def("classof", method_pointer_1fc37714ec7f52f19114f1b1c7788123, "");
    class_973074796ca857b3a9a2c7a922cd35ae.def("desugar", method_pointer_f2506114df905561bab05e44b9bdf6c6, "");
    class_973074796ca857b3a9a2c7a922cd35ae.def("get_underlying_type", method_pointer_7c0e151492935d6a83d44e4d57df162c, "");
    class_973074796ca857b3a9a2c7a922cd35ae.def("is_sugared", method_pointer_f48981e1865f5572ba663e61250b6f7d, "");
    class_973074796ca857b3a9a2c7a922cd35ae.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::DecltypeType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::DecltypeType >, autowig::HeldType< class ::clang::Type > >();
    }

}