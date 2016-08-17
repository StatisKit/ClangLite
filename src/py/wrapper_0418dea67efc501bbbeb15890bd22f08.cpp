#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_0418dea67efc501bbbeb15890bd22f08()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TemplateSpecializationType  const * (::clang::InjectedClassNameType::*method_pointer_b0b301c6a2b0505e88416401cb62e965)() const = &::clang::InjectedClassNameType::getInjectedTST;
    bool  (*method_pointer_8c34ae28ed615145b0bbe4d4781e8845)(class ::clang::Type  const *) = ::clang::InjectedClassNameType::classof;
    bool  (::clang::InjectedClassNameType::*method_pointer_e67e04523ff85927af60d84378d00747)() const = &::clang::InjectedClassNameType::isSugared;
    class ::clang::CXXRecordDecl  * (::clang::InjectedClassNameType::*method_pointer_62af9854a1db509c8a2386c0a12e1800)() const = &::clang::InjectedClassNameType::getDecl;
    boost::python::class_< class ::clang::InjectedClassNameType, autowig::HeldType< class ::clang::InjectedClassNameType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_0418dea67efc501bbbeb15890bd22f08("InjectedClassNameType", "", boost::python::no_init);
    class_0418dea67efc501bbbeb15890bd22f08.def("get_injected_tst", method_pointer_b0b301c6a2b0505e88416401cb62e965, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_0418dea67efc501bbbeb15890bd22f08.def("classof", method_pointer_8c34ae28ed615145b0bbe4d4781e8845, "");
    class_0418dea67efc501bbbeb15890bd22f08.def("is_sugared", method_pointer_e67e04523ff85927af60d84378d00747, "");
    class_0418dea67efc501bbbeb15890bd22f08.def("get_decl", method_pointer_62af9854a1db509c8a2386c0a12e1800, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_0418dea67efc501bbbeb15890bd22f08.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::InjectedClassNameType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::InjectedClassNameType >, autowig::HeldType< class ::clang::Type > >();
    }

}