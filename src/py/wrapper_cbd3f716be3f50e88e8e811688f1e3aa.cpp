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
    bool  (*method_pointer_9aab44cceff75d698c6e2857236e63b3)(class ::clang::Type  const *) = ::clang::AdjustedType::classof;
    class ::clang::QualType  (::clang::AdjustedType::*method_pointer_6ba1c9ebf3b85107b7123adf6a33c381)() const = &::clang::AdjustedType::desugar;
    class ::clang::QualType  (::clang::AdjustedType::*method_pointer_1aa07c2418f95034b8ff2adf0da23d18)() const = &::clang::AdjustedType::getAdjustedType;
    class ::clang::QualType  (::clang::AdjustedType::*method_pointer_61b2bdd07a3354f38f056d28493380f5)() const = &::clang::AdjustedType::getOriginalType;
    bool  (::clang::AdjustedType::*method_pointer_8e8e540bac3c5608ac353fee2295c8bb)() const = &::clang::AdjustedType::isSugared;
    boost::python::class_< class ::clang::AdjustedType, autowig::HeldType< class ::clang::AdjustedType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_cbd3f716be3f50e88e8e811688f1e3aa("AdjustedType", "", boost::python::no_init);
    class_cbd3f716be3f50e88e8e811688f1e3aa.def("classof", method_pointer_9aab44cceff75d698c6e2857236e63b3, "");
    class_cbd3f716be3f50e88e8e811688f1e3aa.def("desugar", method_pointer_6ba1c9ebf3b85107b7123adf6a33c381, "");
    class_cbd3f716be3f50e88e8e811688f1e3aa.def("get_adjusted_type", method_pointer_1aa07c2418f95034b8ff2adf0da23d18, "");
    class_cbd3f716be3f50e88e8e811688f1e3aa.def("get_original_type", method_pointer_61b2bdd07a3354f38f056d28493380f5, "");
    class_cbd3f716be3f50e88e8e811688f1e3aa.def("is_sugared", method_pointer_8e8e540bac3c5608ac353fee2295c8bb, "");
    class_cbd3f716be3f50e88e8e811688f1e3aa.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AdjustedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AdjustedType >, autowig::HeldType< class ::clang::Type > >();
    }

}