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
    class ::clang::ObjCImplementationDecl  * (*method_pointer_6fc5dbc2767b5291a619a7f3ec337351)(class ::clang::ASTContext  &, class ::clang::DeclContext  *, class ::clang::ObjCInterfaceDecl  *, class ::clang::ObjCInterfaceDecl  *, class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation ) = ::clang::ObjCImplementationDecl::Create;
    class ::clang::ObjCImplementationDecl  * (*method_pointer_9ef55170793358b69ffb867dfa09d979)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCImplementationDecl::CreateDeserialized;
    bool  (*method_pointer_bc9a66b6401c588a8cee2f4c29b02955)(class ::clang::Decl  const *) = ::clang::ObjCImplementationDecl::classof;
    bool  (*method_pointer_acb30dd938015ef99fdc4daaccfd41a9)(enum ::clang::Decl::Kind ) = ::clang::ObjCImplementationDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_57d06592569154b19bb5d6f5056f8d77)() const = &::clang::ObjCImplementationDecl::getIvarLBraceLoc;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_4e46f4e9f7915e2d8fb38318a1a43f44)() const = &::clang::ObjCImplementationDecl::getIvarRBraceLoc;
    class ::llvm::StringRef  (::clang::ObjCImplementationDecl::*method_pointer_c59c260f3c66574f86e17623f9f5499c)() const = &::clang::ObjCImplementationDecl::getName;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_59842be70d285cdea24b26b6c343b8f6)() const = &::clang::ObjCImplementationDecl::getNumIvarInitializers;
    class ::llvm::StringRef  (::clang::ObjCImplementationDecl::*method_pointer_9604c25670ed5ae5a98e876fb482b24e)() const = &::clang::ObjCImplementationDecl::getObjCRuntimeNameAsString;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCImplementationDecl::*method_pointer_de007b042b4759638b2b0cdc05afb4fa)() = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCImplementationDecl::*method_pointer_fec75c3f4a17529cb2538807da737261)() const = &::clang::ObjCImplementationDecl::getSuperClass;
    class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_de4c6dd65e0f5479b8625a8134298e01)() const = &::clang::ObjCImplementationDecl::getSuperClassLoc;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_086ffd19175f5850bb973b2f31ab02ed)() const = &::clang::ObjCImplementationDecl::hasDestructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_5c606ba07bdf50b797c99fe8db344e45)() const = &::clang::ObjCImplementationDecl::hasNonZeroConstructors;
    bool  (::clang::ObjCImplementationDecl::*method_pointer_6224f657df325bc1954db9e00e231576)() const = &::clang::ObjCImplementationDecl::ivar_empty;
    unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_d5e93e60af4c5067a7b32d2631ae1c57)() const = &::clang::ObjCImplementationDecl::ivar_size;
    void  (::clang::ObjCImplementationDecl::*method_pointer_91b60300b8655223bd3d5371c204e314)(bool ) = &::clang::ObjCImplementationDecl::setHasDestructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_725f2230a8ce5750a4ff805646d12db2)(bool ) = &::clang::ObjCImplementationDecl::setHasNonZeroConstructors;
    void  (::clang::ObjCImplementationDecl::*method_pointer_6618c3d50a4450958c89f38d2994e3b7)(class ::clang::SourceLocation ) = &::clang::ObjCImplementationDecl::setIvarLBraceLoc;
    void  (::clang::ObjCImplementationDecl::*method_pointer_f421cb3f86965103b6545ba3c88cc024)(class ::clang::SourceLocation ) = &::clang::ObjCImplementationDecl::setIvarRBraceLoc;
    void  (::clang::ObjCImplementationDecl::*method_pointer_7eaa2b7dfaec5a578816e2be4173872f)(unsigned int ) = &::clang::ObjCImplementationDecl::setNumIvarInitializers;
    void  (::clang::ObjCImplementationDecl::*method_pointer_65010b1edf4658e38091249ee067a276)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCImplementationDecl::setSuperClass;
    boost::python::class_< class ::clang::ObjCImplementationDecl, autowig::HeldType< class ::clang::ObjCImplementationDecl >, boost::python::bases< class ::clang::ObjCImplDecl >, boost::noncopyable > class_744be89803015d4fa974827041a9835a("ObjCImplementationDecl", "", boost::python::no_init);
    class_744be89803015d4fa974827041a9835a.def("create", method_pointer_6fc5dbc2767b5291a619a7f3ec337351, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("create_deserialized", method_pointer_9ef55170793358b69ffb867dfa09d979, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("classof", method_pointer_bc9a66b6401c588a8cee2f4c29b02955, "");
    class_744be89803015d4fa974827041a9835a.def("classof_kind", method_pointer_acb30dd938015ef99fdc4daaccfd41a9, "");
    class_744be89803015d4fa974827041a9835a.def("get_ivar_l_brace_loc", method_pointer_57d06592569154b19bb5d6f5056f8d77, "");
    class_744be89803015d4fa974827041a9835a.def("get_ivar_r_brace_loc", method_pointer_4e46f4e9f7915e2d8fb38318a1a43f44, "");
    class_744be89803015d4fa974827041a9835a.def("get_name", method_pointer_c59c260f3c66574f86e17623f9f5499c, "");
    class_744be89803015d4fa974827041a9835a.def("get_num_ivar_initializers", method_pointer_59842be70d285cdea24b26b6c343b8f6, "");
    class_744be89803015d4fa974827041a9835a.def("get_obj_c_runtime_name_as_string", method_pointer_9604c25670ed5ae5a98e876fb482b24e, "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_de007b042b4759638b2b0cdc05afb4fa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_fec75c3f4a17529cb2538807da737261, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class_loc", method_pointer_de4c6dd65e0f5479b8625a8134298e01, "");
    class_744be89803015d4fa974827041a9835a.def("has_destructors", method_pointer_086ffd19175f5850bb973b2f31ab02ed, "");
    class_744be89803015d4fa974827041a9835a.def("has_non_zero_constructors", method_pointer_5c606ba07bdf50b797c99fe8db344e45, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_empty", method_pointer_6224f657df325bc1954db9e00e231576, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_size", method_pointer_d5e93e60af4c5067a7b32d2631ae1c57, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_destructors", method_pointer_91b60300b8655223bd3d5371c204e314, "");
    class_744be89803015d4fa974827041a9835a.def("set_has_non_zero_constructors", method_pointer_725f2230a8ce5750a4ff805646d12db2, "");
    class_744be89803015d4fa974827041a9835a.def("set_ivar_l_brace_loc", method_pointer_6618c3d50a4450958c89f38d2994e3b7, "");
    class_744be89803015d4fa974827041a9835a.def("set_ivar_r_brace_loc", method_pointer_f421cb3f86965103b6545ba3c88cc024, "");
    class_744be89803015d4fa974827041a9835a.def("set_num_ivar_initializers", method_pointer_7eaa2b7dfaec5a578816e2be4173872f, "");
    class_744be89803015d4fa974827041a9835a.def("set_super_class", method_pointer_65010b1edf4658e38091249ee067a276, "");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof_kind");
    class_744be89803015d4fa974827041a9835a.staticmethod("create");
    class_744be89803015d4fa974827041a9835a.staticmethod("create_deserialized");
    class_744be89803015d4fa974827041a9835a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCImplementationDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCImplementationDecl >, autowig::HeldType< class ::clang::ObjCImplDecl > >();
    }

}