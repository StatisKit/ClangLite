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
    class ::clang::CapturedDecl  * (*method_pointer_83b9ab78c92455f0a59c19f7b4cde44d)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, unsigned int ) = ::clang::CapturedDecl::Create;
    class ::clang::CapturedDecl  * (*method_pointer_41ce350e6bf95cc786d9faa3826f5209)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::CapturedDecl::CreateDeserialized;
    class ::clang::CapturedDecl  * (*method_pointer_4b95202876945154a50f6eace33bc614)(class ::clang::DeclContext  const *) = ::clang::CapturedDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_04993a91bf2750ae8f39f3d613112db1)(class ::clang::CapturedDecl  const *) = ::clang::CapturedDecl::castToDeclContext;
    bool  (*method_pointer_939ac4b480845f668aa20cca7c6e00e5)(class ::clang::Decl  const *) = ::clang::CapturedDecl::classof;
    bool  (*method_pointer_ed133cd8db7659f4908aba65d99c5f34)(enum ::clang::Decl::Kind ) = ::clang::CapturedDecl::classofKind;
    class ::clang::ImplicitParamDecl  * (::clang::CapturedDecl::*method_pointer_e15352d948e65882882666a2819c5b15)() const = &::clang::CapturedDecl::getContextParam;
    unsigned int  (::clang::CapturedDecl::*method_pointer_c118377a0efd575daca2d300fd6bd301)() const = &::clang::CapturedDecl::getContextParamPosition;
    unsigned int  (::clang::CapturedDecl::*method_pointer_3ff998176ec354018db231596a096e32)() const = &::clang::CapturedDecl::getNumParams;
    class ::clang::ImplicitParamDecl  * (::clang::CapturedDecl::*method_pointer_d6c8dbc55b1558ce852c98fdfec7b3c5)(unsigned int ) const = &::clang::CapturedDecl::getParam;
    bool  (::clang::CapturedDecl::*method_pointer_56ac58869d655381876c8822ff8c620e)() const = &::clang::CapturedDecl::isNothrow;
    void  (::clang::CapturedDecl::*method_pointer_acbba181be555ee8880be0e29b081a64)(unsigned int , class ::clang::ImplicitParamDecl  *) = &::clang::CapturedDecl::setContextParam;
    void  (::clang::CapturedDecl::*method_pointer_7783c67f065956e38ec642493f8f6528)(bool ) = &::clang::CapturedDecl::setNothrow;
    void  (::clang::CapturedDecl::*method_pointer_2df7b9fbf2f35ba3923dd280728858da)(unsigned int , class ::clang::ImplicitParamDecl  *) = &::clang::CapturedDecl::setParam;
    boost::python::class_< class ::clang::CapturedDecl, autowig::HeldType< class ::clang::CapturedDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_40fbba8dfa075307bb51cf2b9b55fe29("CapturedDecl", "", boost::python::no_init);
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("create", method_pointer_83b9ab78c92455f0a59c19f7b4cde44d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("create_deserialized", method_pointer_41ce350e6bf95cc786d9faa3826f5209, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("cast_from_decl_context", method_pointer_4b95202876945154a50f6eace33bc614, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("cast_to_decl_context", method_pointer_04993a91bf2750ae8f39f3d613112db1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("classof", method_pointer_939ac4b480845f668aa20cca7c6e00e5, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("classof_kind", method_pointer_ed133cd8db7659f4908aba65d99c5f34, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("get_context_param", method_pointer_e15352d948e65882882666a2819c5b15, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("get_context_param_position", method_pointer_c118377a0efd575daca2d300fd6bd301, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("get_num_params", method_pointer_3ff998176ec354018db231596a096e32, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("get_param", method_pointer_d6c8dbc55b1558ce852c98fdfec7b3c5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("is_nothrow", method_pointer_56ac58869d655381876c8822ff8c620e, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("set_context_param", method_pointer_acbba181be555ee8880be0e29b081a64, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("set_nothrow", method_pointer_7783c67f065956e38ec642493f8f6528, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("set_param", method_pointer_2df7b9fbf2f35ba3923dd280728858da, "");
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