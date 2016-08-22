#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_8792dec06996512a853ddf675dc4d4a5()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TypedefDecl  * (*method_pointer_dacb167e857452138d4624a5cf088151)(class ::clang::ASTContext  &, unsigned int ) = ::clang::TypedefDecl::CreateDeserialized;
    bool  (*method_pointer_862797fe13755ab3aea96c122f590b87)(class ::clang::Decl  const *) = ::clang::TypedefDecl::classof;
    bool  (*method_pointer_666d8323c7515ef29509df6966590db4)(enum ::clang::Decl::Kind ) = ::clang::TypedefDecl::classofKind;
    boost::python::class_< class ::clang::TypedefDecl, autowig::HeldType< class ::clang::TypedefDecl >, boost::python::bases< class ::clang::TypedefNameDecl >, boost::noncopyable > class_8792dec06996512a853ddf675dc4d4a5("TypedefDecl", "", boost::python::no_init);
    class_8792dec06996512a853ddf675dc4d4a5.def("create_deserialized", method_pointer_dacb167e857452138d4624a5cf088151, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8792dec06996512a853ddf675dc4d4a5.def("classof", method_pointer_862797fe13755ab3aea96c122f590b87, "");
    class_8792dec06996512a853ddf675dc4d4a5.def("classof_kind", method_pointer_666d8323c7515ef29509df6966590db4, "");
    class_8792dec06996512a853ddf675dc4d4a5.staticmethod("classof_kind");
    class_8792dec06996512a853ddf675dc4d4a5.staticmethod("create_deserialized");
    class_8792dec06996512a853ddf675dc4d4a5.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypedefDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypedefDecl >, autowig::HeldType< class ::clang::TypedefNameDecl > >();
    }

}