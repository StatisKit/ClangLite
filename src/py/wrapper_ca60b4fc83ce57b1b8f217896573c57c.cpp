#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::LValueReferenceType const volatile * get_pointer<class ::clang::LValueReferenceType const volatile >(class ::clang::LValueReferenceType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ca60b4fc83ce57b1b8f217896573c57c()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::LValueReferenceType::*method_pointer_a392b76d939e5322901265b03d2455d2)() const = &::clang::LValueReferenceType::isSugared;
    class ::clang::QualType  (::clang::LValueReferenceType::*method_pointer_bd233f6783815c9397b379d4eabe8bd7)() const = &::clang::LValueReferenceType::desugar;
    bool  (*method_pointer_5fb415f086275c28931aad42f67f2430)(class ::clang::Type const *) = ::clang::LValueReferenceType::classof;
    boost::python::class_< class ::clang::LValueReferenceType, autowig::Held< class ::clang::LValueReferenceType >::Type, boost::python::bases< class ::clang::ReferenceType >, boost::noncopyable > class_ca60b4fc83ce57b1b8f217896573c57c("LValueReferenceType", "", boost::python::no_init);
    class_ca60b4fc83ce57b1b8f217896573c57c.def("is_sugared", method_pointer_a392b76d939e5322901265b03d2455d2, "");
    class_ca60b4fc83ce57b1b8f217896573c57c.def("desugar", method_pointer_bd233f6783815c9397b379d4eabe8bd7, "");
    class_ca60b4fc83ce57b1b8f217896573c57c.def("classof", method_pointer_5fb415f086275c28931aad42f67f2430, "");
    class_ca60b4fc83ce57b1b8f217896573c57c.staticmethod("classof");

    if(autowig::Held< class ::clang::LValueReferenceType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::LValueReferenceType >::Type, autowig::Held< class ::clang::ReferenceType >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::LValueReferenceType >::Type, boost::python::objects::make_ptr_instance< class ::clang::LValueReferenceType, boost::python::objects::pointer_holder< autowig::Held< class ::clang::LValueReferenceType >::Type, class ::clang::LValueReferenceType > > >();
    }

}