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
    class ::clang::UsingDirectiveDecl  * (*method_pointer_8fc830cce513595a899b6aee34ec62bb)(class ::clang::ASTContext  &, unsigned int ) = ::clang::UsingDirectiveDecl::CreateDeserialized;
    bool  (*method_pointer_219c0a9465105504a0a30ff1c8291f9e)(class ::clang::Decl  const *) = ::clang::UsingDirectiveDecl::classof;
    bool  (*method_pointer_1565cd71b334597bb1aa49dd4c2e6768)(enum ::clang::Decl::Kind ) = ::clang::UsingDirectiveDecl::classofKind;
    class ::clang::DeclContext  const * (::clang::UsingDirectiveDecl::*method_pointer_726a39502b8f545daefec0d80b5009d1)() const = &::clang::UsingDirectiveDecl::getCommonAncestor;
    class ::clang::DeclContext  * (::clang::UsingDirectiveDecl::*method_pointer_3f3f8df81ac656078570bc51605b273a)() = &::clang::UsingDirectiveDecl::getCommonAncestor;
    class ::clang::NamespaceDecl  * (::clang::UsingDirectiveDecl::*method_pointer_bc82b98510ff553788038c722d6e72a6)() = &::clang::UsingDirectiveDecl::getNominatedNamespace;
    class ::clang::NamespaceDecl  const * (::clang::UsingDirectiveDecl::*method_pointer_b4bf7abedcab5d3792171ef097275f4f)() const = &::clang::UsingDirectiveDecl::getNominatedNamespace;
    class ::clang::NamedDecl  * (::clang::UsingDirectiveDecl::*method_pointer_b668177b54695195a0c2415f9490348f)() = &::clang::UsingDirectiveDecl::getNominatedNamespaceAsWritten;
    class ::clang::NamedDecl  const * (::clang::UsingDirectiveDecl::*method_pointer_7c6cc1b5b646572c9a962428609ae965)() const = &::clang::UsingDirectiveDecl::getNominatedNamespaceAsWritten;
    boost::python::class_< class ::clang::UsingDirectiveDecl, autowig::HeldType< class ::clang::UsingDirectiveDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_fcccd64b80075599a0a8ea554051b540("UsingDirectiveDecl", "", boost::python::no_init);
    class_fcccd64b80075599a0a8ea554051b540.def("create_deserialized", method_pointer_8fc830cce513595a899b6aee34ec62bb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("classof", method_pointer_219c0a9465105504a0a30ff1c8291f9e, "");
    class_fcccd64b80075599a0a8ea554051b540.def("classof_kind", method_pointer_1565cd71b334597bb1aa49dd4c2e6768, "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_common_ancestor", method_pointer_726a39502b8f545daefec0d80b5009d1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_common_ancestor", method_pointer_3f3f8df81ac656078570bc51605b273a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace", method_pointer_bc82b98510ff553788038c722d6e72a6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace", method_pointer_b4bf7abedcab5d3792171ef097275f4f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace_as_written", method_pointer_b668177b54695195a0c2415f9490348f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.def("get_nominated_namespace_as_written", method_pointer_7c6cc1b5b646572c9a962428609ae965, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fcccd64b80075599a0a8ea554051b540.staticmethod("classof_kind");
    class_fcccd64b80075599a0a8ea554051b540.staticmethod("create_deserialized");
    class_fcccd64b80075599a0a8ea554051b540.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::UsingDirectiveDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::UsingDirectiveDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}