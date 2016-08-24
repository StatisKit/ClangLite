#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_e7b3b4e4c9fa5685aa128e57eb78adb2()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::UsingDecl  * (*method_pointer_34fb769f15135596a80e0deb8e44df12)(class ::clang::ASTContext  &, unsigned int ) = ::clang::UsingDecl::CreateDeserialized;
    void  (::clang::UsingDecl::*method_pointer_70790dfde9c853a3a83053a9fca12b18)(class ::clang::UsingShadowDecl  *) = &::clang::UsingDecl::addShadowDecl;
    bool  (*method_pointer_1199b3e5c6b156439da2c6f4cbd5d306)(class ::clang::Decl  const *) = ::clang::UsingDecl::classof;
    bool  (*method_pointer_1ae0a6f6ffb05184bf4d106127715a62)(enum ::clang::Decl::Kind ) = ::clang::UsingDecl::classofKind;
    class ::clang::UsingDecl  const * (::clang::UsingDecl::*method_pointer_aae37cb62797503fa5185edd16fccdc5)() const = &::clang::UsingDecl::getCanonicalDecl;
    class ::clang::UsingDecl  * (::clang::UsingDecl::*method_pointer_a6411b544bc55b04bf94da231f868727)() = &::clang::UsingDecl::getCanonicalDecl;
    class ::clang::SourceLocation  (::clang::UsingDecl::*method_pointer_bd374cb789585653a77a470f0b5c732a)() const = &::clang::UsingDecl::getUsingLoc;
    bool  (::clang::UsingDecl::*method_pointer_9dce26db108d582191d00a0eb0a09fe9)() const = &::clang::UsingDecl::hasTypename;
    bool  (::clang::UsingDecl::*method_pointer_19147ec0d5295339abea0f15b4c360b5)() const = &::clang::UsingDecl::isAccessDeclaration;
    void  (::clang::UsingDecl::*method_pointer_bd6a5bf1ffe15c33a21c1db93d253ce4)(class ::clang::UsingShadowDecl  *) = &::clang::UsingDecl::removeShadowDecl;
    void  (::clang::UsingDecl::*method_pointer_f6a6b31ab7935bb581c9adbc11249b63)(bool ) = &::clang::UsingDecl::setTypename;
    void  (::clang::UsingDecl::*method_pointer_a84dbbb4e31d5c19a70878308997b639)(class ::clang::SourceLocation ) = &::clang::UsingDecl::setUsingLoc;
    unsigned int  (::clang::UsingDecl::*method_pointer_4e664c578a565a09801f42185e6df901)() const = &::clang::UsingDecl::shadow_size;
    boost::python::class_< class ::clang::UsingDecl, autowig::HeldType< class ::clang::UsingDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_e7b3b4e4c9fa5685aa128e57eb78adb2("UsingDecl", "", boost::python::no_init);
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("create_deserialized", method_pointer_34fb769f15135596a80e0deb8e44df12, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("add_shadow_decl", method_pointer_70790dfde9c853a3a83053a9fca12b18, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("classof", method_pointer_1199b3e5c6b156439da2c6f4cbd5d306, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("classof_kind", method_pointer_1ae0a6f6ffb05184bf4d106127715a62, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("get_canonical_decl", method_pointer_aae37cb62797503fa5185edd16fccdc5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("get_canonical_decl", method_pointer_a6411b544bc55b04bf94da231f868727, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("get_using_loc", method_pointer_bd374cb789585653a77a470f0b5c732a, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("has_typename", method_pointer_9dce26db108d582191d00a0eb0a09fe9, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("is_access_declaration", method_pointer_19147ec0d5295339abea0f15b4c360b5, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("remove_shadow_decl", method_pointer_bd6a5bf1ffe15c33a21c1db93d253ce4, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("set_typename", method_pointer_f6a6b31ab7935bb581c9adbc11249b63, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("set_using_loc", method_pointer_a84dbbb4e31d5c19a70878308997b639, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("shadow_size", method_pointer_4e664c578a565a09801f42185e6df901, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.staticmethod("classof_kind");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.staticmethod("create_deserialized");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UsingDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UsingDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}