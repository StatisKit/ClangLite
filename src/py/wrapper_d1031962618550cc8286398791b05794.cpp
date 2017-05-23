#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::DecayedType const volatile * get_pointer<class ::clang::DecayedType const volatile >(class ::clang::DecayedType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_d1031962618550cc8286398791b05794()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::QualType  (::clang::DecayedType::*method_pointer_cec1c366d3a459bea2bbcb2b6528d5cd)() const = &::clang::DecayedType::getDecayedType;
    class ::clang::QualType  (::clang::DecayedType::*method_pointer_298e7b2b057e5755bb7df878dccb05c3)() const = &::clang::DecayedType::getPointeeType;
    bool  (*method_pointer_e841445e72b15e719a53fd5a9c37aaf3)(class ::clang::Type const *) = ::clang::DecayedType::classof;
    boost::python::class_< class ::clang::DecayedType, autowig::Held< class ::clang::DecayedType >::Type, boost::python::bases< class ::clang::AdjustedType >, boost::noncopyable > class_d1031962618550cc8286398791b05794("DecayedType", "", boost::python::no_init);
    class_d1031962618550cc8286398791b05794.def("get_decayed_type", method_pointer_cec1c366d3a459bea2bbcb2b6528d5cd, "");
    class_d1031962618550cc8286398791b05794.def("get_pointee_type", method_pointer_298e7b2b057e5755bb7df878dccb05c3, "");
    class_d1031962618550cc8286398791b05794.def("classof", method_pointer_e841445e72b15e719a53fd5a9c37aaf3, "");
    class_d1031962618550cc8286398791b05794.staticmethod("classof");

    if(autowig::Held< class ::clang::DecayedType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::DecayedType >::Type, autowig::Held< class ::clang::AdjustedType >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::DecayedType >::Type, boost::python::objects::make_ptr_instance< class ::clang::DecayedType, boost::python::objects::pointer_holder< autowig::Held< class ::clang::DecayedType >::Type, class ::clang::DecayedType > > >();
    }

}