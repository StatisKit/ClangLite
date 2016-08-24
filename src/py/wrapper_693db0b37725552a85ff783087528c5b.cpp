#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_693db0b37725552a85ff783087528c5b()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::LinkageSpecDecl  * (*method_pointer_a31d210291a258e08702d0f3678ab6eb)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::SourceLocation , class ::clang::SourceLocation , enum ::clang::LinkageSpecDecl::LanguageIDs , bool ) = ::clang::LinkageSpecDecl::Create;
    class ::clang::LinkageSpecDecl  * (*method_pointer_8ccff34a4c6853f19c11046c18af776d)(class ::clang::ASTContext  &, unsigned int ) = ::clang::LinkageSpecDecl::CreateDeserialized;
    class ::clang::LinkageSpecDecl  * (*method_pointer_258acbf1d6455148bf7b940d25b4ef0e)(class ::clang::DeclContext  const *) = ::clang::LinkageSpecDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_02b49ae11a2a5632a37c56ccc91b4ad5)(class ::clang::LinkageSpecDecl  const *) = ::clang::LinkageSpecDecl::castToDeclContext;
    bool  (*method_pointer_fcc8daf8560958cb9098fcf319841d26)(class ::clang::Decl  const *) = ::clang::LinkageSpecDecl::classof;
    bool  (*method_pointer_444e2c8f6cbe52b6b8fb6b20afe9463b)(enum ::clang::Decl::Kind ) = ::clang::LinkageSpecDecl::classofKind;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_5f8d91d1f2cb5bd49c5d777df525346c)() const = &::clang::LinkageSpecDecl::getExternLoc;
    enum ::clang::LinkageSpecDecl::LanguageIDs  (::clang::LinkageSpecDecl::*method_pointer_076865856cd25f059aa8574aebf1f390)() const = &::clang::LinkageSpecDecl::getLanguage;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_ce1d01dffbe55c798f317b7a57fa7765)() const = &::clang::LinkageSpecDecl::getLocEnd;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_29b214083b4257cca6c09e58d36d52a7)() const = &::clang::LinkageSpecDecl::getRBraceLoc;
    bool  (::clang::LinkageSpecDecl::*method_pointer_0dbf9118f0065ebcad2247cf8330fd70)() const = &::clang::LinkageSpecDecl::hasBraces;
    void  (::clang::LinkageSpecDecl::*method_pointer_657c44bc77655a1187d3d45750a04af0)(class ::clang::SourceLocation ) = &::clang::LinkageSpecDecl::setExternLoc;
    void  (::clang::LinkageSpecDecl::*method_pointer_cfa02793fe2f5bd38003b62cdc1725f7)(enum ::clang::LinkageSpecDecl::LanguageIDs ) = &::clang::LinkageSpecDecl::setLanguage;
    void  (::clang::LinkageSpecDecl::*method_pointer_66790b89161e5f038e6c7b7a9041cfc3)(class ::clang::SourceLocation ) = &::clang::LinkageSpecDecl::setRBraceLoc;
    boost::python::class_< class ::clang::LinkageSpecDecl, autowig::HeldType< class ::clang::LinkageSpecDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_693db0b37725552a85ff783087528c5b("LinkageSpecDecl", "", boost::python::no_init);
    class_693db0b37725552a85ff783087528c5b.def("create", method_pointer_a31d210291a258e08702d0f3678ab6eb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("create_deserialized", method_pointer_8ccff34a4c6853f19c11046c18af776d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("cast_from_decl_context", method_pointer_258acbf1d6455148bf7b940d25b4ef0e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("cast_to_decl_context", method_pointer_02b49ae11a2a5632a37c56ccc91b4ad5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("classof", method_pointer_fcc8daf8560958cb9098fcf319841d26, "");
    class_693db0b37725552a85ff783087528c5b.def("classof_kind", method_pointer_444e2c8f6cbe52b6b8fb6b20afe9463b, "");
    class_693db0b37725552a85ff783087528c5b.def("get_extern_loc", method_pointer_5f8d91d1f2cb5bd49c5d777df525346c, "");
    class_693db0b37725552a85ff783087528c5b.def("get_language", method_pointer_076865856cd25f059aa8574aebf1f390, "");
    class_693db0b37725552a85ff783087528c5b.def("get_loc_end", method_pointer_ce1d01dffbe55c798f317b7a57fa7765, "");
    class_693db0b37725552a85ff783087528c5b.def("get_r_brace_loc", method_pointer_29b214083b4257cca6c09e58d36d52a7, "");
    class_693db0b37725552a85ff783087528c5b.def("has_braces", method_pointer_0dbf9118f0065ebcad2247cf8330fd70, "");
    class_693db0b37725552a85ff783087528c5b.def("set_extern_loc", method_pointer_657c44bc77655a1187d3d45750a04af0, "");
    class_693db0b37725552a85ff783087528c5b.def("set_language", method_pointer_cfa02793fe2f5bd38003b62cdc1725f7, "");
    class_693db0b37725552a85ff783087528c5b.def("set_r_brace_loc", method_pointer_66790b89161e5f038e6c7b7a9041cfc3, "");
    class_693db0b37725552a85ff783087528c5b.staticmethod("cast_from_decl_context");
    class_693db0b37725552a85ff783087528c5b.staticmethod("cast_to_decl_context");
    class_693db0b37725552a85ff783087528c5b.staticmethod("create");
    class_693db0b37725552a85ff783087528c5b.staticmethod("classof_kind");
    class_693db0b37725552a85ff783087528c5b.staticmethod("classof");
    class_693db0b37725552a85ff783087528c5b.staticmethod("create_deserialized");

    if(std::is_class< autowig::HeldType< class ::clang::LinkageSpecDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::LinkageSpecDecl >, autowig::HeldType< class ::clang::Decl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::LinkageSpecDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}