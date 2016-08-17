#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_ec9ca573ec45549fa9da5c3f72552e8f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::RecordType::*method_pointer_9fba36d0c06252539698561b59372b07)() const = &::clang::RecordType::hasConstFields;
    bool  (::clang::RecordType::*method_pointer_9578c46404755bcea902a8b711754a81)() const = &::clang::RecordType::isSugared;
    class ::clang::RecordDecl  * (::clang::RecordType::*method_pointer_07cb865bcd635d07856e9595318747b9)() const = &::clang::RecordType::getDecl;
    bool  (*method_pointer_83d94e5ec6d559d48842bea842903150)(class ::clang::Type  const *) = ::clang::RecordType::classof;
    boost::python::class_< class ::clang::RecordType, autowig::HeldType< class ::clang::RecordType >, boost::python::bases< class ::clang::TagType >, boost::noncopyable > class_ec9ca573ec45549fa9da5c3f72552e8f("RecordType", "", boost::python::no_init);
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("has_const_fields", method_pointer_9fba36d0c06252539698561b59372b07, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("is_sugared", method_pointer_9578c46404755bcea902a8b711754a81, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("get_decl", method_pointer_07cb865bcd635d07856e9595318747b9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("classof", method_pointer_83d94e5ec6d559d48842bea842903150, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordType >, autowig::HeldType< class ::clang::TagType > >();
    }

}