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
    class ::clang::BlockDecl  * (*method_pointer_45cdf2f4dbcc5a54826411fd43fda801)(class ::clang::ASTContext  &, unsigned int ) = ::clang::BlockDecl::CreateDeserialized;
    bool  (::clang::BlockDecl::*method_pointer_05b7330a42805a8d80a65eddfd0eda75)() const = &::clang::BlockDecl::blockMissingReturnType;
    bool  (::clang::BlockDecl::*method_pointer_42dd5220a7e351209ef1413c365adc7a)() const = &::clang::BlockDecl::capturesCXXThis;
    bool  (::clang::BlockDecl::*method_pointer_a45ebb6976fc568d9d381c4ae606d2fe)(class ::clang::VarDecl  const *) const = &::clang::BlockDecl::capturesVariable;
    class ::clang::BlockDecl  * (*method_pointer_56cb33566eef5d45afa9a29715a4e109)(class ::clang::DeclContext  const *) = ::clang::BlockDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_5b220e1f60235027ae92b0968cfaf415)(class ::clang::BlockDecl  const *) = ::clang::BlockDecl::castToDeclContext;
    bool  (*method_pointer_96ed82a06a495524a244abbaec569f9c)(class ::clang::Decl  const *) = ::clang::BlockDecl::classof;
    bool  (*method_pointer_1b44ce57a7145e6393493484f1e28988)(enum ::clang::Decl::Kind ) = ::clang::BlockDecl::classofKind;
    class ::clang::Decl  * (::clang::BlockDecl::*method_pointer_d0b9feab6af559bbbfedc70f2a75ee07)() const = &::clang::BlockDecl::getBlockManglingContextDecl;
    unsigned int  (::clang::BlockDecl::*method_pointer_73228f4acb1c5dcaafe8751243adbda4)() const = &::clang::BlockDecl::getBlockManglingNumber;
    unsigned int  (::clang::BlockDecl::*method_pointer_d7d9d4f392b756d495cebed7ada8312e)() const = &::clang::BlockDecl::getNumCaptures;
    unsigned int  (::clang::BlockDecl::*method_pointer_8e4056c5e666578da2fed2beeb0d8f3b)() const = &::clang::BlockDecl::getNumParams;
    class ::clang::ParmVarDecl  * (::clang::BlockDecl::*method_pointer_6a15e22408a151a48e9a743b031d914c)(unsigned int ) = &::clang::BlockDecl::getParamDecl;
    class ::clang::ParmVarDecl  const * (::clang::BlockDecl::*method_pointer_f7804659e3c85d09bcc22045a953bf5f)(unsigned int ) const = &::clang::BlockDecl::getParamDecl;
    bool  (::clang::BlockDecl::*method_pointer_0e789a55924b5b56b68c1fc46af56f87)() const = &::clang::BlockDecl::hasCaptures;
    bool  (::clang::BlockDecl::*method_pointer_e4f93b47b27b5ae7bddd1a7ebab93d09)() const = &::clang::BlockDecl::isConversionFromLambda;
    bool  (::clang::BlockDecl::*method_pointer_9e77713a499751898668554cd23c7fec)() const = &::clang::BlockDecl::isVariadic;
    bool  (::clang::BlockDecl::*method_pointer_b8c2b6cf69df5eaabce91d0d1f9125ca)() const = &::clang::BlockDecl::param_empty;
    unsigned int  (::clang::BlockDecl::*method_pointer_61c4135fca55527daf0e736bb126bd23)() const = &::clang::BlockDecl::param_size;
    void  (::clang::BlockDecl::*method_pointer_5f9cb3b178fc539ea4d697bdcb53c8e7)(unsigned int , class ::clang::Decl  *) = &::clang::BlockDecl::setBlockMangling;
    void  (::clang::BlockDecl::*method_pointer_aecc2000ce845d919084905159748cfb)(bool ) = &::clang::BlockDecl::setBlockMissingReturnType;
    void  (::clang::BlockDecl::*method_pointer_156873798ad7554dbce7593f4e236d81)(bool ) = &::clang::BlockDecl::setIsConversionFromLambda;
    void  (::clang::BlockDecl::*method_pointer_59cbb0a24fe1576a9bafc419811742af)(bool ) = &::clang::BlockDecl::setIsVariadic;
    boost::python::class_< class ::clang::BlockDecl, autowig::HeldType< class ::clang::BlockDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_e8de972362795c73b92c7a53a3029be0("BlockDecl", "", boost::python::no_init);
    class_e8de972362795c73b92c7a53a3029be0.def("create_deserialized", method_pointer_45cdf2f4dbcc5a54826411fd43fda801, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("block_missing_return_type", method_pointer_05b7330a42805a8d80a65eddfd0eda75, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_cxx_this", method_pointer_42dd5220a7e351209ef1413c365adc7a, "");
    class_e8de972362795c73b92c7a53a3029be0.def("captures_variable", method_pointer_a45ebb6976fc568d9d381c4ae606d2fe, "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_from_decl_context", method_pointer_56cb33566eef5d45afa9a29715a4e109, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("cast_to_decl_context", method_pointer_5b220e1f60235027ae92b0968cfaf415, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof", method_pointer_96ed82a06a495524a244abbaec569f9c, "");
    class_e8de972362795c73b92c7a53a3029be0.def("classof_kind", method_pointer_1b44ce57a7145e6393493484f1e28988, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_context_decl", method_pointer_d0b9feab6af559bbbfedc70f2a75ee07, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_block_mangling_number", method_pointer_73228f4acb1c5dcaafe8751243adbda4, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_captures", method_pointer_d7d9d4f392b756d495cebed7ada8312e, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_num_params", method_pointer_8e4056c5e666578da2fed2beeb0d8f3b, "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_6a15e22408a151a48e9a743b031d914c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("get_param_decl", method_pointer_f7804659e3c85d09bcc22045a953bf5f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e8de972362795c73b92c7a53a3029be0.def("has_captures", method_pointer_0e789a55924b5b56b68c1fc46af56f87, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_conversion_from_lambda", method_pointer_e4f93b47b27b5ae7bddd1a7ebab93d09, "");
    class_e8de972362795c73b92c7a53a3029be0.def("is_variadic", method_pointer_9e77713a499751898668554cd23c7fec, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_empty", method_pointer_b8c2b6cf69df5eaabce91d0d1f9125ca, "");
    class_e8de972362795c73b92c7a53a3029be0.def("param_size", method_pointer_61c4135fca55527daf0e736bb126bd23, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_mangling", method_pointer_5f9cb3b178fc539ea4d697bdcb53c8e7, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_block_missing_return_type", method_pointer_aecc2000ce845d919084905159748cfb, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_conversion_from_lambda", method_pointer_156873798ad7554dbce7593f4e236d81, "");
    class_e8de972362795c73b92c7a53a3029be0.def("set_is_variadic", method_pointer_59cbb0a24fe1576a9bafc419811742af, "");
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