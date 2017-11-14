#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::InjectedClassNameType const volatile * get_pointer<class ::clang::InjectedClassNameType const volatile >(class ::clang::InjectedClassNameType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_0418dea67efc501bbbeb15890bd22f08()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::QualType  (::clang::InjectedClassNameType::*method_pointer_1d0b02b1a8555241ab131dd0393ed651)() const = &::clang::InjectedClassNameType::getInjectedSpecializationType;
    class ::clang::TemplateSpecializationType const * (::clang::InjectedClassNameType::*method_pointer_91a7bf06e7a55f5bbdf8b3374824aaad)() const = &::clang::InjectedClassNameType::getInjectedTST;
    class ::clang::CXXRecordDecl * (::clang::InjectedClassNameType::*method_pointer_ef6bc9d5c8dd5f3eb5cec8dfcff9e5da)() const = &::clang::InjectedClassNameType::getDecl;
    bool  (::clang::InjectedClassNameType::*method_pointer_4e3f45fd72b9520daa71ac16c02b3c45)() const = &::clang::InjectedClassNameType::isSugared;
    class ::clang::QualType  (::clang::InjectedClassNameType::*method_pointer_ec389c7d04cc5ba8a8fbba4c41246ef0)() const = &::clang::InjectedClassNameType::desugar;
    bool  (*method_pointer_477ad323abaf56d69c214be3e932b903)(class ::clang::Type const *) = ::clang::InjectedClassNameType::classof;
    boost::python::class_< class ::clang::InjectedClassNameType, autowig::Held< class ::clang::InjectedClassNameType >::Type, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_0418dea67efc501bbbeb15890bd22f08("InjectedClassNameType", "", boost::python::no_init);
    class_0418dea67efc501bbbeb15890bd22f08.def("get_injected_specialization_type", method_pointer_1d0b02b1a8555241ab131dd0393ed651, "");
    class_0418dea67efc501bbbeb15890bd22f08.def("get_injected_tst", method_pointer_91a7bf06e7a55f5bbdf8b3374824aaad, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_0418dea67efc501bbbeb15890bd22f08.def("get_decl", method_pointer_ef6bc9d5c8dd5f3eb5cec8dfcff9e5da, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_0418dea67efc501bbbeb15890bd22f08.def("is_sugared", method_pointer_4e3f45fd72b9520daa71ac16c02b3c45, "");
    class_0418dea67efc501bbbeb15890bd22f08.def("desugar", method_pointer_ec389c7d04cc5ba8a8fbba4c41246ef0, "");
    class_0418dea67efc501bbbeb15890bd22f08.def("classof", method_pointer_477ad323abaf56d69c214be3e932b903, "");
    class_0418dea67efc501bbbeb15890bd22f08.staticmethod("classof");

    if(autowig::Held< class ::clang::InjectedClassNameType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::InjectedClassNameType >::Type, autowig::Held< class ::clang::Type >::Type >();
    }

}