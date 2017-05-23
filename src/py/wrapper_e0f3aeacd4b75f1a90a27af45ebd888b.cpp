#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::ParenType const volatile * get_pointer<class ::clang::ParenType const volatile >(class ::clang::ParenType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e0f3aeacd4b75f1a90a27af45ebd888b()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::QualType  (::clang::ParenType::*method_pointer_dd1bae29579d548384aecbd6050b960c)() const = &::clang::ParenType::getInnerType;
    bool  (::clang::ParenType::*method_pointer_a7b287453222500aa4c939e3ba0d9d20)() const = &::clang::ParenType::isSugared;
    class ::clang::QualType  (::clang::ParenType::*method_pointer_740de9d7c372547c91ca3a2f93b00248)() const = &::clang::ParenType::desugar;
    bool  (*method_pointer_21be3abf0c1659f09cf5241140a41abb)(class ::clang::Type const *) = ::clang::ParenType::classof;
    boost::python::class_< class ::clang::ParenType, autowig::Held< class ::clang::ParenType >::Type, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_e0f3aeacd4b75f1a90a27af45ebd888b("ParenType", "", boost::python::no_init);
    class_e0f3aeacd4b75f1a90a27af45ebd888b.def("get_inner_type", method_pointer_dd1bae29579d548384aecbd6050b960c, "");
    class_e0f3aeacd4b75f1a90a27af45ebd888b.def("is_sugared", method_pointer_a7b287453222500aa4c939e3ba0d9d20, "");
    class_e0f3aeacd4b75f1a90a27af45ebd888b.def("desugar", method_pointer_740de9d7c372547c91ca3a2f93b00248, "");
    class_e0f3aeacd4b75f1a90a27af45ebd888b.def("classof", method_pointer_21be3abf0c1659f09cf5241140a41abb, "");
    class_e0f3aeacd4b75f1a90a27af45ebd888b.staticmethod("classof");

    if(autowig::Held< class ::clang::ParenType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::ParenType >::Type, autowig::Held< class ::clang::Type >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::ParenType >::Type, boost::python::objects::make_ptr_instance< class ::clang::ParenType, boost::python::objects::pointer_holder< autowig::Held< class ::clang::ParenType >::Type, class ::clang::ParenType > > >();
    }

}