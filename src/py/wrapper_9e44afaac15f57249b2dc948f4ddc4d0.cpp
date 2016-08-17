#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_9e44afaac15f57249b2dc948f4ddc4d0()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::UnresolvedUsingTypenameDecl  const * (::clang::UnresolvedUsingTypenameDecl::*method_pointer_6baba3e8aec555e99460eabfaca9f88a)() const = &::clang::UnresolvedUsingTypenameDecl::getCanonicalDecl;
    bool  (*method_pointer_cb0b9fa8558557698086ab38374cea50)(class ::clang::Decl  const *) = ::clang::UnresolvedUsingTypenameDecl::classof;
    class ::clang::UnresolvedUsingTypenameDecl  * (::clang::UnresolvedUsingTypenameDecl::*method_pointer_1a56f1739e4e5bb7ac5a44247232314a)() = &::clang::UnresolvedUsingTypenameDecl::getCanonicalDecl;
    class ::clang::UnresolvedUsingTypenameDecl  * (*method_pointer_b94a643129c95978a7bea044f36d29f5)(class ::clang::ASTContext  &, unsigned int ) = ::clang::UnresolvedUsingTypenameDecl::CreateDeserialized;
    bool  (*method_pointer_1996ab3a02445fe695851a0f4d56d1db)(enum ::clang::Decl::Kind ) = ::clang::UnresolvedUsingTypenameDecl::classofKind;
    boost::python::class_< class ::clang::UnresolvedUsingTypenameDecl, autowig::HeldType< class ::clang::UnresolvedUsingTypenameDecl >, boost::python::bases< class ::clang::TypeDecl >, boost::noncopyable > class_9e44afaac15f57249b2dc948f4ddc4d0("UnresolvedUsingTypenameDecl", "", boost::python::no_init);
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("get_canonical_decl", method_pointer_6baba3e8aec555e99460eabfaca9f88a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("classof", method_pointer_cb0b9fa8558557698086ab38374cea50, "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("get_canonical_decl", method_pointer_1a56f1739e4e5bb7ac5a44247232314a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("create_deserialized", method_pointer_b94a643129c95978a7bea044f36d29f5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("classof_kind", method_pointer_1996ab3a02445fe695851a0f4d56d1db, "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.staticmethod("classof_kind");
    class_9e44afaac15f57249b2dc948f4ddc4d0.staticmethod("create_deserialized");
    class_9e44afaac15f57249b2dc948f4ddc4d0.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UnresolvedUsingTypenameDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UnresolvedUsingTypenameDecl >, autowig::HeldType< class ::clang::TypeDecl > >();
    }

}