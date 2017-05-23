#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::IncompleteArrayType const volatile * get_pointer<class ::clang::IncompleteArrayType const volatile >(class ::clang::IncompleteArrayType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e6f4659cd31f536d8a173fe6b97a9e5a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::IncompleteArrayType::*method_pointer_32b3f2d111aa59c5b48174d233070a2c)() const = &::clang::IncompleteArrayType::isSugared;
    class ::clang::QualType  (::clang::IncompleteArrayType::*method_pointer_fba3184af93a55d9a0d7167dbdd5a6f9)() const = &::clang::IncompleteArrayType::desugar;
    bool  (*method_pointer_a617b10eec4d5582a668071a32513c2e)(class ::clang::Type const *) = ::clang::IncompleteArrayType::classof;
    boost::python::class_< class ::clang::IncompleteArrayType, autowig::Held< class ::clang::IncompleteArrayType >::Type, boost::python::bases< class ::clang::ArrayType >, boost::noncopyable > class_e6f4659cd31f536d8a173fe6b97a9e5a("IncompleteArrayType", "", boost::python::no_init);
    class_e6f4659cd31f536d8a173fe6b97a9e5a.def("is_sugared", method_pointer_32b3f2d111aa59c5b48174d233070a2c, "");
    class_e6f4659cd31f536d8a173fe6b97a9e5a.def("desugar", method_pointer_fba3184af93a55d9a0d7167dbdd5a6f9, "");
    class_e6f4659cd31f536d8a173fe6b97a9e5a.def("classof", method_pointer_a617b10eec4d5582a668071a32513c2e, "");
    class_e6f4659cd31f536d8a173fe6b97a9e5a.staticmethod("classof");

    if(autowig::Held< class ::clang::IncompleteArrayType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::IncompleteArrayType >::Type, autowig::Held< class ::clang::ArrayType >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::IncompleteArrayType >::Type, boost::python::objects::make_ptr_instance< class ::clang::IncompleteArrayType, boost::python::objects::pointer_holder< autowig::Held< class ::clang::IncompleteArrayType >::Type, class ::clang::IncompleteArrayType > > >();
    }

}