#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_e74d86805e805e54bd75b42dea3808e2()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::CXXDestructorDecl  * (*method_pointer_912514f767a555ac93c070c548970bb8)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXDestructorDecl::CreateDeserialized;
    bool  (*method_pointer_708e8c6b9f425eefbfd17110e36fe448)(class ::clang::Decl  const *) = ::clang::CXXDestructorDecl::classof;
    bool  (*method_pointer_4b6df5a29403562fa797ea1aa212790d)(enum ::clang::Decl::Kind ) = ::clang::CXXDestructorDecl::classofKind;
    class ::clang::FunctionDecl  const * (::clang::CXXDestructorDecl::*method_pointer_86b4b12067f2575491727bb6f35fd1cf)() const = &::clang::CXXDestructorDecl::getOperatorDelete;
    void  (::clang::CXXDestructorDecl::*method_pointer_420ebc4bf828501bb1e87e74d02f6eb1)(class ::clang::FunctionDecl  *) = &::clang::CXXDestructorDecl::setOperatorDelete;
    boost::python::class_< class ::clang::CXXDestructorDecl, autowig::HeldType< class ::clang::CXXDestructorDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_e74d86805e805e54bd75b42dea3808e2("CXXDestructorDecl", "", boost::python::no_init);
    class_e74d86805e805e54bd75b42dea3808e2.def("create_deserialized", method_pointer_912514f767a555ac93c070c548970bb8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e74d86805e805e54bd75b42dea3808e2.def("classof", method_pointer_708e8c6b9f425eefbfd17110e36fe448, "");
    class_e74d86805e805e54bd75b42dea3808e2.def("classof_kind", method_pointer_4b6df5a29403562fa797ea1aa212790d, "");
    class_e74d86805e805e54bd75b42dea3808e2.def("get_operator_delete", method_pointer_86b4b12067f2575491727bb6f35fd1cf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e74d86805e805e54bd75b42dea3808e2.def("set_operator_delete", method_pointer_420ebc4bf828501bb1e87e74d02f6eb1, "");
    class_e74d86805e805e54bd75b42dea3808e2.staticmethod("classof_kind");
    class_e74d86805e805e54bd75b42dea3808e2.staticmethod("create_deserialized");
    class_e74d86805e805e54bd75b42dea3808e2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXDestructorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXDestructorDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}