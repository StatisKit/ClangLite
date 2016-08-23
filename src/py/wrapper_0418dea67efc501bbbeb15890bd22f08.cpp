#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_0418dea67efc501bbbeb15890bd22f08()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_6745c3f5595b57f1adf158831088d8a1)(class ::clang::Type  const *) = ::clang::InjectedClassNameType::classof;
    class ::clang::QualType  (::clang::InjectedClassNameType::*method_pointer_7d9aa7647f3d5e3bac977368ea981c54)() const = &::clang::InjectedClassNameType::desugar;
    class ::clang::CXXRecordDecl  * (::clang::InjectedClassNameType::*method_pointer_c2e390386c6252e895131dc4e1118dbf)() const = &::clang::InjectedClassNameType::getDecl;
    class ::clang::QualType  (::clang::InjectedClassNameType::*method_pointer_e91e63d0fa4b55ebb026a7025a80cb24)() const = &::clang::InjectedClassNameType::getInjectedSpecializationType;
    class ::clang::TemplateSpecializationType  const * (::clang::InjectedClassNameType::*method_pointer_0a817b832e1f5567a3c578b91dfa11c4)() const = &::clang::InjectedClassNameType::getInjectedTST;
    bool  (::clang::InjectedClassNameType::*method_pointer_86fdfc6b87605aff92098203ca278ccb)() const = &::clang::InjectedClassNameType::isSugared;
    boost::python::class_< class ::clang::InjectedClassNameType, autowig::HeldType< class ::clang::InjectedClassNameType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_0418dea67efc501bbbeb15890bd22f08("InjectedClassNameType", "", boost::python::no_init);
    class_0418dea67efc501bbbeb15890bd22f08.def("classof", method_pointer_6745c3f5595b57f1adf158831088d8a1, "");
    class_0418dea67efc501bbbeb15890bd22f08.def("desugar", method_pointer_7d9aa7647f3d5e3bac977368ea981c54, "");
    class_0418dea67efc501bbbeb15890bd22f08.def("get_decl", method_pointer_c2e390386c6252e895131dc4e1118dbf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_0418dea67efc501bbbeb15890bd22f08.def("get_injected_specialization_type", method_pointer_e91e63d0fa4b55ebb026a7025a80cb24, "");
    class_0418dea67efc501bbbeb15890bd22f08.def("get_injected_tst", method_pointer_0a817b832e1f5567a3c578b91dfa11c4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_0418dea67efc501bbbeb15890bd22f08.def("is_sugared", method_pointer_86fdfc6b87605aff92098203ca278ccb, "");
    class_0418dea67efc501bbbeb15890bd22f08.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::InjectedClassNameType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::InjectedClassNameType >, autowig::HeldType< class ::clang::Type > >();
    }

}