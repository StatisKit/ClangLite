#include "_clanglite.h"


namespace autowig
{
}


void wrapper_0418dea67efc501bbbeb15890bd22f08()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_160fba48dd935f52b7627318a85060b1)(class ::clang::Type  const *) = ::clang::InjectedClassNameType::classof;
    class ::clang::CXXRecordDecl  * (::clang::InjectedClassNameType::*method_pointer_e6f139101b03582a920021ade905cf91)() const = &::clang::InjectedClassNameType::getDecl;
    class ::clang::TemplateSpecializationType  const * (::clang::InjectedClassNameType::*method_pointer_f9e7b6783a4b5073b7eb642628e3dd2d)() const = &::clang::InjectedClassNameType::getInjectedTST;
    bool  (::clang::InjectedClassNameType::*method_pointer_197dc7917664532696b0d974aefd19d3)() const = &::clang::InjectedClassNameType::isSugared;
    boost::python::class_< class ::clang::InjectedClassNameType, autowig::HeldType< class ::clang::InjectedClassNameType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_0418dea67efc501bbbeb15890bd22f08("InjectedClassNameType", "", boost::python::no_init);
    class_0418dea67efc501bbbeb15890bd22f08.def("classof", method_pointer_160fba48dd935f52b7627318a85060b1, "");
    class_0418dea67efc501bbbeb15890bd22f08.def("get_decl", method_pointer_e6f139101b03582a920021ade905cf91, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_0418dea67efc501bbbeb15890bd22f08.def("get_injected_tst", method_pointer_f9e7b6783a4b5073b7eb642628e3dd2d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_0418dea67efc501bbbeb15890bd22f08.def("is_sugared", method_pointer_197dc7917664532696b0d974aefd19d3, "");
    class_0418dea67efc501bbbeb15890bd22f08.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::InjectedClassNameType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::InjectedClassNameType >, autowig::HeldType< class ::clang::Type > >();
    }

}