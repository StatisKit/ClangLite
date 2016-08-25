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
    class ::clang::CapturedDecl  * (*method_pointer_0b9b3e84e24f596fa82324223fa57eff)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, unsigned int ) = ::clang::CapturedDecl::Create;
    class ::clang::CapturedDecl  * (*method_pointer_183fd02ef0965f0c8115e1436d95db8c)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::CapturedDecl::CreateDeserialized;
    class ::clang::CapturedDecl  * (*method_pointer_93850f00e0e854a0ba288f3da9347eba)(class ::clang::DeclContext  const *) = ::clang::CapturedDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_983677650428521b818da73df9a11bf8)(class ::clang::CapturedDecl  const *) = ::clang::CapturedDecl::castToDeclContext;
    bool  (*method_pointer_48750f2ff99e5e3599db06af1278f676)(class ::clang::Decl  const *) = ::clang::CapturedDecl::classof;
    bool  (*method_pointer_2a68a526e795598894f1232e0a7e244d)(enum ::clang::Decl::Kind ) = ::clang::CapturedDecl::classofKind;
    class ::clang::ImplicitParamDecl  * (::clang::CapturedDecl::*method_pointer_ff3c5c2b709a5edd803871e09063e4aa)() const = &::clang::CapturedDecl::getContextParam;
    unsigned int  (::clang::CapturedDecl::*method_pointer_28cf03b299ac5675b0d55cad59cce986)() const = &::clang::CapturedDecl::getContextParamPosition;
    unsigned int  (::clang::CapturedDecl::*method_pointer_4a778f2541355b4387b700cc6fa2965f)() const = &::clang::CapturedDecl::getNumParams;
    class ::clang::ImplicitParamDecl  * (::clang::CapturedDecl::*method_pointer_882d492e6c515688ab1615eec7f5aef4)(unsigned int ) const = &::clang::CapturedDecl::getParam;
    bool  (::clang::CapturedDecl::*method_pointer_f92cadcd9f9a5b9cb3313e9be2d51975)() const = &::clang::CapturedDecl::isNothrow;
    void  (::clang::CapturedDecl::*method_pointer_90fa316c5c5c5686ab629e13d978180f)(unsigned int , class ::clang::ImplicitParamDecl  *) = &::clang::CapturedDecl::setContextParam;
    void  (::clang::CapturedDecl::*method_pointer_72e0e0449e8b504f95f3f3523ce870eb)(bool ) = &::clang::CapturedDecl::setNothrow;
    void  (::clang::CapturedDecl::*method_pointer_859f52f3e34a5efcb43501e4c20cf5c7)(unsigned int , class ::clang::ImplicitParamDecl  *) = &::clang::CapturedDecl::setParam;
    boost::python::class_< class ::clang::CapturedDecl, autowig::HeldType< class ::clang::CapturedDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_40fbba8dfa075307bb51cf2b9b55fe29("CapturedDecl", "", boost::python::no_init);
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("create", method_pointer_0b9b3e84e24f596fa82324223fa57eff, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("create_deserialized", method_pointer_183fd02ef0965f0c8115e1436d95db8c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("cast_from_decl_context", method_pointer_93850f00e0e854a0ba288f3da9347eba, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("cast_to_decl_context", method_pointer_983677650428521b818da73df9a11bf8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("classof", method_pointer_48750f2ff99e5e3599db06af1278f676, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("classof_kind", method_pointer_2a68a526e795598894f1232e0a7e244d, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("get_context_param", method_pointer_ff3c5c2b709a5edd803871e09063e4aa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("get_context_param_position", method_pointer_28cf03b299ac5675b0d55cad59cce986, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("get_num_params", method_pointer_4a778f2541355b4387b700cc6fa2965f, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("get_param", method_pointer_882d492e6c515688ab1615eec7f5aef4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("is_nothrow", method_pointer_f92cadcd9f9a5b9cb3313e9be2d51975, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("set_context_param", method_pointer_90fa316c5c5c5686ab629e13d978180f, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("set_nothrow", method_pointer_72e0e0449e8b504f95f3f3523ce870eb, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("set_param", method_pointer_859f52f3e34a5efcb43501e4c20cf5c7, "");
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