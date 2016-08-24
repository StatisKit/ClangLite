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
    class ::clang::BlockDecl  * (*method_pointer_fb1d4619923f50559cf30b35e679071a)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::SourceLocation ) = ::clang::BlockDecl::Create;
    class ::clang::BlockDecl  * (*method_pointer_bc34941a37df5e5db7e579556cfc8bf0)(class ::clang::ASTContext  &, unsigned int ) = ::clang::BlockDecl::CreateDeserialized;
    bool  (::clang::BlockDecl::*method_pointer_6d8b5d2945a2545ebd25aee7a7703870)() const = &::clang::BlockDecl::blockMissingReturnType;
    bool  (::clang::BlockDecl::*method_pointer_cc1485028d995d9a904b6298738cca27)() const = &::clang::BlockDecl::capturesCXXThis;
    bool  (::clang::BlockDecl::*method_pointer_8fa49006c6d85a728686ef3f2ba66b68)(class ::clang::VarDecl  const *) const = &::clang::BlockDecl::capturesVariable;
    class ::clang::BlockDecl  * (*method_pointer_b85c305ad2a259f9a939f210e1ad302d)(class ::clang::DeclContext  const *) = ::clang::BlockDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_aa3ac9ae6852562385b7b7046bf39e86)(class ::clang::BlockDecl  const *) = ::clang::BlockDecl::castToDeclContext;
    bool  (*method_pointer_7c4ce544d93357b9ae29145c6ae51b09)(class ::clang::Decl  const *) = ::clang::BlockDecl::classof;
    bool  (*method_pointer_7e7763ccc3bc537aa56b7b017036774b)(enum ::clang::Decl::Kind ) = ::clang::BlockDecl::classofKind;
    class ::clang::Decl  * (::clang::BlockDecl::*method_pointer_e60d799e99ec5a35902ddb8b04ae2b93)() const = &::clang::BlockDecl::getBlockManglingContextDecl;
    unsigned int  (::clang::BlockDecl::*method_pointer_68ade2ca48965e578f1fe81f510d7579)() const = &::clang::BlockDecl::getBlockManglingNumber;
    class ::clang::SourceLocation  (::clang::BlockDecl::*method_pointer_25a00c91b78e56e1807d0eef80f6ba88)() const = &::clang::BlockDecl::getCaretLocation;
    unsigned int  (::clang::BlockDecl::*method_pointer_8d01df82c0b852c8a238909f4718a168)() const = &::clang::BlockDecl::getNumCaptures;
    unsigned int  (::clang::BlockDecl::*method_pointer_fc7b1ed90e11531e85dcb8b28d569175)() const = &::clang::BlockDecl::getNumParams;
    class ::clang::ParmVarDecl  const * (::clang::BlockDecl::*method_pointer_a747f6f13bd256c2b48d2951e19fc2bd)(unsigned int ) const = &::clang::BlockDecl::getParamDecl;
    class ::clang::ParmVarDecl  * (::clang::BlockDecl::*method_pointer_e4d4b2e6dc6c5cb2a627550a1044b909)(unsigned int ) = &::clang::BlockDecl::getParamDecl;
    bool  (::clang::BlockDecl::*method_pointer_b653f861e55950efb004771bd67fb210)() const = &::clang::BlockDecl::hasCaptures;
    bool  (::clang::BlockDecl::*method_pointer_597bf82447295512a10ed5756206878b)() const = &::clang::BlockDecl::isConversionFromLambda;
    bool  (::clang::BlockDecl::*method_pointer_a38048771c445dfbb9fdc26db3114998)() const = &::clang::BlockDecl::isVariadic;
    bool  (::clang::BlockDecl::*method_pointer_0887b4c996575f228198ab9c646d6290)() const = &::clang::BlockDecl::param_empty;
    unsigned int  (::clang::BlockDecl::*method_pointer_58689c1524e3591fa1e7f9f5ef007b0a)() const = &::clang::BlockDecl::param_size;
    void  (::clang::BlockDecl::*method_pointer_e179ac4a2b035bb5b4e439c549a56e24)(unsigned int , class ::clang::Decl  *) = &::clang::BlockDecl::setBlockMangling;
    void  (::clang::BlockDecl::*method_pointer_2196087435835670996f9c9fe0df9985)(bool ) = &::clang::BlockDecl::setBlockMissingReturnType;
    void  (::clang::BlockDecl::*method_pointer_0f5e65414ed759aca78772feb0dbab8d)(bool ) = &::clang::BlockDecl::setIsConversionFromLambda;
    void  (::clang::BlockDecl::*method_pointer_d6e1e8d913815e7cbcdd7b276ebd9313)(bool ) = &::clang::BlockDecl::setIsVariadic;
    boost::python::class_< class ::clang::BlockDecl, autowig::HeldType< class ::clang::BlockDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_e8de972362795c73b92c7a53a3029be0("BlockDecl", "", boost::python::no_init);
    class_e8de972362795c73b92c7a53a3029be0.def("create", method_pointer_fb1d4619923f50559cf30b35e679071a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("create_deserialized", method_pointer_bc34941a37df5e5db7e579556cfc8bf0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("block_missing_return_type", method_pointer_6d8b5d2945a2545ebd25aee7a7703870, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_cxx_this", method_pointer_cc1485028d995d9a904b6298738cca27, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_variable", method_pointer_8fa49006c6d85a728686ef3f2ba66b68, "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_from_decl_context", method_pointer_b85c305ad2a259f9a939f210e1ad302d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_to_decl_context", method_pointer_aa3ac9ae6852562385b7b7046bf39e86, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof", method_pointer_7c4ce544d93357b9ae29145c6ae51b09, "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof_kind", method_pointer_7e7763ccc3bc537aa56b7b017036774b, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_context_decl", method_pointer_e60d799e99ec5a35902ddb8b04ae2b93, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_number", method_pointer_68ade2ca48965e578f1fe81f510d7579, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_caret_location", method_pointer_25a00c91b78e56e1807d0eef80f6ba88, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_captures", method_pointer_8d01df82c0b852c8a238909f4718a168, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_params", method_pointer_fc7b1ed90e11531e85dcb8b28d569175, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_a747f6f13bd256c2b48d2951e19fc2bd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_e4d4b2e6dc6c5cb2a627550a1044b909, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("has_captures", method_pointer_b653f861e55950efb004771bd67fb210, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_conversion_from_lambda", method_pointer_597bf82447295512a10ed5756206878b, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_variadic", method_pointer_a38048771c445dfbb9fdc26db3114998, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_empty", method_pointer_0887b4c996575f228198ab9c646d6290, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_size", method_pointer_58689c1524e3591fa1e7f9f5ef007b0a, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_mangling", method_pointer_e179ac4a2b035bb5b4e439c549a56e24, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_missing_return_type", method_pointer_2196087435835670996f9c9fe0df9985, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_conversion_from_lambda", method_pointer_0f5e65414ed759aca78772feb0dbab8d, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_variadic", method_pointer_d6e1e8d913815e7cbcdd7b276ebd9313, "");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("cast_from_decl_context");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("cast_to_decl_context");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("create");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("classof_kind");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("classof");
    class_e8de972362795c73b92c7a53a3029be0.staticmethod("create_deserialized");

    if(std::is_class< autowig::HeldType< class ::clang::BlockDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BlockDecl >, autowig::HeldType< class ::clang::Decl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::BlockDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}