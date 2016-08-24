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
    class ::clang::UsingDecl  * (*method_pointer_c6e69f684a3158b2801cc12a92ca8368)(class ::clang::ASTContext  &, unsigned int ) = ::clang::UsingDecl::CreateDeserialized;
    void  (::clang::UsingDecl::*method_pointer_c9dd8b8f59a25450b5391d19513f5b57)(class ::clang::UsingShadowDecl  *) = &::clang::UsingDecl::addShadowDecl;
    bool  (*method_pointer_ad3fda0d7e8651a489f1e7d981613725)(class ::clang::Decl  const *) = ::clang::UsingDecl::classof;
    bool  (*method_pointer_b61f121de6bf53d69419ada84a8074bf)(enum ::clang::Decl::Kind ) = ::clang::UsingDecl::classofKind;
    class ::clang::UsingDecl  * (::clang::UsingDecl::*method_pointer_3f1af92f786f58798ba36ddb672cea8e)() = &::clang::UsingDecl::getCanonicalDecl;
    class ::clang::UsingDecl  const * (::clang::UsingDecl::*method_pointer_765a7f31e37657228ef4899ef557eb55)() const = &::clang::UsingDecl::getCanonicalDecl;
    class ::clang::SourceLocation  (::clang::UsingDecl::*method_pointer_9a1dfeb1f8d95c4fa1b9aacdd33b4e41)() const = &::clang::UsingDecl::getUsingLoc;
    bool  (::clang::UsingDecl::*method_pointer_772386c3c43e52de8128bd16653c5f3e)() const = &::clang::UsingDecl::hasTypename;
    bool  (::clang::UsingDecl::*method_pointer_1f917bdae8f8566eb35274754aaaf389)() const = &::clang::UsingDecl::isAccessDeclaration;
    void  (::clang::UsingDecl::*method_pointer_9ad09672fad75ed0b8c43d7d36e39d93)(class ::clang::UsingShadowDecl  *) = &::clang::UsingDecl::removeShadowDecl;
    void  (::clang::UsingDecl::*method_pointer_fdf0ec58c55d5815a53c3e1cf188928f)(bool ) = &::clang::UsingDecl::setTypename;
    void  (::clang::UsingDecl::*method_pointer_64ccb1294d5152f69f8d9000d993f09d)(class ::clang::SourceLocation ) = &::clang::UsingDecl::setUsingLoc;
    unsigned int  (::clang::UsingDecl::*method_pointer_897ab1b6eee35fc89aa89ae46f3b3876)() const = &::clang::UsingDecl::shadow_size;
    boost::python::class_< class ::clang::UsingDecl, autowig::HeldType< class ::clang::UsingDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_e7b3b4e4c9fa5685aa128e57eb78adb2("UsingDecl", "", boost::python::no_init);
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("create_deserialized", method_pointer_c6e69f684a3158b2801cc12a92ca8368, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("add_shadow_decl", method_pointer_c9dd8b8f59a25450b5391d19513f5b57, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("classof", method_pointer_ad3fda0d7e8651a489f1e7d981613725, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("classof_kind", method_pointer_b61f121de6bf53d69419ada84a8074bf, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("get_canonical_decl", method_pointer_3f1af92f786f58798ba36ddb672cea8e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("get_canonical_decl", method_pointer_765a7f31e37657228ef4899ef557eb55, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("get_using_loc", method_pointer_9a1dfeb1f8d95c4fa1b9aacdd33b4e41, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("has_typename", method_pointer_772386c3c43e52de8128bd16653c5f3e, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("is_access_declaration", method_pointer_1f917bdae8f8566eb35274754aaaf389, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("remove_shadow_decl", method_pointer_9ad09672fad75ed0b8c43d7d36e39d93, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("set_typename", method_pointer_fdf0ec58c55d5815a53c3e1cf188928f, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("set_using_loc", method_pointer_64ccb1294d5152f69f8d9000d993f09d, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.def("shadow_size", method_pointer_897ab1b6eee35fc89aa89ae46f3b3876, "");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.staticmethod("classof_kind");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.staticmethod("create_deserialized");
    class_e7b3b4e4c9fa5685aa128e57eb78adb2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UsingDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UsingDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}