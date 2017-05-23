#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::ExtVectorType const volatile * get_pointer<class ::clang::ExtVectorType const volatile >(class ::clang::ExtVectorType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_89cd23d27d8a5d2aadb4907c3b1a773c()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    int  (*method_pointer_09ef35a5dec05bc3be550976e06b8bd5)(char ) = ::clang::ExtVectorType::getPointAccessorIdx;
    int  (*method_pointer_9a96bc5419c358ae9d903175fc3573df)(char ) = ::clang::ExtVectorType::getNumericAccessorIdx;
    int  (*method_pointer_e911af7080c85d2fac2bd03921d03214)(char ) = ::clang::ExtVectorType::getAccessorIdx;
    bool  (::clang::ExtVectorType::*method_pointer_fe02736598bd5479865cec612649a05e)(char ) const = &::clang::ExtVectorType::isAccessorWithinNumElements;
    bool  (::clang::ExtVectorType::*method_pointer_e2433fd5a6bc5788996d9af1333149af)() const = &::clang::ExtVectorType::isSugared;
    class ::clang::QualType  (::clang::ExtVectorType::*method_pointer_ca377ce4fa3256418372d8b664c49690)() const = &::clang::ExtVectorType::desugar;
    bool  (*method_pointer_239d2da50bd45b9485708079610dd1b8)(class ::clang::Type const *) = ::clang::ExtVectorType::classof;
    boost::python::class_< class ::clang::ExtVectorType, autowig::Held< class ::clang::ExtVectorType >::Type, boost::python::bases< class ::clang::VectorType >, boost::noncopyable > class_89cd23d27d8a5d2aadb4907c3b1a773c("ExtVectorType", "", boost::python::no_init);
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("get_point_accessor_idx", method_pointer_09ef35a5dec05bc3be550976e06b8bd5, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("get_numeric_accessor_idx", method_pointer_9a96bc5419c358ae9d903175fc3573df, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("get_accessor_idx", method_pointer_e911af7080c85d2fac2bd03921d03214, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("is_accessor_within_num_elements", method_pointer_fe02736598bd5479865cec612649a05e, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("is_sugared", method_pointer_e2433fd5a6bc5788996d9af1333149af, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("desugar", method_pointer_ca377ce4fa3256418372d8b664c49690, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.def("classof", method_pointer_239d2da50bd45b9485708079610dd1b8, "");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.staticmethod("classof");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.staticmethod("get_accessor_idx");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.staticmethod("get_point_accessor_idx");
    class_89cd23d27d8a5d2aadb4907c3b1a773c.staticmethod("get_numeric_accessor_idx");

    if(autowig::Held< class ::clang::ExtVectorType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::ExtVectorType >::Type, autowig::Held< class ::clang::VectorType >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::ExtVectorType >::Type, boost::python::objects::make_ptr_instance< class ::clang::ExtVectorType, boost::python::objects::pointer_holder< autowig::Held< class ::clang::ExtVectorType >::Type, class ::clang::ExtVectorType > > >();
    }

}