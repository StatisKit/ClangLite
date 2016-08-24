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
    class ::clang::ObjCImplementationDecl  * (*method_pointer_bb8ea3e1f8735974bb3c69c4a127e227)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::ObjCInterfaceDecl  *, class ::clang::ObjCInterfaceDecl  *, class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation ) = ::clang::ObjCImplementationDecl::Create;
    class ::clang::ObjCImplementationDecl  * (*method_pointer_4f00a2406cbe533b93a903f48d0db939)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCImplementationDecl::CreateDeserialized;
    bool  (*method_pointer_0e59fbefbfc552fc810a69f4e1a7e8f8)(class ::clang::Decl  const *) = ::clang::ObjCImplementationDecl::classof;
    bool  (*method_pointer_d08d3ce21016585fb679021d85129e6c)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplementationDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_c0dba00c4a0d54f48c51b5f81075c48c)() const = &::clang::ObjCImplementationDecl::getIvarLBraceLoc;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_c9dde1dfda595c6e8440a280f14cd81d)() const = &::clang::ObjCImplementationDecl::getIvarRBraceLoc;
    class ::llvm::StringRef  (::clang::ObjCImplementationDecl::*method_pointer_e24abf79bcdb5ca5909c1e50e3e97661)() const = &::clang::ObjCImplementationDecl::getName;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_0e2f57c5329a5c2fa452c7a4e0c1772e)() const = &::clang::ObjCImplementationDecl::getNumIvarInitializers;
    class ::llvm::StringRef  (::clang::ObjCImplementationDecl::*method_pointer_9bee86ba91925da190da1bb348a67bad)() const = &::clang::ObjCImplementationDecl::getObjCRuntimeNameAsString;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplementationDecl::*method_pointer_3e4c1394dc305312a74fe25ba269ff78)() const = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplementationDecl::*method_pointer_a1d9d741e29e5ec5a9505c58dde29651)() = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_7934215aa0f653eda813d0bf411f2aa6)() const = &::clang::ObjCImplementationDecl::getSuperClassLoc;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_48163641341d58bda3ca94d556d93ba5)() const = &::clang::ObjCImplementationDecl::hasDestructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_9db9b13793235ee1a8e2a716ef7cca09)() const = &::clang::ObjCImplementationDecl::hasNonZeroConstructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_29618c109fb351d19bc7ac5f7edfab42)() const = &::clang::ObjCImplementationDecl::ivar_empty;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_a285e001cc2c50c68dc0764b1c1c7aad)() const = &::clang::ObjCImplementationDecl::ivar_size;
    void  (::clang::ObjCImplementationDecl::*method_pointer_61ceae36d0685e2f8ef7e6a255d8f4d7)(bool ) = &::clang::ObjCImplementationDecl::setHasDestructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_4a81ef91b8f65265894e2ea11948fd7e)(bool ) = &::clang::ObjCImplementationDecl::setHasNonZeroConstructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_f45aea344824552cb0930d1838b6ed2c)(class ::clang::SourceLocation ) = &::clang::ObjCImplementationDecl::setIvarLBraceLoc;
    void  (::clang::ObjCImplementationDecl::*method_pointer_c4d018de515e580eaa7566fda68fcbce)(class ::clang::SourceLocation ) = &::clang::ObjCImplementationDecl::setIvarRBraceLoc;
    void  (::clang::ObjCImplementationDecl::*method_pointer_7b1f11842d1d58008255e9ea632d9f4d)(unsigned int ) = &::clang::ObjCImplementationDecl::setNumIvarInitializers;
    void  (::clang::ObjCImplementationDecl::*method_pointer_dcdf3c84b219506293d03c242078c1c5)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplementationDecl::setSuperClass;
    boost::python::class_< class ::clang::ObjCImplementationDecl, autowig::HeldType< class ::clang::ObjCImplementationDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_744be89803015d4fa974827041a9835a("ObjCImplementationDecl", "", boost::python::no_init);
    class_744be89803015d4fa974827041a9835a.def("create", method_pointer_bb8ea3e1f8735974bb3c69c4a127e227, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("create_deserialized", method_pointer_4f00a2406cbe533b93a903f48d0db939, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("classof", method_pointer_0e59fbefbfc552fc810a69f4e1a7e8f8, "");
    class_744be89803015d4fa974827041a9835a.def("classof_kind", method_pointer_d08d3ce21016585fb679021d85129e6c, "");
    class_744be89803015d4fa974827041a9835a.def("get_ivar_l_brace_loc", method_pointer_c0dba00c4a0d54f48c51b5f81075c48c, "");
    class_744be89803015d4fa974827041a9835a.def("get_ivar_r_brace_loc", method_pointer_c9dde1dfda595c6e8440a280f14cd81d, "");
    class_744be89803015d4fa974827041a9835a.def("get_name", method_pointer_e24abf79bcdb5ca5909c1e50e3e97661, "");
    class_744be89803015d4fa974827041a9835a.def("get_num_ivar_initializers", method_pointer_0e2f57c5329a5c2fa452c7a4e0c1772e, "");
    class_744be89803015d4fa974827041a9835a.def("get_obj_c_runtime_name_as_string", method_pointer_9bee86ba91925da190da1bb348a67bad, "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_3e4c1394dc305312a74fe25ba269ff78, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_a1d9d741e29e5ec5a9505c58dde29651, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class_loc", method_pointer_7934215aa0f653eda813d0bf411f2aa6, "");
    class_744be89803015d4fa974827041a9835a.def("has_destructors", method_pointer_48163641341d58bda3ca94d556d93ba5, "");
    class_744be89803015d4fa974827041a9835a.def("has_non_zero_constructors", method_pointer_9db9b13793235ee1a8e2a716ef7cca09, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_empty", method_pointer_29618c109fb351d19bc7ac5f7edfab42, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_size", method_pointer_a285e001cc2c50c68dc0764b1c1c7aad, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_destructors", method_pointer_61ceae36d0685e2f8ef7e6a255d8f4d7, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_non_zero_constructors", method_pointer_4a81ef91b8f65265894e2ea11948fd7e, "");
    class_744be89803015d4fa974827041a9835a.def("set_ivar_l_brace_loc", method_pointer_f45aea344824552cb0930d1838b6ed2c, "");
    class_744be89803015d4fa974827041a9835a.def("set_ivar_r_brace_loc", method_pointer_c4d018de515e580eaa7566fda68fcbce, "");
    class_744be89803015d4fa974827041a9835a.def("set_num_ivar_initializers", method_pointer_7b1f11842d1d58008255e9ea632d9f4d, "");
    class_744be89803015d4fa974827041a9835a.def("set_super_class", method_pointer_dcdf3c84b219506293d03c242078c1c5, "");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof_kind");
    class_744be89803015d4fa974827041a9835a.staticmethod("create");
    class_744be89803015d4fa974827041a9835a.staticmethod("create_deserialized");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplementationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplementationDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}