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
    class ::clang::BlockDecl  * (*method_pointer_888ed4a432545e3c899332d6ae3047c9)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::SourceLocation ) = ::clang::BlockDecl::Create;
    class ::clang::BlockDecl  * (*method_pointer_406a8b44d1b75da082ca65751ce00cae)(class ::clang::ASTContext  &, unsigned int ) = ::clang::BlockDecl::CreateDeserialized;
    bool  (::clang::BlockDecl::*method_pointer_f2331cf7f89c526398762ebcc701bba5)() const = &::clang::BlockDecl::blockMissingReturnType;
    bool  (::clang::BlockDecl::*method_pointer_4f7b6c56162a50b3b3c8b5e4b2341668)() const = &::clang::BlockDecl::capturesCXXThis;
    bool  (::clang::BlockDecl::*method_pointer_d36adc8066475a02b39b69de78aa890f)(class ::clang::VarDecl  const *) const = &::clang::BlockDecl::capturesVariable;
    class ::clang::BlockDecl  * (*method_pointer_ee7f261a1a9458038a71025bb7bb32e6)(class ::clang::DeclContext  const *) = ::clang::BlockDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_47b9dfaa547251089b4236f4fdc06f2f)(class ::clang::BlockDecl  const *) = ::clang::BlockDecl::castToDeclContext;
    bool  (*method_pointer_9ce2eff33df85d3480764c26599bd365)(class ::clang::Decl  const *) = ::clang::BlockDecl::classof;
    bool  (*method_pointer_7671811fbc1b5392be040cab70475e90)(enum ::clang::Decl::Kind ) = ::clang::BlockDecl::classofKind;
    class ::clang::Decl  * (::clang::BlockDecl::*method_pointer_1eaacf65fd185db3b1b25255ee0df60a)() const = &::clang::BlockDecl::getBlockManglingContextDecl;
    unsigned int  (::clang::BlockDecl::*method_pointer_5828bb356bd459ec86d4facf6d864f50)() const = &::clang::BlockDecl::getBlockManglingNumber;
    class ::clang::SourceLocation  (::clang::BlockDecl::*method_pointer_e1f1aa0ecac3536aa024953083b579cf)() const = &::clang::BlockDecl::getCaretLocation;
    unsigned int  (::clang::BlockDecl::*method_pointer_139aa0e4bc7d5949b1bb485e410830b2)() const = &::clang::BlockDecl::getNumCaptures;
    unsigned int  (::clang::BlockDecl::*method_pointer_a17b10227bdf5a17bfec5aba84ec881b)() const = &::clang::BlockDecl::getNumParams;
    class ::clang::ParmVarDecl  const * (::clang::BlockDecl::*method_pointer_092c5089a39a5a29a14b98f923d7b709)(unsigned int ) const = &::clang::BlockDecl::getParamDecl;
    class ::clang::ParmVarDecl  * (::clang::BlockDecl::*method_pointer_c8194f5485e558f38df787beeacf319c)(unsigned int ) = &::clang::BlockDecl::getParamDecl;
    bool  (::clang::BlockDecl::*method_pointer_c36b43f73eac502897b7315233dbd326)() const = &::clang::BlockDecl::hasCaptures;
    bool  (::clang::BlockDecl::*method_pointer_87f72828ae5750d5b7ce944530f684dc)() const = &::clang::BlockDecl::isConversionFromLambda;
    bool  (::clang::BlockDecl::*method_pointer_056e5ffb4dc85badbfbeb515dbc0a94c)() const = &::clang::BlockDecl::isVariadic;
    bool  (::clang::BlockDecl::*method_pointer_8dccf5ef71b25e2f8f70f16c98be1f5b)() const = &::clang::BlockDecl::param_empty;
    unsigned int  (::clang::BlockDecl::*method_pointer_e364f800fae358e89d60eb77ebc0a3f9)() const = &::clang::BlockDecl::param_size;
    void  (::clang::BlockDecl::*method_pointer_30b8a60c5e1d564d987e0953f98331ac)(unsigned int , class ::clang::Decl  *) = &::clang::BlockDecl::setBlockMangling;
    void  (::clang::BlockDecl::*method_pointer_bc70c8c773cf51b99645bcb6cdc7be2a)(bool ) = &::clang::BlockDecl::setBlockMissingReturnType;
    void  (::clang::BlockDecl::*method_pointer_b8390da9089b573ab6c2276f7ef386b9)(bool ) = &::clang::BlockDecl::setIsConversionFromLambda;
    void  (::clang::BlockDecl::*method_pointer_6b5897e7fe92503ba25c574c76c8523e)(bool ) = &::clang::BlockDecl::setIsVariadic;
    boost::python::class_< class ::clang::BlockDecl, autowig::HeldType< class ::clang::BlockDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_e8de972362795c73b92c7a53a3029be0("BlockDecl", "", boost::python::no_init);
    class_e8de972362795c73b92c7a53a3029be0.def("create", method_pointer_888ed4a432545e3c899332d6ae3047c9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("create_deserialized", method_pointer_406a8b44d1b75da082ca65751ce00cae, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("block_missing_return_type", method_pointer_f2331cf7f89c526398762ebcc701bba5, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_cxx_this", method_pointer_4f7b6c56162a50b3b3c8b5e4b2341668, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_variable", method_pointer_d36adc8066475a02b39b69de78aa890f, "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_from_decl_context", method_pointer_ee7f261a1a9458038a71025bb7bb32e6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_to_decl_context", method_pointer_47b9dfaa547251089b4236f4fdc06f2f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof", method_pointer_9ce2eff33df85d3480764c26599bd365, "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof_kind", method_pointer_7671811fbc1b5392be040cab70475e90, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_context_decl", method_pointer_1eaacf65fd185db3b1b25255ee0df60a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_number", method_pointer_5828bb356bd459ec86d4facf6d864f50, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_caret_location", method_pointer_e1f1aa0ecac3536aa024953083b579cf, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_captures", method_pointer_139aa0e4bc7d5949b1bb485e410830b2, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_params", method_pointer_a17b10227bdf5a17bfec5aba84ec881b, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_092c5089a39a5a29a14b98f923d7b709, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_c8194f5485e558f38df787beeacf319c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("has_captures", method_pointer_c36b43f73eac502897b7315233dbd326, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_conversion_from_lambda", method_pointer_87f72828ae5750d5b7ce944530f684dc, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_variadic", method_pointer_056e5ffb4dc85badbfbeb515dbc0a94c, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_empty", method_pointer_8dccf5ef71b25e2f8f70f16c98be1f5b, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_size", method_pointer_e364f800fae358e89d60eb77ebc0a3f9, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_mangling", method_pointer_30b8a60c5e1d564d987e0953f98331ac, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_missing_return_type", method_pointer_bc70c8c773cf51b99645bcb6cdc7be2a, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_conversion_from_lambda", method_pointer_b8390da9089b573ab6c2276f7ef386b9, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_variadic", method_pointer_6b5897e7fe92503ba25c574c76c8523e, "");
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