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
    bool  (*method_pointer_c6eca4b405525fd6a34d1b5ad0b0118b)(class ::clang::Type  const *) = ::clang::InjectedClassNameType::classof;
    class ::clang::QualType  (::clang::InjectedClassNameType::*method_pointer_5fdee0435df45813a174f5030d52f22d)() const = &::clang::InjectedClassNameType::desugar;
    class ::clang::CXXRecordDecl  * (::clang::InjectedClassNameType::*method_pointer_8b584714a3b35aada44dc92a1f90d8e8)() const = &::clang::InjectedClassNameType::getDecl;
    class ::clang::QualType  (::clang::InjectedClassNameType::*method_pointer_43f86b0e25c75382b563780dca618d04)() const = &::clang::InjectedClassNameType::getInjectedSpecializationType;
    class ::clang::TemplateSpecializationType  const * (::clang::InjectedClassNameType::*method_pointer_3dfc75ffa9e7582880b02ea9fdb9c470)() const = &::clang::InjectedClassNameType::getInjectedTST;
    bool  (::clang::InjectedClassNameType::*method_pointer_cb97432256c75130bb295be4d14a7ec2)() const = &::clang::InjectedClassNameType::isSugared;
    boost::python::class_< class ::clang::InjectedClassNameType, autowig::HeldType< class ::clang::InjectedClassNameType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_0418dea67efc501bbbeb15890bd22f08("InjectedClassNameType", "", boost::python::no_init);
    class_0418dea67efc501bbbeb15890bd22f08.def("classof", method_pointer_c6eca4b405525fd6a34d1b5ad0b0118b, "");
    class_0418dea67efc501bbbeb15890bd22f08.def("desugar", method_pointer_5fdee0435df45813a174f5030d52f22d, "");
    class_0418dea67efc501bbbeb15890bd22f08.def("get_decl", method_pointer_8b584714a3b35aada44dc92a1f90d8e8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_0418dea67efc501bbbeb15890bd22f08.def("get_injected_specialization_type", method_pointer_43f86b0e25c75382b563780dca618d04, "");
    class_0418dea67efc501bbbeb15890bd22f08.def("get_injected_tst", method_pointer_3dfc75ffa9e7582880b02ea9fdb9c470, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_0418dea67efc501bbbeb15890bd22f08.def("is_sugared", method_pointer_cb97432256c75130bb295be4d14a7ec2, "");
    class_0418dea67efc501bbbeb15890bd22f08.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::InjectedClassNameType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::InjectedClassNameType >, autowig::HeldType< class ::clang::Type > >();
    }

}