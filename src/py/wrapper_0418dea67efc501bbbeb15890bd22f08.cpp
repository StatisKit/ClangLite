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
    bool  (*method_pointer_e7654d1901a8542da1b7869cbea3d553)(class ::clang::Type  const *) = ::clang::InjectedClassNameType::classof;
    class ::clang::QualType  (::clang::InjectedClassNameType::*method_pointer_11f9807dfa175bb18ce0c96bb9a6ce9c)() const = &::clang::InjectedClassNameType::desugar;
    class ::clang::CXXRecordDecl  * (::clang::InjectedClassNameType::*method_pointer_9b3b9123d46f5ab0a5148d3fc0d6a996)() const = &::clang::InjectedClassNameType::getDecl;
    class ::clang::QualType  (::clang::InjectedClassNameType::*method_pointer_53d63c040d535d9298afba1df14580b7)() const = &::clang::InjectedClassNameType::getInjectedSpecializationType;
    class ::clang::TemplateSpecializationType  const * (::clang::InjectedClassNameType::*method_pointer_bf83986c1a08579b86a0d7399f4707b5)() const = &::clang::InjectedClassNameType::getInjectedTST;
    bool  (::clang::InjectedClassNameType::*method_pointer_f757f45f7ba05bad84c97ab2e738a4d9)() const = &::clang::InjectedClassNameType::isSugared;
    boost::python::class_< class ::clang::InjectedClassNameType, autowig::HeldType< class ::clang::InjectedClassNameType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_0418dea67efc501bbbeb15890bd22f08("InjectedClassNameType", "", boost::python::no_init);
    class_0418dea67efc501bbbeb15890bd22f08.def("classof", method_pointer_e7654d1901a8542da1b7869cbea3d553, "");
    class_0418dea67efc501bbbeb15890bd22f08.def("desugar", method_pointer_11f9807dfa175bb18ce0c96bb9a6ce9c, "");
    class_0418dea67efc501bbbeb15890bd22f08.def("get_decl", method_pointer_9b3b9123d46f5ab0a5148d3fc0d6a996, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_0418dea67efc501bbbeb15890bd22f08.def("get_injected_specialization_type", method_pointer_53d63c040d535d9298afba1df14580b7, "");
    class_0418dea67efc501bbbeb15890bd22f08.def("get_injected_tst", method_pointer_bf83986c1a08579b86a0d7399f4707b5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_0418dea67efc501bbbeb15890bd22f08.def("is_sugared", method_pointer_f757f45f7ba05bad84c97ab2e738a4d9, "");
    class_0418dea67efc501bbbeb15890bd22f08.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::InjectedClassNameType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::InjectedClassNameType >, autowig::HeldType< class ::clang::Type > >();
    }

}