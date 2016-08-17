#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_e7b3b4e4c9fa5685aa128e57eb78adb2()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_0e9da1ab9ac55d3e9b1c87d55a72b410)(enum ::clang::Decl::Kind ) = ::clang::UsingDecl::classofKind;
    void  (::clang::UsingDecl::*method_pointer_bb675be19e1159438c6670d3c2107c67)(class ::clang::UsingShadowDecl  *) = &::clang::UsingDecl::removeShadowDecl;
    unsigned int  (::clang::UsingDecl::*method_pointer_e786c861025356d29f336fe4a073ced6)() const = &::clang::UsingDecl::shadow_size;
    bool  (*method_pointer_3272af104758510d80a8cb1946e601ec)(class ::clang::Decl  const *) = ::clang::UsingDecl::classof;
    class ::clang::UsingDecl  const * (::clang::UsingDecl::*method_pointer_ee72865b331453608a870787266f602c)() const = &::clang::UsingDecl::getCanonicalDecl;
    class ::clang::UsingDecl  * (::clang::UsingDecl::*method_pointer_49e4ec813c685b6ebca1ed43a2887a66)() = &::clang::UsingDecl::getCanonicalDecl;
    void  (::clang::UsingDecl::*method_pointer_a7a0a4a2517c5af99f0fa64237141cc4)(bool ) = &::clang::UsingDecl::setTypename;
    class ::clang::UsingDecl  * (*method_pointer_7d40f177a32e5e4db5768a298460da17)(class ::clang::ASTContext  &, unsigned int ) = ::clang::UsingDecl::CreateDeserialized;
    bool  (::clang::UsingDecl::*method_pointer_766af42541ab52298671d9b90ef7385f)() const = &::clang::UsingDecl::hasTypename;
    bool  (::clang::UsingDecl::*method_pointer_7879524d810352328e0a09610cac9eb2)() const = &::clang::UsingDecl::isAccessDeclaration;
    void  (::clang::UsingDecl::*method_pointer_5bad59eb043450b7af5294c99695e4e9)(class ::clang::UsingShadowDecl  *) = &::clang::UsingDecl::addShadowDecl;
    boost::python::class_< class ::clang::UsingDecl, autowig::HeldType< class ::clang::UsingDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_e7b3b4e4c9fa5685aa128e57eb78adb2("UsingDecl", "", boost::python::no_init);
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("classof_kind", method_pointer_0e9da1ab9ac55d3e9b1c87d55a72b410, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("remove_shadow_decl", method_pointer_bb675be19e1159438c6670d3c2107c67, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("shadow_size", method_pointer_e786c861025356d29f336fe4a073ced6, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("classof", method_pointer_3272af104758510d80a8cb1946e601ec, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("get_canonical_decl", method_pointer_ee72865b331453608a870787266f602c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("get_canonical_decl", method_pointer_49e4ec813c685b6ebca1ed43a2887a66, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("set_typename", method_pointer_a7a0a4a2517c5af99f0fa64237141cc4, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("create_deserialized", method_pointer_7d40f177a32e5e4db5768a298460da17, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("has_typename", method_pointer_766af42541ab52298671d9b90ef7385f, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("is_access_declaration", method_pointer_7879524d810352328e0a09610cac9eb2, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("add_shadow_decl", method_pointer_5bad59eb043450b7af5294c99695e4e9, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.staticmethod("classof_kind");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.staticmethod("create_deserialized");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UsingDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UsingDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}