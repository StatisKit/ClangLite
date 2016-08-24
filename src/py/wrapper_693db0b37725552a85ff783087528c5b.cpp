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
    class ::clang::LinkageSpecDecl  * (*method_pointer_3aae5dad4c245128908815a4c77fe212)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::SourceLocation , class ::clang::SourceLocation , enum ::clang::LinkageSpecDecl::LanguageIDs , bool ) = ::clang::LinkageSpecDecl::Create;
    class ::clang::LinkageSpecDecl  * (*method_pointer_fdfdfffb2b5854d2b2ab829ac02d7b23)(class ::clang::ASTContext  &, unsigned int ) = ::clang::LinkageSpecDecl::CreateDeserialized;
    class ::clang::LinkageSpecDecl  * (*method_pointer_0f4fb8b1dfdb59e79723774f65191be6)(class ::clang::DeclContext  const *) = ::clang::LinkageSpecDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_5b2fc34b32545530bffba9fd2b8630ef)(class ::clang::LinkageSpecDecl  const *) = ::clang::LinkageSpecDecl::castToDeclContext;
    bool  (*method_pointer_73bc996dde795210ac10719fbd856eea)(class ::clang::Decl  const *) = ::clang::LinkageSpecDecl::classof;
    bool  (*method_pointer_48cc30d303425c14b50066d0419f724f)(enum ::clang::Decl::Kind ) = ::clang::LinkageSpecDecl::classofKind;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_3f15edeb1de357b88d6fc9a038c23a51)() const = &::clang::LinkageSpecDecl::getExternLoc;
    enum ::clang::LinkageSpecDecl::LanguageIDs  (::clang::LinkageSpecDecl::*method_pointer_8233df0a33f75856a66e3ce7656db590)() const = &::clang::LinkageSpecDecl::getLanguage;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_dcc430963ae0515c9623cffa899de47a)() const = &::clang::LinkageSpecDecl::getLocEnd;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_b50850433b8750b681f3a4ee7060d49d)() const = &::clang::LinkageSpecDecl::getRBraceLoc;
    bool  (::clang::LinkageSpecDecl::*method_pointer_eb1a58d6b2fe54bab09f95ff69c731b5)() const = &::clang::LinkageSpecDecl::hasBraces;
    void  (::clang::LinkageSpecDecl::*method_pointer_386e50b123365fdb955d558c1f147d31)(class ::clang::SourceLocation ) = &::clang::LinkageSpecDecl::setExternLoc;
    void  (::clang::LinkageSpecDecl::*method_pointer_0faf9502c2f0578ebafdf8c12987179d)(enum ::clang::LinkageSpecDecl::LanguageIDs ) = &::clang::LinkageSpecDecl::setLanguage;
    void  (::clang::LinkageSpecDecl::*method_pointer_2295f2592a7152c4b262f67a8feeead5)(class ::clang::SourceLocation ) = &::clang::LinkageSpecDecl::setRBraceLoc;
    boost::python::class_< class ::clang::LinkageSpecDecl, autowig::HeldType< class ::clang::LinkageSpecDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_693db0b37725552a85ff783087528c5b("LinkageSpecDecl", "", boost::python::no_init);
    class_693db0b37725552a85ff783087528c5b.def("create", method_pointer_3aae5dad4c245128908815a4c77fe212, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("create_deserialized", method_pointer_fdfdfffb2b5854d2b2ab829ac02d7b23, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("cast_from_decl_context", method_pointer_0f4fb8b1dfdb59e79723774f65191be6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("cast_to_decl_context", method_pointer_5b2fc34b32545530bffba9fd2b8630ef, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("classof", method_pointer_73bc996dde795210ac10719fbd856eea, "");
    class_693db0b37725552a85ff783087528c5b.def("classof_kind", method_pointer_48cc30d303425c14b50066d0419f724f, "");
    class_693db0b37725552a85ff783087528c5b.def("get_extern_loc", method_pointer_3f15edeb1de357b88d6fc9a038c23a51, "");
    class_693db0b37725552a85ff783087528c5b.def("get_language", method_pointer_8233df0a33f75856a66e3ce7656db590, "");
    class_693db0b37725552a85ff783087528c5b.def("get_loc_end", method_pointer_dcc430963ae0515c9623cffa899de47a, "");
    class_693db0b37725552a85ff783087528c5b.def("get_r_brace_loc", method_pointer_b50850433b8750b681f3a4ee7060d49d, "");
    class_693db0b37725552a85ff783087528c5b.def("has_braces", method_pointer_eb1a58d6b2fe54bab09f95ff69c731b5, "");
    class_693db0b37725552a85ff783087528c5b.def("set_extern_loc", method_pointer_386e50b123365fdb955d558c1f147d31, "");
    class_693db0b37725552a85ff783087528c5b.def("set_language", method_pointer_0faf9502c2f0578ebafdf8c12987179d, "");
    class_693db0b37725552a85ff783087528c5b.def("set_r_brace_loc", method_pointer_2295f2592a7152c4b262f67a8feeead5, "");
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