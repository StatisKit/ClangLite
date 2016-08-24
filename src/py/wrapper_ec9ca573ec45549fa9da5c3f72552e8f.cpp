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
    bool  (*method_pointer_85805c4d4c12552b9955ca8511f1677f)(class ::clang::Type  const *) = ::clang::RecordType::classof;
    class ::clang::QualType  (::clang::RecordType::*method_pointer_0df1fb6cd7a35775a44f770fce4c9296)() const = &::clang::RecordType::desugar;
    class ::clang::RecordDecl  * (::clang::RecordType::*method_pointer_78866a4e6992515997918fa3ca16a5e2)() const = &::clang::RecordType::getDecl;
    bool  (::clang::RecordType::*method_pointer_d96f0e9b2051574eb15051f9c5dd8e26)() const = &::clang::RecordType::hasConstFields;
    bool  (::clang::RecordType::*method_pointer_761da9a9d186552dbdfc25a4607fc2e3)() const = &::clang::RecordType::isSugared;
    boost::python::class_< class ::clang::RecordType, autowig::HeldType< class ::clang::RecordType >, boost::python::bases< class ::clang::TagType >, boost::noncopyable > class_ec9ca573ec45549fa9da5c3f72552e8f("RecordType", "", boost::python::no_init);
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("classof", method_pointer_85805c4d4c12552b9955ca8511f1677f, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("desugar", method_pointer_0df1fb6cd7a35775a44f770fce4c9296, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("get_decl", method_pointer_78866a4e6992515997918fa3ca16a5e2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("has_const_fields", method_pointer_d96f0e9b2051574eb15051f9c5dd8e26, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("is_sugared", method_pointer_761da9a9d186552dbdfc25a4607fc2e3, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordType >, autowig::HeldType< class ::clang::TagType > >();
    }

}