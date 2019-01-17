#include "_clanglite.h"

class ::clang::ObjCCategoryDecl * (*method_pointer_0442d9709e9958449a30611bd66f27e5)(class ::clang::ASTContext &, unsigned int )= ::clang::ObjCCategoryDecl::CreateDeserialized;
class ::clang::ObjCInterfaceDecl * (::clang::ObjCCategoryDecl::*method_pointer_673b60952c00574585001bd17397f6c6)()= &::clang::ObjCCategoryDecl::getClassInterface;
class ::clang::ObjCInterfaceDecl const * (::clang::ObjCCategoryDecl::*method_pointer_a042f411d7385683abc1a4a89b24d106)()const= &::clang::ObjCCategoryDecl::getClassInterface;
class ::clang::ObjCCategoryImplDecl * (::clang::ObjCCategoryDecl::*method_pointer_49fb0b54f2a1531c9b37dc386eabdf62)()const= &::clang::ObjCCategoryDecl::getImplementation;
void  (::clang::ObjCCategoryDecl::*method_pointer_f9e48bd439215815a01777903b9ff3d3)(class ::clang::ObjCCategoryImplDecl *)= &::clang::ObjCCategoryDecl::setImplementation;
unsigned int  (::clang::ObjCCategoryDecl::*method_pointer_e4b521db741e5e1ab5377f5d8c8781e8)()const= &::clang::ObjCCategoryDecl::protocol_size;
::clang::ObjCCategoryDecl::protocol_loc_iterator  (::clang::ObjCCategoryDecl::*method_pointer_8842687fba5650bea968b24c8e101159)()const= &::clang::ObjCCategoryDecl::protocol_loc_begin;
::clang::ObjCCategoryDecl::protocol_loc_iterator  (::clang::ObjCCategoryDecl::*method_pointer_e99dfc4ff5b7557681ef44376f9dfddb)()const= &::clang::ObjCCategoryDecl::protocol_loc_end;
class ::clang::ObjCCategoryDecl * (::clang::ObjCCategoryDecl::*method_pointer_0faa6b4747d556dca25e9fa1849b559b)()const= &::clang::ObjCCategoryDecl::getNextClassCategory;
class ::clang::ObjCCategoryDecl * (::clang::ObjCCategoryDecl::*method_pointer_6e87af9cd96a5b9fb5acfb907ee3031f)()const= &::clang::ObjCCategoryDecl::getNextClassCategoryRaw;
bool  (::clang::ObjCCategoryDecl::*method_pointer_2f2fdb55a5ec5834956be89416072577)()const= &::clang::ObjCCategoryDecl::IsClassExtension;
unsigned int  (::clang::ObjCCategoryDecl::*method_pointer_dfa3b15a37a15cb28b69e12ce1d45c95)()const= &::clang::ObjCCategoryDecl::ivar_size;
bool  (::clang::ObjCCategoryDecl::*method_pointer_2809bb94ad5153f6b3ab3229caff723b)()const= &::clang::ObjCCategoryDecl::ivar_empty;
class ::clang::SourceLocation  (::clang::ObjCCategoryDecl::*method_pointer_1a609a3cac7254759d919996ac4d281a)()const= &::clang::ObjCCategoryDecl::getCategoryNameLoc;
void  (::clang::ObjCCategoryDecl::*method_pointer_17a2ae0eebf5599b95d4e8e073185c75)(class ::clang::SourceLocation )= &::clang::ObjCCategoryDecl::setCategoryNameLoc;
void  (::clang::ObjCCategoryDecl::*method_pointer_6c34006901b45a6eac5c26bc6413e447)(class ::clang::SourceLocation )= &::clang::ObjCCategoryDecl::setIvarLBraceLoc;
class ::clang::SourceLocation  (::clang::ObjCCategoryDecl::*method_pointer_70b83f0836415cafa4e6c941505ebe11)()const= &::clang::ObjCCategoryDecl::getIvarLBraceLoc;
void  (::clang::ObjCCategoryDecl::*method_pointer_1abe9d718a2b5113a2d9a50bc0c20bc4)(class ::clang::SourceLocation )= &::clang::ObjCCategoryDecl::setIvarRBraceLoc;
class ::clang::SourceLocation  (::clang::ObjCCategoryDecl::*method_pointer_13e5047d7dbb563fa6d184b2ee35bebd)()const= &::clang::ObjCCategoryDecl::getIvarRBraceLoc;
bool  (*method_pointer_4b71c612acf65cb18a5c6cea40b6254d)(class ::clang::Decl const *)= ::clang::ObjCCategoryDecl::classof;
bool  (*method_pointer_e9be313a12cd50f7b8a770bec99e6b15)(enum ::clang::Decl::Kind )= ::clang::ObjCCategoryDecl::classofKind;


void wrapper_38c4ce0111b15a6cb3ab07a527312f9a(pybind11::module& module)
{

    pybind11::class_<class ::clang::ObjCCategoryDecl, autowig::HolderType< class ::clang::ObjCCategoryDecl >::Type, class ::clang::ObjCContainerDecl > class_38c4ce0111b15a6cb3ab07a527312f9a(module, "ObjCCategoryDecl", "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def_static("create_deserialized", method_pointer_0442d9709e9958449a30611bd66f27e5, pybind11::return_value_policy::reference_internal, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_class_interface", method_pointer_673b60952c00574585001bd17397f6c6, pybind11::return_value_policy::reference_internal, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_class_interface", method_pointer_a042f411d7385683abc1a4a89b24d106, pybind11::return_value_policy::reference_internal, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_implementation", method_pointer_49fb0b54f2a1531c9b37dc386eabdf62, pybind11::return_value_policy::reference_internal, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("set_implementation", method_pointer_f9e48bd439215815a01777903b9ff3d3, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("protocol_size", method_pointer_e4b521db741e5e1ab5377f5d8c8781e8, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("protocol_loc_begin", method_pointer_8842687fba5650bea968b24c8e101159, pybind11::return_value_policy::reference_internal, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("protocol_loc_end", method_pointer_e99dfc4ff5b7557681ef44376f9dfddb, pybind11::return_value_policy::reference_internal, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_next_class_category", method_pointer_0faa6b4747d556dca25e9fa1849b559b, pybind11::return_value_policy::reference_internal, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_next_class_category_raw", method_pointer_6e87af9cd96a5b9fb5acfb907ee3031f, pybind11::return_value_policy::reference_internal, "Retrieve the pointer to the next stored category (or extension), which\nmay be hidden.\n\n:Return Type:\n    :cpp:class:`::clang::ObjCCategoryDecl`\n\n");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("is_class_extension", method_pointer_2f2fdb55a5ec5834956be89416072577, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("ivar_size", method_pointer_dfa3b15a37a15cb28b69e12ce1d45c95, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("ivar_empty", method_pointer_2809bb94ad5153f6b3ab3229caff723b, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_category_name_loc", method_pointer_1a609a3cac7254759d919996ac4d281a, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("set_category_name_loc", method_pointer_17a2ae0eebf5599b95d4e8e073185c75, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("set_ivar_l_brace_loc", method_pointer_6c34006901b45a6eac5c26bc6413e447, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_ivar_l_brace_loc", method_pointer_70b83f0836415cafa4e6c941505ebe11, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("set_ivar_r_brace_loc", method_pointer_1abe9d718a2b5113a2d9a50bc0c20bc4, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_ivar_r_brace_loc", method_pointer_13e5047d7dbb563fa6d184b2ee35bebd, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def_static("classof", method_pointer_4b71c612acf65cb18a5c6cea40b6254d, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def_static("classof_kind", method_pointer_e9be313a12cd50f7b8a770bec99e6b15, "");

}