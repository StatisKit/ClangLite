#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_cbd3f716be3f50e88e8e811688f1e3aa()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_8b22811e866d5e168cd288768923d1cf)(class ::clang::Type  const *) = ::clang::AdjustedType::classof;
    class ::clang::QualType  (::clang::AdjustedType::*method_pointer_801d49ecb6405279a1ce4c3ad4188d8a)() const = &::clang::AdjustedType::desugar;
    class ::clang::QualType  (::clang::AdjustedType::*method_pointer_0604e081798a59b28da508d429f6a8a7)() const = &::clang::AdjustedType::getAdjustedType;
    class ::clang::QualType  (::clang::AdjustedType::*method_pointer_a4b5c7de1a2655e4be08ccdb99581714)() const = &::clang::AdjustedType::getOriginalType;
    bool  (::clang::AdjustedType::*method_pointer_983c70783bcf5bceb8ec66079f57c9fa)() const = &::clang::AdjustedType::isSugared;
    boost::python::class_< class ::clang::AdjustedType, autowig::HeldType< class ::clang::AdjustedType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_cbd3f716be3f50e88e8e811688f1e3aa("AdjustedType", "", boost::python::no_init);
    class_cbd3f716be3f50e88e8e811688f1e3aa.def("classof", method_pointer_8b22811e866d5e168cd288768923d1cf, "");
    class_cbd3f716be3f50e88e8e811688f1e3aa.def("desugar", method_pointer_801d49ecb6405279a1ce4c3ad4188d8a, "");
    class_cbd3f716be3f50e88e8e811688f1e3aa.def("get_adjusted_type", method_pointer_0604e081798a59b28da508d429f6a8a7, "");
    class_cbd3f716be3f50e88e8e811688f1e3aa.def("get_original_type", method_pointer_a4b5c7de1a2655e4be08ccdb99581714, "");
    class_cbd3f716be3f50e88e8e811688f1e3aa.def("is_sugared", method_pointer_983c70783bcf5bceb8ec66079f57c9fa, "");
    class_cbd3f716be3f50e88e8e811688f1e3aa.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AdjustedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AdjustedType >, autowig::HeldType< class ::clang::Type > >();
    }

}