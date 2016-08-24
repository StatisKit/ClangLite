#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_2c0e35bd45075f9c8d8dfc0dec5fe74e()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ExternCContextDecl  * (*method_pointer_43cd9a119057557c91de95d8985c47df)(class ::clang::DeclContext  const *) = ::clang::ExternCContextDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_7c7b495afee8589c8956212638e23c01)(class ::clang::ExternCContextDecl  const *) = ::clang::ExternCContextDecl::castToDeclContext;
    bool  (*method_pointer_e38346bc3b205533819db12b3716347a)(class ::clang::Decl  const *) = ::clang::ExternCContextDecl::classof;
    bool  (*method_pointer_e8b4c93da2a45bd492ea5138dc78f6b0)(enum ::clang::Decl::Kind ) = ::clang::ExternCContextDecl::classofKind;
    boost::python::class_< class ::clang::ExternCContextDecl, autowig::HeldType< class ::clang::ExternCContextDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_2c0e35bd45075f9c8d8dfc0dec5fe74e("ExternCContextDecl", "", boost::python::no_init);
    class_2c0e35bd45075f9c8d8dfc0dec5fe74e.def("cast_from_decl_context", method_pointer_43cd9a119057557c91de95d8985c47df, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_2c0e35bd45075f9c8d8dfc0dec5fe74e.def("cast_to_decl_context", method_pointer_7c7b495afee8589c8956212638e23c01, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_2c0e35bd45075f9c8d8dfc0dec5fe74e.def("classof", method_pointer_e38346bc3b205533819db12b3716347a, "");
    class_2c0e35bd45075f9c8d8dfc0dec5fe74e.def("classof_kind", method_pointer_e8b4c93da2a45bd492ea5138dc78f6b0, "");
    class_2c0e35bd45075f9c8d8dfc0dec5fe74e.staticmethod("classof_kind");
    class_2c0e35bd45075f9c8d8dfc0dec5fe74e.staticmethod("classof");
    class_2c0e35bd45075f9c8d8dfc0dec5fe74e.staticmethod("cast_from_decl_context");
    class_2c0e35bd45075f9c8d8dfc0dec5fe74e.staticmethod("cast_to_decl_context");

    if(std::is_class< autowig::HeldType< class ::clang::ExternCContextDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ExternCContextDecl >, autowig::HeldType< class ::clang::Decl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ExternCContextDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}