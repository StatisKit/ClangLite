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
    bool  (*method_pointer_3349b37b6030575c8f34e62ba3ce0742)(class ::clang::Type  const *) = ::clang::InjectedClassNameType::classof;
    class ::clang::QualType  (::clang::InjectedClassNameType::*method_pointer_8582e4affca4529a92cce105e4619e14)() const = &::clang::InjectedClassNameType::desugar;
    class ::clang::CXXRecordDecl  * (::clang::InjectedClassNameType::*method_pointer_7519cec218f250d4b21e8c84fa631d23)() const = &::clang::InjectedClassNameType::getDecl;
    class ::clang::QualType  (::clang::InjectedClassNameType::*method_pointer_fc9156c1beb952de8fa98e30b3652651)() const = &::clang::InjectedClassNameType::getInjectedSpecializationType;
    class ::clang::TemplateSpecializationType  const * (::clang::InjectedClassNameType::*method_pointer_310276df609c56e8a418ee427d16ac80)() const = &::clang::InjectedClassNameType::getInjectedTST;
    bool  (::clang::InjectedClassNameType::*method_pointer_d551829e1a845f5585ecc07a23951ceb)() const = &::clang::InjectedClassNameType::isSugared;
    boost::python::class_< class ::clang::InjectedClassNameType, autowig::HeldType< class ::clang::InjectedClassNameType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_0418dea67efc501bbbeb15890bd22f08("InjectedClassNameType", "", boost::python::no_init);
    class_0418dea67efc501bbbeb15890bd22f08.def("classof", method_pointer_3349b37b6030575c8f34e62ba3ce0742, "");
    class_0418dea67efc501bbbeb15890bd22f08.def("desugar", method_pointer_8582e4affca4529a92cce105e4619e14, "");
    class_0418dea67efc501bbbeb15890bd22f08.def("get_decl", method_pointer_7519cec218f250d4b21e8c84fa631d23, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_0418dea67efc501bbbeb15890bd22f08.def("get_injected_specialization_type", method_pointer_fc9156c1beb952de8fa98e30b3652651, "");
    class_0418dea67efc501bbbeb15890bd22f08.def("get_injected_tst", method_pointer_310276df609c56e8a418ee427d16ac80, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_0418dea67efc501bbbeb15890bd22f08.def("is_sugared", method_pointer_d551829e1a845f5585ecc07a23951ceb, "");
    class_0418dea67efc501bbbeb15890bd22f08.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::InjectedClassNameType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::InjectedClassNameType >, autowig::HeldType< class ::clang::Type > >();
    }

}