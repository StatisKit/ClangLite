#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_744be89803015d4fa974827041a9835a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCImplementationDecl  * (*method_pointer_4f96395afae05fc6b015fc1848dafb67)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCImplementationDecl::CreateDeserialized;
    bool  (*method_pointer_8142d5ae22e455eeaeb40285734d472e)(class ::clang::Decl  const *) = ::clang::ObjCImplementationDecl::classof;
    bool  (*method_pointer_a5731b4ae12655f6b8c70e4b0223d058)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplementationDecl::classofKind;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_52513135d8e15c60be53363b575ec4aa)() const = &::clang::ObjCImplementationDecl::getNumIvarInitializers;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplementationDecl::*method_pointer_9602a5889f835266b8244a328d70fb6f)() = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplementationDecl::*method_pointer_6343ab3bd28456f99c7487480cbada6b)() const = &::clang::ObjCImplementationDecl::getSuperClass;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_887d8939f498510a9c08454faad83824)() const = &::clang::ObjCImplementationDecl::hasDestructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_8fa872b9cb5e5c7dbd24f4cba4546f2c)() const = &::clang::ObjCImplementationDecl::hasNonZeroConstructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_4e8f92846a2c558193d22b061903b0bc)() const = &::clang::ObjCImplementationDecl::ivar_empty;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_80d2063be7e55054bb5512b63764718a)() const = &::clang::ObjCImplementationDecl::ivar_size;
    void  (::clang::ObjCImplementationDecl::*method_pointer_c1bdc4b600145d419b43897bafc5507b)(bool ) = &::clang::ObjCImplementationDecl::setHasDestructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_289e143212b55b09b6e0d53115e754a1)(bool ) = &::clang::ObjCImplementationDecl::setHasNonZeroConstructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_1af689cb97cb5be3a9b96e935874ea12)(unsigned int ) = &::clang::ObjCImplementationDecl::setNumIvarInitializers;
    void  (::clang::ObjCImplementationDecl::*method_pointer_c52c6617ce7a5ff3a6e2c2cab7e451a0)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplementationDecl::setSuperClass;
    boost::python::class_< class ::clang::ObjCImplementationDecl, autowig::HeldType< class ::clang::ObjCImplementationDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_744be89803015d4fa974827041a9835a("ObjCImplementationDecl", "", boost::python::no_init);
    class_744be89803015d4fa974827041a9835a.def("create_deserialized", method_pointer_4f96395afae05fc6b015fc1848dafb67, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("classof", method_pointer_8142d5ae22e455eeaeb40285734d472e, "");
    class_744be89803015d4fa974827041a9835a.def("classof_kind", method_pointer_a5731b4ae12655f6b8c70e4b0223d058, "");
    class_744be89803015d4fa974827041a9835a.def("get_num_ivar_initializers", method_pointer_52513135d8e15c60be53363b575ec4aa, "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_9602a5889f835266b8244a328d70fb6f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_6343ab3bd28456f99c7487480cbada6b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("has_destructors", method_pointer_887d8939f498510a9c08454faad83824, "");
    class_744be89803015d4fa974827041a9835a.def("has_non_zero_constructors", method_pointer_8fa872b9cb5e5c7dbd24f4cba4546f2c, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_empty", method_pointer_4e8f92846a2c558193d22b061903b0bc, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_size", method_pointer_80d2063be7e55054bb5512b63764718a, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_destructors", method_pointer_c1bdc4b600145d419b43897bafc5507b, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_non_zero_constructors", method_pointer_289e143212b55b09b6e0d53115e754a1, "");
    class_744be89803015d4fa974827041a9835a.def("set_num_ivar_initializers", method_pointer_1af689cb97cb5be3a9b96e935874ea12, "");
    class_744be89803015d4fa974827041a9835a.def("set_super_class", method_pointer_c52c6617ce7a5ff3a6e2c2cab7e451a0, "");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof_kind");
    class_744be89803015d4fa974827041a9835a.staticmethod("create_deserialized");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplementationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplementationDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}