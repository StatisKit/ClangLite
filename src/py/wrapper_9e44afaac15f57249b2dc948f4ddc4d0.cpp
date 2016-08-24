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
    class ::clang::UnresolvedUsingTypenameDecl  * (*method_pointer_f953948ce0065d0a9f6f842bce8715c2)(class ::clang::ASTContext  &, unsigned int ) = ::clang::UnresolvedUsingTypenameDecl::CreateDeserialized;
    bool  (*method_pointer_e5688092625f5a5491fb3205831a7455)(class ::clang::Decl  const *) = ::clang::UnresolvedUsingTypenameDecl::classof;
    bool  (*method_pointer_60f4c690f3635328b43eab829f973b29)(enum ::clang::Decl::Kind ) = ::clang::UnresolvedUsingTypenameDecl::classofKind;
    class ::clang::UnresolvedUsingTypenameDecl  const * (::clang::UnresolvedUsingTypenameDecl::*method_pointer_4438d25ea7bb5f0396c041cc1b435f94)() const = &::clang::UnresolvedUsingTypenameDecl::getCanonicalDecl;
    class ::clang::UnresolvedUsingTypenameDecl  * (::clang::UnresolvedUsingTypenameDecl::*method_pointer_033f3f45007656be821a2144b4d9b976)() = &::clang::UnresolvedUsingTypenameDecl::getCanonicalDecl;
    class ::clang::SourceLocation  (::clang::UnresolvedUsingTypenameDecl::*method_pointer_1b0f6698eb5c5b2fac3c58e8dec42b2d)() const = &::clang::UnresolvedUsingTypenameDecl::getTypenameLoc;
    class ::clang::SourceLocation  (::clang::UnresolvedUsingTypenameDecl::*method_pointer_e3db0ccae07c5b9cbd146765b5f39a9e)() const = &::clang::UnresolvedUsingTypenameDecl::getUsingLoc;
    boost::python::class_< class ::clang::UnresolvedUsingTypenameDecl, autowig::HeldType< class ::clang::UnresolvedUsingTypenameDecl >, boost::python::bases< class ::clang::TypeDecl >, boost::noncopyable > class_9e44afaac15f57249b2dc948f4ddc4d0("UnresolvedUsingTypenameDecl", "", boost::python::no_init);
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("create_deserialized", method_pointer_f953948ce0065d0a9f6f842bce8715c2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("classof", method_pointer_e5688092625f5a5491fb3205831a7455, "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("classof_kind", method_pointer_60f4c690f3635328b43eab829f973b29, "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("get_canonical_decl", method_pointer_4438d25ea7bb5f0396c041cc1b435f94, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("get_canonical_decl", method_pointer_033f3f45007656be821a2144b4d9b976, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("get_typename_loc", method_pointer_1b0f6698eb5c5b2fac3c58e8dec42b2d, "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("get_using_loc", method_pointer_e3db0ccae07c5b9cbd146765b5f39a9e, "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.staticmethod("classof_kind");
    class_9e44afaac15f57249b2dc948f4ddc4d0.staticmethod("create_deserialized");
    class_9e44afaac15f57249b2dc948f4ddc4d0.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UnresolvedUsingTypenameDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UnresolvedUsingTypenameDecl >, autowig::HeldType< class ::clang::TypeDecl > >();
    }

}