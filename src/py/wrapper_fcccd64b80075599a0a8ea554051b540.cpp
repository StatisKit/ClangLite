#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_fcccd64b80075599a0a8ea554051b540()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::NamespaceDecl  * (::clang::UsingDirectiveDecl::*method_pointer_0f46447bcd15552cab1d047b384e5c8c)() = &::clang::UsingDirectiveDecl::getNominatedNamespace;
    class ::clang::UsingDirectiveDecl  * (*method_pointer_09b7a16b21aa58e89e5f5ed9bfd6db3c)(class ::clang::ASTContext  &, unsigned int ) = ::clang::UsingDirectiveDecl::CreateDeserialized;
    class ::clang::NamespaceDecl  const * (::clang::UsingDirectiveDecl::*method_pointer_0f692d1205915c5893a4dab96a065ae1)() const = &::clang::UsingDirectiveDecl::getNominatedNamespace;
    class ::clang::NamedDecl  const * (::clang::UsingDirectiveDecl::*method_pointer_8a0591d4b00b5a5db38c4729dd4606ce)() const = &::clang::UsingDirectiveDecl::getNominatedNamespaceAsWritten;
    class ::clang::NamedDecl  * (::clang::UsingDirectiveDecl::*method_pointer_dfafce9f4bf7593cb7287cc9d0866e46)() = &::clang::UsingDirectiveDecl::getNominatedNamespaceAsWritten;
    class ::clang::DeclContext  * (::clang::UsingDirectiveDecl::*method_pointer_f0281af50ca554d5a59661a68bd9ff7c)() = &::clang::UsingDirectiveDecl::getCommonAncestor;
    bool  (*method_pointer_2746943e98e851558df52c59d9220200)(enum ::clang::Decl::Kind ) = ::clang::UsingDirectiveDecl::classofKind;
    class ::clang::DeclContext  const * (::clang::UsingDirectiveDecl::*method_pointer_2d93024542a75fe9ba3879370540d820)() const = &::clang::UsingDirectiveDecl::getCommonAncestor;
    bool  (*method_pointer_ad0fccb82ff65f61987f5a49c93790f0)(class ::clang::Decl  const *) = ::clang::UsingDirectiveDecl::classof;
    boost::python::class_< class ::clang::UsingDirectiveDecl, autowig::HeldType< class ::clang::UsingDirectiveDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_fcccd64b80075599a0a8ea554051b540("UsingDirectiveDecl", "", boost::python::no_init);
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace", method_pointer_0f46447bcd15552cab1d047b384e5c8c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("create_deserialized", method_pointer_09b7a16b21aa58e89e5f5ed9bfd6db3c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace", method_pointer_0f692d1205915c5893a4dab96a065ae1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace_as_written", method_pointer_8a0591d4b00b5a5db38c4729dd4606ce, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace_as_written", method_pointer_dfafce9f4bf7593cb7287cc9d0866e46, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_common_ancestor", method_pointer_f0281af50ca554d5a59661a68bd9ff7c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("classof_kind", method_pointer_2746943e98e851558df52c59d9220200, "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_common_ancestor", method_pointer_2d93024542a75fe9ba3879370540d820, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("classof", method_pointer_ad0fccb82ff65f61987f5a49c93790f0, "");
    class_fcccd64b80075599a0a8ea554051b540.staticmethod("classof_kind");
    class_fcccd64b80075599a0a8ea554051b540.staticmethod("create_deserialized");
    class_fcccd64b80075599a0a8ea554051b540.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UsingDirectiveDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UsingDirectiveDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}