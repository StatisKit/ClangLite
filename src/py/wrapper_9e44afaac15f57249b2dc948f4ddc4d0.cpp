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
    class ::clang::UnresolvedUsingTypenameDecl  * (*method_pointer_4aaca4976f185580b4cd143234972f32)(class ::clang::ASTContext  &, unsigned int ) = ::clang::UnresolvedUsingTypenameDecl::CreateDeserialized;
    bool  (*method_pointer_d5131aa535d35bf5852edd7ced231587)(class ::clang::Decl  const *) = ::clang::UnresolvedUsingTypenameDecl::classof;
    bool  (*method_pointer_b0ea0ad5458b59e296e24de1a297db8f)(enum ::clang::Decl::Kind ) = ::clang::UnresolvedUsingTypenameDecl::classofKind;
    class ::clang::UnresolvedUsingTypenameDecl  * (::clang::UnresolvedUsingTypenameDecl::*method_pointer_bcbc084da82055149baba54ea987fc16)() = &::clang::UnresolvedUsingTypenameDecl::getCanonicalDecl;
    class ::clang::UnresolvedUsingTypenameDecl  const * (::clang::UnresolvedUsingTypenameDecl::*method_pointer_305813a063b155a7a6707e1d21774791)() const = &::clang::UnresolvedUsingTypenameDecl::getCanonicalDecl;
    class ::clang::SourceLocation  (::clang::UnresolvedUsingTypenameDecl::*method_pointer_e920441b93f95c1296c967330e37a197)() const = &::clang::UnresolvedUsingTypenameDecl::getTypenameLoc;
    class ::clang::SourceLocation  (::clang::UnresolvedUsingTypenameDecl::*method_pointer_a40d095cef065ed0b97ffd7166053d4b)() const = &::clang::UnresolvedUsingTypenameDecl::getUsingLoc;
    boost::python::class_< class ::clang::UnresolvedUsingTypenameDecl, autowig::HeldType< class ::clang::UnresolvedUsingTypenameDecl >, boost::python::bases< class ::clang::TypeDecl >, boost::noncopyable > class_9e44afaac15f57249b2dc948f4ddc4d0("UnresolvedUsingTypenameDecl", "", boost::python::no_init);
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("create_deserialized", method_pointer_4aaca4976f185580b4cd143234972f32, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("classof", method_pointer_d5131aa535d35bf5852edd7ced231587, "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("classof_kind", method_pointer_b0ea0ad5458b59e296e24de1a297db8f, "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("get_canonical_decl", method_pointer_bcbc084da82055149baba54ea987fc16, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("get_canonical_decl", method_pointer_305813a063b155a7a6707e1d21774791, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("get_typename_loc", method_pointer_e920441b93f95c1296c967330e37a197, "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("get_using_loc", method_pointer_a40d095cef065ed0b97ffd7166053d4b, "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.staticmethod("classof_kind");
    class_9e44afaac15f57249b2dc948f4ddc4d0.staticmethod("create_deserialized");
    class_9e44afaac15f57249b2dc948f4ddc4d0.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UnresolvedUsingTypenameDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UnresolvedUsingTypenameDecl >, autowig::HeldType< class ::clang::TypeDecl > >();
    }

}