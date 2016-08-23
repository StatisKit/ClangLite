#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_744be89803015d4fa974827041a9835a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCImplementationDecl  * (*method_pointer_01464d04c09759bc8f0222e1a3cf66dc)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCImplementationDecl::CreateDeserialized;
    bool  (*method_pointer_e49d67915ec95b17b73e51eac56ac1a0)(class ::clang::Decl  const *) = ::clang::ObjCImplementationDecl::classof;
    bool  (*method_pointer_259683e5b37353839840c5de66e737cf)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplementationDecl::classofKind;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_3f9756a585fb54e2a487a4f0f2c66c12)() const = &::clang::ObjCImplementationDecl::getNumIvarInitializers;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplementationDecl::*method_pointer_77eb73145b865d85a435220a1511e569)() = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplementationDecl::*method_pointer_54b91e00940a59b9aa5275733cc764f6)() const = &::clang::ObjCImplementationDecl::getSuperClass;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_0c7b7a45bf3e585db6d5706662d69bf1)() const = &::clang::ObjCImplementationDecl::hasDestructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_fb514f16e7b55f0e97af249f20f9ac56)() const = &::clang::ObjCImplementationDecl::hasNonZeroConstructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_c71b5d59f07d5f5b8f880f0faea94684)() const = &::clang::ObjCImplementationDecl::ivar_empty;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_9861e59d3502560f8d0d39ab3163b19f)() const = &::clang::ObjCImplementationDecl::ivar_size;
    void  (::clang::ObjCImplementationDecl::*method_pointer_388100a43b7659758cb865a677dfc93c)(bool ) = &::clang::ObjCImplementationDecl::setHasDestructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_165232e27638595dac52739c9c976622)(bool ) = &::clang::ObjCImplementationDecl::setHasNonZeroConstructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_b690a55ea34157a4870458b2b5f4329c)(unsigned int ) = &::clang::ObjCImplementationDecl::setNumIvarInitializers;
    void  (::clang::ObjCImplementationDecl::*method_pointer_3ac1828fb67d5cb4ac760fc5d0ada38c)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplementationDecl::setSuperClass;
    boost::python::class_< class ::clang::ObjCImplementationDecl, autowig::HeldType< class ::clang::ObjCImplementationDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_744be89803015d4fa974827041a9835a("ObjCImplementationDecl", "", boost::python::no_init);
    class_744be89803015d4fa974827041a9835a.def("create_deserialized", method_pointer_01464d04c09759bc8f0222e1a3cf66dc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("classof", method_pointer_e49d67915ec95b17b73e51eac56ac1a0, "");
    class_744be89803015d4fa974827041a9835a.def("classof_kind", method_pointer_259683e5b37353839840c5de66e737cf, "");
    class_744be89803015d4fa974827041a9835a.def("get_num_ivar_initializers", method_pointer_3f9756a585fb54e2a487a4f0f2c66c12, "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_77eb73145b865d85a435220a1511e569, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_54b91e00940a59b9aa5275733cc764f6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("has_destructors", method_pointer_0c7b7a45bf3e585db6d5706662d69bf1, "");
    class_744be89803015d4fa974827041a9835a.def("has_non_zero_constructors", method_pointer_fb514f16e7b55f0e97af249f20f9ac56, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_empty", method_pointer_c71b5d59f07d5f5b8f880f0faea94684, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_size", method_pointer_9861e59d3502560f8d0d39ab3163b19f, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_destructors", method_pointer_388100a43b7659758cb865a677dfc93c, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_non_zero_constructors", method_pointer_165232e27638595dac52739c9c976622, "");
    class_744be89803015d4fa974827041a9835a.def("set_num_ivar_initializers", method_pointer_b690a55ea34157a4870458b2b5f4329c, "");
    class_744be89803015d4fa974827041a9835a.def("set_super_class", method_pointer_3ac1828fb67d5cb4ac760fc5d0ada38c, "");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof_kind");
    class_744be89803015d4fa974827041a9835a.staticmethod("create_deserialized");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplementationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplementationDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}