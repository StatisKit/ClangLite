#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::DecltypeType const volatile * get_pointer<class ::clang::DecltypeType const volatile >(class ::clang::DecltypeType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_973074796ca857b3a9a2c7a922cd35ae()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::QualType  (::clang::DecltypeType::*method_pointer_465231cefe0654f4afcd7c131ae6444a)() const = &::clang::DecltypeType::getUnderlyingType;
    class ::clang::QualType  (::clang::DecltypeType::*method_pointer_c5ef3c79017a5e4186cb6eb50bdf15a5)() const = &::clang::DecltypeType::desugar;
    bool  (::clang::DecltypeType::*method_pointer_332f7fd0693658a0b28d4d16ae3cfaca)() const = &::clang::DecltypeType::isSugared;
    bool  (*method_pointer_57f6791f71475947af8ba2d46d7f31a4)(class ::clang::Type const *) = ::clang::DecltypeType::classof;
    boost::python::class_< class ::clang::DecltypeType, autowig::Held< class ::clang::DecltypeType >::Type, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_973074796ca857b3a9a2c7a922cd35ae("DecltypeType", "", boost::python::no_init);
    class_973074796ca857b3a9a2c7a922cd35ae.def("get_underlying_type", method_pointer_465231cefe0654f4afcd7c131ae6444a, "");
    class_973074796ca857b3a9a2c7a922cd35ae.def("desugar", method_pointer_c5ef3c79017a5e4186cb6eb50bdf15a5, "Remove a single level of sugar.\n\n:Return Type:\n    :py:class:`clanglite.clang.QualType`\n\n");
    class_973074796ca857b3a9a2c7a922cd35ae.def("is_sugared", method_pointer_332f7fd0693658a0b28d4d16ae3cfaca, "Returns whether this type directly provides sugar.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_973074796ca857b3a9a2c7a922cd35ae.def("classof", method_pointer_57f6791f71475947af8ba2d46d7f31a4, "");
    class_973074796ca857b3a9a2c7a922cd35ae.staticmethod("classof");

    if(autowig::Held< class ::clang::DecltypeType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::DecltypeType >::Type, autowig::Held< class ::clang::Type >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::DecltypeType >::Type, boost::python::objects::make_ptr_instance< class ::clang::DecltypeType, boost::python::objects::pointer_holder< autowig::Held< class ::clang::DecltypeType >::Type, class ::clang::DecltypeType > > >();
    }

}