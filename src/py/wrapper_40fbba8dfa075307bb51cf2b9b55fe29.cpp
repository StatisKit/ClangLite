#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_40fbba8dfa075307bb51cf2b9b55fe29()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::CapturedDecl  * (*method_pointer_3c8736d2f3e9576eb8838e7c439f9d41)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, unsigned int ) = ::clang::CapturedDecl::Create;
    class ::clang::CapturedDecl  * (*method_pointer_fcc1b868727c5303b1ad5fd60d421f84)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::CapturedDecl::CreateDeserialized;
    class ::clang::CapturedDecl  * (*method_pointer_d32f1a8a84355f67aa1ac07fb1829338)(class ::clang::DeclContext  const *) = ::clang::CapturedDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_c6257351988d545fb6c9e0bd826d7b13)(class ::clang::CapturedDecl  const *) = ::clang::CapturedDecl::castToDeclContext;
    bool  (*method_pointer_25f50b96e43d5b0193b8ed7d77db378f)(class ::clang::Decl  const *) = ::clang::CapturedDecl::classof;
    bool  (*method_pointer_3c78c5830370583281f211da6db1bb9d)(enum ::clang::Decl::Kind ) = ::clang::CapturedDecl::classofKind;
    class ::clang::ImplicitParamDecl  * (::clang::CapturedDecl::*method_pointer_c123614707b65d649596c0dc96a4c333)() const = &::clang::CapturedDecl::getContextParam;
    unsigned int  (::clang::CapturedDecl::*method_pointer_d1837160c5fc5a559d713edafc363765)() const = &::clang::CapturedDecl::getContextParamPosition;
    unsigned int  (::clang::CapturedDecl::*method_pointer_1f167ce77a9e56d19f6435860d4852a5)() const = &::clang::CapturedDecl::getNumParams;
    class ::clang::ImplicitParamDecl  * (::clang::CapturedDecl::*method_pointer_3991df07c372533d957bdc2a2f70a148)(unsigned int ) const = &::clang::CapturedDecl::getParam;
    bool  (::clang::CapturedDecl::*method_pointer_98c87df8844e54c7b46158df6098b868)() const = &::clang::CapturedDecl::isNothrow;
    void  (::clang::CapturedDecl::*method_pointer_4340065b8c845615b94536ed8fd72262)(unsigned int , class ::clang::ImplicitParamDecl  *) = &::clang::CapturedDecl::setContextParam;
    void  (::clang::CapturedDecl::*method_pointer_b291fd00dae15f46a4dd996b8cfe9537)(bool ) = &::clang::CapturedDecl::setNothrow;
    void  (::clang::CapturedDecl::*method_pointer_379a759a789b543f949d2d8056a10e8b)(unsigned int , class ::clang::ImplicitParamDecl  *) = &::clang::CapturedDecl::setParam;
    boost::python::class_< class ::clang::CapturedDecl, autowig::HeldType< class ::clang::CapturedDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_40fbba8dfa075307bb51cf2b9b55fe29("CapturedDecl", "", boost::python::no_init);
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("create", method_pointer_3c8736d2f3e9576eb8838e7c439f9d41, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("create_deserialized", method_pointer_fcc1b868727c5303b1ad5fd60d421f84, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("cast_from_decl_context", method_pointer_d32f1a8a84355f67aa1ac07fb1829338, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("cast_to_decl_context", method_pointer_c6257351988d545fb6c9e0bd826d7b13, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("classof", method_pointer_25f50b96e43d5b0193b8ed7d77db378f, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("classof_kind", method_pointer_3c78c5830370583281f211da6db1bb9d, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("get_context_param", method_pointer_c123614707b65d649596c0dc96a4c333, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("get_context_param_position", method_pointer_d1837160c5fc5a559d713edafc363765, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("get_num_params", method_pointer_1f167ce77a9e56d19f6435860d4852a5, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("get_param", method_pointer_3991df07c372533d957bdc2a2f70a148, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("is_nothrow", method_pointer_98c87df8844e54c7b46158df6098b868, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("set_context_param", method_pointer_4340065b8c845615b94536ed8fd72262, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("set_nothrow", method_pointer_b291fd00dae15f46a4dd996b8cfe9537, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("set_param", method_pointer_379a759a789b543f949d2d8056a10e8b, "");
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