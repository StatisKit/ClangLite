#include "_clanglite.h"


namespace autowig
{
}


void wrapper_744be89803015d4fa974827041a9835a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCImplementationDecl  * (*method_pointer_2242d96e7ddb55848c69e37fa3640c70)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCImplementationDecl::CreateDeserialized;
    bool  (*method_pointer_3f8ca9ec0ec059b78856b21693ba66ea)(class ::clang::Decl  const *) = ::clang::ObjCImplementationDecl::classof;
    bool  (*method_pointer_d70adb6a79b7585389b84fff4fb924aa)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplementationDecl::classofKind;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_062e3cff239158d1a9185f39363c5d3a)() const = &::clang::ObjCImplementationDecl::getNumIvarInitializers;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplementationDecl::*method_pointer_09e5d7fd73805e6b83776934eae7ff15)() const = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplementationDecl::*method_pointer_9760309db33c5df6857c80e858beccb8)() = &::clang::ObjCImplementationDecl::getSuperClass;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_4b26bc2638d952eeb9bc24be4a4d344a)() const = &::clang::ObjCImplementationDecl::hasDestructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_ae9fcf48e8125fb8922ec00bd84bcc61)() const = &::clang::ObjCImplementationDecl::hasNonZeroConstructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_0fed7cca638c502789cdab49ed5151fb)() const = &::clang::ObjCImplementationDecl::ivar_empty;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_c9ec7ce788e65b88a5d49587e9339c0e)() const = &::clang::ObjCImplementationDecl::ivar_size;
    void  (::clang::ObjCImplementationDecl::*method_pointer_d2aefba4caad559cb5cd4bb4b90c32e5)(bool ) = &::clang::ObjCImplementationDecl::setHasDestructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_9db0bfa8b5125735a9d3babbd018e57d)(bool ) = &::clang::ObjCImplementationDecl::setHasNonZeroConstructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_2161d28e7e7d5685a611689400faa830)(unsigned int ) = &::clang::ObjCImplementationDecl::setNumIvarInitializers;
    void  (::clang::ObjCImplementationDecl::*method_pointer_60b60afb789f5df5b9525bf575e6f069)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplementationDecl::setSuperClass;
    boost::python::class_< class ::clang::ObjCImplementationDecl, autowig::HeldType< class ::clang::ObjCImplementationDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_744be89803015d4fa974827041a9835a("ObjCImplementationDecl", "", boost::python::no_init);
    class_744be89803015d4fa974827041a9835a.def("create_deserialized", method_pointer_2242d96e7ddb55848c69e37fa3640c70, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("classof", method_pointer_3f8ca9ec0ec059b78856b21693ba66ea, "");
    class_744be89803015d4fa974827041a9835a.def("classof_kind", method_pointer_d70adb6a79b7585389b84fff4fb924aa, "");
    class_744be89803015d4fa974827041a9835a.def("get_num_ivar_initializers", method_pointer_062e3cff239158d1a9185f39363c5d3a, "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_09e5d7fd73805e6b83776934eae7ff15, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_9760309db33c5df6857c80e858beccb8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("has_destructors", method_pointer_4b26bc2638d952eeb9bc24be4a4d344a, "");
    class_744be89803015d4fa974827041a9835a.def("has_non_zero_constructors", method_pointer_ae9fcf48e8125fb8922ec00bd84bcc61, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_empty", method_pointer_0fed7cca638c502789cdab49ed5151fb, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_size", method_pointer_c9ec7ce788e65b88a5d49587e9339c0e, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_destructors", method_pointer_d2aefba4caad559cb5cd4bb4b90c32e5, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_non_zero_constructors", method_pointer_9db0bfa8b5125735a9d3babbd018e57d, "");
    class_744be89803015d4fa974827041a9835a.def("set_num_ivar_initializers", method_pointer_2161d28e7e7d5685a611689400faa830, "");
    class_744be89803015d4fa974827041a9835a.def("set_super_class", method_pointer_60b60afb789f5df5b9525bf575e6f069, "");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof_kind");
    class_744be89803015d4fa974827041a9835a.staticmethod("create_deserialized");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplementationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplementationDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}