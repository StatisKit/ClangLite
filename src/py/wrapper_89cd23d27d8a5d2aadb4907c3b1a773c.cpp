#include "_clanglite.h"


namespace autowig
{
}


void wrapper_89cd23d27d8a5d2aadb4907c3b1a773c()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_6c14796130d55de58d828c809dc9d25d)(class ::clang::Type  const *) = ::clang::ExtVectorType::classof;
    int  (*method_pointer_76e2d52991ba596d9a0f4000624f6d3c)(char ) = ::clang::ExtVectorType::getAccessorIdx;
    int  (*method_pointer_23013acc4a25573881925d02d41cc7ec)(char ) = ::clang::ExtVectorType::getNumericAccessorIdx;
    int  (*method_pointer_0e9c3ca98dbd58008dc8dd45f7f06877)(char ) = ::clang::ExtVectorType::getPointAccessorIdx;
    bool  (::clang::ExtVectorType::*method_pointer_91f136bed7ed533980366c031e4eb445)(char ) const = &::clang::ExtVectorType::isAccessorWithinNumElements;
    bool  (::clang::ExtVectorType::*method_pointer_4b4124c96d7d5747a5abd7194b686a19)() const = &::clang::ExtVectorType::isSugared;
    boost::python::class_< class ::clang::ExtVectorType, autowig::HeldType< class ::clang::ExtVectorType >, boost::python::bases< class ::clang::VectorType >, boost::noncopyable > class_89cd23d27d8a5d2aadb4907c3b1a773c("ExtVectorType", "", boost::python::no_init);
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("classof", method_pointer_6c14796130d55de58d828c809dc9d25d, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("get_accessor_idx", method_pointer_76e2d52991ba596d9a0f4000624f6d3c, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("get_numeric_accessor_idx", method_pointer_23013acc4a25573881925d02d41cc7ec, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("get_point_accessor_idx", method_pointer_0e9c3ca98dbd58008dc8dd45f7f06877, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("is_accessor_within_num_elements", method_pointer_91f136bed7ed533980366c031e4eb445, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("is_sugared", method_pointer_4b4124c96d7d5747a5abd7194b686a19, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.staticmethod("classof");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.staticmethod("get_numeric_accessor_idx");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.staticmethod("get_accessor_idx");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.staticmethod("get_point_accessor_idx");

    if(std::is_class< autowig::HeldType< class ::clang::ExtVectorType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ExtVectorType >, autowig::HeldType< class ::clang::VectorType > >();
    }

}