#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_89cd23d27d8a5d2aadb4907c3b1a773c()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_e2f3380e9f395ad58dde255efb0adfd9)(class ::clang::Type  const *) = ::clang::ExtVectorType::classof;
    class ::clang::QualType  (::clang::ExtVectorType::*method_pointer_fe7d1a9b8688541281549fa4720248db)() const = &::clang::ExtVectorType::desugar;
    int  (*method_pointer_11886706c38f5fdf8e8ae7ae8151437e)(char ) = ::clang::ExtVectorType::getAccessorIdx;
    int  (*method_pointer_952e44723bca554ead69549b195b4e81)(char ) = ::clang::ExtVectorType::getNumericAccessorIdx;
    int  (*method_pointer_09167eddeaaf5c0cac77aeca2fa9093a)(char ) = ::clang::ExtVectorType::getPointAccessorIdx;
    bool  (::clang::ExtVectorType::*method_pointer_2145e1f785cf543cb83ad03e3bd8255e)(char ) const = &::clang::ExtVectorType::isAccessorWithinNumElements;
    bool  (::clang::ExtVectorType::*method_pointer_aca323fd04c9593091f6dadeb1185cc3)() const = &::clang::ExtVectorType::isSugared;
    boost::python::class_< class ::clang::ExtVectorType, autowig::HeldType< class ::clang::ExtVectorType >, boost::python::bases< class ::clang::VectorType >, boost::noncopyable > class_89cd23d27d8a5d2aadb4907c3b1a773c("ExtVectorType", "", boost::python::no_init);
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("classof", method_pointer_e2f3380e9f395ad58dde255efb0adfd9, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("desugar", method_pointer_fe7d1a9b8688541281549fa4720248db, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("get_accessor_idx", method_pointer_11886706c38f5fdf8e8ae7ae8151437e, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("get_numeric_accessor_idx", method_pointer_952e44723bca554ead69549b195b4e81, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("get_point_accessor_idx", method_pointer_09167eddeaaf5c0cac77aeca2fa9093a, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("is_accessor_within_num_elements", method_pointer_2145e1f785cf543cb83ad03e3bd8255e, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("is_sugared", method_pointer_aca323fd04c9593091f6dadeb1185cc3, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.staticmethod("classof");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.staticmethod("get_numeric_accessor_idx");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.staticmethod("get_accessor_idx");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.staticmethod("get_point_accessor_idx");

    if(std::is_class< autowig::HeldType< class ::clang::ExtVectorType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ExtVectorType >, autowig::HeldType< class ::clang::VectorType > >();
    }

}