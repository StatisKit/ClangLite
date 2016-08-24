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
    class ::clang::CXXDestructorDecl  * (*method_pointer_f7bb5b02a63b5c0386e9990711da47ad)(class ::clang::ASTContext  &, unsigned int ) = ::clang::CXXDestructorDecl::CreateDeserialized;
    bool  (*method_pointer_61f2c164be47558f9e7841fd6f75d9ed)(class ::clang::Decl  const *) = ::clang::CXXDestructorDecl::classof;
    bool  (*method_pointer_59850ea9b4665146bcaa8a83948e71ad)(enum ::clang::Decl::Kind ) = ::clang::CXXDestructorDecl::classofKind;
    class ::clang::FunctionDecl  const * (::clang::CXXDestructorDecl::*method_pointer_663e07fb3fa457c4b8ad64120a87424b)() const = &::clang::CXXDestructorDecl::getOperatorDelete;
    void  (::clang::CXXDestructorDecl::*method_pointer_d86d243e5dc65cd6be885c08ca802cd7)(class ::clang::FunctionDecl  *) = &::clang::CXXDestructorDecl::setOperatorDelete;
    boost::python::class_< class ::clang::CXXDestructorDecl, autowig::HeldType< class ::clang::CXXDestructorDecl >, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_e74d86805e805e54bd75b42dea3808e2("CXXDestructorDecl", "", boost::python::no_init);
    class_e74d86805e805e54bd75b42dea3808e2.def("create_deserialized", method_pointer_f7bb5b02a63b5c0386e9990711da47ad, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e74d86805e805e54bd75b42dea3808e2.def("classof", method_pointer_61f2c164be47558f9e7841fd6f75d9ed, "");
    class_e74d86805e805e54bd75b42dea3808e2.def("classof_kind", method_pointer_59850ea9b4665146bcaa8a83948e71ad, "");
    class_e74d86805e805e54bd75b42dea3808e2.def("get_operator_delete", method_pointer_663e07fb3fa457c4b8ad64120a87424b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e74d86805e805e54bd75b42dea3808e2.def("set_operator_delete", method_pointer_d86d243e5dc65cd6be885c08ca802cd7, "");
    class_e74d86805e805e54bd75b42dea3808e2.staticmethod("classof_kind");
    class_e74d86805e805e54bd75b42dea3808e2.staticmethod("create_deserialized");
    class_e74d86805e805e54bd75b42dea3808e2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::CXXDestructorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CXXDestructorDecl >, autowig::HeldType< class ::clang::CXXMethodDecl > >();
    }

}