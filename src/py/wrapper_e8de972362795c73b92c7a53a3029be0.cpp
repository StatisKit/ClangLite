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
    class ::clang::BlockDecl  * (*method_pointer_03fc79ad1d8351a8a09582f2b032ffbb)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::SourceLocation ) = ::clang::BlockDecl::Create;
    class ::clang::BlockDecl  * (*method_pointer_7228f98c7156566dbafccf7cd723efba)(class ::clang::ASTContext  &, unsigned int ) = ::clang::BlockDecl::CreateDeserialized;
    bool  (::clang::BlockDecl::*method_pointer_0fcfaed3832b59299a56d1767dbe6719)() const = &::clang::BlockDecl::blockMissingReturnType;
    bool  (::clang::BlockDecl::*method_pointer_d5fe7bcf7e3756bb962786a5cf82e4e8)() const = &::clang::BlockDecl::capturesCXXThis;
    bool  (::clang::BlockDecl::*method_pointer_03125ce2dc7e5d159fc3b6354147caf9)(class ::clang::VarDecl  const *) const = &::clang::BlockDecl::capturesVariable;
    class ::clang::BlockDecl  * (*method_pointer_ba695792f77252e09c9537a8c495e6a0)(class ::clang::DeclContext  const *) = ::clang::BlockDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_615960d35d4852bda7f8d2b4bd41ecee)(class ::clang::BlockDecl  const *) = ::clang::BlockDecl::castToDeclContext;
    bool  (*method_pointer_25c760f8a3be515baef2da990815090f)(class ::clang::Decl  const *) = ::clang::BlockDecl::classof;
    bool  (*method_pointer_ea4c33466af556b480addba934420c3f)(enum ::clang::Decl::Kind ) = ::clang::BlockDecl::classofKind;
    class ::clang::Decl  * (::clang::BlockDecl::*method_pointer_033798b07bb15157933b0798adee2710)() const = &::clang::BlockDecl::getBlockManglingContextDecl;
    unsigned int  (::clang::BlockDecl::*method_pointer_abff044c2e46578892d085a73f7ca5ee)() const = &::clang::BlockDecl::getBlockManglingNumber;
    class ::clang::SourceLocation  (::clang::BlockDecl::*method_pointer_3f0cc201f5a15eeaba423e4767e8d0b8)() const = &::clang::BlockDecl::getCaretLocation;
    unsigned int  (::clang::BlockDecl::*method_pointer_40cf4a8e8636562a84f5b7c0b1fbfac4)() const = &::clang::BlockDecl::getNumCaptures;
    unsigned int  (::clang::BlockDecl::*method_pointer_e849fc80268a58298ecb01adf4397dd2)() const = &::clang::BlockDecl::getNumParams;
    class ::clang::ParmVarDecl  * (::clang::BlockDecl::*method_pointer_2f75a352823b5288bd75b743a0a7ea23)(unsigned int ) = &::clang::BlockDecl::getParamDecl;
    class ::clang::ParmVarDecl  const * (::clang::BlockDecl::*method_pointer_5f395ffefa995960be7bfe8fae193f7f)(unsigned int ) const = &::clang::BlockDecl::getParamDecl;
    bool  (::clang::BlockDecl::*method_pointer_79d270e2b00155c691f0b823e08d7080)() const = &::clang::BlockDecl::hasCaptures;
    bool  (::clang::BlockDecl::*method_pointer_5b5c8d27c3445311bfb822cc8a18d1df)() const = &::clang::BlockDecl::isConversionFromLambda;
    bool  (::clang::BlockDecl::*method_pointer_da3ea771e25455bc953560d579f03750)() const = &::clang::BlockDecl::isVariadic;
    bool  (::clang::BlockDecl::*method_pointer_79c02e50e668510b90d5a437b33c4e46)() const = &::clang::BlockDecl::param_empty;
    unsigned int  (::clang::BlockDecl::*method_pointer_44d994412fce5b93a5f520fc52cc2335)() const = &::clang::BlockDecl::param_size;
    void  (::clang::BlockDecl::*method_pointer_d72a09079af259ce8d94abd5263b7a16)(unsigned int , class ::clang::Decl  *) = &::clang::BlockDecl::setBlockMangling;
    void  (::clang::BlockDecl::*method_pointer_1651e9959bd552988804a926a4e965a6)(bool ) = &::clang::BlockDecl::setBlockMissingReturnType;
    void  (::clang::BlockDecl::*method_pointer_6b8e8d1c43e8521689145f092f433ed7)(bool ) = &::clang::BlockDecl::setIsConversionFromLambda;
    void  (::clang::BlockDecl::*method_pointer_cfc16eee798e57b2bf0afe9b9d57700a)(bool ) = &::clang::BlockDecl::setIsVariadic;
    boost::python::class_< class ::clang::BlockDecl, autowig::HeldType< class ::clang::BlockDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_e8de972362795c73b92c7a53a3029be0("BlockDecl", "", boost::python::no_init);
    class_e8de972362795c73b92c7a53a3029be0.def("create", method_pointer_03fc79ad1d8351a8a09582f2b032ffbb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("create_deserialized", method_pointer_7228f98c7156566dbafccf7cd723efba, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("block_missing_return_type", method_pointer_0fcfaed3832b59299a56d1767dbe6719, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_cxx_this", method_pointer_d5fe7bcf7e3756bb962786a5cf82e4e8, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_variable", method_pointer_03125ce2dc7e5d159fc3b6354147caf9, "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_from_decl_context", method_pointer_ba695792f77252e09c9537a8c495e6a0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_to_decl_context", method_pointer_615960d35d4852bda7f8d2b4bd41ecee, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof", method_pointer_25c760f8a3be515baef2da990815090f, "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof_kind", method_pointer_ea4c33466af556b480addba934420c3f, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_context_decl", method_pointer_033798b07bb15157933b0798adee2710, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_number", method_pointer_abff044c2e46578892d085a73f7ca5ee, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_caret_location", method_pointer_3f0cc201f5a15eeaba423e4767e8d0b8, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_captures", method_pointer_40cf4a8e8636562a84f5b7c0b1fbfac4, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_params", method_pointer_e849fc80268a58298ecb01adf4397dd2, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_2f75a352823b5288bd75b743a0a7ea23, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_5f395ffefa995960be7bfe8fae193f7f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("has_captures", method_pointer_79d270e2b00155c691f0b823e08d7080, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_conversion_from_lambda", method_pointer_5b5c8d27c3445311bfb822cc8a18d1df, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_variadic", method_pointer_da3ea771e25455bc953560d579f03750, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_empty", method_pointer_79c02e50e668510b90d5a437b33c4e46, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_size", method_pointer_44d994412fce5b93a5f520fc52cc2335, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_mangling", method_pointer_d72a09079af259ce8d94abd5263b7a16, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_missing_return_type", method_pointer_1651e9959bd552988804a926a4e965a6, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_conversion_from_lambda", method_pointer_6b8e8d1c43e8521689145f092f433ed7, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_variadic", method_pointer_cfc16eee798e57b2bf0afe9b9d57700a, "");
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