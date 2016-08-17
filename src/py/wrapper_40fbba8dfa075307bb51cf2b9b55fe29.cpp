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
    void  (::clang::CapturedDecl::*method_pointer_801d214150ef5ff89a593a61e1265f7f)(bool ) = &::clang::CapturedDecl::setNothrow;
    void  (::clang::CapturedDecl::*method_pointer_ea98d4f8aa755f3db3a666d0edd9e9d7)(unsigned int , class ::clang::ImplicitParamDecl  *) = &::clang::CapturedDecl::setParam;
    class ::clang::CapturedDecl  * (*method_pointer_863a143d59ff51d5915351c554477e07)(class ::clang::ASTContext  &, unsigned int , unsigned int ) = ::clang::CapturedDecl::CreateDeserialized;
    class ::clang::CapturedDecl  * (*method_pointer_4dbd3dd7dd6551b7a5493be48e2e3b21)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, unsigned int ) = ::clang::CapturedDecl::Create;
    class ::clang::ImplicitParamDecl  * (::clang::CapturedDecl::*method_pointer_1a4d061c4390582db5404bd0057532eb)() const = &::clang::CapturedDecl::getContextParam;
    void  (::clang::CapturedDecl::*method_pointer_d265bdfc5a055ed9a3eb2e9278e5dbca)(unsigned int , class ::clang::ImplicitParamDecl  *) = &::clang::CapturedDecl::setContextParam;
    bool  (*method_pointer_0461416a815b528b8cdab57c885caedd)(enum ::clang::Decl::Kind ) = ::clang::CapturedDecl::classofKind;
    class ::clang::DeclContext  * (*method_pointer_25d3bf9bc60f594d95dfde6fee8d4e79)(class ::clang::CapturedDecl  const *) = ::clang::CapturedDecl::castToDeclContext;
    class ::clang::ImplicitParamDecl  * (::clang::CapturedDecl::*method_pointer_fd7f4c7435e05b5db6f77962bd1890a0)(unsigned int ) const = &::clang::CapturedDecl::getParam;
    unsigned int  (::clang::CapturedDecl::*method_pointer_bd5e746348165ed89eda19e84104e3fa)() const = &::clang::CapturedDecl::getContextParamPosition;
    bool  (::clang::CapturedDecl::*method_pointer_5036abe5250d51a292a9e1efbd8ed042)() const = &::clang::CapturedDecl::isNothrow;
    class ::clang::CapturedDecl  * (*method_pointer_ea209aafb6ca59faaeefddf876947635)(class ::clang::DeclContext  const *) = ::clang::CapturedDecl::castFromDeclContext;
    unsigned int  (::clang::CapturedDecl::*method_pointer_693d7834b7ef5264975fb54cdabd9cbb)() const = &::clang::CapturedDecl::getNumParams;
    bool  (*method_pointer_57fb85d18b7f50a7b65bcd7bb507098d)(class ::clang::Decl  const *) = ::clang::CapturedDecl::classof;
    boost::python::class_< class ::clang::CapturedDecl, autowig::HeldType< class ::clang::CapturedDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_40fbba8dfa075307bb51cf2b9b55fe29("CapturedDecl", "", boost::python::no_init);
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("set_nothrow", method_pointer_801d214150ef5ff89a593a61e1265f7f, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("set_param", method_pointer_ea98d4f8aa755f3db3a666d0edd9e9d7, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("create_deserialized", method_pointer_863a143d59ff51d5915351c554477e07, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("create", method_pointer_4dbd3dd7dd6551b7a5493be48e2e3b21, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("get_context_param", method_pointer_1a4d061c4390582db5404bd0057532eb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("set_context_param", method_pointer_d265bdfc5a055ed9a3eb2e9278e5dbca, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("classof_kind", method_pointer_0461416a815b528b8cdab57c885caedd, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("cast_to_decl_context", method_pointer_25d3bf9bc60f594d95dfde6fee8d4e79, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("get_param", method_pointer_fd7f4c7435e05b5db6f77962bd1890a0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("get_context_param_position", method_pointer_bd5e746348165ed89eda19e84104e3fa, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("is_nothrow", method_pointer_5036abe5250d51a292a9e1efbd8ed042, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("cast_from_decl_context", method_pointer_ea209aafb6ca59faaeefddf876947635, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("get_num_params", method_pointer_693d7834b7ef5264975fb54cdabd9cbb, "");
    class_40fbba8dfa075307bb51cf2b9b55fe29.def("classof", method_pointer_57fb85d18b7f50a7b65bcd7bb507098d, "");
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