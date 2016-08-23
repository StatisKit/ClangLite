#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_434f2e3471bb55ffb2ed175a1ab61e17()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_d70237fe0a7c54e38ae4293689113d52)(class ::clang::Type  const *) = ::clang::EnumType::classof;
    class ::clang::QualType  (::clang::EnumType::*method_pointer_eb6a47f5f8005edbaf29cebe131eb4d4)() const = &::clang::EnumType::desugar;
    class ::clang::EnumDecl  * (::clang::EnumType::*method_pointer_075f2975e0f458e583311a542223990b)() const = &::clang::EnumType::getDecl;
    bool  (::clang::EnumType::*method_pointer_075feb4bd2ea59fe9f4ea5946ee0818d)() const = &::clang::EnumType::isSugared;
    boost::python::class_< class ::clang::EnumType, autowig::HeldType< class ::clang::EnumType >, boost::python::bases< class ::clang::TagType >, boost::noncopyable > class_434f2e3471bb55ffb2ed175a1ab61e17("EnumType", "", boost::python::no_init);
    class_434f2e3471bb55ffb2ed175a1ab61e17.def("classof", method_pointer_d70237fe0a7c54e38ae4293689113d52, "");
    class_434f2e3471bb55ffb2ed175a1ab61e17.def("desugar", method_pointer_eb6a47f5f8005edbaf29cebe131eb4d4, "");
    class_434f2e3471bb55ffb2ed175a1ab61e17.def("get_decl", method_pointer_075f2975e0f458e583311a542223990b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_434f2e3471bb55ffb2ed175a1ab61e17.def("is_sugared", method_pointer_075feb4bd2ea59fe9f4ea5946ee0818d, "");
    class_434f2e3471bb55ffb2ed175a1ab61e17.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::EnumType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::EnumType >, autowig::HeldType< class ::clang::TagType > >();
    }

}