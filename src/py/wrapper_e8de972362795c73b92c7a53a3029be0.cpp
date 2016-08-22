#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_e8de972362795c73b92c7a53a3029be0()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::BlockDecl  * (*method_pointer_8e3992f30184548690ae00eb597aa5ef)(class ::clang::ASTContext  &, unsigned int ) = ::clang::BlockDecl::CreateDeserialized;
    bool  (::clang::BlockDecl::*method_pointer_8a54ba4637bd5a458212d7c6ca63072b)() const = &::clang::BlockDecl::blockMissingReturnType;
    bool  (::clang::BlockDecl::*method_pointer_e4e46c10dc2654edb53af30fb7e18a98)() const = &::clang::BlockDecl::capturesCXXThis;
    bool  (::clang::BlockDecl::*method_pointer_8b9ca66560505aeca97d5849513b8639)(class ::clang::VarDecl  const *) const = &::clang::BlockDecl::capturesVariable;
    class ::clang::BlockDecl  * (*method_pointer_091080999eda5e9493bdeaba899ca377)(class ::clang::DeclContext  const *) = ::clang::BlockDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_306449499c72566daa44e2e24c1e7bb3)(class ::clang::BlockDecl  const *) = ::clang::BlockDecl::castToDeclContext;
    bool  (*method_pointer_8a43f8dc212e5c95b7218ff7e71b85ae)(class ::clang::Decl  const *) = ::clang::BlockDecl::classof;
    bool  (*method_pointer_33880b44a7925c8a9cc201e829ac5e9e)(enum ::clang::Decl::Kind ) = ::clang::BlockDecl::classofKind;
    class ::clang::Decl  * (::clang::BlockDecl::*method_pointer_d0ba1533f0db5131b9b993aba8b18423)() const = &::clang::BlockDecl::getBlockManglingContextDecl;
    unsigned int  (::clang::BlockDecl::*method_pointer_7e16091c8a6c59318547aaea58245187)() const = &::clang::BlockDecl::getBlockManglingNumber;
    unsigned int  (::clang::BlockDecl::*method_pointer_ba6a1f9b3f5851b79ed13f322bbfa3e1)() const = &::clang::BlockDecl::getNumCaptures;
    unsigned int  (::clang::BlockDecl::*method_pointer_2f4cdeeac1e25e02860cadfdc418859a)() const = &::clang::BlockDecl::getNumParams;
    class ::clang::ParmVarDecl  * (::clang::BlockDecl::*method_pointer_347a6539eef45372af51c93144cda72c)(unsigned int ) = &::clang::BlockDecl::getParamDecl;
    class ::clang::ParmVarDecl  const * (::clang::BlockDecl::*method_pointer_779627df6bb55fd7aa14f22fdc101aab)(unsigned int ) const = &::clang::BlockDecl::getParamDecl;
    bool  (::clang::BlockDecl::*method_pointer_aa5a6b11eb0650d383ea351656e1599a)() const = &::clang::BlockDecl::hasCaptures;
    bool  (::clang::BlockDecl::*method_pointer_7476d59fcdaf5c5c94a36aadd175da82)() const = &::clang::BlockDecl::isConversionFromLambda;
    bool  (::clang::BlockDecl::*method_pointer_3c08292c12ac5caaafa9dbc21b1eec32)() const = &::clang::BlockDecl::isVariadic;
    bool  (::clang::BlockDecl::*method_pointer_fedf07ae63805c8aa7675e6bf2251a4a)() const = &::clang::BlockDecl::param_empty;
    unsigned int  (::clang::BlockDecl::*method_pointer_ac91c7b287a252ddac36c5250555703d)() const = &::clang::BlockDecl::param_size;
    void  (::clang::BlockDecl::*method_pointer_ae81722b9d6c5c7cac8a42f619dc4abd)(unsigned int , class ::clang::Decl  *) = &::clang::BlockDecl::setBlockMangling;
    void  (::clang::BlockDecl::*method_pointer_52580391cd4857a8b5620cb8eeba1ce0)(bool ) = &::clang::BlockDecl::setBlockMissingReturnType;
    void  (::clang::BlockDecl::*method_pointer_3b1163439bdc590b9265cc2ad2709fea)(bool ) = &::clang::BlockDecl::setIsConversionFromLambda;
    void  (::clang::BlockDecl::*method_pointer_65a6f158beea5c4bbd814da6389497af)(bool ) = &::clang::BlockDecl::setIsVariadic;
    boost::python::class_< class ::clang::BlockDecl, autowig::HeldType< class ::clang::BlockDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_e8de972362795c73b92c7a53a3029be0("BlockDecl", "", boost::python::no_init);
    class_e8de972362795c73b92c7a53a3029be0.def("create_deserialized", method_pointer_8e3992f30184548690ae00eb597aa5ef, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("block_missing_return_type", method_pointer_8a54ba4637bd5a458212d7c6ca63072b, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_cxx_this", method_pointer_e4e46c10dc2654edb53af30fb7e18a98, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_variable", method_pointer_8b9ca66560505aeca97d5849513b8639, "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_from_decl_context", method_pointer_091080999eda5e9493bdeaba899ca377, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_to_decl_context", method_pointer_306449499c72566daa44e2e24c1e7bb3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof", method_pointer_8a43f8dc212e5c95b7218ff7e71b85ae, "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof_kind", method_pointer_33880b44a7925c8a9cc201e829ac5e9e, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_context_decl", method_pointer_d0ba1533f0db5131b9b993aba8b18423, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_number", method_pointer_7e16091c8a6c59318547aaea58245187, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_captures", method_pointer_ba6a1f9b3f5851b79ed13f322bbfa3e1, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_params", method_pointer_2f4cdeeac1e25e02860cadfdc418859a, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_347a6539eef45372af51c93144cda72c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_779627df6bb55fd7aa14f22fdc101aab, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("has_captures", method_pointer_aa5a6b11eb0650d383ea351656e1599a, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_conversion_from_lambda", method_pointer_7476d59fcdaf5c5c94a36aadd175da82, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_variadic", method_pointer_3c08292c12ac5caaafa9dbc21b1eec32, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_empty", method_pointer_fedf07ae63805c8aa7675e6bf2251a4a, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_size", method_pointer_ac91c7b287a252ddac36c5250555703d, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_mangling", method_pointer_ae81722b9d6c5c7cac8a42f619dc4abd, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_missing_return_type", method_pointer_52580391cd4857a8b5620cb8eeba1ce0, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_conversion_from_lambda", method_pointer_3b1163439bdc590b9265cc2ad2709fea, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_variadic", method_pointer_65a6f158beea5c4bbd814da6389497af, "");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("classof_kind");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("create_deserialized");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("classof");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("cast_from_decl_context");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("cast_to_decl_context");

    if(std::is_class< autowig::HeldType< class ::clang::BlockDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BlockDecl >, autowig::HeldType< class ::clang::Decl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BlockDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}