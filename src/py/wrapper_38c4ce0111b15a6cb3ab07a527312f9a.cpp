#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_38c4ce0111b15a6cb3ab07a527312f9a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCCategoryDecl  * (*method_pointer_8a4ff5a80458579e9c519c1d5604aa6e)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCCategoryDecl::CreateDeserialized;
    bool  (::clang::ObjCCategoryDecl::*method_pointer_e9fe62ef7b1059fe96b3c13fe07017a9)() const = &::clang::ObjCCategoryDecl::IsClassExtension;
    bool  (*method_pointer_51c9c855ecbb55e987bf86150a99dd2a)(class ::clang::Decl  const *) = ::clang::ObjCCategoryDecl::classof;
    bool  (*method_pointer_7de6c4df7ebf5c24b660e560a38c5b21)(enum ::clang::Decl::Kind ) = ::clang::ObjCCategoryDecl::classofKind;
    class ::clang::SourceLocation  (::clang::ObjCCategoryDecl::*method_pointer_5e39fd1966365543a3a666a8de22e85c)() const = &::clang::ObjCCategoryDecl::getCategoryNameLoc;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCCategoryDecl::*method_pointer_dee111e607385135aa3931cdcc02525e)() = &::clang::ObjCCategoryDecl::getClassInterface;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCCategoryDecl::*method_pointer_bd67f8d17e795473a6c0b00d8b9dd5ea)() const = &::clang::ObjCCategoryDecl::getClassInterface;
    class ::clang::ObjCCategoryImplDecl  * (::clang::ObjCCategoryDecl::*method_pointer_b1d8381c9ae95797829bc621f039e45d)() const = &::clang::ObjCCategoryDecl::getImplementation;
    class ::clang::SourceLocation  (::clang::ObjCCategoryDecl::*method_pointer_3c7b3d91e3e85a2694375f195ddc210b)() const = &::clang::ObjCCategoryDecl::getIvarLBraceLoc;
    class ::clang::SourceLocation  (::clang::ObjCCategoryDecl::*method_pointer_16604cff6e5d5210950b0251ab0246d9)() const = &::clang::ObjCCategoryDecl::getIvarRBraceLoc;
    class ::clang::ObjCCategoryDecl  * (::clang::ObjCCategoryDecl::*method_pointer_7af7d396faf953be8e8207abfb2458b4)() const = &::clang::ObjCCategoryDecl::getNextClassCategory;
    class ::clang::ObjCCategoryDecl  * (::clang::ObjCCategoryDecl::*method_pointer_ecea7f9d9a0b54d18b9af71ddf875f11)() const = &::clang::ObjCCategoryDecl::getNextClassCategoryRaw;
    bool  (::clang::ObjCCategoryDecl::*method_pointer_2c67ebddb0c553cdb5db00791d0a7a0e)() const = &::clang::ObjCCategoryDecl::ivar_empty;
    unsigned int  (::clang::ObjCCategoryDecl::*method_pointer_5cf1c2da69e45158a4c3d74a5368cf30)() const = &::clang::ObjCCategoryDecl::ivar_size;
    unsigned int  (::clang::ObjCCategoryDecl::*method_pointer_a348670915315a389e7903942b07d252)() const = &::clang::ObjCCategoryDecl::protocol_size;
    void  (::clang::ObjCCategoryDecl::*method_pointer_3df58547bc8e5c539f0cf6c729f12e23)(class ::clang::SourceLocation ) = &::clang::ObjCCategoryDecl::setCategoryNameLoc;
    void  (::clang::ObjCCategoryDecl::*method_pointer_8ab45e767ae25b67b621b0d564b12c0c)(class ::clang::ObjCCategoryImplDecl  *) = &::clang::ObjCCategoryDecl::setImplementation;
    void  (::clang::ObjCCategoryDecl::*method_pointer_40fb9656edfc5235a0d25451015bbb2e)(class ::clang::SourceLocation ) = &::clang::ObjCCategoryDecl::setIvarLBraceLoc;
    void  (::clang::ObjCCategoryDecl::*method_pointer_5d2bd776a16e5611bd6915f088b18663)(class ::clang::SourceLocation ) = &::clang::ObjCCategoryDecl::setIvarRBraceLoc;
    boost::python::class_< class ::clang::ObjCCategoryDecl, autowig::HeldType< class ::clang::ObjCCategoryDecl >, boost::python::bases< class ::clang::ObjCContainerDecl >, boost::noncopyable > class_38c4ce0111b15a6cb3ab07a527312f9a("ObjCCategoryDecl", "", boost::python::no_init);
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("create_deserialized", method_pointer_8a4ff5a80458579e9c519c1d5604aa6e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("is_class_extension", method_pointer_e9fe62ef7b1059fe96b3c13fe07017a9, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("classof", method_pointer_51c9c855ecbb55e987bf86150a99dd2a, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("classof_kind", method_pointer_7de6c4df7ebf5c24b660e560a38c5b21, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_category_name_loc", method_pointer_5e39fd1966365543a3a666a8de22e85c, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_class_interface", method_pointer_dee111e607385135aa3931cdcc02525e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_class_interface", method_pointer_bd67f8d17e795473a6c0b00d8b9dd5ea, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_implementation", method_pointer_b1d8381c9ae95797829bc621f039e45d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_ivar_l_brace_loc", method_pointer_3c7b3d91e3e85a2694375f195ddc210b, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_ivar_r_brace_loc", method_pointer_16604cff6e5d5210950b0251ab0246d9, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_next_class_category", method_pointer_7af7d396faf953be8e8207abfb2458b4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_next_class_category_raw", method_pointer_ecea7f9d9a0b54d18b9af71ddf875f11, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("ivar_empty", method_pointer_2c67ebddb0c553cdb5db00791d0a7a0e, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("ivar_size", method_pointer_5cf1c2da69e45158a4c3d74a5368cf30, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("protocol_size", method_pointer_a348670915315a389e7903942b07d252, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("set_category_name_loc", method_pointer_3df58547bc8e5c539f0cf6c729f12e23, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("set_implementation", method_pointer_8ab45e767ae25b67b621b0d564b12c0c, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("set_ivar_l_brace_loc", method_pointer_40fb9656edfc5235a0d25451015bbb2e, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("set_ivar_r_brace_loc", method_pointer_5d2bd776a16e5611bd6915f088b18663, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.staticmethod("classof_kind");
    class_38c4ce0111b15a6cb3ab07a527312f9a.staticmethod("create_deserialized");
    class_38c4ce0111b15a6cb3ab07a527312f9a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCCategoryDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCCategoryDecl >, autowig::HeldType< class ::clang::ObjCContainerDecl > >();
    }

}