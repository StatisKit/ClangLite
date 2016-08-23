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
    class ::clang::ObjCCategoryDecl  * (*method_pointer_173b36266cee59e7b44f295fd0b4dea5)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCCategoryDecl::CreateDeserialized;
    bool  (::clang::ObjCCategoryDecl::*method_pointer_a730603f7c1750ff8f90a3afb5fb18db)() const = &::clang::ObjCCategoryDecl::IsClassExtension;
    bool  (*method_pointer_7a6490a6dd785c16a4e41e055316f221)(class ::clang::Decl  const *) = ::clang::ObjCCategoryDecl::classof;
    bool  (*method_pointer_c0139d8599aa5fe0895261ef7f1f9b0e)(enum ::clang::Decl::Kind ) = ::clang::ObjCCategoryDecl::classofKind;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCCategoryDecl::*method_pointer_460890c9c7095a4393e71a97e11ee696)() = &::clang::ObjCCategoryDecl::getClassInterface;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCCategoryDecl::*method_pointer_9bc8e8b6077d5f0f97b5227175c18429)() const = &::clang::ObjCCategoryDecl::getClassInterface;
    class ::clang::ObjCCategoryImplDecl  * (::clang::ObjCCategoryDecl::*method_pointer_82c04ac5a103546bab60d3cff9ca0548)() const = &::clang::ObjCCategoryDecl::getImplementation;
    class ::clang::ObjCCategoryDecl  * (::clang::ObjCCategoryDecl::*method_pointer_b1c5c1557e8c59a6af3cc54f6a1aea08)() const = &::clang::ObjCCategoryDecl::getNextClassCategory;
    class ::clang::ObjCCategoryDecl  * (::clang::ObjCCategoryDecl::*method_pointer_96b428d0b27159678ae393f69ad0bbb8)() const = &::clang::ObjCCategoryDecl::getNextClassCategoryRaw;
    bool  (::clang::ObjCCategoryDecl::*method_pointer_5739c8ef584e5a34884a461208539bf5)() const = &::clang::ObjCCategoryDecl::ivar_empty;
    unsigned int  (::clang::ObjCCategoryDecl::*method_pointer_6231a388f5e354e48733854b7fc3d824)() const = &::clang::ObjCCategoryDecl::ivar_size;
    unsigned int  (::clang::ObjCCategoryDecl::*method_pointer_2e85d611857f5bbdb8d2804ccfff1de5)() const = &::clang::ObjCCategoryDecl::protocol_size;
    void  (::clang::ObjCCategoryDecl::*method_pointer_574133d58ccd569bb8896f91e4e3ac2d)(class ::clang::ObjCCategoryImplDecl  *) = &::clang::ObjCCategoryDecl::setImplementation;
    boost::python::class_< class ::clang::ObjCCategoryDecl, autowig::HeldType< class ::clang::ObjCCategoryDecl >, boost::python::bases< class ::clang::ObjCContainerDecl >, boost::noncopyable > class_38c4ce0111b15a6cb3ab07a527312f9a("ObjCCategoryDecl", "", boost::python::no_init);
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("create_deserialized", method_pointer_173b36266cee59e7b44f295fd0b4dea5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("is_class_extension", method_pointer_a730603f7c1750ff8f90a3afb5fb18db, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("classof", method_pointer_7a6490a6dd785c16a4e41e055316f221, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("classof_kind", method_pointer_c0139d8599aa5fe0895261ef7f1f9b0e, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_class_interface", method_pointer_460890c9c7095a4393e71a97e11ee696, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_class_interface", method_pointer_9bc8e8b6077d5f0f97b5227175c18429, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_implementation", method_pointer_82c04ac5a103546bab60d3cff9ca0548, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_next_class_category", method_pointer_b1c5c1557e8c59a6af3cc54f6a1aea08, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_next_class_category_raw", method_pointer_96b428d0b27159678ae393f69ad0bbb8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("ivar_empty", method_pointer_5739c8ef584e5a34884a461208539bf5, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("ivar_size", method_pointer_6231a388f5e354e48733854b7fc3d824, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("protocol_size", method_pointer_2e85d611857f5bbdb8d2804ccfff1de5, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("set_implementation", method_pointer_574133d58ccd569bb8896f91e4e3ac2d, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.staticmethod("classof_kind");
    class_38c4ce0111b15a6cb3ab07a527312f9a.staticmethod("create_deserialized");
    class_38c4ce0111b15a6cb3ab07a527312f9a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCCategoryDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCCategoryDecl >, autowig::HeldType< class ::clang::ObjCContainerDecl > >();
    }

}