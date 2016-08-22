#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_90fba55bcadf52088b0326eb2a205040()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCAtDefsFieldDecl  * (*method_pointer_701d8155f3d852c2bdaca549f84383a7)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCAtDefsFieldDecl::CreateDeserialized;
    bool  (*method_pointer_e150710ddac05ba6817d02180ed8f128)(class ::clang::Decl  const *) = ::clang::ObjCAtDefsFieldDecl::classof;
    bool  (*method_pointer_c3170d145b8751b78812ba6db85d3cbb)(enum ::clang::Decl::Kind ) = ::clang::ObjCAtDefsFieldDecl::classofKind;
    boost::python::class_< class ::clang::ObjCAtDefsFieldDecl, autowig::HeldType< class ::clang::ObjCAtDefsFieldDecl >, boost::python::bases< class ::clang::FieldDecl >, boost::noncopyable > class_90fba55bcadf52088b0326eb2a205040("ObjCAtDefsFieldDecl", "", boost::python::no_init);
    class_90fba55bcadf52088b0326eb2a205040.def("create_deserialized", method_pointer_701d8155f3d852c2bdaca549f84383a7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_90fba55bcadf52088b0326eb2a205040.def("classof", method_pointer_e150710ddac05ba6817d02180ed8f128, "");
    class_90fba55bcadf52088b0326eb2a205040.def("classof_kind", method_pointer_c3170d145b8751b78812ba6db85d3cbb, "");
    class_90fba55bcadf52088b0326eb2a205040.staticmethod("classof_kind");
    class_90fba55bcadf52088b0326eb2a205040.staticmethod("create_deserialized");
    class_90fba55bcadf52088b0326eb2a205040.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCAtDefsFieldDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCAtDefsFieldDecl >, autowig::HeldType< class ::clang::FieldDecl > >();
    }

}