#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_e8de972362795c73b92c7a53a3029be0()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::BlockDecl  * (*method_pointer_9b3629e24f2555d698fc5d0f29e72e62)(class ::clang::ASTContext  &, unsigned int ) = ::clang::BlockDecl::CreateDeserialized;
    bool  (::clang::BlockDecl::*method_pointer_a29c468380bd5dddac21c1231456634d)() const = &::clang::BlockDecl::isVariadic;
    void  (::clang::BlockDecl::*method_pointer_4d39a8555081570ba9d52591a03b8d88)(bool ) = &::clang::BlockDecl::setIsVariadic;
    void  (::clang::BlockDecl::*method_pointer_d5f2ed5a680b5f8680626afe34f81a60)(bool ) = &::clang::BlockDecl::setIsConversionFromLambda;
    class ::clang::ParmVarDecl  * (::clang::BlockDecl::*method_pointer_f47148f3288154009c962d74b26300e7)(unsigned int ) = &::clang::BlockDecl::getParamDecl;
    bool  (::clang::BlockDecl::*method_pointer_3bf72b144a68543187e50dde8667784d)() const = &::clang::BlockDecl::capturesCXXThis;
    bool  (::clang::BlockDecl::*method_pointer_f56fe5d73f2358b5b90e5e0c4f0b9711)() const = &::clang::BlockDecl::param_empty;
    class ::clang::BlockDecl  * (*method_pointer_05befaa2b3fc5bc78864cfa6a2f109f7)(class ::clang::DeclContext  const *) = ::clang::BlockDecl::castFromDeclContext;
    bool  (::clang::BlockDecl::*method_pointer_f9687e79dbf0591eae446d43292bc0f4)(class ::clang::VarDecl  const *) const = &::clang::BlockDecl::capturesVariable;
    bool  (::clang::BlockDecl::*method_pointer_ac79758ff73a5893a361cbe2c17050f3)() const = &::clang::BlockDecl::blockMissingReturnType;
    unsigned int  (::clang::BlockDecl::*method_pointer_a15458eaf96d53ed8fe3d333d1eedd2e)() const = &::clang::BlockDecl::getNumParams;
    bool  (::clang::BlockDecl::*method_pointer_ba919fabb8a55accadd0d9a7b3adcf3f)() const = &::clang::BlockDecl::isConversionFromLambda;
    bool  (*method_pointer_1809f59d94c15877abc156b4c27f547e)(class ::clang::Decl  const *) = ::clang::BlockDecl::classof;
    class ::clang::DeclContext  * (*method_pointer_d145075b7141533185c468c1f012434c)(class ::clang::BlockDecl  const *) = ::clang::BlockDecl::castToDeclContext;
    void  (::clang::BlockDecl::*method_pointer_3c50fd16dbb253249addcf9bdbc6b63d)(bool ) = &::clang::BlockDecl::setBlockMissingReturnType;
    bool  (*method_pointer_82ddcb2a862f5c209def87e3656e6a4c)(enum ::clang::Decl::Kind ) = ::clang::BlockDecl::classofKind;
    void  (::clang::BlockDecl::*method_pointer_a1264ee880465ffca752b870e8402f95)(unsigned int , class ::clang::Decl  *) = &::clang::BlockDecl::setBlockMangling;
    unsigned int  (::clang::BlockDecl::*method_pointer_ac885606be2b5f30b47a6d8da90cfb22)() const = &::clang::BlockDecl::getNumCaptures;
    unsigned int  (::clang::BlockDecl::*method_pointer_b32ab9c66b865913894446c78b7e3e70)() const = &::clang::BlockDecl::getBlockManglingNumber;
    unsigned int  (::clang::BlockDecl::*method_pointer_3c98ae7d49635c7eaf5673652bbb8f76)() const = &::clang::BlockDecl::param_size;
    class ::clang::ParmVarDecl  const * (::clang::BlockDecl::*method_pointer_0f296ad3a2965df6802856b2c8671b2f)(unsigned int ) const = &::clang::BlockDecl::getParamDecl;
    class ::clang::Decl  * (::clang::BlockDecl::*method_pointer_d7301ea6ddbf5749a7bc49140a4d01f4)() const = &::clang::BlockDecl::getBlockManglingContextDecl;
    bool  (::clang::BlockDecl::*method_pointer_713e54f70fdb542dbbc5a05f0d085f02)() const = &::clang::BlockDecl::hasCaptures;
    boost::python::class_< class ::clang::BlockDecl, autowig::HeldType< class ::clang::BlockDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_e8de972362795c73b92c7a53a3029be0("BlockDecl", "", boost::python::no_init);
    class_e8de972362795c73b92c7a53a3029be0.def("create_deserialized", method_pointer_9b3629e24f2555d698fc5d0f29e72e62, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_variadic", method_pointer_a29c468380bd5dddac21c1231456634d, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_variadic", method_pointer_4d39a8555081570ba9d52591a03b8d88, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_conversion_from_lambda", method_pointer_d5f2ed5a680b5f8680626afe34f81a60, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_f47148f3288154009c962d74b26300e7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_cxx_this", method_pointer_3bf72b144a68543187e50dde8667784d, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_empty", method_pointer_f56fe5d73f2358b5b90e5e0c4f0b9711, "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_from_decl_context", method_pointer_05befaa2b3fc5bc78864cfa6a2f109f7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_variable", method_pointer_f9687e79dbf0591eae446d43292bc0f4, "");
    class_e8de972362795c73b92c7a53a3029be0.def("block_missing_return_type", method_pointer_ac79758ff73a5893a361cbe2c17050f3, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_params", method_pointer_a15458eaf96d53ed8fe3d333d1eedd2e, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_conversion_from_lambda", method_pointer_ba919fabb8a55accadd0d9a7b3adcf3f, "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof", method_pointer_1809f59d94c15877abc156b4c27f547e, "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_to_decl_context", method_pointer_d145075b7141533185c468c1f012434c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_missing_return_type", method_pointer_3c50fd16dbb253249addcf9bdbc6b63d, "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof_kind", method_pointer_82ddcb2a862f5c209def87e3656e6a4c, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_mangling", method_pointer_a1264ee880465ffca752b870e8402f95, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_captures", method_pointer_ac885606be2b5f30b47a6d8da90cfb22, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_number", method_pointer_b32ab9c66b865913894446c78b7e3e70, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_size", method_pointer_3c98ae7d49635c7eaf5673652bbb8f76, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_0f296ad3a2965df6802856b2c8671b2f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_context_decl", method_pointer_d7301ea6ddbf5749a7bc49140a4d01f4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("has_captures", method_pointer_713e54f70fdb542dbbc5a05f0d085f02, "");
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