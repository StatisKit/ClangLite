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
    bool  (::clang::RecordType::*method_pointer_e8797cd403d45ce594ed19b4c8aaedba)() const = &::clang::RecordType::hasConstFields;
    class ::clang::RecordDecl  * (::clang::RecordType::*method_pointer_de3b25bfc67f56daadb72ba7a920e8eb)() const = &::clang::RecordType::getDecl;
    bool  (::clang::RecordType::*method_pointer_42db9fd679185cf285f7b982b10db099)() const = &::clang::RecordType::isSugared;
    bool  (*method_pointer_971d249a466e55609dd6b76eecf452ed)(class ::clang::Type  const *) = ::clang::RecordType::classof;
    boost::python::class_< class ::clang::RecordType, autowig::HeldType< class ::clang::RecordType >, boost::python::bases< class ::clang::TagType >, boost::noncopyable > class_ec9ca573ec45549fa9da5c3f72552e8f("RecordType", "", boost::python::no_init);
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("has_const_fields", method_pointer_e8797cd403d45ce594ed19b4c8aaedba, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("get_decl", method_pointer_de3b25bfc67f56daadb72ba7a920e8eb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("is_sugared", method_pointer_42db9fd679185cf285f7b982b10db099, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("classof", method_pointer_971d249a466e55609dd6b76eecf452ed, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordType >, autowig::HeldType< class ::clang::TagType > >();
    }

}