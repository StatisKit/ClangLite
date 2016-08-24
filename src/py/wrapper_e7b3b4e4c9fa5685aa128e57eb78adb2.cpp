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
    class ::clang::UsingDecl  * (*method_pointer_adb1dbe4b12b5348b884acaa9d3bea82)(class ::clang::ASTContext  &, unsigned int ) = ::clang::UsingDecl::CreateDeserialized;
    void  (::clang::UsingDecl::*method_pointer_c5c5ee3de7d252dbaf46faa8cb734b4b)(class ::clang::UsingShadowDecl  *) = &::clang::UsingDecl::addShadowDecl;
    bool  (*method_pointer_c4bf514d8c65547d84b17b9e93c3133e)(class ::clang::Decl  const *) = ::clang::UsingDecl::classof;
    bool  (*method_pointer_b3ec27c993f85aa0ba90e9561fc87d91)(enum ::clang::Decl::Kind ) = ::clang::UsingDecl::classofKind;
    class ::clang::UsingDecl  const * (::clang::UsingDecl::*method_pointer_ba600df01c1156c6ac2d83f7ad254324)() const = &::clang::UsingDecl::getCanonicalDecl;
    class ::clang::UsingDecl  * (::clang::UsingDecl::*method_pointer_b444cb5651875e55890f2cd50a44d730)() = &::clang::UsingDecl::getCanonicalDecl;
    class ::clang::SourceLocation  (::clang::UsingDecl::*method_pointer_306a25a9286e59b1af2939b6f6b98f6a)() const = &::clang::UsingDecl::getUsingLoc;
    bool  (::clang::UsingDecl::*method_pointer_7c838907483b505292e2afa2345926fd)() const = &::clang::UsingDecl::hasTypename;
    bool  (::clang::UsingDecl::*method_pointer_e7d9a00b66d25fa584c09cdc5abaa29d)() const = &::clang::UsingDecl::isAccessDeclaration;
    void  (::clang::UsingDecl::*method_pointer_eb7a9df744325dc6a1c526e2bc7a0165)(class ::clang::UsingShadowDecl  *) = &::clang::UsingDecl::removeShadowDecl;
    void  (::clang::UsingDecl::*method_pointer_ef0b7b95d04d5b46b735899fa5615728)(bool ) = &::clang::UsingDecl::setTypename;
    void  (::clang::UsingDecl::*method_pointer_7f42d5a747bd5c2480a93a086d9dd17c)(class ::clang::SourceLocation ) = &::clang::UsingDecl::setUsingLoc;
    unsigned int  (::clang::UsingDecl::*method_pointer_34c533e8036e5ed78c32518e94bb4426)() const = &::clang::UsingDecl::shadow_size;
    boost::python::class_< class ::clang::UsingDecl, autowig::HeldType< class ::clang::UsingDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_e7b3b4e4c9fa5685aa128e57eb78adb2("UsingDecl", "", boost::python::no_init);
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("create_deserialized", method_pointer_adb1dbe4b12b5348b884acaa9d3bea82, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("add_shadow_decl", method_pointer_c5c5ee3de7d252dbaf46faa8cb734b4b, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("classof", method_pointer_c4bf514d8c65547d84b17b9e93c3133e, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("classof_kind", method_pointer_b3ec27c993f85aa0ba90e9561fc87d91, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("get_canonical_decl", method_pointer_ba600df01c1156c6ac2d83f7ad254324, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("get_canonical_decl", method_pointer_b444cb5651875e55890f2cd50a44d730, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("get_using_loc", method_pointer_306a25a9286e59b1af2939b6f6b98f6a, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("has_typename", method_pointer_7c838907483b505292e2afa2345926fd, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("is_access_declaration", method_pointer_e7d9a00b66d25fa584c09cdc5abaa29d, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("remove_shadow_decl", method_pointer_eb7a9df744325dc6a1c526e2bc7a0165, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("set_typename", method_pointer_ef0b7b95d04d5b46b735899fa5615728, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("set_using_loc", method_pointer_7f42d5a747bd5c2480a93a086d9dd17c, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("shadow_size", method_pointer_34c533e8036e5ed78c32518e94bb4426, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.staticmethod("classof_kind");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.staticmethod("create_deserialized");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UsingDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UsingDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}