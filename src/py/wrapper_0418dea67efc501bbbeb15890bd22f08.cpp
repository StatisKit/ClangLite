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
    bool  (*method_pointer_d90f427312c551bcb5c3bbaee640b764)(class ::clang::Type  const *) = ::clang::InjectedClassNameType::classof;
    class ::clang::QualType  (::clang::InjectedClassNameType::*method_pointer_6ef2d3063e115714b68bc4943fd4ed5c)() const = &::clang::InjectedClassNameType::desugar;
    class ::clang::CXXRecordDecl  * (::clang::InjectedClassNameType::*method_pointer_39c2b4c535df5e6e8d5a5196da16b889)() const = &::clang::InjectedClassNameType::getDecl;
    class ::clang::QualType  (::clang::InjectedClassNameType::*method_pointer_e4ae39d43e41539c8791771215c71dd2)() const = &::clang::InjectedClassNameType::getInjectedSpecializationType;
    class ::clang::TemplateSpecializationType  const * (::clang::InjectedClassNameType::*method_pointer_3a21d4525f4d57769dad61745f2e4049)() const = &::clang::InjectedClassNameType::getInjectedTST;
    bool  (::clang::InjectedClassNameType::*method_pointer_94da25420e6a585c9254d4b99eaff9c4)() const = &::clang::InjectedClassNameType::isSugared;
    boost::python::class_< class ::clang::InjectedClassNameType, autowig::HeldType< class ::clang::InjectedClassNameType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_0418dea67efc501bbbeb15890bd22f08("InjectedClassNameType", "", boost::python::no_init);
    class_0418dea67efc501bbbeb15890bd22f08.def("classof", method_pointer_d90f427312c551bcb5c3bbaee640b764, "");
    class_0418dea67efc501bbbeb15890bd22f08.def("desugar", method_pointer_6ef2d3063e115714b68bc4943fd4ed5c, "");
    class_0418dea67efc501bbbeb15890bd22f08.def("get_decl", method_pointer_39c2b4c535df5e6e8d5a5196da16b889, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_0418dea67efc501bbbeb15890bd22f08.def("get_injected_specialization_type", method_pointer_e4ae39d43e41539c8791771215c71dd2, "");
    class_0418dea67efc501bbbeb15890bd22f08.def("get_injected_tst", method_pointer_3a21d4525f4d57769dad61745f2e4049, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_0418dea67efc501bbbeb15890bd22f08.def("is_sugared", method_pointer_94da25420e6a585c9254d4b99eaff9c4, "");
    class_0418dea67efc501bbbeb15890bd22f08.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::InjectedClassNameType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::InjectedClassNameType >, autowig::HeldType< class ::clang::Type > >();
    }

}