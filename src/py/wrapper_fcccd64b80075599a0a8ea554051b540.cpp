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
    class ::clang::UsingDirectiveDecl  * (*method_pointer_1b01667a6e395e06bbd3d56288b44ee1)(class ::clang::ASTContext  &, unsigned int ) = ::clang::UsingDirectiveDecl::CreateDeserialized;
    bool  (*method_pointer_c3da6b637eef5f9fb27357551d48cd62)(class ::clang::Decl  const *) = ::clang::UsingDirectiveDecl::classof;
    bool  (*method_pointer_37d70d578af25ad9a988f11259fa832d)(enum ::clang::Decl::Kind ) = ::clang::UsingDirectiveDecl::classofKind;
    class ::clang::DeclContext  const * (::clang::UsingDirectiveDecl::*method_pointer_324ea8ba318d54f7b97e7445c5fc26fc)() const = &::clang::UsingDirectiveDecl::getCommonAncestor;
    class ::clang::DeclContext  * (::clang::UsingDirectiveDecl::*method_pointer_26e8cb623249508f8aa668ccdb07ac0e)() = &::clang::UsingDirectiveDecl::getCommonAncestor;
    class ::clang::SourceLocation  (::clang::UsingDirectiveDecl::*method_pointer_02d0a0de4d985423adcad53e7ae7c4ba)() const = &::clang::UsingDirectiveDecl::getIdentLocation;
    class ::clang::SourceLocation  (::clang::UsingDirectiveDecl::*method_pointer_9c41486742675a93962dc7a7bc7d7787)() const = &::clang::UsingDirectiveDecl::getNamespaceKeyLocation;
    class ::clang::NamespaceDecl  const * (::clang::UsingDirectiveDecl::*method_pointer_872ee142e9905b49aaeaf117dbb8c87f)() const = &::clang::UsingDirectiveDecl::getNominatedNamespace;
    class ::clang::NamespaceDecl  * (::clang::UsingDirectiveDecl::*method_pointer_b04b4ea51acc5547a08bc8107d241dae)() = &::clang::UsingDirectiveDecl::getNominatedNamespace;
    class ::clang::NamedDecl  * (::clang::UsingDirectiveDecl::*method_pointer_4ce098f88f82561d985b0e607271a889)() = &::clang::UsingDirectiveDecl::getNominatedNamespaceAsWritten;
    class ::clang::NamedDecl  const * (::clang::UsingDirectiveDecl::*method_pointer_0a8302ffbed05d049800fb06cf1ea5b5)() const = &::clang::UsingDirectiveDecl::getNominatedNamespaceAsWritten;
    class ::clang::SourceLocation  (::clang::UsingDirectiveDecl::*method_pointer_c0d5fed6da245031b1ccae34b92718cd)() const = &::clang::UsingDirectiveDecl::getUsingLoc;
    boost::python::class_< class ::clang::UsingDirectiveDecl, autowig::HeldType< class ::clang::UsingDirectiveDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_fcccd64b80075599a0a8ea554051b540("UsingDirectiveDecl", "", boost::python::no_init);
    class_fcccd64b80075599a0a8ea554051b540.def("create_deserialized", method_pointer_1b01667a6e395e06bbd3d56288b44ee1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("classof", method_pointer_c3da6b637eef5f9fb27357551d48cd62, "");
    class_fcccd64b80075599a0a8ea554051b540.def("classof_kind", method_pointer_37d70d578af25ad9a988f11259fa832d, "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_common_ancestor", method_pointer_324ea8ba318d54f7b97e7445c5fc26fc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_common_ancestor", method_pointer_26e8cb623249508f8aa668ccdb07ac0e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_ident_location", method_pointer_02d0a0de4d985423adcad53e7ae7c4ba, "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_namespace_key_location", method_pointer_9c41486742675a93962dc7a7bc7d7787, "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace", method_pointer_872ee142e9905b49aaeaf117dbb8c87f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace", method_pointer_b04b4ea51acc5547a08bc8107d241dae, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace_as_written", method_pointer_4ce098f88f82561d985b0e607271a889, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace_as_written", method_pointer_0a8302ffbed05d049800fb06cf1ea5b5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_using_loc", method_pointer_c0d5fed6da245031b1ccae34b92718cd, "");
    class_fcccd64b80075599a0a8ea554051b540.staticmethod("classof_kind");
    class_fcccd64b80075599a0a8ea554051b540.staticmethod("create_deserialized");
    class_fcccd64b80075599a0a8ea554051b540.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UsingDirectiveDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UsingDirectiveDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}