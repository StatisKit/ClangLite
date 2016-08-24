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
    class ::clang::UsingDirectiveDecl  * (*method_pointer_c5c5e95143c5532fae130f23db4115e1)(class ::clang::ASTContext  &, unsigned int ) = ::clang::UsingDirectiveDecl::CreateDeserialized;
    bool  (*method_pointer_a6f1abc856ec5d9883d2e06b9f88a209)(class ::clang::Decl  const *) = ::clang::UsingDirectiveDecl::classof;
    bool  (*method_pointer_e624c42859135acf97176e53bd11fd98)(enum ::clang::Decl::Kind ) = ::clang::UsingDirectiveDecl::classofKind;
    class ::clang::DeclContext  * (::clang::UsingDirectiveDecl::*method_pointer_e7dac6f70b335626b85ab3488151433e)() = &::clang::UsingDirectiveDecl::getCommonAncestor;
    class ::clang::DeclContext  const * (::clang::UsingDirectiveDecl::*method_pointer_c2021b32558e5cb99bc0c1997781731e)() const = &::clang::UsingDirectiveDecl::getCommonAncestor;
    class ::clang::SourceLocation  (::clang::UsingDirectiveDecl::*method_pointer_91153747c75450fea187c08b5a55f693)() const = &::clang::UsingDirectiveDecl::getIdentLocation;
    class ::clang::SourceLocation  (::clang::UsingDirectiveDecl::*method_pointer_44d2bbee269556378a79f2b64cc993b3)() const = &::clang::UsingDirectiveDecl::getNamespaceKeyLocation;
    class ::clang::NamespaceDecl  * (::clang::UsingDirectiveDecl::*method_pointer_02208806a7ee503ea2e003584906989f)() = &::clang::UsingDirectiveDecl::getNominatedNamespace;
    class ::clang::NamespaceDecl  const * (::clang::UsingDirectiveDecl::*method_pointer_0d526e33ac3f5bdfab45968fac40209b)() const = &::clang::UsingDirectiveDecl::getNominatedNamespace;
    class ::clang::NamedDecl  * (::clang::UsingDirectiveDecl::*method_pointer_69743f8cfc5151e69954eb162a9623ad)() = &::clang::UsingDirectiveDecl::getNominatedNamespaceAsWritten;
    class ::clang::NamedDecl  const * (::clang::UsingDirectiveDecl::*method_pointer_bec48aa8c7285cbe8f3d8a8997bc4b94)() const = &::clang::UsingDirectiveDecl::getNominatedNamespaceAsWritten;
    class ::clang::SourceLocation  (::clang::UsingDirectiveDecl::*method_pointer_d356aa0d4b3f547e860c9392ccb871b9)() const = &::clang::UsingDirectiveDecl::getUsingLoc;
    boost::python::class_< class ::clang::UsingDirectiveDecl, autowig::HeldType< class ::clang::UsingDirectiveDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_fcccd64b80075599a0a8ea554051b540("UsingDirectiveDecl", "", boost::python::no_init);
    class_fcccd64b80075599a0a8ea554051b540.def("create_deserialized", method_pointer_c5c5e95143c5532fae130f23db4115e1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("classof", method_pointer_a6f1abc856ec5d9883d2e06b9f88a209, "");
    class_fcccd64b80075599a0a8ea554051b540.def("classof_kind", method_pointer_e624c42859135acf97176e53bd11fd98, "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_common_ancestor", method_pointer_e7dac6f70b335626b85ab3488151433e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_common_ancestor", method_pointer_c2021b32558e5cb99bc0c1997781731e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_ident_location", method_pointer_91153747c75450fea187c08b5a55f693, "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_namespace_key_location", method_pointer_44d2bbee269556378a79f2b64cc993b3, "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace", method_pointer_02208806a7ee503ea2e003584906989f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace", method_pointer_0d526e33ac3f5bdfab45968fac40209b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace_as_written", method_pointer_69743f8cfc5151e69954eb162a9623ad, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace_as_written", method_pointer_bec48aa8c7285cbe8f3d8a8997bc4b94, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_using_loc", method_pointer_d356aa0d4b3f547e860c9392ccb871b9, "");
    class_fcccd64b80075599a0a8ea554051b540.staticmethod("classof_kind");
    class_fcccd64b80075599a0a8ea554051b540.staticmethod("create_deserialized");
    class_fcccd64b80075599a0a8ea554051b540.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UsingDirectiveDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UsingDirectiveDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}