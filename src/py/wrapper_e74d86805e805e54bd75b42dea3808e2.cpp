#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_e74d86805e805e54bd75b42dea3808e2()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_45347577f54751909d9d5c60c19e7a0a)(class ::clang::Decl  const *) = ::clang::CXXDestructorDecl::classof;
    void  (::clang::CXXDestructorDecl::*method_pointer_1a3b5fbbeccf51ec94512dadde682d94)(class ::clang::FunctionDecl  *) = &::clang::CXXDestructorDecl::setOperatorDelete;
    class ::clang::FunctionDecl  const * (::clang::CXXDestructorDecl::*method_pointer_acaedefd88e55dd0b67bc39c3fcf8592)() const = &::clang::CXXDestructorDecl::getOperatorDelete;
    class ::clang::CXXDestructorDecl  * (*method_pointer_4b90e693538b5d3d8efa0a6e49ba47fb)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXDestructorDecl::CreateDeserialized;
    bool  (*method_pointer_a75d8ccb3d5a5078a95e6c316d362da2)(enum ::clang::Decl::Kind ) = ::clang::CXXDestructorDecl::classofKind;
    boost::python::class_< class ::clang::CXXDestructorDecl, autowig::HeldType< class ::clang::CXXDestructorDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_e74d86805e805e54bd75b42dea3808e2("CXXDestructorDecl", "", boost::python::no_init);
    class_e74d86805e805e54bd75b42dea3808e2.def("classof", method_pointer_45347577f54751909d9d5c60c19e7a0a, "");
    class_e74d86805e805e54bd75b42dea3808e2.def("set_operator_delete", method_pointer_1a3b5fbbeccf51ec94512dadde682d94, "");
    class_e74d86805e805e54bd75b42dea3808e2.def("get_operator_delete", method_pointer_acaedefd88e55dd0b67bc39c3fcf8592, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e74d86805e805e54bd75b42dea3808e2.def("create_deserialized", method_pointer_4b90e693538b5d3d8efa0a6e49ba47fb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e74d86805e805e54bd75b42dea3808e2.def("classof_kind", method_pointer_a75d8ccb3d5a5078a95e6c316d362da2, "");
    class_e74d86805e805e54bd75b42dea3808e2.staticmethod("classof_kind");
    class_e74d86805e805e54bd75b42dea3808e2.staticmethod("create_deserialized");
    class_e74d86805e805e54bd75b42dea3808e2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXDestructorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXDestructorDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}