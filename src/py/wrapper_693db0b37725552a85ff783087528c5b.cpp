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
    class ::clang::LinkageSpecDecl  * (*method_pointer_c675801215fd57babdcb964326639a17)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::SourceLocation , class ::clang::SourceLocation , enum ::clang::LinkageSpecDecl::LanguageIDs , bool ) = ::clang::LinkageSpecDecl::Create;
    class ::clang::LinkageSpecDecl  * (*method_pointer_388047aadab65aea86108d38dab9bde4)(class ::clang::ASTContext  &, unsigned int ) = ::clang::LinkageSpecDecl::CreateDeserialized;
    class ::clang::LinkageSpecDecl  * (*method_pointer_c0ef23b70cc0526e8c468105ef6a1d4f)(class ::clang::DeclContext  const *) = ::clang::LinkageSpecDecl::castFromDeclContext;
    class ::clang::DeclContext  * (*method_pointer_f545002102375f13be591ce74f22b092)(class ::clang::LinkageSpecDecl  const *) = ::clang::LinkageSpecDecl::castToDeclContext;
    bool  (*method_pointer_dbc9d1d042dc5b258ada1c23a33bff68)(class ::clang::Decl  const *) = ::clang::LinkageSpecDecl::classof;
    bool  (*method_pointer_8adc3b08ebe55200a6821a9703234c1e)(enum ::clang::Decl::Kind ) = ::clang::LinkageSpecDecl::classofKind;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_3968e6aec03f54db9fa88190e3575960)() const = &::clang::LinkageSpecDecl::getExternLoc;
    enum ::clang::LinkageSpecDecl::LanguageIDs  (::clang::LinkageSpecDecl::*method_pointer_7a6a6c30d79c5e7b844afce8b48ddc8a)() const = &::clang::LinkageSpecDecl::getLanguage;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_7c3bc8a2bd6956c3bd433473ebbdfc48)() const = &::clang::LinkageSpecDecl::getLocEnd;
    class ::clang::SourceLocation  (::clang::LinkageSpecDecl::*method_pointer_4dfd428f3bdf539498ed05edcd53726c)() const = &::clang::LinkageSpecDecl::getRBraceLoc;
    bool  (::clang::LinkageSpecDecl::*method_pointer_172254eb6e5a586eaff6ec1d5dbe6d72)() const = &::clang::LinkageSpecDecl::hasBraces;
    void  (::clang::LinkageSpecDecl::*method_pointer_a2cc8f64be2b587e9f3ff0dd646d2f6b)(class ::clang::SourceLocation ) = &::clang::LinkageSpecDecl::setExternLoc;
    void  (::clang::LinkageSpecDecl::*method_pointer_cf0db8f3ad455b1eadd05608f0d4a3ce)(enum ::clang::LinkageSpecDecl::LanguageIDs ) = &::clang::LinkageSpecDecl::setLanguage;
    void  (::clang::LinkageSpecDecl::*method_pointer_b9232c52c9f358f4a69439b79fa31d38)(class ::clang::SourceLocation ) = &::clang::LinkageSpecDecl::setRBraceLoc;
    boost::python::class_< class ::clang::LinkageSpecDecl, autowig::HeldType< class ::clang::LinkageSpecDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_693db0b37725552a85ff783087528c5b("LinkageSpecDecl", "", boost::python::no_init);
    class_693db0b37725552a85ff783087528c5b.def("create", method_pointer_c675801215fd57babdcb964326639a17, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("create_deserialized", method_pointer_388047aadab65aea86108d38dab9bde4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("cast_from_decl_context", method_pointer_c0ef23b70cc0526e8c468105ef6a1d4f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("cast_to_decl_context", method_pointer_f545002102375f13be591ce74f22b092, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("classof", method_pointer_dbc9d1d042dc5b258ada1c23a33bff68, "");
    class_693db0b37725552a85ff783087528c5b.def("classof_kind", method_pointer_8adc3b08ebe55200a6821a9703234c1e, "");
    class_693db0b37725552a85ff783087528c5b.def("get_extern_loc", method_pointer_3968e6aec03f54db9fa88190e3575960, "");
    class_693db0b37725552a85ff783087528c5b.def("get_language", method_pointer_7a6a6c30d79c5e7b844afce8b48ddc8a, "");
    class_693db0b37725552a85ff783087528c5b.def("get_loc_end", method_pointer_7c3bc8a2bd6956c3bd433473ebbdfc48, "");
    class_693db0b37725552a85ff783087528c5b.def("get_r_brace_loc", method_pointer_4dfd428f3bdf539498ed05edcd53726c, "");
    class_693db0b37725552a85ff783087528c5b.def("has_braces", method_pointer_172254eb6e5a586eaff6ec1d5dbe6d72, "");
    class_693db0b37725552a85ff783087528c5b.def("set_extern_loc", method_pointer_a2cc8f64be2b587e9f3ff0dd646d2f6b, "");
    class_693db0b37725552a85ff783087528c5b.def("set_language", method_pointer_cf0db8f3ad455b1eadd05608f0d4a3ce, "");
    class_693db0b37725552a85ff783087528c5b.def("set_r_brace_loc", method_pointer_b9232c52c9f358f4a69439b79fa31d38, "");
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