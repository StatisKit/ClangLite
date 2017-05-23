#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::RValueReferenceType const volatile * get_pointer<class ::clang::RValueReferenceType const volatile >(class ::clang::RValueReferenceType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a17549d1336953b08ed02070ee0558cb()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::RValueReferenceType::*method_pointer_1ae5834ea12b53f6a176efd14d4d1fa3)() const = &::clang::RValueReferenceType::isSugared;
    class ::clang::QualType  (::clang::RValueReferenceType::*method_pointer_6852eaf3b71758da9fa0c162078568f8)() const = &::clang::RValueReferenceType::desugar;
    bool  (*method_pointer_9161c083b2455549b2c22476becabef9)(class ::clang::Type const *) = ::clang::RValueReferenceType::classof;
    boost::python::class_< class ::clang::RValueReferenceType, autowig::Held< class ::clang::RValueReferenceType >::Type, boost::python::bases< class ::clang::ReferenceType >, boost::noncopyable > class_a17549d1336953b08ed02070ee0558cb("RValueReferenceType", "", boost::python::no_init);
    class_a17549d1336953b08ed02070ee0558cb.def("is_sugared", method_pointer_1ae5834ea12b53f6a176efd14d4d1fa3, "");
    class_a17549d1336953b08ed02070ee0558cb.def("desugar", method_pointer_6852eaf3b71758da9fa0c162078568f8, "");
    class_a17549d1336953b08ed02070ee0558cb.def("classof", method_pointer_9161c083b2455549b2c22476becabef9, "");
    class_a17549d1336953b08ed02070ee0558cb.staticmethod("classof");

    if(autowig::Held< class ::clang::RValueReferenceType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::RValueReferenceType >::Type, autowig::Held< class ::clang::ReferenceType >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::RValueReferenceType >::Type, boost::python::objects::make_ptr_instance< class ::clang::RValueReferenceType, boost::python::objects::pointer_holder< autowig::Held< class ::clang::RValueReferenceType >::Type, class ::clang::RValueReferenceType > > >();
    }

}