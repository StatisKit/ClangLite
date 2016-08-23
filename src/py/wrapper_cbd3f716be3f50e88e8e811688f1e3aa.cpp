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
    bool  (*method_pointer_0963dd8f889a5b7a82104221e48b053b)(class ::clang::Type  const *) = ::clang::AdjustedType::classof;
    class ::clang::QualType  (::clang::AdjustedType::*method_pointer_5d8ec45864715d4e8928b2f452135d12)() const = &::clang::AdjustedType::desugar;
    class ::clang::QualType  (::clang::AdjustedType::*method_pointer_3d99a4d0d5e6555081dfa932069bcf25)() const = &::clang::AdjustedType::getAdjustedType;
    class ::clang::QualType  (::clang::AdjustedType::*method_pointer_3c269de6ce045bc6b3fa8f31899150d6)() const = &::clang::AdjustedType::getOriginalType;
    bool  (::clang::AdjustedType::*method_pointer_3d6943bf23da5f359064b02872c38728)() const = &::clang::AdjustedType::isSugared;
    boost::python::class_< class ::clang::AdjustedType, autowig::HeldType< class ::clang::AdjustedType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_cbd3f716be3f50e88e8e811688f1e3aa("AdjustedType", "", boost::python::no_init);
    class_cbd3f716be3f50e88e8e811688f1e3aa.def("classof", method_pointer_0963dd8f889a5b7a82104221e48b053b, "");
    class_cbd3f716be3f50e88e8e811688f1e3aa.def("desugar", method_pointer_5d8ec45864715d4e8928b2f452135d12, "");
    class_cbd3f716be3f50e88e8e811688f1e3aa.def("get_adjusted_type", method_pointer_3d99a4d0d5e6555081dfa932069bcf25, "");
    class_cbd3f716be3f50e88e8e811688f1e3aa.def("get_original_type", method_pointer_3c269de6ce045bc6b3fa8f31899150d6, "");
    class_cbd3f716be3f50e88e8e811688f1e3aa.def("is_sugared", method_pointer_3d6943bf23da5f359064b02872c38728, "");
    class_cbd3f716be3f50e88e8e811688f1e3aa.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AdjustedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AdjustedType >, autowig::HeldType< class ::clang::Type > >();
    }

}