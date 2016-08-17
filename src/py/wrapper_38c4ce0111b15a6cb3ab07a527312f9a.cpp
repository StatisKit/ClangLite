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
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCCategoryDecl::*method_pointer_312b7ba00e2f58dc98e1fd6fa07ad42d)() const = &::clang::ObjCCategoryDecl::getClassInterface;
    bool  (::clang::ObjCCategoryDecl::*method_pointer_9b95568dce2f5c7db33ecc47a57620d5)() const = &::clang::ObjCCategoryDecl::ivar_empty;
    class ::clang::ObjCCategoryImplDecl  * (::clang::ObjCCategoryDecl::*method_pointer_1acbbf3149a75d6aa7a0bb23672af01a)() const = &::clang::ObjCCategoryDecl::getImplementation;
    bool  (*method_pointer_82275071a6c857f58779cd1c4089ec2d)(class ::clang::Decl  const *) = ::clang::ObjCCategoryDecl::classof;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCCategoryDecl::*method_pointer_79506c5ece9e56818607c472dcc86d1d)() = &::clang::ObjCCategoryDecl::getClassInterface;
    bool  (*method_pointer_e2455edcc5a85793a586aa2d66463bb7)(enum ::clang::Decl::Kind ) = ::clang::ObjCCategoryDecl::classofKind;
    unsigned int  (::clang::ObjCCategoryDecl::*method_pointer_f917d56d22a9584281847dd3e0e6f45a)() const = &::clang::ObjCCategoryDecl::protocol_size;
    class ::clang::ObjCCategoryDecl  * (*method_pointer_8c7ca8900bc35c8a85d2c8661be4b67d)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCCategoryDecl::CreateDeserialized;
    unsigned int  (::clang::ObjCCategoryDecl::*method_pointer_e4b32b36a70059749b2f45df1662a7c2)() const = &::clang::ObjCCategoryDecl::ivar_size;
    bool  (::clang::ObjCCategoryDecl::*method_pointer_764141ea98535d3a9e7d43a89d227e2e)() const = &::clang::ObjCCategoryDecl::IsClassExtension;
    class ::clang::ObjCCategoryDecl  * (::clang::ObjCCategoryDecl::*method_pointer_9e7ac764cc2a58459ce09a656ea51100)() const = &::clang::ObjCCategoryDecl::getNextClassCategoryRaw;
    class ::clang::ObjCCategoryDecl  * (::clang::ObjCCategoryDecl::*method_pointer_1c748856745a5f63877521eb1789194d)() const = &::clang::ObjCCategoryDecl::getNextClassCategory;
    void  (::clang::ObjCCategoryDecl::*method_pointer_c77aff97d1a9549ca3b7469a1217dd47)(class ::clang::ObjCCategoryImplDecl  *) = &::clang::ObjCCategoryDecl::setImplementation;
    boost::python::class_< class ::clang::ObjCCategoryDecl, autowig::HeldType< class ::clang::ObjCCategoryDecl >, boost::python::bases< class ::clang::ObjCContainerDecl >, boost::noncopyable > class_38c4ce0111b15a6cb3ab07a527312f9a("ObjCCategoryDecl", "", boost::python::no_init);
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_class_interface", method_pointer_312b7ba00e2f58dc98e1fd6fa07ad42d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("ivar_empty", method_pointer_9b95568dce2f5c7db33ecc47a57620d5, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_implementation", method_pointer_1acbbf3149a75d6aa7a0bb23672af01a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("classof", method_pointer_82275071a6c857f58779cd1c4089ec2d, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_class_interface", method_pointer_79506c5ece9e56818607c472dcc86d1d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("classof_kind", method_pointer_e2455edcc5a85793a586aa2d66463bb7, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("protocol_size", method_pointer_f917d56d22a9584281847dd3e0e6f45a, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("create_deserialized", method_pointer_8c7ca8900bc35c8a85d2c8661be4b67d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("ivar_size", method_pointer_e4b32b36a70059749b2f45df1662a7c2, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("is_class_extension", method_pointer_764141ea98535d3a9e7d43a89d227e2e, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_next_class_category_raw", method_pointer_9e7ac764cc2a58459ce09a656ea51100, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("get_next_class_category", method_pointer_1c748856745a5f63877521eb1789194d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.def("set_implementation", method_pointer_c77aff97d1a9549ca3b7469a1217dd47, "");
    class_38c4ce0111b15a6cb3ab07a527312f9a.staticmethod("classof_kind");
    class_38c4ce0111b15a6cb3ab07a527312f9a.staticmethod("create_deserialized");
    class_38c4ce0111b15a6cb3ab07a527312f9a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCCategoryDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCCategoryDecl >, autowig::HeldType< class ::clang::ObjCContainerDecl > >();
    }

}