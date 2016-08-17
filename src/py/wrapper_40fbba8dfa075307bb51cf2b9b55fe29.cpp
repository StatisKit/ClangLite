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
    void  (::clang::CapturedDecl::*method_pointer_34c876bca6a4579da4f5a5234c89739b)(unsigned int , class ::clang::ImplicitParamDecl  *) = &::clang::CapturedDecl::setContextParam;
    class ::clang::ImplicitParamDecl  * (::clang::CapturedDecl::*method_pointer_7be6146306eb5c86b1b8a5fe7d1aa2ef)() const = &::clang::CapturedDecl::getContextParam;
    bool  (*method_pointer_4940ced619045ca6b2a77a1a0f18ab12)(enum ::clang::Decl::Kind ) = ::clang::CapturedDecl::classofKind;
    class ::clang::CapturedDecl  * (*method_pointer_34b8e11ffb715e04828a7964ca0e1730)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, unsigned int ) = ::clang::CapturedDecl::Create;
    class ::clang::CapturedDecl  * (*method_pointer_77372ba7c44b572f94b0ff743b0922f1)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::CapturedDecl::CreateDeserialized;
    unsigned int  (::clang::CapturedDecl::*method_pointer_7f4d8c5756fc55cfa497677780a0d42f)() const = &::clang::CapturedDecl::getContextParamPosition;
    bool  (*method_pointer_eda71f5ae09e50caa34d03d2dc9f29de)(class ::clang::Decl  const *) = ::clang::CapturedDecl::classof;
    void  (::clang::CapturedDecl::*method_pointer_f825c329b7085566a25057132aa388e9)(bool ) = &::clang::CapturedDecl::setNothrow;
    class ::clang::CapturedDecl  * (*method_pointer_4c6210a3f424528b98d37c67d2642eeb)(class ::clang::DeclContext  const *) = ::clang::CapturedDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_cab78d2e583e5773a4e805b769d2447f)(class ::clang::CapturedDecl  const *) = ::clang::CapturedDecl::castToDeclContext;
    bool  (::clang::CapturedDecl::*method_pointer_b68e26148b7c53e28b02ea2e753431a2)() const = &::clang::CapturedDecl::isNothrow;
    unsigned int  (::clang::CapturedDecl::*method_pointer_023ff74917075ae8aa3ae0c81a877dcd)() const = &::clang::CapturedDecl::getNumParams;
    void  (::clang::CapturedDecl::*method_pointer_9edabdb5474d5ee3aec93d0ce22bd355)(unsigned int , class ::clang::ImplicitParamDecl  *) = &::clang::CapturedDecl::setParam;
    class ::clang::ImplicitParamDecl  * (::clang::CapturedDecl::*method_pointer_63a62b3fc8e15b759553642a4880bb21)(unsigned int ) const = &::clang::CapturedDecl::getParam;
    boost::python::class_< class ::clang::CapturedDecl, autowig::HeldType< class ::clang::CapturedDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_40fbba8dfa075307bb51cf2b9b55fe29("CapturedDecl", "", boost::python::no_init);
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("set_context_param", method_pointer_34c876bca6a4579da4f5a5234c89739b, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("get_context_param", method_pointer_7be6146306eb5c86b1b8a5fe7d1aa2ef, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("classof_kind", method_pointer_4940ced619045ca6b2a77a1a0f18ab12, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("create", method_pointer_34b8e11ffb715e04828a7964ca0e1730, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("create_deserialized", method_pointer_77372ba7c44b572f94b0ff743b0922f1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("get_context_param_position", method_pointer_7f4d8c5756fc55cfa497677780a0d42f, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("classof", method_pointer_eda71f5ae09e50caa34d03d2dc9f29de, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("set_nothrow", method_pointer_f825c329b7085566a25057132aa388e9, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("cast_from_decl_context", method_pointer_4c6210a3f424528b98d37c67d2642eeb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("cast_to_decl_context", method_pointer_cab78d2e583e5773a4e805b769d2447f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("is_nothrow", method_pointer_b68e26148b7c53e28b02ea2e753431a2, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("get_num_params", method_pointer_023ff74917075ae8aa3ae0c81a877dcd, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("set_param", method_pointer_9edabdb5474d5ee3aec93d0ce22bd355, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("get_param", method_pointer_63a62b3fc8e15b759553642a4880bb21, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
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