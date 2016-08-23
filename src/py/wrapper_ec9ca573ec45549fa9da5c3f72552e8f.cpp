#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_ec9ca573ec45549fa9da5c3f72552e8f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_35c79564fc77585d9d800036f5f057a1)(class ::clang::Type  const *) = ::clang::RecordType::classof;
    class ::clang::RecordDecl  * (::clang::RecordType::*method_pointer_ee62b8e0ff1d5a5785ec58d9b58d8776)() const = &::clang::RecordType::getDecl;
    bool  (::clang::RecordType::*method_pointer_7b171368ea945cab87e9b890d42f4e22)() const = &::clang::RecordType::hasConstFields;
    bool  (::clang::RecordType::*method_pointer_3a4cdf801521565a83439edb8f2216a3)() const = &::clang::RecordType::isSugared;
    boost::python::class_< class ::clang::RecordType, autowig::HeldType< class ::clang::RecordType >, boost::python::bases< class ::clang::TagType >, boost::noncopyable > class_ec9ca573ec45549fa9da5c3f72552e8f("RecordType", "", boost::python::no_init);
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("classof", method_pointer_35c79564fc77585d9d800036f5f057a1, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("get_decl", method_pointer_ee62b8e0ff1d5a5785ec58d9b58d8776, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("has_const_fields", method_pointer_7b171368ea945cab87e9b890d42f4e22, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("is_sugared", method_pointer_3a4cdf801521565a83439edb8f2216a3, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordType >, autowig::HeldType< class ::clang::TagType > >();
    }

}