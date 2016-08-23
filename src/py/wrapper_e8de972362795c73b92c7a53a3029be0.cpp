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
    class ::clang::BlockDecl  * (*method_pointer_3deba88bd15a540b92514e3ca0e2ec8b)(class ::clang::ASTContext  &, unsigned int ) = ::clang::BlockDecl::CreateDeserialized;
    bool  (::clang::BlockDecl::*method_pointer_847320f0658c5a18a1b920aeb8dfa820)() const = &::clang::BlockDecl::blockMissingReturnType;
    bool  (::clang::BlockDecl::*method_pointer_e3d307eaad9b5c4baf705c91c4fd37bf)() const = &::clang::BlockDecl::capturesCXXThis;
    bool  (::clang::BlockDecl::*method_pointer_b3a6d719e73452eea3cebdc4b3883097)(class ::clang::VarDecl  const *) const = &::clang::BlockDecl::capturesVariable;
    class ::clang::BlockDecl  * (*method_pointer_92e8b688b3a3572aac56925a95155b1b)(class ::clang::DeclContext  const *) = ::clang::BlockDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_ab53eabf2df9592a8ef49cc1d2fc6151)(class ::clang::BlockDecl  const *) = ::clang::BlockDecl::castToDeclContext;
    bool  (*method_pointer_5cd227c3fb085c13a3db01ac14b83b7e)(class ::clang::Decl  const *) = ::clang::BlockDecl::classof;
    bool  (*method_pointer_4991cc09e723545fb1aa682498cb2c8f)(enum ::clang::Decl::Kind ) = ::clang::BlockDecl::classofKind;
    class ::clang::Decl  * (::clang::BlockDecl::*method_pointer_22c96a6e260f5e59aa13dad2dec2916e)() const = &::clang::BlockDecl::getBlockManglingContextDecl;
    unsigned int  (::clang::BlockDecl::*method_pointer_9c19f6c0b87550c3a667dc705fc3308a)() const = &::clang::BlockDecl::getBlockManglingNumber;
    unsigned int  (::clang::BlockDecl::*method_pointer_a8dfe5c4e2d9548c997f20619385f777)() const = &::clang::BlockDecl::getNumCaptures;
    unsigned int  (::clang::BlockDecl::*method_pointer_ddb27e86497150368bdcb3e5f6fd5fcf)() const = &::clang::BlockDecl::getNumParams;
    class ::clang::ParmVarDecl  const * (::clang::BlockDecl::*method_pointer_7af432ee72a457859c7732fd552bf1ad)(unsigned int ) const = &::clang::BlockDecl::getParamDecl;
    class ::clang::ParmVarDecl  * (::clang::BlockDecl::*method_pointer_a04db45567965560b5018cb03f7f94a0)(unsigned int ) = &::clang::BlockDecl::getParamDecl;
    bool  (::clang::BlockDecl::*method_pointer_ac007e0c7b96526fbb77b5065d5eb225)() const = &::clang::BlockDecl::hasCaptures;
    bool  (::clang::BlockDecl::*method_pointer_c48930f353a25fba86290861731e27c9)() const = &::clang::BlockDecl::isConversionFromLambda;
    bool  (::clang::BlockDecl::*method_pointer_71939413d2ee59fbba7b8c46c5419160)() const = &::clang::BlockDecl::isVariadic;
    bool  (::clang::BlockDecl::*method_pointer_530b1660c3b85ac0bae53143242c7a45)() const = &::clang::BlockDecl::param_empty;
    unsigned int  (::clang::BlockDecl::*method_pointer_34573e48ee065d10bf15059e89ff8b8d)() const = &::clang::BlockDecl::param_size;
    void  (::clang::BlockDecl::*method_pointer_2e7bd6c558b253e1919769e252ba816a)(unsigned int , class ::clang::Decl  *) = &::clang::BlockDecl::setBlockMangling;
    void  (::clang::BlockDecl::*method_pointer_3804d39371e25abe93499aa41aab5db3)(bool ) = &::clang::BlockDecl::setBlockMissingReturnType;
    void  (::clang::BlockDecl::*method_pointer_85418a50de9b57598a23c17b9a1ea386)(bool ) = &::clang::BlockDecl::setIsConversionFromLambda;
    void  (::clang::BlockDecl::*method_pointer_14acd3f42a225429b821f50268e1c0ff)(bool ) = &::clang::BlockDecl::setIsVariadic;
    boost::python::class_< class ::clang::BlockDecl, autowig::HeldType< class ::clang::BlockDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_e8de972362795c73b92c7a53a3029be0("BlockDecl", "", boost::python::no_init);
    class_e8de972362795c73b92c7a53a3029be0.def("create_deserialized", method_pointer_3deba88bd15a540b92514e3ca0e2ec8b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("block_missing_return_type", method_pointer_847320f0658c5a18a1b920aeb8dfa820, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_cxx_this", method_pointer_e3d307eaad9b5c4baf705c91c4fd37bf, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_variable", method_pointer_b3a6d719e73452eea3cebdc4b3883097, "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_from_decl_context", method_pointer_92e8b688b3a3572aac56925a95155b1b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_to_decl_context", method_pointer_ab53eabf2df9592a8ef49cc1d2fc6151, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof", method_pointer_5cd227c3fb085c13a3db01ac14b83b7e, "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof_kind", method_pointer_4991cc09e723545fb1aa682498cb2c8f, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_context_decl", method_pointer_22c96a6e260f5e59aa13dad2dec2916e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_number", method_pointer_9c19f6c0b87550c3a667dc705fc3308a, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_captures", method_pointer_a8dfe5c4e2d9548c997f20619385f777, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_params", method_pointer_ddb27e86497150368bdcb3e5f6fd5fcf, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_7af432ee72a457859c7732fd552bf1ad, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_a04db45567965560b5018cb03f7f94a0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("has_captures", method_pointer_ac007e0c7b96526fbb77b5065d5eb225, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_conversion_from_lambda", method_pointer_c48930f353a25fba86290861731e27c9, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_variadic", method_pointer_71939413d2ee59fbba7b8c46c5419160, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_empty", method_pointer_530b1660c3b85ac0bae53143242c7a45, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_size", method_pointer_34573e48ee065d10bf15059e89ff8b8d, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_mangling", method_pointer_2e7bd6c558b253e1919769e252ba816a, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_missing_return_type", method_pointer_3804d39371e25abe93499aa41aab5db3, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_conversion_from_lambda", method_pointer_85418a50de9b57598a23c17b9a1ea386, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_variadic", method_pointer_14acd3f42a225429b821f50268e1c0ff, "");
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