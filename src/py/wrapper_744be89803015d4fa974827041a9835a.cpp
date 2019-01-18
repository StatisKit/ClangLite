#include "_clanglite.h"

class ::clang::ObjCImplementationDecl * (*method_pointer_f7e95205a18a5f509e8b6099fa062dbc)(class ::clang::ASTContext &, class ::clang::DeclContext *, class ::clang::ObjCInterfaceDecl *, class ::clang::ObjCInterfaceDecl *, class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation , class ::clang::SourceLocation )= ::clang::ObjCImplementationDecl::Create;
class ::clang::ObjCImplementationDecl * (*method_pointer_cf23bd86bbaf5de4a1c83abd72ae22b6)(class ::clang::ASTContext &, unsigned int )= ::clang::ObjCImplementationDecl::CreateDeserialized;
unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_895b91881ee951a0bbf45bc8c57c2786)()const= &::clang::ObjCImplementationDecl::getNumIvarInitializers;
void  (::clang::ObjCImplementationDecl::*method_pointer_409554de31125739a36e7790dd8d96ba)(unsigned int )= &::clang::ObjCImplementationDecl::setNumIvarInitializers;
bool  (::clang::ObjCImplementationDecl::*method_pointer_2cd774b77bfd515cb2566d5d0360a03a)()const= &::clang::ObjCImplementationDecl::hasNonZeroConstructors;
void  (::clang::ObjCImplementationDecl::*method_pointer_6b2a1af905315f94871332af5de850d2)(bool )= &::clang::ObjCImplementationDecl::setHasNonZeroConstructors;
bool  (::clang::ObjCImplementationDecl::*method_pointer_846ad90c6aa258f2b7a90e3f779c941d)()const= &::clang::ObjCImplementationDecl::hasDestructors;
void  (::clang::ObjCImplementationDecl::*method_pointer_829ccd06f53359eb9880cc9d4284a166)(bool )= &::clang::ObjCImplementationDecl::setHasDestructors;
class ::llvm::StringRef  (::clang::ObjCImplementationDecl::*method_pointer_90e6d0bb5fc954d7921bb466bf5f46d6)()const= &::clang::ObjCImplementationDecl::getName;
class ::llvm::StringRef  (::clang::ObjCImplementationDecl::*method_pointer_70401d1191565b0c8d1600e6a6c8b584)()const= &::clang::ObjCImplementationDecl::getObjCRuntimeNameAsString;
class ::clang::ObjCInterfaceDecl const * (::clang::ObjCImplementationDecl::*method_pointer_e13bce948bef58f691fb78f6151c7217)()const= &::clang::ObjCImplementationDecl::getSuperClass;
class ::clang::ObjCInterfaceDecl * (::clang::ObjCImplementationDecl::*method_pointer_27e2995a166d51babb7b5b119b0877b1)()= &::clang::ObjCImplementationDecl::getSuperClass;
class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_3578968a22435adb83a3890dcdf38da2)()const= &::clang::ObjCImplementationDecl::getSuperClassLoc;
void  (::clang::ObjCImplementationDecl::*method_pointer_5c418b77e8a25e538be95223a9456d6f)(class ::clang::ObjCInterfaceDecl *)= &::clang::ObjCImplementationDecl::setSuperClass;
void  (::clang::ObjCImplementationDecl::*method_pointer_11685ffc27965e59b0a422da13b4100f)(class ::clang::SourceLocation )= &::clang::ObjCImplementationDecl::setIvarLBraceLoc;
class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_082c803b16d55468bb422ae91f9fc6d3)()const= &::clang::ObjCImplementationDecl::getIvarLBraceLoc;
void  (::clang::ObjCImplementationDecl::*method_pointer_1fb4f029305b5779b287fffb3d68bda6)(class ::clang::SourceLocation )= &::clang::ObjCImplementationDecl::setIvarRBraceLoc;
class ::clang::SourceLocation  (::clang::ObjCImplementationDecl::*method_pointer_dbde9b77862553cd98e0a0665867e33a)()const= &::clang::ObjCImplementationDecl::getIvarRBraceLoc;
unsigned int  (::clang::ObjCImplementationDecl::*method_pointer_d057269783ce57718111b29f15418328)()const= &::clang::ObjCImplementationDecl::ivar_size;
bool  (::clang::ObjCImplementationDecl::*method_pointer_cb98ca64c5a15faea236fea91907adb3)()const= &::clang::ObjCImplementationDecl::ivar_empty;
bool  (*method_pointer_9b29cb96d02c5f73ae0720a4a7184687)(class ::clang::Decl const *)= ::clang::ObjCImplementationDecl::classof;
bool  (*method_pointer_44209ef7a42b5e2e9bfffc7a3549cfa1)(enum ::clang::Decl::Kind )= ::clang::ObjCImplementationDecl::classofKind;

namespace autowig {
}

void wrapper_744be89803015d4fa974827041a9835a(pybind11::module& module)
{

    pybind11::class_<class ::clang::ObjCImplementationDecl, autowig::HolderType< class ::clang::ObjCImplementationDecl >::Type, class ::clang::ObjCImplDecl > class_744be89803015d4fa974827041a9835a(module, "ObjCImplementationDecl", "");
    class_744be89803015d4fa974827041a9835a.def_static("create", method_pointer_f7e95205a18a5f509e8b6099fa062dbc, pybind11::return_value_policy::reference_internal, "");
    class_744be89803015d4fa974827041a9835a.def_static("create_deserialized", method_pointer_cf23bd86bbaf5de4a1c83abd72ae22b6, pybind11::return_value_policy::reference_internal, "");
    class_744be89803015d4fa974827041a9835a.def("get_num_ivar_initializers", method_pointer_895b91881ee951a0bbf45bc8c57c2786, ":Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_744be89803015d4fa974827041a9835a.def("set_num_ivar_initializers", method_pointer_409554de31125739a36e7790dd8d96ba, "");
    class_744be89803015d4fa974827041a9835a.def("has_non_zero_constructors", method_pointer_2cd774b77bfd515cb2566d5d0360a03a, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_744be89803015d4fa974827041a9835a.def("set_has_non_zero_constructors", method_pointer_6b2a1af905315f94871332af5de850d2, "");
    class_744be89803015d4fa974827041a9835a.def("has_destructors", method_pointer_846ad90c6aa258f2b7a90e3f779c941d, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_744be89803015d4fa974827041a9835a.def("set_has_destructors", method_pointer_829ccd06f53359eb9880cc9d4284a166, "");
    class_744be89803015d4fa974827041a9835a.def("get_name", method_pointer_90e6d0bb5fc954d7921bb466bf5f46d6, ":Return Type:\n    :cpp:class:`::llvm::StringRef`\n\n");
    class_744be89803015d4fa974827041a9835a.def("get_obj_c_runtime_name_as_string", method_pointer_70401d1191565b0c8d1600e6a6c8b584, ":Return Type:\n    :cpp:class:`::llvm::StringRef`\n\n");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_e13bce948bef58f691fb78f6151c7217, pybind11::return_value_policy::reference_internal, "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class", method_pointer_27e2995a166d51babb7b5b119b0877b1, pybind11::return_value_policy::reference_internal, "");
    class_744be89803015d4fa974827041a9835a.def("get_super_class_loc", method_pointer_3578968a22435adb83a3890dcdf38da2, "");
    class_744be89803015d4fa974827041a9835a.def("set_super_class", method_pointer_5c418b77e8a25e538be95223a9456d6f, "");
    class_744be89803015d4fa974827041a9835a.def("set_ivar_l_brace_loc", method_pointer_11685ffc27965e59b0a422da13b4100f, "");
    class_744be89803015d4fa974827041a9835a.def("get_ivar_l_brace_loc", method_pointer_082c803b16d55468bb422ae91f9fc6d3, "");
    class_744be89803015d4fa974827041a9835a.def("set_ivar_r_brace_loc", method_pointer_1fb4f029305b5779b287fffb3d68bda6, "");
    class_744be89803015d4fa974827041a9835a.def("get_ivar_r_brace_loc", method_pointer_dbde9b77862553cd98e0a0665867e33a, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_size", method_pointer_d057269783ce57718111b29f15418328, "");
    class_744be89803015d4fa974827041a9835a.def("ivar_empty", method_pointer_cb98ca64c5a15faea236fea91907adb3, "");
    class_744be89803015d4fa974827041a9835a.def_static("classof", method_pointer_9b29cb96d02c5f73ae0720a4a7184687, "");
    class_744be89803015d4fa974827041a9835a.def_static("classof_kind", method_pointer_44209ef7a42b5e2e9bfffc7a3549cfa1, "");

}