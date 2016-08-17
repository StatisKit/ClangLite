#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_38c4ce0111b15a6cb3ab07a527312f9a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_dbd0ed047b2f5e82ae28b2c83c22fa97)(enum ::clang::Decl::Kind ) = ::clang::ObjCCategoryDecl::classofKind;
    class ::clang::ObjCCategoryDecl  * (*method_pointer_de7e16512ab45f45ba310ebeeec5d48b)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCCategoryDecl::CreateDeserialized;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCCategoryDecl::*method_pointer_30b6211de200512fb4be43d63df745c1)() const = &::clang::ObjCCategoryDecl::getClassInterface;
    bool  (*method_pointer_a3090968a0e9590eb42fda80e4d0039d)(class ::clang::Decl  const *) = ::clang::ObjCCategoryDecl::classof;
    unsigned int  (::clang::ObjCCategoryDecl::*method_pointer_2ff89246d0de569a917b54df88ae5e9f)() const = &::clang::ObjCCategoryDecl::protocol_size;
    class ::clang::ObjCCategoryImplDecl  * (::clang::ObjCCategoryDecl::*method_pointer_f51fa9aaf4f25f77942ee0978f5eb75c)() const = &::clang::ObjCCategoryDecl::getImplementation;
    class ::clang::ObjCCategoryDecl  * (::clang::ObjCCategoryDecl::*method_pointer_8340c85ebae25a5d87ccf1e3b15ab8a9)() const = &::clang::ObjCCategoryDecl::getNextClassCategoryRaw;
    unsigned int  (::clang::ObjCCategoryDecl::*method_pointer_06b8d22ef99a5b598ea73f62681692b5)() const = &::clang::ObjCCategoryDecl::ivar_size;
    bool  (::clang::ObjCCategoryDecl::*method_pointer_01daa02497f65a399104941772bdb542)() const = &::clang::ObjCCategoryDecl::ivar_empty;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCCategoryDecl::*method_pointer_8ed4e33524955ac9ace92b1249b04fc9)() = &::clang::ObjCCategoryDecl::getClassInterface;
    bool  (::clang::ObjCCategoryDecl::*method_pointer_af83c82aee175a82b98cf81a4c27eafb)() const = &::clang::ObjCCategoryDecl::IsClassExtension;
    class ::clang::ObjCCategoryDecl  * (::clang::ObjCCategoryDecl::*method_pointer_d4ef253c77065a74b151513bf586fbb4)() const = &::clang::ObjCCategoryDecl::getNextClassCategory;
    void  (::clang::ObjCCategoryDecl::*method_pointer_43a8dd7318ca5d3f9515bee97807d142)(class ::clang::ObjCCategoryImplDecl  *) = &::clang::ObjCCategoryDecl::setImplementation;
    boost::python::class_< class ::clang::ObjCCategoryDecl, autowig::HeldType< class ::clang::ObjCCategoryDecl >, boost::python::bases< class ::clang::ObjCContainerDecl >, boost::noncopyable > class_38c4ce0111b15a6cb3ab07a527312f9a("ObjCCategoryDecl", "", boost::python::no_init);
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("classof_kind", method_pointer_dbd0ed047b2f5e82ae28b2c83c22fa97, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("create_deserialized", method_pointer_de7e16512ab45f45ba310ebeeec5d48b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_class_interface", method_pointer_30b6211de200512fb4be43d63df745c1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("classof", method_pointer_a3090968a0e9590eb42fda80e4d0039d, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("protocol_size", method_pointer_2ff89246d0de569a917b54df88ae5e9f, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_implementation", method_pointer_f51fa9aaf4f25f77942ee0978f5eb75c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_next_class_category_raw", method_pointer_8340c85ebae25a5d87ccf1e3b15ab8a9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("ivar_size", method_pointer_06b8d22ef99a5b598ea73f62681692b5, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("ivar_empty", method_pointer_01daa02497f65a399104941772bdb542, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_class_interface", method_pointer_8ed4e33524955ac9ace92b1249b04fc9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("is_class_extension", method_pointer_af83c82aee175a82b98cf81a4c27eafb, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_next_class_category", method_pointer_d4ef253c77065a74b151513bf586fbb4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("set_implementation", method_pointer_43a8dd7318ca5d3f9515bee97807d142, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.staticmethod("classof_kind");
    class_38c4ce0111b15a6cb3ab07a527312f9a.staticmethod("create_deserialized");
    class_38c4ce0111b15a6cb3ab07a527312f9a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCCategoryDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCCategoryDecl >, autowig::HeldType< class ::clang::ObjCContainerDecl > >();
    }

}