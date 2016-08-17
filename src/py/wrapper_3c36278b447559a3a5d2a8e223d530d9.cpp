#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_3c36278b447559a3a5d2a8e223d530d9()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_4476906ea4ef54919bc3cbcb61a5e695)(class ::clang::Type  const *) = ::clang::TypedefType::classof;
    bool  (::clang::TypedefType::*method_pointer_d63ecedc48205590b0a90dc582483303)() const = &::clang::TypedefType::isSugared;
    class ::clang::TypedefNameDecl  * (::clang::TypedefType::*method_pointer_be88afb59fee5c8bbb17435d71919b32)() const = &::clang::TypedefType::getDecl;
    boost::python::class_< class ::clang::TypedefType, autowig::HeldType< class ::clang::TypedefType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3c36278b447559a3a5d2a8e223d530d9("TypedefType", "", boost::python::no_init);
    class_3c36278b447559a3a5d2a8e223d530d9.def("classof", method_pointer_4476906ea4ef54919bc3cbcb61a5e695, "");
    class_3c36278b447559a3a5d2a8e223d530d9.def("is_sugared", method_pointer_d63ecedc48205590b0a90dc582483303, "");
    class_3c36278b447559a3a5d2a8e223d530d9.def("get_decl", method_pointer_be88afb59fee5c8bbb17435d71919b32, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3c36278b447559a3a5d2a8e223d530d9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypedefType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypedefType >, autowig::HeldType< class ::clang::Type > >();
    }

}