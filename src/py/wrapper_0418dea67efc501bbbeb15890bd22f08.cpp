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
    bool  (*method_pointer_015a224a6b2e5978aa73bb8c8cb7de4c)(class ::clang::Type  const *) = ::clang::InjectedClassNameType::classof;
    class ::clang::CXXRecordDecl  * (::clang::InjectedClassNameType::*method_pointer_0e224e6fdbce50f699f797f79279b653)() const = &::clang::InjectedClassNameType::getDecl;
    class ::clang::TemplateSpecializationType  const * (::clang::InjectedClassNameType::*method_pointer_0ff7140d924a5a02bc8f0e1fb2dbd5d7)() const = &::clang::InjectedClassNameType::getInjectedTST;
    bool  (::clang::InjectedClassNameType::*method_pointer_3fbfbb9d75245afd8d43a821c8fbffd5)() const = &::clang::InjectedClassNameType::isSugared;
    boost::python::class_< class ::clang::InjectedClassNameType, autowig::HeldType< class ::clang::InjectedClassNameType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_0418dea67efc501bbbeb15890bd22f08("InjectedClassNameType", "", boost::python::no_init);
    class_0418dea67efc501bbbeb15890bd22f08.def("classof", method_pointer_015a224a6b2e5978aa73bb8c8cb7de4c, "");
    class_0418dea67efc501bbbeb15890bd22f08.def("get_decl", method_pointer_0e224e6fdbce50f699f797f79279b653, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_0418dea67efc501bbbeb15890bd22f08.def("get_injected_tst", method_pointer_0ff7140d924a5a02bc8f0e1fb2dbd5d7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_0418dea67efc501bbbeb15890bd22f08.def("is_sugared", method_pointer_3fbfbb9d75245afd8d43a821c8fbffd5, "");
    class_0418dea67efc501bbbeb15890bd22f08.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::InjectedClassNameType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::InjectedClassNameType >, autowig::HeldType< class ::clang::Type > >();
    }

}