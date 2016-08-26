#include "_clanglite.h"


namespace autowig
{
}


void wrapper_5578de9a4833559791574e29dbc59084()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::AccessSpecDecl  * (*method_pointer_5d7140f682bf51988845a386635f57af)(class ::clang::ASTContext  &, unsigned int ) = ::clang::AccessSpecDecl::CreateDeserialized;
    bool  (*method_pointer_a2299863b221566eb6e9281ac8cae86a)(class ::clang::Decl  const *) = ::clang::AccessSpecDecl::classof;
    bool  (*method_pointer_1f93eef49a995a0abc6ca0725892de35)(enum ::clang::Decl::Kind ) = ::clang::AccessSpecDecl::classofKind;
    boost::python::class_< class ::clang::AccessSpecDecl, autowig::HeldType< class ::clang::AccessSpecDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_5578de9a4833559791574e29dbc59084("AccessSpecDecl", "", boost::python::no_init);
    class_5578de9a4833559791574e29dbc59084.def("create_deserialized", method_pointer_5d7140f682bf51988845a386635f57af, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_5578de9a4833559791574e29dbc59084.def("classof", method_pointer_a2299863b221566eb6e9281ac8cae86a, "");
    class_5578de9a4833559791574e29dbc59084.def("classof_kind", method_pointer_1f93eef49a995a0abc6ca0725892de35, "");
    class_5578de9a4833559791574e29dbc59084.staticmethod("classof_kind");
    class_5578de9a4833559791574e29dbc59084.staticmethod("create_deserialized");
    class_5578de9a4833559791574e29dbc59084.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AccessSpecDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AccessSpecDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}