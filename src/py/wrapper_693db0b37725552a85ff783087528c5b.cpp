#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_693db0b37725552a85ff783087528c5b()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::LinkageSpecDecl  * (*method_pointer_0112e16c4ebb551691f4f896299210a0)(class ::clang::DeclContext  const *) = ::clang::LinkageSpecDecl::castFromDeclContext;
    bool  (*method_pointer_5700178e92f65f1f9ece3ea10c7aeabf)(enum ::clang::Decl::Kind ) = ::clang::LinkageSpecDecl::classofKind;
    void  (::clang::LinkageSpecDecl::*method_pointer_1198d108c64556adb40633c85b4fd562)(enum ::clang::LinkageSpecDecl::LanguageIDs ) = &::clang::LinkageSpecDecl::setLanguage;
    enum ::clang::LinkageSpecDecl::LanguageIDs  (::clang::LinkageSpecDecl::*method_pointer_9e297f3231c959958263133246bec7eb)() const = &::clang::LinkageSpecDecl::getLanguage;
    bool  (*method_pointer_48e7899ccc3c5277aa96059e53a02d3e)(class ::clang::Decl  const *) = ::clang::LinkageSpecDecl::classof;
    class ::clang::LinkageSpecDecl  * (*method_pointer_d5e34a0d33ad57dbbd329c3bc6cafc1a)(class ::clang::ASTContext  &, unsigned int ) = ::clang::LinkageSpecDecl::CreateDeserialized;
    bool  (::clang::LinkageSpecDecl::*method_pointer_3e4e2d08a2b8504d93ad50e5410fa0f0)() const = &::clang::LinkageSpecDecl::hasBraces;
    class ::clang::DeclContext  * (*method_pointer_63b2469d4c1254ceb11e6af3ad693727)(class ::clang::LinkageSpecDecl  const *) = ::clang::LinkageSpecDecl::castToDeclContext;
    boost::python::class_< class ::clang::LinkageSpecDecl, autowig::HeldType< class ::clang::LinkageSpecDecl >, boost::python::bases< class ::clang::Decl, class ::clang::DeclContext >, boost::noncopyable > class_693db0b37725552a85ff783087528c5b("LinkageSpecDecl", "", boost::python::no_init);
    class_693db0b37725552a85ff783087528c5b.def("cast_from_decl_context", method_pointer_0112e16c4ebb551691f4f896299210a0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("classof_kind", method_pointer_5700178e92f65f1f9ece3ea10c7aeabf, "");
    class_693db0b37725552a85ff783087528c5b.def("set_language", method_pointer_1198d108c64556adb40633c85b4fd562, "");
    class_693db0b37725552a85ff783087528c5b.def("get_language", method_pointer_9e297f3231c959958263133246bec7eb, "");
    class_693db0b37725552a85ff783087528c5b.def("classof", method_pointer_48e7899ccc3c5277aa96059e53a02d3e, "");
    class_693db0b37725552a85ff783087528c5b.def("create_deserialized", method_pointer_d5e34a0d33ad57dbbd329c3bc6cafc1a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.def("has_braces", method_pointer_3e4e2d08a2b8504d93ad50e5410fa0f0, "");
    class_693db0b37725552a85ff783087528c5b.def("cast_to_decl_context", method_pointer_63b2469d4c1254ceb11e6af3ad693727, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_693db0b37725552a85ff783087528c5b.staticmethod("classof_kind");
    class_693db0b37725552a85ff783087528c5b.staticmethod("create_deserialized");
    class_693db0b37725552a85ff783087528c5b.staticmethod("classof");
    class_693db0b37725552a85ff783087528c5b.staticmethod("cast_from_decl_context");
    class_693db0b37725552a85ff783087528c5b.staticmethod("cast_to_decl_context");

    if(std::is_class< autowig::HeldType< class ::clang::LinkageSpecDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::LinkageSpecDecl >, autowig::HeldType< class ::clang::Decl > >();
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::LinkageSpecDecl >, autowig::HeldType< class ::clang::DeclContext > >();
    }

}