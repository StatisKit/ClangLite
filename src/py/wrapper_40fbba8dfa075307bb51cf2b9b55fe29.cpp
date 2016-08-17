#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_40fbba8dfa075307bb51cf2b9b55fe29()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    unsigned int  (::clang::CapturedDecl::*method_pointer_6815d97372f354798763fec2a388a2dc)() const = &::clang::CapturedDecl::getContextParamPosition;
    class ::clang::CapturedDecl  * (*method_pointer_1e43f4bc0a5159b78c3cd15df67c9c1f)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::CapturedDecl::CreateDeserialized;
    void  (::clang::CapturedDecl::*method_pointer_18d8e6cce6e3506f98976f5c03c0d353)(unsigned int , class ::clang::ImplicitParamDecl  *) = &::clang::CapturedDecl::setContextParam;
    bool  (*method_pointer_8c4d2f9f3e555aae8e11c64439b3a167)(enum ::clang::Decl::Kind ) = ::clang::CapturedDecl::classofKind;
    bool  (::clang::CapturedDecl::*method_pointer_557029f218c0592b99272d5eddc63618)() const = &::clang::CapturedDecl::isNothrow;
    class ::clang::CapturedDecl  * (*method_pointer_e2f12e00073a5a6c809ca653ce85ffd0)(class ::clang::DeclContext  const *) = ::clang::CapturedDecl::castFromDeclContext;
    class ::clang::CapturedDecl  * (*method_pointer_84a593dc0d09583985c95a1eb0a3bf5f)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, unsigned int ) = ::clang::CapturedDecl::Create;
    class ::clang::DeclContext  * (*method_pointer_e74a9c3de57d502da4c635809d7c5595)(class ::clang::CapturedDecl  const *) = ::clang::CapturedDecl::castToDeclContext;
    class ::clang::ImplicitParamDecl  * (::clang::CapturedDecl::*method_pointer_94ff45496c51503cb5e332bf497d494d)(unsigned int ) const = &::clang::CapturedDecl::getParam;
    void  (::clang::CapturedDecl::*method_pointer_b87836c4f77458129fc7cde1cb1d1cba)(bool ) = &::clang::CapturedDecl::setNothrow;
    class ::clang::ImplicitParamDecl  * (::clang::CapturedDecl::*method_pointer_15fbb5e417c35033ba5fbb2e74933890)() const = &::clang::CapturedDecl::getContextParam;
    void  (::clang::CapturedDecl::*method_pointer_0a12e2cec74e521e9286ae21e9bcb74b)(unsigned int , class ::clang::ImplicitParamDecl  *) = &::clang::CapturedDecl::setParam;
    unsigned int  (::clang::CapturedDecl::*method_pointer_b8e7aed5f3d351a5964dd18c99d770ab)() const = &::clang::CapturedDecl::getNumParams;
    bool  (*method_pointer_0d500637e2bc523f808fd2e1ff839422)(class ::clang::Decl  const *) = ::clang::CapturedDecl::classof;
    boost::python::class_< class ::clang::CapturedDecl, autowig::HeldType< class ::clang::CapturedDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_40fbba8dfa075307bb51cf2b9b55fe29("CapturedDecl", "", boost::python::no_init);
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("get_context_param_position", method_pointer_6815d97372f354798763fec2a388a2dc, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("create_deserialized", method_pointer_1e43f4bc0a5159b78c3cd15df67c9c1f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("set_context_param", method_pointer_18d8e6cce6e3506f98976f5c03c0d353, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("classof_kind", method_pointer_8c4d2f9f3e555aae8e11c64439b3a167, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("is_nothrow", method_pointer_557029f218c0592b99272d5eddc63618, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("cast_from_decl_context", method_pointer_e2f12e00073a5a6c809ca653ce85ffd0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("create", method_pointer_84a593dc0d09583985c95a1eb0a3bf5f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("cast_to_decl_context", method_pointer_e74a9c3de57d502da4c635809d7c5595, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("get_param", method_pointer_94ff45496c51503cb5e332bf497d494d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("set_nothrow", method_pointer_b87836c4f77458129fc7cde1cb1d1cba, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("get_context_param", method_pointer_15fbb5e417c35033ba5fbb2e74933890, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("set_param", method_pointer_0a12e2cec74e521e9286ae21e9bcb74b, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("get_num_params", method_pointer_b8e7aed5f3d351a5964dd18c99d770ab, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("classof", method_pointer_0d500637e2bc523f808fd2e1ff839422, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.staticmethod("cast_from_decl_context");
    class_40fbba8dfa075307bb51cf2b9b55fe29.staticmethod("cast_to_decl_context");
    class_40fbba8dfa075307bb51cf2b9b55fe29.staticmethod("create");
    class_40fbba8dfa075307bb51cf2b9b55fe29.staticmethod("classof_kind");
    class_40fbba8dfa075307bb51cf2b9b55fe29.staticmethod("classof");
    class_40fbba8dfa075307bb51cf2b9b55fe29.staticmethod("create_deserialized");

    if(std::is_class< autowig::HeldType< class ::clang::CapturedDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CapturedDecl >, autowig::HeldType< class ::clang::Decl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::CapturedDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}