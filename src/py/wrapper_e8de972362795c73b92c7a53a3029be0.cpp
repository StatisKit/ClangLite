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
    class ::clang::BlockDecl  * (*method_pointer_298ac064e6e450caa2dc49de4413b1ad)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::SourceLocation ) = ::clang::BlockDecl::Create;
    class ::clang::BlockDecl  * (*method_pointer_99934a91e73059b7908d576da9ee67e0)(class ::clang::ASTContext  &, unsigned int ) = ::clang::BlockDecl::CreateDeserialized;
    bool  (::clang::BlockDecl::*method_pointer_85ab25dfcf8a599ea88cbcf3507bdc5a)() const = &::clang::BlockDecl::blockMissingReturnType;
    bool  (::clang::BlockDecl::*method_pointer_02bca1cd3eed507f9f2630022bbb55a5)() const = &::clang::BlockDecl::capturesCXXThis;
    bool  (::clang::BlockDecl::*method_pointer_77e4c8ad69f4528e85970c58c2ffb5d9)(class ::clang::VarDecl  const *) const = &::clang::BlockDecl::capturesVariable;
    class ::clang::BlockDecl  * (*method_pointer_e5ceb88580ca5c85bcd2df81f03d874b)(class ::clang::DeclContext  const *) = ::clang::BlockDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_e69356b13d6a59e989a1899a8b402198)(class ::clang::BlockDecl  const *) = ::clang::BlockDecl::castToDeclContext;
    bool  (*method_pointer_827fe3a1baee59fc8be3cf23a0456843)(class ::clang::Decl  const *) = ::clang::BlockDecl::classof;
    bool  (*method_pointer_b658e4a8f2b45ae789a35b5ee8c2f704)(enum ::clang::Decl::Kind ) = ::clang::BlockDecl::classofKind;
    class ::clang::Decl  * (::clang::BlockDecl::*method_pointer_a92d1648e8c656d7ba343d462cea9a62)() const = &::clang::BlockDecl::getBlockManglingContextDecl;
    unsigned int  (::clang::BlockDecl::*method_pointer_2ed4e55283c45f45b5dbe539be3c889e)() const = &::clang::BlockDecl::getBlockManglingNumber;
    class ::clang::SourceLocation  (::clang::BlockDecl::*method_pointer_7afc1063f6ec56c0a79f3974f8b4b537)() const = &::clang::BlockDecl::getCaretLocation;
    unsigned int  (::clang::BlockDecl::*method_pointer_2cc06dbef9165773bc3bb00548b076f0)() const = &::clang::BlockDecl::getNumCaptures;
    unsigned int  (::clang::BlockDecl::*method_pointer_4c2e2e24e5915508ac681e3dd9bc9a29)() const = &::clang::BlockDecl::getNumParams;
    class ::clang::ParmVarDecl  * (::clang::BlockDecl::*method_pointer_1ed0d59d3f0e59ffa6524338289ea2c2)(unsigned int ) = &::clang::BlockDecl::getParamDecl;
    class ::clang::ParmVarDecl  const * (::clang::BlockDecl::*method_pointer_fc19ef87249155518b0f46da2ade1df4)(unsigned int ) const = &::clang::BlockDecl::getParamDecl;
    bool  (::clang::BlockDecl::*method_pointer_6b18b6779691504d9bcda4558f8b95ed)() const = &::clang::BlockDecl::hasCaptures;
    bool  (::clang::BlockDecl::*method_pointer_a0fe6ada32df5bea97066db43ded3cac)() const = &::clang::BlockDecl::isConversionFromLambda;
    bool  (::clang::BlockDecl::*method_pointer_5bfd789c62835a0996ac1004db2adb8a)() const = &::clang::BlockDecl::isVariadic;
    bool  (::clang::BlockDecl::*method_pointer_f9478f64d5f4525d94347d756584dc77)() const = &::clang::BlockDecl::param_empty;
    unsigned int  (::clang::BlockDecl::*method_pointer_a69d2fecfed65eb08bb52f7882cfd87e)() const = &::clang::BlockDecl::param_size;
    void  (::clang::BlockDecl::*method_pointer_d916ce515f065e1ab4f09710ae1cee85)(unsigned int , class ::clang::Decl  *) = &::clang::BlockDecl::setBlockMangling;
    void  (::clang::BlockDecl::*method_pointer_8088b2f7c3225a67943f9d154e2cfa96)(bool ) = &::clang::BlockDecl::setBlockMissingReturnType;
    void  (::clang::BlockDecl::*method_pointer_7de15af5d454500fb259a4461fc27ff4)(bool ) = &::clang::BlockDecl::setIsConversionFromLambda;
    void  (::clang::BlockDecl::*method_pointer_e73a44f590fc54b2a343440fbf7ec97c)(bool ) = &::clang::BlockDecl::setIsVariadic;
    boost::python::class_< class ::clang::BlockDecl, autowig::HeldType< class ::clang::BlockDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_e8de972362795c73b92c7a53a3029be0("BlockDecl", "", boost::python::no_init);
    class_e8de972362795c73b92c7a53a3029be0.def("create", method_pointer_298ac064e6e450caa2dc49de4413b1ad, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("create_deserialized", method_pointer_99934a91e73059b7908d576da9ee67e0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("block_missing_return_type", method_pointer_85ab25dfcf8a599ea88cbcf3507bdc5a, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_cxx_this", method_pointer_02bca1cd3eed507f9f2630022bbb55a5, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_variable", method_pointer_77e4c8ad69f4528e85970c58c2ffb5d9, "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_from_decl_context", method_pointer_e5ceb88580ca5c85bcd2df81f03d874b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_to_decl_context", method_pointer_e69356b13d6a59e989a1899a8b402198, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof", method_pointer_827fe3a1baee59fc8be3cf23a0456843, "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof_kind", method_pointer_b658e4a8f2b45ae789a35b5ee8c2f704, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_context_decl", method_pointer_a92d1648e8c656d7ba343d462cea9a62, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_number", method_pointer_2ed4e55283c45f45b5dbe539be3c889e, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_caret_location", method_pointer_7afc1063f6ec56c0a79f3974f8b4b537, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_captures", method_pointer_2cc06dbef9165773bc3bb00548b076f0, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_params", method_pointer_4c2e2e24e5915508ac681e3dd9bc9a29, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_1ed0d59d3f0e59ffa6524338289ea2c2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_fc19ef87249155518b0f46da2ade1df4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("has_captures", method_pointer_6b18b6779691504d9bcda4558f8b95ed, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_conversion_from_lambda", method_pointer_a0fe6ada32df5bea97066db43ded3cac, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_variadic", method_pointer_5bfd789c62835a0996ac1004db2adb8a, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_empty", method_pointer_f9478f64d5f4525d94347d756584dc77, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_size", method_pointer_a69d2fecfed65eb08bb52f7882cfd87e, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_mangling", method_pointer_d916ce515f065e1ab4f09710ae1cee85, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_missing_return_type", method_pointer_8088b2f7c3225a67943f9d154e2cfa96, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_conversion_from_lambda", method_pointer_7de15af5d454500fb259a4461fc27ff4, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_variadic", method_pointer_e73a44f590fc54b2a343440fbf7ec97c, "");
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