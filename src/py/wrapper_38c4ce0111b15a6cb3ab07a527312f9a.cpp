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
    unsigned int  (::clang::ObjCCategoryDecl::*method_pointer_647902873e495de9baf46ac26f96e37c)() const = &::clang::ObjCCategoryDecl::protocol_size;
    bool  (*method_pointer_38d2bfe7eecf5fc4ac3406b8eb40a919)(class ::clang::Decl  const *) = ::clang::ObjCCategoryDecl::classof;
    class ::clang::ObjCCategoryDecl  * (*method_pointer_facbd346582a57fcacbdd56e425f4510)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCCategoryDecl::CreateDeserialized;
    class ::clang::ObjCCategoryDecl  * (::clang::ObjCCategoryDecl::*method_pointer_8fd29b4d59325a198c10034482d03aa3)() const = &::clang::ObjCCategoryDecl::getNextClassCategory;
    void  (::clang::ObjCCategoryDecl::*method_pointer_6cad133ed3b85183bb4999509390dbea)(class ::clang::ObjCCategoryImplDecl  *) = &::clang::ObjCCategoryDecl::setImplementation;
    class ::clang::ObjCCategoryImplDecl  * (::clang::ObjCCategoryDecl::*method_pointer_da640877b90b5005a01c0e67c00bb488)() const = &::clang::ObjCCategoryDecl::getImplementation;
    unsigned int  (::clang::ObjCCategoryDecl::*method_pointer_4e810c8e7106530a8aad835a4efa1a2c)() const = &::clang::ObjCCategoryDecl::ivar_size;
    bool  (::clang::ObjCCategoryDecl::*method_pointer_637f1631d4315f1298e7171726a6131a)() const = &::clang::ObjCCategoryDecl::IsClassExtension;
    class ::clang::ObjCCategoryDecl  * (::clang::ObjCCategoryDecl::*method_pointer_a116c60c0a925c56a02bbd86c062f2d4)() const = &::clang::ObjCCategoryDecl::getNextClassCategoryRaw;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCCategoryDecl::*method_pointer_f6a323559ec751bc9179e0e0b093c7da)() const = &::clang::ObjCCategoryDecl::getClassInterface;
    bool  (*method_pointer_37d6447bcb6a5156b7ef9d0fe33801e4)(enum ::clang::Decl::Kind ) = ::clang::ObjCCategoryDecl::classofKind;
    bool  (::clang::ObjCCategoryDecl::*method_pointer_bd4ed2f147245ffda7cd187431538bb7)() const = &::clang::ObjCCategoryDecl::ivar_empty;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCCategoryDecl::*method_pointer_e52b4c4b99e15d8ab7487592afb3cdbb)() = &::clang::ObjCCategoryDecl::getClassInterface;
    boost::python::class_< class ::clang::ObjCCategoryDecl, autowig::HeldType< class ::clang::ObjCCategoryDecl >, boost::python::bases< class ::clang::ObjCContainerDecl >, boost::noncopyable > class_38c4ce0111b15a6cb3ab07a527312f9a("ObjCCategoryDecl", "", boost::python::no_init);
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("protocol_size", method_pointer_647902873e495de9baf46ac26f96e37c, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("classof", method_pointer_38d2bfe7eecf5fc4ac3406b8eb40a919, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("create_deserialized", method_pointer_facbd346582a57fcacbdd56e425f4510, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_next_class_category", method_pointer_8fd29b4d59325a198c10034482d03aa3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("set_implementation", method_pointer_6cad133ed3b85183bb4999509390dbea, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_implementation", method_pointer_da640877b90b5005a01c0e67c00bb488, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("ivar_size", method_pointer_4e810c8e7106530a8aad835a4efa1a2c, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("is_class_extension", method_pointer_637f1631d4315f1298e7171726a6131a, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_next_class_category_raw", method_pointer_a116c60c0a925c56a02bbd86c062f2d4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_class_interface", method_pointer_f6a323559ec751bc9179e0e0b093c7da, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("classof_kind", method_pointer_37d6447bcb6a5156b7ef9d0fe33801e4, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("ivar_empty", method_pointer_bd4ed2f147245ffda7cd187431538bb7, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_class_interface", method_pointer_e52b4c4b99e15d8ab7487592afb3cdbb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.staticmethod("classof_kind");
    class_38c4ce0111b15a6cb3ab07a527312f9a.staticmethod("create_deserialized");
    class_38c4ce0111b15a6cb3ab07a527312f9a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCCategoryDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCCategoryDecl >, autowig::HeldType< class ::clang::ObjCContainerDecl > >();
    }

}