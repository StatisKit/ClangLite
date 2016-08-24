#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_fcccd64b80075599a0a8ea554051b540()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::UsingDirectiveDecl  * (*method_pointer_bf0518b2aa825892a8877b26ce9b3d2d)(class ::clang::ASTContext  &, unsigned int ) = ::clang::UsingDirectiveDecl::CreateDeserialized;
    bool  (*method_pointer_71654aafd97b5364913d8c17ddd10bb5)(class ::clang::Decl  const *) = ::clang::UsingDirectiveDecl::classof;
    bool  (*method_pointer_5bcb1acb49f95e81b2f9627d65daed37)(enum ::clang::Decl::Kind ) = ::clang::UsingDirectiveDecl::classofKind;
    class ::clang::DeclContext  * (::clang::UsingDirectiveDecl::*method_pointer_17de51c29a2a55d5a4366f1438a21b95)() = &::clang::UsingDirectiveDecl::getCommonAncestor;
    class ::clang::DeclContext  const * (::clang::UsingDirectiveDecl::*method_pointer_69e1267001835a7b99c368f8032004cc)() const = &::clang::UsingDirectiveDecl::getCommonAncestor;
    class ::clang::SourceLocation  (::clang::UsingDirectiveDecl::*method_pointer_69734575da4650d9ad770c389f32dbdf)() const = &::clang::UsingDirectiveDecl::getIdentLocation;
    class ::clang::SourceLocation  (::clang::UsingDirectiveDecl::*method_pointer_cbf359fee5025b868b185857d62ca938)() const = &::clang::UsingDirectiveDecl::getNamespaceKeyLocation;
    class ::clang::NamespaceDecl  const * (::clang::UsingDirectiveDecl::*method_pointer_77d2b2c591665681a2b1b3b623978511)() const = &::clang::UsingDirectiveDecl::getNominatedNamespace;
    class ::clang::NamespaceDecl  * (::clang::UsingDirectiveDecl::*method_pointer_6c4ff1ff8e7756828af5d625b160bf85)() = &::clang::UsingDirectiveDecl::getNominatedNamespace;
    class ::clang::NamedDecl  * (::clang::UsingDirectiveDecl::*method_pointer_cce094f4f2705b32a2a1092dc54ce9f6)() = &::clang::UsingDirectiveDecl::getNominatedNamespaceAsWritten;
    class ::clang::NamedDecl  const * (::clang::UsingDirectiveDecl::*method_pointer_8da8791024cb50cca9e041402c3118ab)() const = &::clang::UsingDirectiveDecl::getNominatedNamespaceAsWritten;
    class ::clang::SourceLocation  (::clang::UsingDirectiveDecl::*method_pointer_22af5786f9695a08a3a36fd202ff6337)() const = &::clang::UsingDirectiveDecl::getUsingLoc;
    boost::python::class_< class ::clang::UsingDirectiveDecl, autowig::HeldType< class ::clang::UsingDirectiveDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_fcccd64b80075599a0a8ea554051b540("UsingDirectiveDecl", "", boost::python::no_init);
    class_fcccd64b80075599a0a8ea554051b540.def("create_deserialized", method_pointer_bf0518b2aa825892a8877b26ce9b3d2d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("classof", method_pointer_71654aafd97b5364913d8c17ddd10bb5, "");
    class_fcccd64b80075599a0a8ea554051b540.def("classof_kind", method_pointer_5bcb1acb49f95e81b2f9627d65daed37, "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_common_ancestor", method_pointer_17de51c29a2a55d5a4366f1438a21b95, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_common_ancestor", method_pointer_69e1267001835a7b99c368f8032004cc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_ident_location", method_pointer_69734575da4650d9ad770c389f32dbdf, "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_namespace_key_location", method_pointer_cbf359fee5025b868b185857d62ca938, "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace", method_pointer_77d2b2c591665681a2b1b3b623978511, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace", method_pointer_6c4ff1ff8e7756828af5d625b160bf85, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace_as_written", method_pointer_cce094f4f2705b32a2a1092dc54ce9f6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace_as_written", method_pointer_8da8791024cb50cca9e041402c3118ab, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_using_loc", method_pointer_22af5786f9695a08a3a36fd202ff6337, "");
    class_fcccd64b80075599a0a8ea554051b540.staticmethod("classof_kind");
    class_fcccd64b80075599a0a8ea554051b540.staticmethod("create_deserialized");
    class_fcccd64b80075599a0a8ea554051b540.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UsingDirectiveDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UsingDirectiveDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}