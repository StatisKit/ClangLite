#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::CXXDestructorDecl const volatile * get_pointer<class ::clang::CXXDestructorDecl const volatile >(class ::clang::CXXDestructorDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e74d86805e805e54bd75b42dea3808e2()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::CXXDestructorDecl * (*method_pointer_7a3a3fd36078500fb04e1cebf6f6a273)(class ::clang::ASTContext &, unsigned int ) = ::clang::CXXDestructorDecl::CreateDeserialized;
    void  (::clang::CXXDestructorDecl::*method_pointer_800374bc619a5b969b1fdbd1923c918e)(class ::clang::FunctionDecl *) = &::clang::CXXDestructorDecl::setOperatorDelete;
    class ::clang::FunctionDecl const * (::clang::CXXDestructorDecl::*method_pointer_2f82f9f293bd57d1894749fb45852a55)() const = &::clang::CXXDestructorDecl::getOperatorDelete;
    bool  (*method_pointer_3897906730a05a9e8fbbec332c0f5765)(class ::clang::Decl const *) = ::clang::CXXDestructorDecl::classof;
    bool  (*method_pointer_6790c11d18f453f38e3e15b87ef4dbdc)(enum ::clang::Decl::Kind ) = ::clang::CXXDestructorDecl::classofKind;
    boost::python::class_< class ::clang::CXXDestructorDecl, autowig::Held< class ::clang::CXXDestructorDecl >::Type, boost::python::bases< class ::clang::CXXMethodDecl >, boost::noncopyable > class_e74d86805e805e54bd75b42dea3808e2("CXXDestructorDecl", "Represents a C++ destructor within a class.\n\nFor example:\n\n", boost::python::no_init);
    class_e74d86805e805e54bd75b42dea3808e2.def("create_deserialized", method_pointer_7a3a3fd36078500fb04e1cebf6f6a273, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e74d86805e805e54bd75b42dea3808e2.def("set_operator_delete", method_pointer_800374bc619a5b969b1fdbd1923c918e, "");
    class_e74d86805e805e54bd75b42dea3808e2.def("get_operator_delete", method_pointer_2f82f9f293bd57d1894749fb45852a55, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e74d86805e805e54bd75b42dea3808e2.def("classof", method_pointer_3897906730a05a9e8fbbec332c0f5765, "");
    class_e74d86805e805e54bd75b42dea3808e2.def("classof_kind", method_pointer_6790c11d18f453f38e3e15b87ef4dbdc, "");
    class_e74d86805e805e54bd75b42dea3808e2.staticmethod("classof_kind");
    class_e74d86805e805e54bd75b42dea3808e2.staticmethod("create_deserialized");
    class_e74d86805e805e54bd75b42dea3808e2.staticmethod("classof");

    if(autowig::Held< class ::clang::CXXDestructorDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::CXXDestructorDecl >::Type, autowig::Held< class ::clang::CXXMethodDecl >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::clang::CXXDestructorDecl >::Type, boost::python::objects::make_ptr_instance< class ::clang::CXXDestructorDecl, boost::python::objects::pointer_holder< autowig::Held< class ::clang::CXXDestructorDecl >::Type, class ::clang::CXXDestructorDecl > > >();
    }

}