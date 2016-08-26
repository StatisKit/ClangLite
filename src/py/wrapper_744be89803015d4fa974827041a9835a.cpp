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
    class ::clang::ObjCImplementationDecl  * (*method_pointer_aa4bb287a5f6590490d81cae2c1e4ec2)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCImplementationDecl::CreateDeserialized;
    bool  (*method_pointer_1351c328461e5cf3b2c5d4bee45e3fcd)(class ::clang::Decl  const *) = ::clang::ObjCImplementationDecl::classof;
    bool  (*method_pointer_fb03e0a0e4b85440b258586abda735b8)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplementationDecl::classofKind;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_c0c17527a70b57b39e10626b4f92162f)() const = &::clang::ObjCImplementationDecl::getNumIvarInitializers;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplementationDecl::*method_pointer_f5907b44758f5bcc891ba6afc3049257)() = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplementationDecl::*method_pointer_5a8166825e9b5dfe805740c2e0131b9b)() const = &::clang::ObjCImplementationDecl::getSuperClass;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_9d001f0467dc5186b6c864575ea350e9)() const = &::clang::ObjCImplementationDecl::hasDestructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_c356ef71fa2f5ef3aa68b8845d35b096)() const = &::clang::ObjCImplementationDecl::hasNonZeroConstructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_6b9a406aaa695e78b6929387a913dd04)() const = &::clang::ObjCImplementationDecl::ivar_empty;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_69eac37e9c515cfeae925042169e5b00)() const = &::clang::ObjCImplementationDecl::ivar_size;
    void  (::clang::ObjCImplementationDecl::*method_pointer_ba5280a8300856e6b206e66a96fbab72)(bool ) = &::clang::ObjCImplementationDecl::setHasDestructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_be649a538e07514bb7a0131a168e6e70)(bool ) = &::clang::ObjCImplementationDecl::setHasNonZeroConstructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_8e1b29fc289453a0b80b218eebe7722d)(unsigned int ) = &::clang::ObjCImplementationDecl::setNumIvarInitializers;
    void  (::clang::ObjCImplementationDecl::*method_pointer_b989597b84d55db4a5cedb974633fb35)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplementationDecl::setSuperClass;
    boost::python::class_< class ::clang::ObjCImplementationDecl, autowig::HeldType< class ::clang::ObjCImplementationDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_744be89803015d4fa974827041a9835a("ObjCImplementationDecl", "", boost::python::no_init);
    class_744be89803015d4fa974827041a9835a.def("create_deserialized", method_pointer_aa4bb287a5f6590490d81cae2c1e4ec2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("classof", method_pointer_1351c328461e5cf3b2c5d4bee45e3fcd, "");
    class_744be89803015d4fa974827041a9835a.def("classof_kind", method_pointer_fb03e0a0e4b85440b258586abda735b8, "");
    class_744be89803015d4fa974827041a9835a.def("get_num_ivar_initializers", method_pointer_c0c17527a70b57b39e10626b4f92162f, "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_f5907b44758f5bcc891ba6afc3049257, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_5a8166825e9b5dfe805740c2e0131b9b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("has_destructors", method_pointer_9d001f0467dc5186b6c864575ea350e9, "");
    class_744be89803015d4fa974827041a9835a.def("has_non_zero_constructors", method_pointer_c356ef71fa2f5ef3aa68b8845d35b096, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_empty", method_pointer_6b9a406aaa695e78b6929387a913dd04, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_size", method_pointer_69eac37e9c515cfeae925042169e5b00, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_destructors", method_pointer_ba5280a8300856e6b206e66a96fbab72, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_non_zero_constructors", method_pointer_be649a538e07514bb7a0131a168e6e70, "");
    class_744be89803015d4fa974827041a9835a.def("set_num_ivar_initializers", method_pointer_8e1b29fc289453a0b80b218eebe7722d, "");
    class_744be89803015d4fa974827041a9835a.def("set_super_class", method_pointer_b989597b84d55db4a5cedb974633fb35, "");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof_kind");
    class_744be89803015d4fa974827041a9835a.staticmethod("create_deserialized");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplementationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplementationDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}