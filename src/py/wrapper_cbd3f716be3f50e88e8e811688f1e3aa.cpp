#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::AdjustedType const volatile * get_pointer<class ::clang::AdjustedType const volatile >(class ::clang::AdjustedType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_cbd3f716be3f50e88e8e811688f1e3aa()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::QualType  (::clang::AdjustedType::*method_pointer_122b6faa12a4510f9f2bbdeda07173cd)() const = &::clang::AdjustedType::getOriginalType;
    class ::clang::QualType  (::clang::AdjustedType::*method_pointer_2c032d869ab65e32b515716b6480d2b5)() const = &::clang::AdjustedType::getAdjustedType;
    bool  (::clang::AdjustedType::*method_pointer_e25604e23c515e089a85ab73f19d32bd)() const = &::clang::AdjustedType::isSugared;
    class ::clang::QualType  (::clang::AdjustedType::*method_pointer_63eaafeffd5b5e3db68b7e54399e934b)() const = &::clang::AdjustedType::desugar;
    bool  (*method_pointer_ddb57ae95b035b9db301626e16d7f3a1)(class ::clang::Type const *) = ::clang::AdjustedType::classof;
    boost::python::class_< class ::clang::AdjustedType, autowig::Held< class ::clang::AdjustedType >::Type, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_cbd3f716be3f50e88e8e811688f1e3aa("AdjustedType", "", boost::python::no_init);
    class_cbd3f716be3f50e88e8e811688f1e3aa.def("get_original_type", method_pointer_122b6faa12a4510f9f2bbdeda07173cd, "");
    class_cbd3f716be3f50e88e8e811688f1e3aa.def("get_adjusted_type", method_pointer_2c032d869ab65e32b515716b6480d2b5, "");
    class_cbd3f716be3f50e88e8e811688f1e3aa.def("is_sugared", method_pointer_e25604e23c515e089a85ab73f19d32bd, "");
    class_cbd3f716be3f50e88e8e811688f1e3aa.def("desugar", method_pointer_63eaafeffd5b5e3db68b7e54399e934b, "");
    class_cbd3f716be3f50e88e8e811688f1e3aa.def("classof", method_pointer_ddb57ae95b035b9db301626e16d7f3a1, "");
    class_cbd3f716be3f50e88e8e811688f1e3aa.staticmethod("classof");

    if(autowig::Held< class ::clang::AdjustedType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::AdjustedType >::Type, autowig::Held< class ::clang::Type >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::AdjustedType >::Type, boost::python::objects::make_ptr_instance< class ::clang::AdjustedType, boost::python::objects::pointer_holder< autowig::Held< class ::clang::AdjustedType >::Type, class ::clang::AdjustedType > > >();
    }

}