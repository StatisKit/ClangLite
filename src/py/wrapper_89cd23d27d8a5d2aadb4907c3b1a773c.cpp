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
    bool  (*method_pointer_5e978fd646ff54d5a2e6feb3e1b5ea89)(class ::clang::Type  const *) = ::clang::ExtVectorType::classof;
    class ::clang::QualType  (::clang::ExtVectorType::*method_pointer_2b7c665ded7f59bb9d10d1dc974bb9ea)() const = &::clang::ExtVectorType::desugar;
    int  (*method_pointer_d86244264f4952b3ab8fb63ba73a6ab6)(char ) = ::clang::ExtVectorType::getAccessorIdx;
    int  (*method_pointer_1e4fdc6279775867a9de8670043edde6)(char ) = ::clang::ExtVectorType::getNumericAccessorIdx;
    int  (*method_pointer_0032728b7a1952a889b1b373af56e929)(char ) = ::clang::ExtVectorType::getPointAccessorIdx;
    bool  (::clang::ExtVectorType::*method_pointer_2832642573205cc996cd42f92408839c)(char ) const = &::clang::ExtVectorType::isAccessorWithinNumElements;
    bool  (::clang::ExtVectorType::*method_pointer_191a0e7c8a5a5802a74a1f7154c1ef4f)() const = &::clang::ExtVectorType::isSugared;
    boost::python::class_< class ::clang::ExtVectorType, autowig::HeldType< class ::clang::ExtVectorType >, boost::python::bases< class ::clang::VectorType >, boost::noncopyable > class_89cd23d27d8a5d2aadb4907c3b1a773c("ExtVectorType", "", boost::python::no_init);
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("classof", method_pointer_5e978fd646ff54d5a2e6feb3e1b5ea89, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("desugar", method_pointer_2b7c665ded7f59bb9d10d1dc974bb9ea, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("get_accessor_idx", method_pointer_d86244264f4952b3ab8fb63ba73a6ab6, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("get_numeric_accessor_idx", method_pointer_1e4fdc6279775867a9de8670043edde6, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("get_point_accessor_idx", method_pointer_0032728b7a1952a889b1b373af56e929, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("is_accessor_within_num_elements", method_pointer_2832642573205cc996cd42f92408839c, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("is_sugared", method_pointer_191a0e7c8a5a5802a74a1f7154c1ef4f, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.staticmethod("classof");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.staticmethod("get_numeric_accessor_idx");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.staticmethod("get_accessor_idx");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.staticmethod("get_point_accessor_idx");

    if(std::is_class< autowig::HeldType< class ::clang::ExtVectorType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ExtVectorType >, autowig::HeldType< class ::clang::VectorType > >();
    }

}