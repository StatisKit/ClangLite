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
    class ::clang::LinkageSpecDecl  * (*method_pointer_62db150c40705ca186ca1a12257f6871)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::SourceLocation , class ::clang::SourceLocation , enum ::clang::LinkageSpecDecl::LanguageIDs , bool ) = ::clang::LinkageSpecDecl::Create;
    class ::clang::LinkageSpecDecl  * (*method_pointer_70bca275f71053988ef9d138efa72799)(class ::clang::ASTContext  &, unsigned int ) = ::clang::LinkageSpecDecl::CreateDeserialized;
    class ::clang::LinkageSpecDecl  * (*method_pointer_c4e9362c802c53cd9b098fb29e701813)(class ::clang::DeclContext  const *) = ::clang::LinkageSpecDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_d49f20ed3aa755148181b9f01fb473d7)(class ::clang::LinkageSpecDecl  const *) = ::clang::LinkageSpecDecl::castToDeclContext;
    bool  (*method_pointer_dccc5aae825653e5a8d04146d47fda00)(class ::clang::Decl  const *) = ::clang::LinkageSpecDecl::classof;
    bool  (*method_pointer_f7186af390fa5454aeca6086e795b607)(enum ::clang::Decl::Kind ) = ::clang::LinkageSpecDecl::classofKind;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_d8984e0066a85c21991fe0faf46bc2b2)() const = &::clang::LinkageSpecDecl::getExternLoc;
    enum ::clang::LinkageSpecDecl::LanguageIDs  (::clang::LinkageSpecDecl::*method_pointer_77d9412bb28b544a9f151408abce75e3)() const = &::clang::LinkageSpecDecl::getLanguage;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_0acde5195548513aa95f2116c4408f2e)() const = &::clang::LinkageSpecDecl::getLocEnd;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_bb5f07539dbf561fafe941a5cdf07999)() const = &::clang::LinkageSpecDecl::getRBraceLoc;
    bool  (::clang::LinkageSpecDecl::*method_pointer_d2882e1899ee55d094d856772662ce67)() const = &::clang::LinkageSpecDecl::hasBraces;
    void  (::clang::LinkageSpecDecl::*method_pointer_a90b9c72e2eb5d78afb50824d5e6b046)(class ::clang::SourceLocation ) = &::clang::LinkageSpecDecl::setExternLoc;
    void  (::clang::LinkageSpecDecl::*method_pointer_ee884a73f72851ae8d846cd38edf7a1c)(enum ::clang::LinkageSpecDecl::LanguageIDs ) = &::clang::LinkageSpecDecl::setLanguage;
    void  (::clang::LinkageSpecDecl::*method_pointer_c7d23f9b89265744ab95bf66199113b6)(class ::clang::SourceLocation ) = &::clang::LinkageSpecDecl::setRBraceLoc;
    boost::python::class_< class ::clang::LinkageSpecDecl, autowig::HeldType< class ::clang::LinkageSpecDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_693db0b37725552a85ff783087528c5b("LinkageSpecDecl", "", boost::python::no_init);
    class_693db0b37725552a85ff783087528c5b.def("create", method_pointer_62db150c40705ca186ca1a12257f6871, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("create_deserialized", method_pointer_70bca275f71053988ef9d138efa72799, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("cast_from_decl_context", method_pointer_c4e9362c802c53cd9b098fb29e701813, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("cast_to_decl_context", method_pointer_d49f20ed3aa755148181b9f01fb473d7, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("classof", method_pointer_dccc5aae825653e5a8d04146d47fda00, "");
    class_693db0b37725552a85ff783087528c5b.def("classof_kind", method_pointer_f7186af390fa5454aeca6086e795b607, "");
    class_693db0b37725552a85ff783087528c5b.def("get_extern_loc", method_pointer_d8984e0066a85c21991fe0faf46bc2b2, "");
    class_693db0b37725552a85ff783087528c5b.def("get_language", method_pointer_77d9412bb28b544a9f151408abce75e3, "");
    class_693db0b37725552a85ff783087528c5b.def("get_loc_end", method_pointer_0acde5195548513aa95f2116c4408f2e, "");
    class_693db0b37725552a85ff783087528c5b.def("get_r_brace_loc", method_pointer_bb5f07539dbf561fafe941a5cdf07999, "");
    class_693db0b37725552a85ff783087528c5b.def("has_braces", method_pointer_d2882e1899ee55d094d856772662ce67, "");
    class_693db0b37725552a85ff783087528c5b.def("set_extern_loc", method_pointer_a90b9c72e2eb5d78afb50824d5e6b046, "");
    class_693db0b37725552a85ff783087528c5b.def("set_language", method_pointer_ee884a73f72851ae8d846cd38edf7a1c, "");
    class_693db0b37725552a85ff783087528c5b.def("set_r_brace_loc", method_pointer_c7d23f9b89265744ab95bf66199113b6, "");
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