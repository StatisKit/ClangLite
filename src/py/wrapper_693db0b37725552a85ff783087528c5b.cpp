#include "_clanglite.h"


namespace autowig
{
}


void wrapper_693db0b37725552a85ff783087528c5b()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::LinkageSpecDecl  * (*method_pointer_14a73437d0ea5e30b9e96dd49204571b)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::SourceLocation , class ::clang::SourceLocation , enum ::clang::LinkageSpecDecl::LanguageIDs , bool ) = ::clang::LinkageSpecDecl::Create;
    class ::clang::LinkageSpecDecl  * (*method_pointer_f3071e00a6e857f1bce3ef08db596aef)(class ::clang::ASTContext  &, unsigned int ) = ::clang::LinkageSpecDecl::CreateDeserialized;
    class ::clang::LinkageSpecDecl  * (*method_pointer_c8c9785a1de95be0859df0011d8f9af5)(class ::clang::DeclContext  const *) = ::clang::LinkageSpecDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_c3e6f626d66852d8ab6b5e85b6112169)(class ::clang::LinkageSpecDecl  const *) = ::clang::LinkageSpecDecl::castToDeclContext;
    bool  (*method_pointer_e286fc39bf4550ababe68ee99ffc67a4)(class ::clang::Decl  const *) = ::clang::LinkageSpecDecl::classof;
    bool  (*method_pointer_c4b946328cdd5a25be5ea8f76101aa4e)(enum ::clang::Decl::Kind ) = ::clang::LinkageSpecDecl::classofKind;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_a6b678ee50d451d0bbdd07ae857bffb1)() const = &::clang::LinkageSpecDecl::getExternLoc;
    enum ::clang::LinkageSpecDecl::LanguageIDs  (::clang::LinkageSpecDecl::*method_pointer_6b842f2df4d25c40a19ec8e164f70aab)() const = &::clang::LinkageSpecDecl::getLanguage;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_21dad72ccdd65ab2977ec1aeb0987442)() const = &::clang::LinkageSpecDecl::getLocEnd;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_c87bdfbfabcd5500a564d513115b9a47)() const = &::clang::LinkageSpecDecl::getRBraceLoc;
    bool  (::clang::LinkageSpecDecl::*method_pointer_6c0c6167cf375fadb4a2088c41e2bf0c)() const = &::clang::LinkageSpecDecl::hasBraces;
    void  (::clang::LinkageSpecDecl::*method_pointer_7d9439894dfc55858298a8adcd68dd37)(class ::clang::SourceLocation ) = &::clang::LinkageSpecDecl::setExternLoc;
    void  (::clang::LinkageSpecDecl::*method_pointer_d2ab485fc6de5d23a96c8a29d610f8ef)(enum ::clang::LinkageSpecDecl::LanguageIDs ) = &::clang::LinkageSpecDecl::setLanguage;
    void  (::clang::LinkageSpecDecl::*method_pointer_51e2252c59265ee09d78266da65e9505)(class ::clang::SourceLocation ) = &::clang::LinkageSpecDecl::setRBraceLoc;
    boost::python::class_< class ::clang::LinkageSpecDecl, autowig::HeldType< class ::clang::LinkageSpecDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_693db0b37725552a85ff783087528c5b("LinkageSpecDecl", "", boost::python::no_init);
    class_693db0b37725552a85ff783087528c5b.def("create", method_pointer_14a73437d0ea5e30b9e96dd49204571b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("create_deserialized", method_pointer_f3071e00a6e857f1bce3ef08db596aef, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("cast_from_decl_context", method_pointer_c8c9785a1de95be0859df0011d8f9af5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("cast_to_decl_context", method_pointer_c3e6f626d66852d8ab6b5e85b6112169, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("classof", method_pointer_e286fc39bf4550ababe68ee99ffc67a4, "");
    class_693db0b37725552a85ff783087528c5b.def("classof_kind", method_pointer_c4b946328cdd5a25be5ea8f76101aa4e, "");
    class_693db0b37725552a85ff783087528c5b.def("get_extern_loc", method_pointer_a6b678ee50d451d0bbdd07ae857bffb1, "");
    class_693db0b37725552a85ff783087528c5b.def("get_language", method_pointer_6b842f2df4d25c40a19ec8e164f70aab, "");
    class_693db0b37725552a85ff783087528c5b.def("get_loc_end", method_pointer_21dad72ccdd65ab2977ec1aeb0987442, "");
    class_693db0b37725552a85ff783087528c5b.def("get_r_brace_loc", method_pointer_c87bdfbfabcd5500a564d513115b9a47, "");
    class_693db0b37725552a85ff783087528c5b.def("has_braces", method_pointer_6c0c6167cf375fadb4a2088c41e2bf0c, "");
    class_693db0b37725552a85ff783087528c5b.def("set_extern_loc", method_pointer_7d9439894dfc55858298a8adcd68dd37, "");
    class_693db0b37725552a85ff783087528c5b.def("set_language", method_pointer_d2ab485fc6de5d23a96c8a29d610f8ef, "");
    class_693db0b37725552a85ff783087528c5b.def("set_r_brace_loc", method_pointer_51e2252c59265ee09d78266da65e9505, "");
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