#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::TagType const volatile * get_pointer<class ::clang::TagType const volatile >(class ::clang::TagType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_35e4ead7d84e5119abf635b652b833ad()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TagDecl * (::clang::TagType::*method_pointer_23ff12fb08e451f2871580f6e8f12fb2)() const = &::clang::TagType::getDecl;
    bool  (::clang::TagType::*method_pointer_9b64d8c9e48b5e1698e4139ba9c602a8)() const = &::clang::TagType::isBeingDefined;
    bool  (*method_pointer_d7a6e6d29b425ad680de53c8dbaca7ef)(class ::clang::Type const *) = ::clang::TagType::classof;
    boost::python::class_< class ::clang::TagType, autowig::Held< class ::clang::TagType >::Type, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_35e4ead7d84e5119abf635b652b833ad("TagType", "", boost::python::no_init);
    class_35e4ead7d84e5119abf635b652b833ad.def("get_decl", method_pointer_23ff12fb08e451f2871580f6e8f12fb2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_35e4ead7d84e5119abf635b652b833ad.def("is_being_defined", method_pointer_9b64d8c9e48b5e1698e4139ba9c602a8, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_35e4ead7d84e5119abf635b652b833ad.def("classof", method_pointer_d7a6e6d29b425ad680de53c8dbaca7ef, "");
    class_35e4ead7d84e5119abf635b652b833ad.staticmethod("classof");

    if(autowig::Held< class ::clang::TagType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::TagType >::Type, autowig::Held< class ::clang::Type >::Type >();
    }

}