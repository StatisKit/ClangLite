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
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplementationDecl::*method_pointer_cab8ffa57ba652119dff5d8f38cddccd)() = &::clang::ObjCImplementationDecl::getSuperClass;
    void  (::clang::ObjCImplementationDecl::*method_pointer_a09bd269fba8578688fe3dd9c50d51c0)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplementationDecl::setSuperClass;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_72ef6eaf9ef450bc84ce41da4b6455d4)() const = &::clang::ObjCImplementationDecl::hasDestructors;
    bool  (*method_pointer_4b02571cb58d563f814c7f7f7233e4bb)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplementationDecl::classofKind;
    class ::clang::ObjCImplementationDecl  * (*method_pointer_b9b770df87325e09b0b592083df856e6)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCImplementationDecl::CreateDeserialized;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplementationDecl::*method_pointer_e6f7fa82ffdc50328b278fd3122bfc59)() const = &::clang::ObjCImplementationDecl::getSuperClass;
    void  (::clang::ObjCImplementationDecl::*method_pointer_8050cfec229658118c10f143e04ec9e1)(unsigned int ) = &::clang::ObjCImplementationDecl::setNumIvarInitializers;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_b83fbaa2306d505aa33a6234f5fe6dc9)() const = &::clang::ObjCImplementationDecl::getNumIvarInitializers;
    void  (::clang::ObjCImplementationDecl::*method_pointer_53c0fe27c53f5a5faf8dfa9ed2fd9d4d)(bool ) = &::clang::ObjCImplementationDecl::setHasDestructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_0d02a0a06f5f574da1f5ad27485ef05e)() const = &::clang::ObjCImplementationDecl::hasNonZeroConstructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_54f17dcf879e5d19963cec7b5139f42b)(bool ) = &::clang::ObjCImplementationDecl::setHasNonZeroConstructors;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_1bf935d5e0675081a3042beaabcf1a65)() const = &::clang::ObjCImplementationDecl::ivar_size;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_0a969ad203fc59269417022042ba6ff7)() const = &::clang::ObjCImplementationDecl::ivar_empty;
    bool  (*method_pointer_e7b490a8448c594d9ba3e4c0472ac08e)(class ::clang::Decl  const *) = ::clang::ObjCImplementationDecl::classof;
    boost::python::class_< class ::clang::ObjCImplementationDecl, autowig::HeldType< class ::clang::ObjCImplementationDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_744be89803015d4fa974827041a9835a("ObjCImplementationDecl", "", boost::python::no_init);
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_cab8ffa57ba652119dff5d8f38cddccd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("set_super_class", method_pointer_a09bd269fba8578688fe3dd9c50d51c0, "");
    class_744be89803015d4fa974827041a9835a.def("has_destructors", method_pointer_72ef6eaf9ef450bc84ce41da4b6455d4, "");
    class_744be89803015d4fa974827041a9835a.def("classof_kind", method_pointer_4b02571cb58d563f814c7f7f7233e4bb, "");
    class_744be89803015d4fa974827041a9835a.def("create_deserialized", method_pointer_b9b770df87325e09b0b592083df856e6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_e6f7fa82ffdc50328b278fd3122bfc59, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("set_num_ivar_initializers", method_pointer_8050cfec229658118c10f143e04ec9e1, "");
    class_744be89803015d4fa974827041a9835a.def("get_num_ivar_initializers", method_pointer_b83fbaa2306d505aa33a6234f5fe6dc9, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_destructors", method_pointer_53c0fe27c53f5a5faf8dfa9ed2fd9d4d, "");
    class_744be89803015d4fa974827041a9835a.def("has_non_zero_constructors", method_pointer_0d02a0a06f5f574da1f5ad27485ef05e, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_non_zero_constructors", method_pointer_54f17dcf879e5d19963cec7b5139f42b, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_size", method_pointer_1bf935d5e0675081a3042beaabcf1a65, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_empty", method_pointer_0a969ad203fc59269417022042ba6ff7, "");
    class_744be89803015d4fa974827041a9835a.def("classof", method_pointer_e7b490a8448c594d9ba3e4c0472ac08e, "");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof_kind");
    class_744be89803015d4fa974827041a9835a.staticmethod("create_deserialized");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplementationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplementationDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}