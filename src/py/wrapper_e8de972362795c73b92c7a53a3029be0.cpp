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
    class ::clang::BlockDecl  * (*method_pointer_94efbdf768f05e068176924b6dd11ca9)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::SourceLocation ) = ::clang::BlockDecl::Create;
    class ::clang::BlockDecl  * (*method_pointer_fa17e71bf0275b0d8f6d53218540c8fc)(class ::clang::ASTContext  &, unsigned int ) = ::clang::BlockDecl::CreateDeserialized;
    bool  (::clang::BlockDecl::*method_pointer_ab43b56db3935b08b2f73aa6ec3fa476)() const = &::clang::BlockDecl::blockMissingReturnType;
    bool  (::clang::BlockDecl::*method_pointer_3d2164199fe952b8bf9dbadb2266320a)() const = &::clang::BlockDecl::capturesCXXThis;
    bool  (::clang::BlockDecl::*method_pointer_e641c300382353c398cedf6796c4a0e3)(class ::clang::VarDecl  const *) const = &::clang::BlockDecl::capturesVariable;
    class ::clang::BlockDecl  * (*method_pointer_eee2ebcdba3a503a97be89c98f3f5b51)(class ::clang::DeclContext  const *) = ::clang::BlockDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_5a977ca69b155194be4fa08f41a0ed7f)(class ::clang::BlockDecl  const *) = ::clang::BlockDecl::castToDeclContext;
    bool  (*method_pointer_b4426cc6a1f45bbdbfff67bcb66095ef)(class ::clang::Decl  const *) = ::clang::BlockDecl::classof;
    bool  (*method_pointer_1282ab53c8cf58748e15acc17644d3e8)(enum ::clang::Decl::Kind ) = ::clang::BlockDecl::classofKind;
    class ::clang::Decl  * (::clang::BlockDecl::*method_pointer_7cddb057e7d2557e8219e80095144f66)() const = &::clang::BlockDecl::getBlockManglingContextDecl;
    unsigned int  (::clang::BlockDecl::*method_pointer_f41f695a112456e39fc26e53004ee7ac)() const = &::clang::BlockDecl::getBlockManglingNumber;
    class ::clang::SourceLocation  (::clang::BlockDecl::*method_pointer_164fe3d10bca5f11b51d74ffe4a968cd)() const = &::clang::BlockDecl::getCaretLocation;
    unsigned int  (::clang::BlockDecl::*method_pointer_0315d703ef92522d9d2eb02782995ba2)() const = &::clang::BlockDecl::getNumCaptures;
    unsigned int  (::clang::BlockDecl::*method_pointer_2ed6351c8a3a57d3b0c1649fc1e4d9c9)() const = &::clang::BlockDecl::getNumParams;
    class ::clang::ParmVarDecl  const * (::clang::BlockDecl::*method_pointer_2b37beb4f9fd57f8a700d4cdb4bee0f4)(unsigned int ) const = &::clang::BlockDecl::getParamDecl;
    class ::clang::ParmVarDecl  * (::clang::BlockDecl::*method_pointer_f6f23e84fe5756e4b16840e4b2a5ec6a)(unsigned int ) = &::clang::BlockDecl::getParamDecl;
    bool  (::clang::BlockDecl::*method_pointer_489062367c695433ab36c59b4dfe0279)() const = &::clang::BlockDecl::hasCaptures;
    bool  (::clang::BlockDecl::*method_pointer_c44dea5141c65c74b968f62e6e02e6c1)() const = &::clang::BlockDecl::isConversionFromLambda;
    bool  (::clang::BlockDecl::*method_pointer_22bf9ed25eff55b9969dd16c6b4839ba)() const = &::clang::BlockDecl::isVariadic;
    bool  (::clang::BlockDecl::*method_pointer_326c286aa0e656c7a441a8214fa9bc33)() const = &::clang::BlockDecl::param_empty;
    unsigned int  (::clang::BlockDecl::*method_pointer_7449e9a33e75569a813c5aade8108585)() const = &::clang::BlockDecl::param_size;
    void  (::clang::BlockDecl::*method_pointer_6d25c61c2a425a4e942a5c60d560b3cd)(unsigned int , class ::clang::Decl  *) = &::clang::BlockDecl::setBlockMangling;
    void  (::clang::BlockDecl::*method_pointer_764e8e16740c5fa2b03da0e03a2e98a5)(bool ) = &::clang::BlockDecl::setBlockMissingReturnType;
    void  (::clang::BlockDecl::*method_pointer_d8ef4b92c6cb5eb087d14060b0796fdc)(bool ) = &::clang::BlockDecl::setIsConversionFromLambda;
    void  (::clang::BlockDecl::*method_pointer_2bd5f713f0015fc8baec13dc34125408)(bool ) = &::clang::BlockDecl::setIsVariadic;
    boost::python::class_< class ::clang::BlockDecl, autowig::HeldType< class ::clang::BlockDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_e8de972362795c73b92c7a53a3029be0("BlockDecl", "", boost::python::no_init);
    class_e8de972362795c73b92c7a53a3029be0.def("create", method_pointer_94efbdf768f05e068176924b6dd11ca9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("create_deserialized", method_pointer_fa17e71bf0275b0d8f6d53218540c8fc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("block_missing_return_type", method_pointer_ab43b56db3935b08b2f73aa6ec3fa476, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_cxx_this", method_pointer_3d2164199fe952b8bf9dbadb2266320a, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_variable", method_pointer_e641c300382353c398cedf6796c4a0e3, "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_from_decl_context", method_pointer_eee2ebcdba3a503a97be89c98f3f5b51, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_to_decl_context", method_pointer_5a977ca69b155194be4fa08f41a0ed7f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof", method_pointer_b4426cc6a1f45bbdbfff67bcb66095ef, "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof_kind", method_pointer_1282ab53c8cf58748e15acc17644d3e8, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_context_decl", method_pointer_7cddb057e7d2557e8219e80095144f66, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_number", method_pointer_f41f695a112456e39fc26e53004ee7ac, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_caret_location", method_pointer_164fe3d10bca5f11b51d74ffe4a968cd, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_captures", method_pointer_0315d703ef92522d9d2eb02782995ba2, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_params", method_pointer_2ed6351c8a3a57d3b0c1649fc1e4d9c9, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_2b37beb4f9fd57f8a700d4cdb4bee0f4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_f6f23e84fe5756e4b16840e4b2a5ec6a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("has_captures", method_pointer_489062367c695433ab36c59b4dfe0279, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_conversion_from_lambda", method_pointer_c44dea5141c65c74b968f62e6e02e6c1, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_variadic", method_pointer_22bf9ed25eff55b9969dd16c6b4839ba, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_empty", method_pointer_326c286aa0e656c7a441a8214fa9bc33, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_size", method_pointer_7449e9a33e75569a813c5aade8108585, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_mangling", method_pointer_6d25c61c2a425a4e942a5c60d560b3cd, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_missing_return_type", method_pointer_764e8e16740c5fa2b03da0e03a2e98a5, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_conversion_from_lambda", method_pointer_d8ef4b92c6cb5eb087d14060b0796fdc, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_variadic", method_pointer_2bd5f713f0015fc8baec13dc34125408, "");
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