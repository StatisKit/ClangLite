#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_3c36278b447559a3a5d2a8e223d530d9()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_82ca28921e1457a38306ab007c8cde20)(class ::clang::Type  const *) = ::clang::TypedefType::classof;
    class ::clang::QualType  (::clang::TypedefType::*method_pointer_c69536b181dd5cf3bdb60f1b20a22858)() const = &::clang::TypedefType::desugar;
    class ::clang::TypedefNameDecl  * (::clang::TypedefType::*method_pointer_30e91dc0e3505fc587e590a54345b3d2)() const = &::clang::TypedefType::getDecl;
    bool  (::clang::TypedefType::*method_pointer_e75469822ff759a2ac202b6d252d7375)() const = &::clang::TypedefType::isSugared;
    boost::python::class_< class ::clang::TypedefType, autowig::HeldType< class ::clang::TypedefType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3c36278b447559a3a5d2a8e223d530d9("TypedefType", "", boost::python::no_init);
    class_3c36278b447559a3a5d2a8e223d530d9.def("classof", method_pointer_82ca28921e1457a38306ab007c8cde20, "");
    class_3c36278b447559a3a5d2a8e223d530d9.def("desugar", method_pointer_c69536b181dd5cf3bdb60f1b20a22858, "");
    class_3c36278b447559a3a5d2a8e223d530d9.def("get_decl", method_pointer_30e91dc0e3505fc587e590a54345b3d2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3c36278b447559a3a5d2a8e223d530d9.def("is_sugared", method_pointer_e75469822ff759a2ac202b6d252d7375, "");
    class_3c36278b447559a3a5d2a8e223d530d9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypedefType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypedefType >, autowig::HeldType< class ::clang::Type > >();
    }

}