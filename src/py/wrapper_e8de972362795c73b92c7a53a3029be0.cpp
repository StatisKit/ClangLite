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
    class ::clang::BlockDecl  * (*method_pointer_6c4379d943e250908ffcda4f366678b7)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::SourceLocation ) = ::clang::BlockDecl::Create;
    class ::clang::BlockDecl  * (*method_pointer_0a7f6372238b5cc6b9958cf9e9f797f2)(class ::clang::ASTContext  &, unsigned int ) = ::clang::BlockDecl::CreateDeserialized;
    bool  (::clang::BlockDecl::*method_pointer_7391d288ec4c569d80dfd070390af53e)() const = &::clang::BlockDecl::blockMissingReturnType;
    bool  (::clang::BlockDecl::*method_pointer_6f675670d7e458ad95d6e562c17fa07c)() const = &::clang::BlockDecl::capturesCXXThis;
    bool  (::clang::BlockDecl::*method_pointer_bd19ee111e775a3a80042004e8bdddbb)(class ::clang::VarDecl  const *) const = &::clang::BlockDecl::capturesVariable;
    class ::clang::BlockDecl  * (*method_pointer_aca3533544075a36adc35f88d8c564d7)(class ::clang::DeclContext  const *) = ::clang::BlockDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_cac12433d6825745b07ef4794beab1f0)(class ::clang::BlockDecl  const *) = ::clang::BlockDecl::castToDeclContext;
    bool  (*method_pointer_0e68c4e7fa7753dc96d80a3ba7ee697b)(class ::clang::Decl  const *) = ::clang::BlockDecl::classof;
    bool  (*method_pointer_98e5a1feaa9a5b8580f15185a2c1ceba)(enum ::clang::Decl::Kind ) = ::clang::BlockDecl::classofKind;
    class ::clang::Decl  * (::clang::BlockDecl::*method_pointer_970ef53f10925f1591ed8320674f2b95)() const = &::clang::BlockDecl::getBlockManglingContextDecl;
    unsigned int  (::clang::BlockDecl::*method_pointer_062ec6b55973594c99cf6cb76bf4e374)() const = &::clang::BlockDecl::getBlockManglingNumber;
    class ::clang::SourceLocation  (::clang::BlockDecl::*method_pointer_521cfd4da05751449a14f761f95d1bed)() const = &::clang::BlockDecl::getCaretLocation;
    unsigned int  (::clang::BlockDecl::*method_pointer_3a06029da3485874b8b738d2e4e1a5eb)() const = &::clang::BlockDecl::getNumCaptures;
    unsigned int  (::clang::BlockDecl::*method_pointer_2468a272c3fa551494aa1b8c9deb2fa8)() const = &::clang::BlockDecl::getNumParams;
    class ::clang::ParmVarDecl  * (::clang::BlockDecl::*method_pointer_ec083037b7285a0d817b9d317d9dfbf7)(unsigned int ) = &::clang::BlockDecl::getParamDecl;
    class ::clang::ParmVarDecl  const * (::clang::BlockDecl::*method_pointer_5f9d1f6d172c5004847730f0576d42fc)(unsigned int ) const = &::clang::BlockDecl::getParamDecl;
    bool  (::clang::BlockDecl::*method_pointer_c9c4d5d59eba565f901d07283bb251ec)() const = &::clang::BlockDecl::hasCaptures;
    bool  (::clang::BlockDecl::*method_pointer_229b0edeabca5967900dbdd9e1cf9998)() const = &::clang::BlockDecl::isConversionFromLambda;
    bool  (::clang::BlockDecl::*method_pointer_3f82250611675600aae5a1b7ba3499e4)() const = &::clang::BlockDecl::isVariadic;
    bool  (::clang::BlockDecl::*method_pointer_262dc094d64e55bd9128e7f274694f33)() const = &::clang::BlockDecl::param_empty;
    unsigned int  (::clang::BlockDecl::*method_pointer_a06e449233425df3ac5a1e5f2662aff2)() const = &::clang::BlockDecl::param_size;
    void  (::clang::BlockDecl::*method_pointer_a232c024edd05edf9afb4259b211ffc1)(unsigned int , class ::clang::Decl  *) = &::clang::BlockDecl::setBlockMangling;
    void  (::clang::BlockDecl::*method_pointer_1292672bb8ed5e1382273f6b78f374ea)(bool ) = &::clang::BlockDecl::setBlockMissingReturnType;
    void  (::clang::BlockDecl::*method_pointer_6b863dab4f41585f9ea36e9c2e458c65)(bool ) = &::clang::BlockDecl::setIsConversionFromLambda;
    void  (::clang::BlockDecl::*method_pointer_ad0c23a4229e5cfeb7c98ff1de5b668b)(bool ) = &::clang::BlockDecl::setIsVariadic;
    boost::python::class_< class ::clang::BlockDecl, autowig::HeldType< class ::clang::BlockDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_e8de972362795c73b92c7a53a3029be0("BlockDecl", "", boost::python::no_init);
    class_e8de972362795c73b92c7a53a3029be0.def("create", method_pointer_6c4379d943e250908ffcda4f366678b7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("create_deserialized", method_pointer_0a7f6372238b5cc6b9958cf9e9f797f2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("block_missing_return_type", method_pointer_7391d288ec4c569d80dfd070390af53e, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_cxx_this", method_pointer_6f675670d7e458ad95d6e562c17fa07c, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_variable", method_pointer_bd19ee111e775a3a80042004e8bdddbb, "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_from_decl_context", method_pointer_aca3533544075a36adc35f88d8c564d7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_to_decl_context", method_pointer_cac12433d6825745b07ef4794beab1f0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof", method_pointer_0e68c4e7fa7753dc96d80a3ba7ee697b, "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof_kind", method_pointer_98e5a1feaa9a5b8580f15185a2c1ceba, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_context_decl", method_pointer_970ef53f10925f1591ed8320674f2b95, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_number", method_pointer_062ec6b55973594c99cf6cb76bf4e374, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_caret_location", method_pointer_521cfd4da05751449a14f761f95d1bed, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_captures", method_pointer_3a06029da3485874b8b738d2e4e1a5eb, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_params", method_pointer_2468a272c3fa551494aa1b8c9deb2fa8, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_ec083037b7285a0d817b9d317d9dfbf7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_5f9d1f6d172c5004847730f0576d42fc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("has_captures", method_pointer_c9c4d5d59eba565f901d07283bb251ec, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_conversion_from_lambda", method_pointer_229b0edeabca5967900dbdd9e1cf9998, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_variadic", method_pointer_3f82250611675600aae5a1b7ba3499e4, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_empty", method_pointer_262dc094d64e55bd9128e7f274694f33, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_size", method_pointer_a06e449233425df3ac5a1e5f2662aff2, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_mangling", method_pointer_a232c024edd05edf9afb4259b211ffc1, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_missing_return_type", method_pointer_1292672bb8ed5e1382273f6b78f374ea, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_conversion_from_lambda", method_pointer_6b863dab4f41585f9ea36e9c2e458c65, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_variadic", method_pointer_ad0c23a4229e5cfeb7c98ff1de5b668b, "");
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