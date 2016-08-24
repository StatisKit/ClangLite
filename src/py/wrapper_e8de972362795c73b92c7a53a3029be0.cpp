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
    class ::clang::BlockDecl  * (*method_pointer_77b17a2c25f95c959118740efa1cdb7f)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::SourceLocation ) = ::clang::BlockDecl::Create;
    class ::clang::BlockDecl  * (*method_pointer_bd221d30c2885723ab3cbb5d21b929dd)(class ::clang::ASTContext  &, unsigned int ) = ::clang::BlockDecl::CreateDeserialized;
    bool  (::clang::BlockDecl::*method_pointer_4d711be8569c5c709afdf88d0ecbddb6)() const = &::clang::BlockDecl::blockMissingReturnType;
    bool  (::clang::BlockDecl::*method_pointer_5992c50e24ea55bb978b7b25bb767e29)() const = &::clang::BlockDecl::capturesCXXThis;
    bool  (::clang::BlockDecl::*method_pointer_0c84dcad5d5357af902103292dee2412)(class ::clang::VarDecl  const *) const = &::clang::BlockDecl::capturesVariable;
    class ::clang::BlockDecl  * (*method_pointer_4474cdec63775cc29ca0d4b9f879ae30)(class ::clang::DeclContext  const *) = ::clang::BlockDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_f9adb8caeaff5cfe8b5310f7681d6e3f)(class ::clang::BlockDecl  const *) = ::clang::BlockDecl::castToDeclContext;
    bool  (*method_pointer_b90f884c408e5e0394fbaf477b8ca6a7)(class ::clang::Decl  const *) = ::clang::BlockDecl::classof;
    bool  (*method_pointer_f910cc25e5b6590caf7ffb2a8976a3b6)(enum ::clang::Decl::Kind ) = ::clang::BlockDecl::classofKind;
    class ::clang::Decl  * (::clang::BlockDecl::*method_pointer_0ef63b9e86e555798caff63845676e0e)() const = &::clang::BlockDecl::getBlockManglingContextDecl;
    unsigned int  (::clang::BlockDecl::*method_pointer_9c90fc8f446359fd9a7dcb38e7abb9d2)() const = &::clang::BlockDecl::getBlockManglingNumber;
    class ::clang::SourceLocation  (::clang::BlockDecl::*method_pointer_bf0240bd11dd57139112650594440c07)() const = &::clang::BlockDecl::getCaretLocation;
    unsigned int  (::clang::BlockDecl::*method_pointer_f466930c69145732bf081958a0406430)() const = &::clang::BlockDecl::getNumCaptures;
    unsigned int  (::clang::BlockDecl::*method_pointer_0f1334e68bfa5a7a86066f1c410f1aee)() const = &::clang::BlockDecl::getNumParams;
    class ::clang::ParmVarDecl  const * (::clang::BlockDecl::*method_pointer_04f4e7ef80425e90b2674d0502ee9ed5)(unsigned int ) const = &::clang::BlockDecl::getParamDecl;
    class ::clang::ParmVarDecl  * (::clang::BlockDecl::*method_pointer_eaf578e66853591c8f188b1b40627377)(unsigned int ) = &::clang::BlockDecl::getParamDecl;
    bool  (::clang::BlockDecl::*method_pointer_2b71a160c95e5b8f8d962f09c015a3c4)() const = &::clang::BlockDecl::hasCaptures;
    bool  (::clang::BlockDecl::*method_pointer_789f36a7b2e9524d82d15439662ed930)() const = &::clang::BlockDecl::isConversionFromLambda;
    bool  (::clang::BlockDecl::*method_pointer_be65f82a88225336ad305056f0690f2e)() const = &::clang::BlockDecl::isVariadic;
    bool  (::clang::BlockDecl::*method_pointer_202ff20a7e00569b952596ede021abf4)() const = &::clang::BlockDecl::param_empty;
    unsigned int  (::clang::BlockDecl::*method_pointer_f06b6888c1d450c79a464f43a9968346)() const = &::clang::BlockDecl::param_size;
    void  (::clang::BlockDecl::*method_pointer_b817874d5ec55d858dbb8e43d01f3fed)(unsigned int , class ::clang::Decl  *) = &::clang::BlockDecl::setBlockMangling;
    void  (::clang::BlockDecl::*method_pointer_c73a1f8ecdcb529390baa41488bca4ee)(bool ) = &::clang::BlockDecl::setBlockMissingReturnType;
    void  (::clang::BlockDecl::*method_pointer_304f546e745258a7910a71b42034db45)(bool ) = &::clang::BlockDecl::setIsConversionFromLambda;
    void  (::clang::BlockDecl::*method_pointer_5da94339a4005b9f9d7707523d19fee8)(bool ) = &::clang::BlockDecl::setIsVariadic;
    boost::python::class_< class ::clang::BlockDecl, autowig::HeldType< class ::clang::BlockDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_e8de972362795c73b92c7a53a3029be0("BlockDecl", "", boost::python::no_init);
    class_e8de972362795c73b92c7a53a3029be0.def("create", method_pointer_77b17a2c25f95c959118740efa1cdb7f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("create_deserialized", method_pointer_bd221d30c2885723ab3cbb5d21b929dd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("block_missing_return_type", method_pointer_4d711be8569c5c709afdf88d0ecbddb6, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_cxx_this", method_pointer_5992c50e24ea55bb978b7b25bb767e29, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_variable", method_pointer_0c84dcad5d5357af902103292dee2412, "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_from_decl_context", method_pointer_4474cdec63775cc29ca0d4b9f879ae30, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_to_decl_context", method_pointer_f9adb8caeaff5cfe8b5310f7681d6e3f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof", method_pointer_b90f884c408e5e0394fbaf477b8ca6a7, "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof_kind", method_pointer_f910cc25e5b6590caf7ffb2a8976a3b6, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_context_decl", method_pointer_0ef63b9e86e555798caff63845676e0e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_number", method_pointer_9c90fc8f446359fd9a7dcb38e7abb9d2, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_caret_location", method_pointer_bf0240bd11dd57139112650594440c07, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_captures", method_pointer_f466930c69145732bf081958a0406430, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_params", method_pointer_0f1334e68bfa5a7a86066f1c410f1aee, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_04f4e7ef80425e90b2674d0502ee9ed5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_eaf578e66853591c8f188b1b40627377, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("has_captures", method_pointer_2b71a160c95e5b8f8d962f09c015a3c4, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_conversion_from_lambda", method_pointer_789f36a7b2e9524d82d15439662ed930, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_variadic", method_pointer_be65f82a88225336ad305056f0690f2e, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_empty", method_pointer_202ff20a7e00569b952596ede021abf4, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_size", method_pointer_f06b6888c1d450c79a464f43a9968346, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_mangling", method_pointer_b817874d5ec55d858dbb8e43d01f3fed, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_missing_return_type", method_pointer_c73a1f8ecdcb529390baa41488bca4ee, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_conversion_from_lambda", method_pointer_304f546e745258a7910a71b42034db45, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_variadic", method_pointer_5da94339a4005b9f9d7707523d19fee8, "");
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