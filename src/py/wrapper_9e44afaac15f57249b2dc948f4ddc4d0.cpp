#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_9e44afaac15f57249b2dc948f4ddc4d0()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::UnresolvedUsingTypenameDecl  * (*method_pointer_29774988e06a5bdab4b68793d51cc9e0)(class ::clang::ASTContext  &, unsigned int ) = ::clang::UnresolvedUsingTypenameDecl::CreateDeserialized;
    bool  (*method_pointer_e76e24a001f659c9933ca57057ee47f7)(class ::clang::Decl  const *) = ::clang::UnresolvedUsingTypenameDecl::classof;
    bool  (*method_pointer_f17ac788ef9d51c69af19178577e0bdb)(enum ::clang::Decl::Kind ) = ::clang::UnresolvedUsingTypenameDecl::classofKind;
    class ::clang::UnresolvedUsingTypenameDecl  * (::clang::UnresolvedUsingTypenameDecl::*method_pointer_ed3057d88eab5607835fa19ec0170a2a)() = &::clang::UnresolvedUsingTypenameDecl::getCanonicalDecl;
    class ::clang::UnresolvedUsingTypenameDecl  const * (::clang::UnresolvedUsingTypenameDecl::*method_pointer_e615fd7b4e3452ecbc07bdf40d9dbd9d)() const = &::clang::UnresolvedUsingTypenameDecl::getCanonicalDecl;
    class ::clang::SourceLocation  (::clang::UnresolvedUsingTypenameDecl::*method_pointer_05bd95468c9f5a5a8552f5643f37d2fd)() const = &::clang::UnresolvedUsingTypenameDecl::getTypenameLoc;
    class ::clang::SourceLocation  (::clang::UnresolvedUsingTypenameDecl::*method_pointer_dc9ec4128a215ca681f315a2a8dea5db)() const = &::clang::UnresolvedUsingTypenameDecl::getUsingLoc;
    boost::python::class_< class ::clang::UnresolvedUsingTypenameDecl, autowig::HeldType< class ::clang::UnresolvedUsingTypenameDecl >, boost::python::bases< class ::clang::TypeDecl >, boost::noncopyable > class_9e44afaac15f57249b2dc948f4ddc4d0("UnresolvedUsingTypenameDecl", "", boost::python::no_init);
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("create_deserialized", method_pointer_29774988e06a5bdab4b68793d51cc9e0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("classof", method_pointer_e76e24a001f659c9933ca57057ee47f7, "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("classof_kind", method_pointer_f17ac788ef9d51c69af19178577e0bdb, "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("get_canonical_decl", method_pointer_ed3057d88eab5607835fa19ec0170a2a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("get_canonical_decl", method_pointer_e615fd7b4e3452ecbc07bdf40d9dbd9d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("get_typename_loc", method_pointer_05bd95468c9f5a5a8552f5643f37d2fd, "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("get_using_loc", method_pointer_dc9ec4128a215ca681f315a2a8dea5db, "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.staticmethod("classof_kind");
    class_9e44afaac15f57249b2dc948f4ddc4d0.staticmethod("create_deserialized");
    class_9e44afaac15f57249b2dc948f4ddc4d0.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UnresolvedUsingTypenameDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UnresolvedUsingTypenameDecl >, autowig::HeldType< class ::clang::TypeDecl > >();
    }

}