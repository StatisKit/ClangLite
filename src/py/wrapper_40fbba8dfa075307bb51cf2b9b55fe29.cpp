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
    class ::clang::CapturedDecl  * (*method_pointer_9a92804847f8511da272b9395338f29b)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, unsigned int ) = ::clang::CapturedDecl::Create;
    class ::clang::CapturedDecl  * (*method_pointer_1d0603c42411556281652c08bd7f2a68)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::CapturedDecl::CreateDeserialized;
    class ::clang::CapturedDecl  * (*method_pointer_7682b1c073ff5c179189d9b811dffe89)(class ::clang::DeclContext  const *) = ::clang::CapturedDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_9616ae683f835df08476ad4cef6a8eae)(class ::clang::CapturedDecl  const *) = ::clang::CapturedDecl::castToDeclContext;
    bool  (*method_pointer_b1f4594f7f475a3eb46c422e6808f5e6)(class ::clang::Decl  const *) = ::clang::CapturedDecl::classof;
    bool  (*method_pointer_5caebfc996f25207954cf311e67980ca)(enum ::clang::Decl::Kind ) = ::clang::CapturedDecl::classofKind;
    class ::clang::ImplicitParamDecl  * (::clang::CapturedDecl::*method_pointer_0600d023aa85510aa2c6848da8a98251)() const = &::clang::CapturedDecl::getContextParam;
    unsigned int  (::clang::CapturedDecl::*method_pointer_8b8339bb3d42584e96f4bed00112bf48)() const = &::clang::CapturedDecl::getContextParamPosition;
    unsigned int  (::clang::CapturedDecl::*method_pointer_4a6ca907f4b55a24bf6ed627cbf69466)() const = &::clang::CapturedDecl::getNumParams;
    class ::clang::ImplicitParamDecl  * (::clang::CapturedDecl::*method_pointer_aef32c2dc05859ef9a29e39019a79695)(unsigned int ) const = &::clang::CapturedDecl::getParam;
    bool  (::clang::CapturedDecl::*method_pointer_e0a7075c87cd5236b1bf504cb0aefda3)() const = &::clang::CapturedDecl::isNothrow;
    void  (::clang::CapturedDecl::*method_pointer_de238677ef2e5d7bb64dee53459a195f)(unsigned int , class ::clang::ImplicitParamDecl  *) = &::clang::CapturedDecl::setContextParam;
    void  (::clang::CapturedDecl::*method_pointer_b72666017b7251918916f17d9da6a51d)(bool ) = &::clang::CapturedDecl::setNothrow;
    void  (::clang::CapturedDecl::*method_pointer_0a87f2b187c752e88c3fbcd81a47124d)(unsigned int , class ::clang::ImplicitParamDecl  *) = &::clang::CapturedDecl::setParam;
    boost::python::class_< class ::clang::CapturedDecl, autowig::HeldType< class ::clang::CapturedDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_40fbba8dfa075307bb51cf2b9b55fe29("CapturedDecl", "", boost::python::no_init);
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("create", method_pointer_9a92804847f8511da272b9395338f29b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("create_deserialized", method_pointer_1d0603c42411556281652c08bd7f2a68, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("cast_from_decl_context", method_pointer_7682b1c073ff5c179189d9b811dffe89, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("cast_to_decl_context", method_pointer_9616ae683f835df08476ad4cef6a8eae, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("classof", method_pointer_b1f4594f7f475a3eb46c422e6808f5e6, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("classof_kind", method_pointer_5caebfc996f25207954cf311e67980ca, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("get_context_param", method_pointer_0600d023aa85510aa2c6848da8a98251, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("get_context_param_position", method_pointer_8b8339bb3d42584e96f4bed00112bf48, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("get_num_params", method_pointer_4a6ca907f4b55a24bf6ed627cbf69466, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("get_param", method_pointer_aef32c2dc05859ef9a29e39019a79695, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("is_nothrow", method_pointer_e0a7075c87cd5236b1bf504cb0aefda3, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("set_context_param", method_pointer_de238677ef2e5d7bb64dee53459a195f, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("set_nothrow", method_pointer_b72666017b7251918916f17d9da6a51d, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("set_param", method_pointer_0a87f2b187c752e88c3fbcd81a47124d, "");
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