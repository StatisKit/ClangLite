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
    class ::clang::FunctionDecl  const * (::clang::CXXDestructorDecl::*method_pointer_9983f6f1b6b35030b122fc6bc6ea6878)() const = &::clang::CXXDestructorDecl::getOperatorDelete;
    bool  (*method_pointer_c5a1840614625ef99aabab2877fdf23b)(class ::clang::Decl  const *) = ::clang::CXXDestructorDecl::classof;
    void  (::clang::CXXDestructorDecl::*method_pointer_c95264bd99a455f0a89497973a153426)(class ::clang::FunctionDecl  *) = &::clang::CXXDestructorDecl::setOperatorDelete;
    bool  (*method_pointer_27e750640e525335a60b069af373d0d8)(enum ::clang::Decl::Kind ) = ::clang::CXXDestructorDecl::classofKind;
    class ::clang::CXXDestructorDecl  * (*method_pointer_63c42a1ecf2d56849e85fcd8fc536349)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXDestructorDecl::CreateDeserialized;
    boost::python::class_< class ::clang::CXXDestructorDecl, autowig::HeldType< class ::clang::CXXDestructorDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_e74d86805e805e54bd75b42dea3808e2("CXXDestructorDecl", "", boost::python::no_init);
    class_e74d86805e805e54bd75b42dea3808e2.def("get_operator_delete", method_pointer_9983f6f1b6b35030b122fc6bc6ea6878, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e74d86805e805e54bd75b42dea3808e2.def("classof", method_pointer_c5a1840614625ef99aabab2877fdf23b, "");
    class_e74d86805e805e54bd75b42dea3808e2.def("set_operator_delete", method_pointer_c95264bd99a455f0a89497973a153426, "");
    class_e74d86805e805e54bd75b42dea3808e2.def("classof_kind", method_pointer_27e750640e525335a60b069af373d0d8, "");
    class_e74d86805e805e54bd75b42dea3808e2.def("create_deserialized", method_pointer_63c42a1ecf2d56849e85fcd8fc536349, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e74d86805e805e54bd75b42dea3808e2.staticmethod("classof_kind");
    class_e74d86805e805e54bd75b42dea3808e2.staticmethod("create_deserialized");
    class_e74d86805e805e54bd75b42dea3808e2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXDestructorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXDestructorDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}