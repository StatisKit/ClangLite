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
    class ::clang::ObjCImplementationDecl  * (*method_pointer_2b37da7203aa50fb9004a4ea9ae9afd9)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCImplementationDecl::CreateDeserialized;
    bool  (*method_pointer_f48d7c3d06a65c84b874aa564d89a9e0)(class ::clang::Decl  const *) = ::clang::ObjCImplementationDecl::classof;
    bool  (*method_pointer_3a1b11aab6be59e78fcd39cd6577f369)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplementationDecl::classofKind;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_81390e4f8609588f8ff7ed0e2b6c0103)() const = &::clang::ObjCImplementationDecl::getNumIvarInitializers;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplementationDecl::*method_pointer_3e33ab80af3b59d9be4d501d3b735b19)() = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplementationDecl::*method_pointer_81bb461449015134ba19dc920ffa54de)() const = &::clang::ObjCImplementationDecl::getSuperClass;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_9423be1ae4de505c8b0524a717a2e198)() const = &::clang::ObjCImplementationDecl::hasDestructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_c9705f1da8a059b1a02930757bb821dd)() const = &::clang::ObjCImplementationDecl::hasNonZeroConstructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_81102aafa31e58b19471f43bc555c5f0)() const = &::clang::ObjCImplementationDecl::ivar_empty;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_cd0c167b30d65cdb8000703f031e7642)() const = &::clang::ObjCImplementationDecl::ivar_size;
    void  (::clang::ObjCImplementationDecl::*method_pointer_53ef1c29fa7d57a58dc98ff5ef06a6ec)(bool ) = &::clang::ObjCImplementationDecl::setHasDestructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_bfeb20ee6e725a4fb060611c17089576)(bool ) = &::clang::ObjCImplementationDecl::setHasNonZeroConstructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_2eeb70217e735b72969a595e1399eda6)(unsigned int ) = &::clang::ObjCImplementationDecl::setNumIvarInitializers;
    void  (::clang::ObjCImplementationDecl::*method_pointer_b470c7770da555998e2e35cf5be3b3a1)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplementationDecl::setSuperClass;
    boost::python::class_< class ::clang::ObjCImplementationDecl, autowig::HeldType< class ::clang::ObjCImplementationDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_744be89803015d4fa974827041a9835a("ObjCImplementationDecl", "", boost::python::no_init);
    class_744be89803015d4fa974827041a9835a.def("create_deserialized", method_pointer_2b37da7203aa50fb9004a4ea9ae9afd9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("classof", method_pointer_f48d7c3d06a65c84b874aa564d89a9e0, "");
    class_744be89803015d4fa974827041a9835a.def("classof_kind", method_pointer_3a1b11aab6be59e78fcd39cd6577f369, "");
    class_744be89803015d4fa974827041a9835a.def("get_num_ivar_initializers", method_pointer_81390e4f8609588f8ff7ed0e2b6c0103, "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_3e33ab80af3b59d9be4d501d3b735b19, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_81bb461449015134ba19dc920ffa54de, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("has_destructors", method_pointer_9423be1ae4de505c8b0524a717a2e198, "");
    class_744be89803015d4fa974827041a9835a.def("has_non_zero_constructors", method_pointer_c9705f1da8a059b1a02930757bb821dd, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_empty", method_pointer_81102aafa31e58b19471f43bc555c5f0, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_size", method_pointer_cd0c167b30d65cdb8000703f031e7642, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_destructors", method_pointer_53ef1c29fa7d57a58dc98ff5ef06a6ec, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_non_zero_constructors", method_pointer_bfeb20ee6e725a4fb060611c17089576, "");
    class_744be89803015d4fa974827041a9835a.def("set_num_ivar_initializers", method_pointer_2eeb70217e735b72969a595e1399eda6, "");
    class_744be89803015d4fa974827041a9835a.def("set_super_class", method_pointer_b470c7770da555998e2e35cf5be3b3a1, "");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof_kind");
    class_744be89803015d4fa974827041a9835a.staticmethod("create_deserialized");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplementationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplementationDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}