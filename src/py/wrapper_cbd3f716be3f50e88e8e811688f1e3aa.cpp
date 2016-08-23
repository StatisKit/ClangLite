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
    bool  (*method_pointer_6c872201bfd254629e5fb02f793c2976)(class ::clang::Type  const *) = ::clang::AdjustedType::classof;
    class ::clang::QualType  (::clang::AdjustedType::*method_pointer_2e79f7518b935056b139b8178f7ea909)() const = &::clang::AdjustedType::desugar;
    class ::clang::QualType  (::clang::AdjustedType::*method_pointer_cbed3c3150815b8d9d2671304dcf3414)() const = &::clang::AdjustedType::getAdjustedType;
    class ::clang::QualType  (::clang::AdjustedType::*method_pointer_74c6288c08a754ce9866368343160ce5)() const = &::clang::AdjustedType::getOriginalType;
    bool  (::clang::AdjustedType::*method_pointer_f0e762a8a7ae5f6caf88bab0232a67c0)() const = &::clang::AdjustedType::isSugared;
    boost::python::class_< class ::clang::AdjustedType, autowig::HeldType< class ::clang::AdjustedType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_cbd3f716be3f50e88e8e811688f1e3aa("AdjustedType", "", boost::python::no_init);
    class_cbd3f716be3f50e88e8e811688f1e3aa.def("classof", method_pointer_6c872201bfd254629e5fb02f793c2976, "");
    class_cbd3f716be3f50e88e8e811688f1e3aa.def("desugar", method_pointer_2e79f7518b935056b139b8178f7ea909, "");
    class_cbd3f716be3f50e88e8e811688f1e3aa.def("get_adjusted_type", method_pointer_cbed3c3150815b8d9d2671304dcf3414, "");
    class_cbd3f716be3f50e88e8e811688f1e3aa.def("get_original_type", method_pointer_74c6288c08a754ce9866368343160ce5, "");
    class_cbd3f716be3f50e88e8e811688f1e3aa.def("is_sugared", method_pointer_f0e762a8a7ae5f6caf88bab0232a67c0, "");
    class_cbd3f716be3f50e88e8e811688f1e3aa.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AdjustedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AdjustedType >, autowig::HeldType< class ::clang::Type > >();
    }

}