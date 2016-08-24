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
    class ::clang::CapturedDecl  * (*method_pointer_280e46d9c08e5019938962b90e304574)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, unsigned int ) = ::clang::CapturedDecl::Create;
    class ::clang::CapturedDecl  * (*method_pointer_00b5078b21ff5ee684bd39390503959e)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::CapturedDecl::CreateDeserialized;
    class ::clang::CapturedDecl  * (*method_pointer_4c7b56e4b2ca545189b6f2832dfa8eac)(class ::clang::DeclContext  const *) = ::clang::CapturedDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_e815d961cfd95cefa387ebb1612e0b77)(class ::clang::CapturedDecl  const *) = ::clang::CapturedDecl::castToDeclContext;
    bool  (*method_pointer_f039ba46ea43528db0fe7d4f7e1df3de)(class ::clang::Decl  const *) = ::clang::CapturedDecl::classof;
    bool  (*method_pointer_efc49d40851556d3a621211272df03e6)(enum ::clang::Decl::Kind ) = ::clang::CapturedDecl::classofKind;
    class ::clang::ImplicitParamDecl  * (::clang::CapturedDecl::*method_pointer_245847bf6b055d38a91870421e184004)() const = &::clang::CapturedDecl::getContextParam;
    unsigned int  (::clang::CapturedDecl::*method_pointer_62fc95215f9f5301840f1dfa742f3228)() const = &::clang::CapturedDecl::getContextParamPosition;
    unsigned int  (::clang::CapturedDecl::*method_pointer_7c7f1eef1519593197bc74c59e4f2950)() const = &::clang::CapturedDecl::getNumParams;
    class ::clang::ImplicitParamDecl  * (::clang::CapturedDecl::*method_pointer_115d74f0397559c6bddaee7cd53a02e6)(unsigned int ) const = &::clang::CapturedDecl::getParam;
    bool  (::clang::CapturedDecl::*method_pointer_fb1f063596c151f99641cead5ccd95e2)() const = &::clang::CapturedDecl::isNothrow;
    void  (::clang::CapturedDecl::*method_pointer_0d9ca4b1dbc759cbb09dbba04b6374ad)(unsigned int , class ::clang::ImplicitParamDecl  *) = &::clang::CapturedDecl::setContextParam;
    void  (::clang::CapturedDecl::*method_pointer_8c709606a4ed58df9b9e02c1f2dabfe0)(bool ) = &::clang::CapturedDecl::setNothrow;
    void  (::clang::CapturedDecl::*method_pointer_71c4db2361bc5ee6ab09186de5b180e8)(unsigned int , class ::clang::ImplicitParamDecl  *) = &::clang::CapturedDecl::setParam;
    boost::python::class_< class ::clang::CapturedDecl, autowig::HeldType< class ::clang::CapturedDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_40fbba8dfa075307bb51cf2b9b55fe29("CapturedDecl", "", boost::python::no_init);
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("create", method_pointer_280e46d9c08e5019938962b90e304574, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("create_deserialized", method_pointer_00b5078b21ff5ee684bd39390503959e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("cast_from_decl_context", method_pointer_4c7b56e4b2ca545189b6f2832dfa8eac, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("cast_to_decl_context", method_pointer_e815d961cfd95cefa387ebb1612e0b77, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("classof", method_pointer_f039ba46ea43528db0fe7d4f7e1df3de, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("classof_kind", method_pointer_efc49d40851556d3a621211272df03e6, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("get_context_param", method_pointer_245847bf6b055d38a91870421e184004, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("get_context_param_position", method_pointer_62fc95215f9f5301840f1dfa742f3228, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("get_num_params", method_pointer_7c7f1eef1519593197bc74c59e4f2950, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("get_param", method_pointer_115d74f0397559c6bddaee7cd53a02e6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("is_nothrow", method_pointer_fb1f063596c151f99641cead5ccd95e2, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("set_context_param", method_pointer_0d9ca4b1dbc759cbb09dbba04b6374ad, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("set_nothrow", method_pointer_8c709606a4ed58df9b9e02c1f2dabfe0, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("set_param", method_pointer_71c4db2361bc5ee6ab09186de5b180e8, "");
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