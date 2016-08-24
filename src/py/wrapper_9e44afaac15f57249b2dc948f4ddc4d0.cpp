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
    class ::clang::UnresolvedUsingTypenameDecl  * (*method_pointer_25c29c70757557688be56373335d0f40)(class ::clang::ASTContext  &, unsigned int ) = ::clang::UnresolvedUsingTypenameDecl::CreateDeserialized;
    bool  (*method_pointer_a3aa1327dfea5428ba330c3d05f13cad)(class ::clang::Decl  const *) = ::clang::UnresolvedUsingTypenameDecl::classof;
    bool  (*method_pointer_8f2b8f0f955e522290ebf2de4bd5ed45)(enum ::clang::Decl::Kind ) = ::clang::UnresolvedUsingTypenameDecl::classofKind;
    class ::clang::UnresolvedUsingTypenameDecl  const * (::clang::UnresolvedUsingTypenameDecl::*method_pointer_3dfba70acbb050a68b69f2170a280ade)() const = &::clang::UnresolvedUsingTypenameDecl::getCanonicalDecl;
    class ::clang::UnresolvedUsingTypenameDecl  * (::clang::UnresolvedUsingTypenameDecl::*method_pointer_a3016f0a4c415bc891754af0fa3690c3)() = &::clang::UnresolvedUsingTypenameDecl::getCanonicalDecl;
    class ::clang::SourceLocation  (::clang::UnresolvedUsingTypenameDecl::*method_pointer_180c845deae6557685dd55e7dcadf03c)() const = &::clang::UnresolvedUsingTypenameDecl::getTypenameLoc;
    class ::clang::SourceLocation  (::clang::UnresolvedUsingTypenameDecl::*method_pointer_0c2b4fa1572e5f20bb864536aa865e76)() const = &::clang::UnresolvedUsingTypenameDecl::getUsingLoc;
    boost::python::class_< class ::clang::UnresolvedUsingTypenameDecl, autowig::HeldType< class ::clang::UnresolvedUsingTypenameDecl >, boost::python::bases< class ::clang::TypeDecl >, boost::noncopyable > class_9e44afaac15f57249b2dc948f4ddc4d0("UnresolvedUsingTypenameDecl", "", boost::python::no_init);
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("create_deserialized", method_pointer_25c29c70757557688be56373335d0f40, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("classof", method_pointer_a3aa1327dfea5428ba330c3d05f13cad, "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("classof_kind", method_pointer_8f2b8f0f955e522290ebf2de4bd5ed45, "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("get_canonical_decl", method_pointer_3dfba70acbb050a68b69f2170a280ade, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("get_canonical_decl", method_pointer_a3016f0a4c415bc891754af0fa3690c3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("get_typename_loc", method_pointer_180c845deae6557685dd55e7dcadf03c, "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.def("get_using_loc", method_pointer_0c2b4fa1572e5f20bb864536aa865e76, "");
    class_9e44afaac15f57249b2dc948f4ddc4d0.staticmethod("classof_kind");
    class_9e44afaac15f57249b2dc948f4ddc4d0.staticmethod("create_deserialized");
    class_9e44afaac15f57249b2dc948f4ddc4d0.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UnresolvedUsingTypenameDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UnresolvedUsingTypenameDecl >, autowig::HeldType< class ::clang::TypeDecl > >();
    }

}