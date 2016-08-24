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
    bool  (*method_pointer_cbc232dc05045ac5976eba75b56e53e8)(class ::clang::Type  const *) = ::clang::ExtVectorType::classof;
    class ::clang::QualType  (::clang::ExtVectorType::*method_pointer_4e7c5628fd3151fe9a6e7b62b0f9c2de)() const = &::clang::ExtVectorType::desugar;
    int  (*method_pointer_0e666d6c9fd3577680e19ea1884183c1)(char ) = ::clang::ExtVectorType::getAccessorIdx;
    int  (*method_pointer_1e281f603c2453828e89d1bb59fc04d6)(char ) = ::clang::ExtVectorType::getNumericAccessorIdx;
    int  (*method_pointer_3aa42201ba75554db31fb242bdab1f36)(char ) = ::clang::ExtVectorType::getPointAccessorIdx;
    bool  (::clang::ExtVectorType::*method_pointer_53107aeb071555949fc7c43172239885)(char ) const = &::clang::ExtVectorType::isAccessorWithinNumElements;
    bool  (::clang::ExtVectorType::*method_pointer_9936b3739c04574c8dce90394a415cc9)() const = &::clang::ExtVectorType::isSugared;
    boost::python::class_< class ::clang::ExtVectorType, autowig::HeldType< class ::clang::ExtVectorType >, boost::python::bases< class ::clang::VectorType >, boost::noncopyable > class_89cd23d27d8a5d2aadb4907c3b1a773c("ExtVectorType", "", boost::python::no_init);
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("classof", method_pointer_cbc232dc05045ac5976eba75b56e53e8, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("desugar", method_pointer_4e7c5628fd3151fe9a6e7b62b0f9c2de, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("get_accessor_idx", method_pointer_0e666d6c9fd3577680e19ea1884183c1, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("get_numeric_accessor_idx", method_pointer_1e281f603c2453828e89d1bb59fc04d6, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("get_point_accessor_idx", method_pointer_3aa42201ba75554db31fb242bdab1f36, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("is_accessor_within_num_elements", method_pointer_53107aeb071555949fc7c43172239885, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("is_sugared", method_pointer_9936b3739c04574c8dce90394a415cc9, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.staticmethod("classof");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.staticmethod("get_numeric_accessor_idx");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.staticmethod("get_accessor_idx");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.staticmethod("get_point_accessor_idx");

    if(std::is_class< autowig::HeldType< class ::clang::ExtVectorType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ExtVectorType >, autowig::HeldType< class ::clang::VectorType > >();
    }

}